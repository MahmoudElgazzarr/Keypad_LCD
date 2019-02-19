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
#include "Keypad.h"
#include "avr/delay.h"
#include "LCD.h"
#include "LCD_Cfg.h"

int main(void)
{
    /* Replace with your application code */
	BCDSevegments_Init();
	Keypad_init();
	LCD_init();
	uint8 strr[] = {'E' , 'L' , 'G' , 'A' , 'Z' , 'Z' , 'A','R' , '\0'};
		LCD_displayString(strr);
		
    while (1) 
    {
	
		uint8 key = Keypad_getPressedKey();
		if (key == 1)
		{
			_delay_ms(50);
			BCDSevegments_enable(ONE);
			BCDSevegments_enable(TWO);
			BCDSevegments_enable(THREE);
			BCDSevegments_enable(FOUR);
			/*display one*/
			BCDSevegments_displayNo(ONE);
			_delay_ms(50);
			LCD_displayString(strr[key]);
		}
		if(key == 2)
		{
		_delay_ms(50);
		BCDSevegments_enable(ONE);
		BCDSevegments_enable(TWO);
		BCDSevegments_enable(THREE);
		BCDSevegments_enable(FOUR);
		BCDSevegments_displayNo(TWO);
		_delay_ms(50);
		LCD_displayString(strr[key]);
		}
		if(key == 3)
		{
			_delay_ms(50);
			BCDSevegments_enable(ONE);
			BCDSevegments_enable(TWO);
			BCDSevegments_enable(THREE);
			BCDSevegments_enable(FOUR);
			BCDSevegments_displayNo(THREE);
			_delay_ms(50);
			LCD_displayString(strr[key]);
		}
		if(key == 4)
		{
		_delay_ms(50);
		BCDSevegments_enable(ONE);
		BCDSevegments_enable(TWO);
		BCDSevegments_enable(THREE);
		BCDSevegments_enable(FOUR);
		BCDSevegments_displayNo(FOUR);
		_delay_ms(50);
		LCD_displayString(strr[key]);
		}
		if(key == 5)
		{
			_delay_ms(50);
			BCDSevegments_enable(ONE);
			BCDSevegments_enable(TWO);
			BCDSevegments_enable(THREE);
			BCDSevegments_enable(FOUR);
			BCDSevegments_displayNo(FIVE);
			_delay_ms(50);
			LCD_displayString(strr[key]);
		}
			if(key == 6)
			{
				_delay_ms(50);
				BCDSevegments_enable(ONE);
				BCDSevegments_enable(TWO);
				BCDSevegments_enable(THREE);
				BCDSevegments_enable(FOUR);
				BCDSevegments_displayNo(SIX);
				_delay_ms(50);
				LCD_displayString(strr[key]);
			}
			if(key == 7)
			{
				_delay_ms(50);
				BCDSevegments_enable(ONE);
				BCDSevegments_enable(TWO);
				BCDSevegments_enable(THREE);
				BCDSevegments_enable(FOUR);
				BCDSevegments_displayNo(SEVEN);
				_delay_ms(50);
				LCD_displayString(strr[key]);
			}
			if(key == 8)
			{
				_delay_ms(50);
				BCDSevegments_enable(ONE);
				BCDSevegments_enable(TWO);
				BCDSevegments_enable(THREE);
				BCDSevegments_enable(FOUR);
				BCDSevegments_displayNo(EIGHT);
				_delay_ms(50);
				LCD_displayString(strr[key]);
			}
			if(key == 9)
			{
				_delay_ms(50);
				BCDSevegments_enable(ONE);
				BCDSevegments_enable(TWO);
				BCDSevegments_enable(THREE);
				BCDSevegments_enable(FOUR);
				BCDSevegments_displayNo(NINE);
				_delay_ms(50);
				LCD_displayString(strr[key]);
			}
		_delay_ms(1000);
    }
	
}

