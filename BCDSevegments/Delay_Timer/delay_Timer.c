/*
 * delay_Timer.c
 *
 * Created: 2/14/2019 10:06:23 AM
 *  Author: AVE-LAP-040
 */ 

#include "Types.h"
#include "delay_Timer.h"
#include "avr/interrupt.h"

/*Global Setting To Set Timer For 1 MSec on 16 MHZ Crystal*/
volatile uint16 counter = 0 ;
volatile uint8 Sec;

void timer_init(void)
{
	SREG |= (1<<IBIT);
	TIMSK |=(1<<OCIE0);
	TCNT0 = 0 ;
	OCR0 = 249 ;
	/*Prescaler 64*/
	TCCR0 |= (1<<CS00)|(1<<CS01)|(1<<WGM01);
}
ISR(TIMER0_COMP_vect)
{
	counter++ ;
	if (counter == 1000)
	{
		Sec++ ;
		counter = 0 ;
	}
	if(Sec == 253)
	{
		Sec = 0;
	}
}