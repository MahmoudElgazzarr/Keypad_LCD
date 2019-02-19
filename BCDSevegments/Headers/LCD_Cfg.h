/*
 * LCD_Cfg.h
 *
 * Created: 2/19/2019 11:51:26 AM
 *  Author: AVE-LAP-040
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_

/*define F_CPU Frequancy*/
#define  F_CPU 1000000UL

/*LCD PORT*/
#define LCD_PORT PORTA

/* Control Pins */
#define LCD_RS PIN1
#define LCD_RW PIN2
#define LCD_ENABLE PIN3


/*define 4-bit Mode Or 8-bit Mode*/

#define Bit_Mode4
//#define bit_Mode8

/*Least Data Lines*/
#ifdef bit_Mode8

#define LCD_0 0
#define LCD_1 0
#define LCD_2 0
#define LCD_3 0

#endif

#ifdef Bit_Mode4

/* Most Data Lines */
#define LCD_D4 PIN4
#define LCD_D5 PIN5
#define LCD_D6 PIN6
#define LCD_D7 PIN7

#define Function_Set_4Bit 0x28
#define Clear_Command 0x01
#define Cyrser_On 0x0E

#endif

#endif /* LCD_CFG_H_ */