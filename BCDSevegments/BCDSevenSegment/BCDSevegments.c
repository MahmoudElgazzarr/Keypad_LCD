/*
 * BCDSevegments_disable.c
 *
 * Created: 2/18/2019 12:55:59 PM
 *  Author: AVE-LAP-040
 */ 
#include "BCDSevegments.h"
#include "BCDSevSegment_cfg.h"

void BCDSevegments_Init()
{
	//OUTPUT for enable bits
	DIO_SetPinDirection(BCDSEVSEGMENTS1_Enable_PIN,OUTPUT);
	DIO_SetPinDirection(BCDSEVSEGMENTS2_Enable_PIN,OUTPUT);
	DIO_SetPinDirection(BCDSEVSEGMENTS3_Enable_PIN,OUTPUT);
	DIO_SetPinDirection(BCDSEVSEGMENTS4_Enable_PIN,OUTPUT);
	
	//OUTPUT for 4 7-segment
	DIO_SetPinDirection(BCDSEVSEGMENTS1_DATA_PIN,OUTPUT);
	DIO_SetPinDirection(BCDSEVSEGMENTS2_DATA_PIN,OUTPUT);
	DIO_SetPinDirection(BCDSEVSEGMENTS3_DATA_PIN,OUTPUT);
	DIO_SetPinDirection(BCDSEVSEGMENTS4_DATA_PIN,OUTPUT);
	
	//Write LOW in the begining
	DIO_WritePin(BCDSEVSEGMENTS1_Enable_PIN,LOW);
	DIO_WritePin(BCDSEVSEGMENTS2_Enable_PIN,LOW);
	DIO_WritePin(BCDSEVSEGMENTS3_Enable_PIN,LOW);
	DIO_WritePin(BCDSEVSEGMENTS4_Enable_PIN,LOW);
}
void BCDSevegments_enable(uint8 segment_Number)
{
	
	if (segment_Number == 1)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_Enable_PIN,HIGH);
	}
	if (segment_Number == 2)
	{
		DIO_WritePin(BCDSEVSEGMENTS2_Enable_PIN,HIGH);
	}
	if(segment_Number == 3)
	{
		DIO_WritePin(BCDSEVSEGMENTS3_Enable_PIN,HIGH);
	}
	if(segment_Number == 4)
	{
		DIO_WritePin(BCDSEVSEGMENTS4_Enable_PIN,HIGH);
	}
	
}
void BCDSevegments_disable(uint8 segment_Number)
{
	
	if (segment_Number == 1)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_Enable_PIN,LOW);
	}
	if (segment_Number == 2)
	{
		DIO_WritePin(BCDSEVSEGMENTS2_Enable_PIN,LOW);
	}
	if(segment_Number == 3)
	{
		DIO_WritePin(BCDSEVSEGMENTS3_Enable_PIN,LOW);
	}
	if(segment_Number == 4)
	{
		DIO_WritePin(BCDSEVSEGMENTS4_Enable_PIN,LOW);
	}
}
void BCDSevegments_displayNo(uint8 number)
{
	if (number == 0)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 1)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 2)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 3)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if (number == 4)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 5)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 6)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 7)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,LOW);
	}
	else if(number == 8)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,HIGH);
	}
	else if(number == 9)
	{
		DIO_WritePin(BCDSEVSEGMENTS1_DATA_PIN,HIGH);
		DIO_WritePin(BCDSEVSEGMENTS2_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS3_DATA_PIN,LOW);
		DIO_WritePin(BCDSEVSEGMENTS4_DATA_PIN,HIGH);
	}
}