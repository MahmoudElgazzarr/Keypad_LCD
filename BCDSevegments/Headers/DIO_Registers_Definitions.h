/*
 * DIO_Registers_Definitions.h
 *
 * Created: 2/13/2019 3:19:17 PM
 *  Author: AVE-LAP-040
 */ 

/* 

*/
#ifndef DIO_REGISTERS_DEFINITIONS_H_
#define DIO_REGISTERS_DEFINITIONS_H_

#include "Types.h"

void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection);
void DIO_WritePin(uint8 PinNum,uint8 PinValue);
uint8 DIO_ReadPin(uint8 PinNum);



#endif /* DIO_REGISTERS_DEFINITIONS_H_ */