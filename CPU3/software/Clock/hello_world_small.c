#include <stdio.h>
#include <system.h>
#include <sys/alt_irq.h>
#include <altera_avalon_timer_regs.h>

#define NUM_COUNT 10


void init_timer_interrupt ( void );
static void timer_isr(void * context, alt_u32 id);

int main()
{ 
  init_timer_interrupt();
  /* Event loop never exits. */
  while (1){}

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
    // Inicializa el mapeo de números
	nm->mapping[0] = 64;
    nm->mapping[1] = 79;
    nm->mapping[2] = 36;
    nm->mapping[3] = 48;
    nm->mapping[4] = 25;
    nm->mapping[5] = 18;
    nm->mapping[6] = 2;
    nm->mapping[7] = 15;
    nm->mapping[8] = 0;
    nm->mapping[9] = 16;

}

//function timer

static void timer_isr(void * context, alt_u32 id){

	// Registros de hardware para los displays
	    volatile unsigned long *seg1 = (volatile unsigned long *) 0x3190; // Display de minutos (unidad)
	    volatile unsigned long *seg2 = (volatile unsigned long *) 0x3180; // Display de minutos (decena)
	    volatile unsigned long *seg3 = (volatile unsigned long *) 0x3170; // Display de horas (unidad)
	    volatile unsigned long *seg4 = (volatile unsigned long *) 0x31a0; // Display de horas (decena)

	    static int seconds = 0;
	        static int minutes = 0;
	        static int hours = 0;
	        static NumberMapping nm;

	        // Inicializa el mapeo si es la primera llamada a la ISR
	        if (seconds == 0 && minutes == 0 && hours == 0) {
	            initializeMapping(&nm);
	        }

	        // Limpia la interrupción del temporizador
	        IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0);

	        // Incrementa los segundos
	        seconds++;
	        if (seconds >= 60) {
	            seconds = 0;
	            minutes++;
	            if (minutes >= 60) {
	                minutes = 0;
	                hours++;
	                if (hours >= 24) {
	                    hours = 0; // Reinicia las horas si llega a 24
	                }
	            }
	        }

	    // Actualiza los displays
	    *seg1 = nm.mapping[minutes % 10];    // Unidad de minutos
	    *seg2 = nm.mapping[minutes / 10];    // Decena de minutos
	    *seg3 = nm.mapping[hours % 10];      // Unidad de horas
	    *seg4 = nm.mapping[hours / 10];      // Decena de horas


}


//funtion set hours
static alt_u8 set_button_hours() {
    alt_u8 button_status = 0;
    button_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_BUTTON_HOURS_BASE);
    return button_status;
}


//funtion set minutes
static alt_u8 set_button_minutes() {
	alt_u8 button_status = 0;
	button_status = IORD_ALTERA_AVALON_PIO_DATA(PIO_BUTTON_MINUTES_BASE);
	return button_status;
}



