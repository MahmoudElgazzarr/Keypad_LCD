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
	#ifdef bit_Mode4
	
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
	LCD_sendCommand(0x0E);
	LCD_sendCommand(0x01);
	LCD_sendCommand(0x06);
	
	
	#endif
	
	#ifdef Bit_Mode8
	
	/*Data Pins*/
	DIO_SetPinDirection(LCD_D0 , OUTPUT);
	DIO_SetPinDirection(LCD_D1 , OUTPUT);
	DIO_SetPinDirection(LCD_D2 , OUTPUT);
	DIO_SetPinDirection(LCD_D3 , OUTPUT);
	
	DIO_SetPinDirection(LCD_D4 , OUTPUT);
	DIO_SetPinDirection(LCD_D5 , OUTPUT);
	DIO_SetPinDirection(LCD_D6 , OUTPUT);
	DIO_SetPinDirection(LCD_D7 , OUTPUT);
	
	/*Command Pins*/
	DIO_SetPinDirection(LCD_RS , OUTPUT);
	DIO_SetPinDirection(LCD_RW , OUTPUT);
	DIO_SetPinDirection(LCD_ENABLE , OUTPUT);
	
	
	#endif
	
	
}
void LCD_sendCommand(uint8 Cmd)
{
	/*RS == 0 For Command Register
	R/W == 0 For Writing */
	DIO_WritePin(LCD_RS,LOW);
	DIO_WritePin(LCD_RW , LOW);
	
	/*LCD Enable Pin High For Latching*/
	DIO_WritePin(LCD_ENABLE,HIGH);
	
	/* Send Command Sequance */
	LCD_PORT |=( Cmd & Mask_Last_4Bits ); 
	/*LOW For Enable to Latch*/
	DIO_WritePin(LCD_ENABLE,LOW);
	
	_delay_ms(2);
	/*LCD Enable Pin High For Latching*/
	DIO_WritePin(LCD_ENABLE,HIGH);
	/*Send Command*/
	LCD_PORT |= ( Number_Four << ( Cmd & Mask_First_4Bits ) ); 
	/*LOW For Enable to Latch*/
	DIO_WritePin(LCD_ENABLE,LOW);
}

void LCD_displayChar()
{
	
}
void LCD_displayString()
{
	
}

void LCD_displayStringRowColumn()
{
	
}
void LCD_clear()
{
	
}

void LCD_gotoRowColumn()
{
	
}