/*
 * delay_Timer.c
 *
 * Created: 2/14/2019 10:06:23 AM
 *  Author: AVE-LAP-040
 */ 

#include "Types.h"
#include "delay_Timer.h"


void timer_init(void)
{
		/*Enabling CTC ( Capture Compare ) Mode*/
		TCCR0 &= ~(1<<WGM00);
		TCCR0 |= (1<<WGM01);
		/*Set Bit on Capture Compare*/
		TCCR0 |= (1<<COM00);
		TCCR0 |= (1<<COM01);
		/*Enabling Prescaler 64 */
		TCCR0 |= (1<<CS00);
		TCCR0 |= (1<<CS01);
		TCCR0 &=~ (1<<CS02);
		/*Setting Output Compare Register to 64*/
		OCR0 = 249;
}
void timer_delay(uint32 n)
{
	uint32 i;
	
	for(i=0;i<n;i++)
	{
		/*Wait 1 m sec*/
		while(( (TIFR) & (1<<OCF0)) == 0);
		/*Clear OCF0 Flag*/
		TIFR |= (1<<OCF0);
	}
	
}