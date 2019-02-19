/*
 * LCD.c
 *
 * Created: 2/19/2019 11:49:36 AM
 *  Author: AVE-LAP-040
 */ 
#include "LCD.h"
#include "LCD_Cfg.h"
#include "Types.h"
#include "DIO_Registers.h"
#include "DIO_Registers_Definitions.h"
#include "avr/delay.h"

void LCD_init()
{
	//#ifdef Bit_Mode4
	
	/*Data PINS*/
	DIO_SetPinDirection(LCD_D4 , OUTPUT);
	DIO_SetPinDirection(LCD_D5 , OUTPUT);
	DIO_SetPinDirection(LCD_D6 , OUTPUT);
	DIO_SetPinDirection(LCD_D7 , OUTPUT);
	/*Command Pins*/
	DIO_SetPinDirection(LCD_RS , OUTPUT);
	DIO_SetPinDirection(LCD_RW , OUTPUT);
	DIO_SetPinDirection(LCD_ENABLE , OUTPUT);
	
	LCD_sendCommand(0x33);
	LCD_sendCommand(0x32);
	/*Send Command To Set 4-Bit Mode*/
	LCD_sendCommand(Function_Set_4Bit);
	/*Turn On Cyrser */
	LCD_sendCommand(Cyrser_On);
	/*Clear Display*/
	LCD_sendCommand(Clear_Command);
	/**/
	LCD_sendCommand(0x06);
	
	
	//#endif
	/*
	#if Bit_Mode8
	
	/ *Data Pins* /
	DIO_SetPinDirection(LCD_D0 , OUTPUT);
	DIO_SetPinDirection(LCD_D1 , OUTPUT);
	DIO_SetPinDirection(LCD_D2 , OUTPUT);
	DIO_SetPinDirection(LCD_D3 , OUTPUT);
	
	DIO_SetPinDirection(LCD_D4 , OUTPUT);
	DIO_SetPinDirection(LCD_D5 , OUTPUT);
	DIO_SetPinDirection(LCD_D6 , OUTPUT);
	DIO_SetPinDirection(LCD_D7 , OUTPUT);
	
	/ *Command Pins* /
	DIO_SetPinDirection(LCD_RS , OUTPUT);
	DIO_SetPinDirection(LCD_RW , OUTPUT);
	//DIO_SetPinDirection(LCD_ENABLE , OUTPUT);
	
	
	#endif
	*/
	
}
void LCD_sendCommand(uint8 Cmd)
{
	/*RS == 0 For Command Register*/
	DIO_WritePin(LCD_RS,LOW);
	/*R/W == 0 For Writing */
	DIO_WritePin(LCD_RW , LOW);
	
	/*LCD Enable Pin LOW For Latching*/
	DIO_WritePin(LCD_ENABLE,LOW);
	
	/* Send Command Sequance */
	LCD_PORT = ( LCD_PORT & Mask_First_4Bits ) | ( Cmd & Mask_Last_4Bits );
	 
	/*Latching Sequance*/
	DIO_WritePin(LCD_ENABLE,HIGH);
	_delay_ms(2);
	/*LOW For Enable to Latch*/
	DIO_WritePin(LCD_ENABLE,LOW);
	
	
	/*LCD Enable Pin LOW For Latching*/
	DIO_WritePin(LCD_ENABLE,LOW);
	/*Send Command*/
	LCD_PORT = ( LCD_PORT & Mask_First_4Bits ) | ( Cmd << Number_Four ); 
	
	/*Latching Sequance*/
	DIO_WritePin(LCD_ENABLE,HIGH);
	_delay_ms(2);
	/*LOW For Enable to Latch*/
	DIO_WritePin(LCD_ENABLE,LOW);
	_delay_ms(2);
}

void LCD_displayChar(uint8 ch)
{
	/*RS == 1 For Data Register*/
	DIO_WritePin(LCD_RS,HIGH);
	/*R/W == 0 For Writing */
	DIO_WritePin(LCD_RW , LOW);
	
	/*LCD Enable Pin LOW For Latching*/
	DIO_WritePin(LCD_ENABLE,LOW);
	
	/* Send Command Sequance */
	LCD_PORT = ( LCD_PORT & Mask_First_4Bits ) | ( ch & Mask_Last_4Bits );
	
	/*Latching Sequance*/
	DIO_WritePin(LCD_ENABLE,HIGH);
	_delay_ms(2);
	/*LOW For Enable to Latch*/
	DIO_WritePin(LCD_ENABLE,LOW);
	
	
	/*LCD Enable Pin LOW For Latching*/
	DIO_WritePin(LCD_ENABLE,LOW);
	/*Send Command*/
	LCD_PORT = ( LCD_PORT & Mask_First_4Bits ) | ( ch << Number_Four );
	
	/*Latching Sequance*/
	DIO_WritePin(LCD_ENABLE,HIGH);
	_delay_ms(2);
	/*LOW For Enable to Latch*/
	DIO_WritePin(LCD_ENABLE,LOW);
	_delay_us(100);
	
}
void LCD_displayString(uint8 str[])
{
	/*Variable For for Loop*/
	uint8 i;
	
	/*Getting Arr Size*/
	uint8 str_len = ((sizeof(str))/(sizeof(str[0])));
	
	/*Loop For All Chars*/
	for(i=0;i<str_len;i++)
	{
		_delay_ms(5);
		LCD_displayChar(str[i]);
		_delay_ms(5);
	}
}

void LCD_displayStringRowColumn()
{
	
}
void LCD_clear()
{
	LCD_sendCommand(Clear_Command);
}

void LCD_gotoRowColumn()
{
	
}