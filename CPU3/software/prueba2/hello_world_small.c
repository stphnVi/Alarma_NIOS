#include <stdio.h>
#include <system.h>
#include <sys/alt_irq.h>
#include <altera_avalon_timer_regs.h>

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
static void timer_isr(void * context, alt_u32 id){

	volatile unsigned short * led1= (short *) 0x31b0;
	volatile unsigned long * seg1= (short *) 0x3190;
	volatile unsigned long * seg2= (short *) 0x3180;
	volatile unsigned long * seg3= (short *) 0x3170;
	volatile unsigned long * seg4= (short *) 0x31a0;

	static int count = 0;

	//Clear the interrupt
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0);

	if (count%2==0){
			  //*seg1 = 78;
			  *led1=1;
		  }
		  else{
			  //*seg2 = 79;
			  *led1=2;
			  //*seg3 = 80;
			  //*seg4 = 81;
		  }

	count++;

}
