/*
 * Dio.c
 *
 * Created: 17/06/2020 06:27:26 م
 *  Author: dell
 */ 
#include "BitMath.h"
#include "STD_Types.h"
#include <avr/io.h>
#include "Dio_Types.h"
void Dio_WriteChannel(DIO_Channel_Type Id,STD_Level lev){
	DIO_Port_Type portx =Id/8;
	DIO_Channel_Type pos =Id%8;
	switch (portx){
		case PORT_A:
			if (lev==high){Set(PORTA,pos);}
				else {Clear(PORTA,pos);}
			break;
		case PORT_B:
			if (lev==high){Set(PORTB,pos);}
				else {Clear(PORTB,pos);}
			break;
		case PORT_C:
			if (lev==high){Set(PORTC,pos);}
				else {Clear(PORTC,pos);}
			break;
		case PORT_D:
			if (lev==high){Set(PORTD,pos);}
				else {Clear(PORTD,pos);}
			break;
	}
}
STD_Level DIO_ReadChannel(DIO_Channel_Type Id){
	STD_Level read=low;
	DIO_Port_Type portx = Id/8;
	DIO_Channel_Type pos = Id%8;
	switch (portx){
		case PORT_A:
			read=Get(PINA,pos);
			break;
		case PORT_B:
			read=Get(PINB,pos);
			break;
		case PORT_C:
			read=Get(PINC,pos);
			break;
		case PORT_D:
			read=Get(PIND,pos);
			break;
	}
	return read;
}
void DIO_WritePort(DIO_Port_Type Port,uint8 Cmd){
	switch (Port){
		case PORT_A:
			PORTA=Cmd;
			break;
		case PORT_B:
			PORTB=Cmd;
			break;
		case PORT_C:
			PORTC=Cmd;
			break;
		case PORT_D:
			PORTD=Cmd;
			break;
	}
}