/*
 * DIO_Registers.h
 *
 * Created: 2/13/2019 2:56:54 PM
 *  Author: AVE-LAP-040
 */ 


#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H_

#define INPUT 0
#define OUTPUT 1
#define LOW 0
#define HIGH 1

#define PINA (*(volatile uint8*)0x39)
#define PINB (*(volatile uint8*)0x36)
#define PINC (*(volatile uint8*)0x33)
#define PIND (*(volatile uint8*)0x30)

#define DDRA (*(volatile uint8*)0x3A)
#define DDRB (*(volatile uint8*)0x37)
#define DDRC (*(volatile uint8*)0x34)
#define DDRD (*(volatile uint8*)0x31)

#define PORTA (*(volatile uint8*)0x3B)
#define PORTB (*(volatile uint8*)0x38)
#define PORTC (*(volatile uint8*)0x35)
#define PORTD (*(volatile uint8*)0x32)

//PORTA
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
//PORTB
#define PIN8 8
#define PIN9 9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13
#define PIN14 14
#define PIN15 15
//PORTC
#define PIN16 16
#define PIN17 17
#define PIN18 18
#define PIN19 19
#define PIN20 20
#define PIN21 21
#define PIN22 22
#define PIN23 23
//PORTD
#define PIN24 24
#define PIN25 25
#define PIN26 26
#define PIN27 27
#define PIN28 28
#define PIN29 29
#define PIN30 30
#define PIN31 31

#endif /* DIO_REGISTERS_H_ */