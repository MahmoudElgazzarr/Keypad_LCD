/*
 * main.c
 *
 * Created: 2/20/2019 6:29:09 PM
 *  Author: AVE-LAP-016
 */ 
/*
 * Avelabs_Project.c
 *
 * Created: 2/13/2019 10:53:23 AM
 * Author : AVE-LAP-016
 */ 

#include "types.h"
#include "BitwiseOperation.h"
#include "DIO_Registers.h"
#include "DIO_Registers_Definitions.h"
#include "delay_Timer.h"
#define GO 0
#define STOP 1
#define GET_READY 2


int main(void)
{
	DIO_SetPinDirection(PIN13,OUTPUT);
	DIO_SetPinDirection(PIN14,OUTPUT);
	DIO_SetPinDirection(PIN15,OUTPUT);
	/*Set Pins To LOW*/
	DIO_WritePin(PIN13,LOW);
	DIO_WritePin(PIN14,LOW);
	DIO_WritePin(PIN15,LOW);
	timer_init();
	while (1)
	{
		switch (Sec%3)
		{
			case GO :
			   DIO_WritePin(PIN13,HIGH);
			   DIO_WritePin(PIN15,LOW);
			   DIO_WritePin(PIN14,LOW);
			   break;
			case STOP :
			   DIO_WritePin(PIN13,LOW);
			   DIO_WritePin(PIN15,HIGH);
			   DIO_WritePin(PIN14,LOW);
			   break;
			case GET_READY :
			   DIO_WritePin(PIN13,LOW);
			   DIO_WritePin(PIN15,LOW);
			   DIO_WritePin(PIN14,HIGH);
			   break;
			
		}
		
	}
	return 0 ;
}
