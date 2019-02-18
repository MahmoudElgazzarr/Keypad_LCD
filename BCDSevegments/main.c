/*
 * BCDSevegments.c
 *
 * Created: 2/18/2019 12:49:15 PM
 * Author : AVE-LAP-040
 */ 
#define  F_CPU 1000000UL
//#include <avr/io.h>
#include "Types.h"
#include "delay_Timer.h"
#include "BCDSevegments.h"
#include "avr/delay.h"


int main(void)
{
    /* Replace with your application code */
	BCDSevegments_Init();
    while (1) 
    {
		_delay_ms(50);
		BCDSevegments_enable(ONE);
		BCDSevegments_disable(TWO);
		BCDSevegments_disable(THREE);
		BCDSevegments_disable(FOUR);
		BCDSevegments_displayNo(THREE);
		_delay_ms(50);
		BCDSevegments_disable(ONE);
		BCDSevegments_enable(TWO);
		BCDSevegments_disable(THREE);
		BCDSevegments_disable(FOUR);
		BCDSevegments_displayNo(NINE);
		_delay_ms(50);
		BCDSevegments_disable(ONE);
		BCDSevegments_disable(TWO);
		BCDSevegments_enable(THREE);
		BCDSevegments_disable(FOUR);
		BCDSevegments_displayNo(NINE);
		_delay_ms(50);
		BCDSevegments_disable(ONE);
		BCDSevegments_disable(TWO);
		BCDSevegments_disable(THREE);
		BCDSevegments_enable(FOUR);
		BCDSevegments_displayNo(ONE);
		_delay_ms(50);
		
    }
}

