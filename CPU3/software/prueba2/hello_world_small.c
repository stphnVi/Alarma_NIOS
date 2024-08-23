#include <stdio.h>
#include <system.h>
#include <alt_types.h>
#include <sys/alt_stdio.h>
#include <sys/alt_irq.h>
#include <altera_avalon_timer_regs.h>
#include <altera_avalon_pio_regs.h>

#define NUM_COUNT 10
#define PIO_BUTTON_HOURS_BASE 0x3110
#define PIO_BUTTON_MINUTES_BASE 0x3100
#define PIO_SWITCH_CLOCK_BASE 0X3130
#define PIO_SET_ALARM_BASE 0X3140
#define PIO_SWITCH_OFF_BASE 0x3150

void init_timer_interrupt ( void );
static void timer_isr(void * context, alt_u32 id);

int main()
{ 
  init_timer_interrupt();

  /* Event loop never exits. */
  while (1){
	  set_switch_clock();
	  set_button_hours();
	  set_button_minutes();
	  set_alarm();
  }
  return 0;
}

void init_timer_interrupt( void){
	//Register the ISR with HAL
	alt_ic_isr_register(TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID, TIMER_0_IRQ, (void *)timer_isr, NULL, 0x0);

	IOWR_ALTERA_AVALON_TIMER_CONTROL(TIMER_0_BASE, ALTERA_AVALON_TIMER_CONTROL_CONT_MSK
			| ALTERA_AVALON_TIMER_CONTROL_START_MSK
			| ALTERA_AVALON_TIMER_CONTROL_ITO_MSK);
}

typedef struct {
    int mapping[10];
} NumberMapping;

void initializeMapping(NumberMapping *nm) {
    // Inicializa el mapeo de n meros
	nm->mapping[0] = 64;
    nm->mapping[1] = 79;
    nm->mapping[2] = 36;
    nm->mapping[3] = 48;
    nm->mapping[4] = 25;
    nm->mapping[5] = 18;
    nm->mapping[6] = 2;
    nm->mapping[7] = 120;
    nm->mapping[8] = 0;
    nm->mapping[9] = 16;
}
//function timer

alt_u8 config_mode = 0;
alt_u8 set_min = 0;
alt_u8 set_h = 0;
alt_u8 alarm = 0;
alt_u8 off = 0;

int alarm_dect = 0;
int change_min=0;
int change_hours=0;
int current_h=0;
int current_m=0;
int alarm_h = 0;
int alarm_m = 0;

static void timer_isr(void * context, alt_u32 id){

	// Registros de hardware para los displays
	    volatile unsigned long *seg1 = (volatile unsigned long *) 0x3190; // Display de minutos (unidad)
	    volatile unsigned long *seg2 = (volatile unsigned long *) 0x3180; // Display de minutos (decena)
	    volatile unsigned long *seg3 = (volatile unsigned long *) 0x3170; // Display de horas (unidad)
	    volatile unsigned long *seg4 = (volatile unsigned long *) 0x31a0; // Display de horas (decena)
	    volatile unsigned long *led1 = (volatile unsigned long *) 0x31b0; // Display de horas (decena)

	    	static int seconds = 0;
	        static int minutes = 0;
	        static int hours = 0;
	        static NumberMapping nm;

	        // Inicializa el mapeo si es la primera llamada a la ISR
	        if (seconds == 0 && minutes == 0 && hours == 0) {
	            initializeMapping(&nm);
	        }

	        // Limpia la interrupci n del temporizador
	        IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0);


	        // Verifica si el reloj est  en modo de configuraci n
	        if (config_mode == 1) {

	            if (set_h == 0) {

	            	if(hours < 23){
	            		hours++;
	            	}else{
	            		hours = 0;
	            	}
	            }
	            if (set_min == 0) {
	            	if(minutes < 59){
	            	minutes++;
	            	}else{
	            		minutes = 0;
	            	}
	            }

	            current_h = hours;
				current_m = minutes;

	            *seg1 = nm.mapping[minutes % 10];    // Unidad de minutos
	            *seg2 = nm.mapping[minutes / 10];    // Decena de minutos
	            *seg3 = nm.mapping[hours % 10];      // Unidad de horas
	            *seg4 = nm.mapping[hours / 10];      // Decena de horas

	        } else {
	            // Incrementa los segundos
	            seconds++;
	            if (seconds > 60) {
	                seconds = 0;
	                minutes++;
	                if (minutes > 60) {
	                    minutes = 0;
	                    hours++;
	                    if (hours > 24) {
	                        hours = 0; // Reinicia las horas si llega a 24
	                    }
	                }
	            }
	            // Actualiza los displays con el tiempo actual
	            *seg1 = nm.mapping[minutes % 10];    // Unidad de minutos
	            *seg2 = nm.mapping[minutes / 10];    // Decena de minutos
	            *seg3 = nm.mapping[hours % 10];      // Unidad de horas
	            *seg4 = nm.mapping[hours / 10];      // Decena de horas

	            current_h = hours;
	            current_m = minutes;
	            // Lee el switch para entrar en modo de configuraci n
	            if (config_mode == 1) {
	                config_mode = 1; // Entrar en modo de configuraci n
	            }
	        }
	    }


static void set_alarm(){

	int minutes;
	int hours;

	if (alarm == 1) {
		if (set_h == 0) {
			if(hours < 23){
				hours++;
			}else{
				hours = 0;
			}
		}
		if (set_min == 0) {
			if(minutes < 59){
				minutes++;
			}else{
				minutes = 0;
			}
		}
		alarm_h = hours;
		alarm_m= minutes;

        // Actualiza los displays con el tiempo actual
        *seg1 = nm.mapping[minutes % 10];    // Unidad de minutos
        *seg2 = nm.mapping[minutes / 10];    // Decena de minutos
        *seg3 = nm.mapping[hours % 10];      // Unidad de horas
        *seg4 = nm.mapping[hours / 10];      // Decena de horas
	}else{
		// Actualiza los displays con el tiempo actual
		*seg1 = nm.mapping[current_m % 10];    // Unidad de minutos
		*seg2 = nm.mapping[current_m / 10];    // Decena de minutos
		*seg3 = nm.mapping[current_h % 10];      // Unidad de horas
		*seg4 = nm.mapping[current_h / 10];      // Decena de horas
	}
}

void set_button_hours() {
    alt_u8 button_status = 0;
    button_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_BUTTON_HOURS_BASE) & 0x01;
    set_h=button_status;
}

void set_button_minutes() {
    alt_u8 button_status = 0;
    button_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_BUTTON_MINUTES_BASE) & 0x01;
    set_min=button_status;
}

void set_switch_clock(){
	alt_u8 switch_status = 0;
 	switch_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_SWITCH_CLOCK_BASE) & 0x01;
 	IOWR_ALTERA_AVALON_PIO_DATA(PIO_LEDS_0_BASE, ~switch_status);
 	config_mode = switch_status;
}

void set_switch_alarm(){
	alt_u8 switch_status = 0;
 	switch_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_SET_ALARM_BASE) & 0x01;
 	IOWR_ALTERA_AVALON_PIO_DATA(PIO_LEDS_0_BASE, ~switch_status);
 	alarm = switch_status;
}

void off_alarm(){
	alt_u8 switch_status = 0;
 	switch_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_SWITCH_OFF_BASE) & 0x01;
 	IOWR_ALTERA_AVALON_PIO_DATA(PIO_LEDS_0_BASE, ~switch_status);
 	off = switch_status;
}

