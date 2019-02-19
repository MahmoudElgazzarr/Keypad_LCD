/*
 * LCD.h
 *
 * Created: 2/19/2019 11:50:16 AM
 *  Author: AVE-LAP-040
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "Types.h"



void LCD_init();
void LCD_sendCommand(uint8 Cmd);
void LCD_displayChar(uint8 ch);
void LCD_displayString();
void LCD_displayStringRowColumn();
void LCD_clear();
void LCD_gotoRowColumn();


#define Mask_Last_4Bits 0xF0
#define Mask_First_4Bits 0x0F
#define Number_Four 4


#endif /* LCD_H_ */