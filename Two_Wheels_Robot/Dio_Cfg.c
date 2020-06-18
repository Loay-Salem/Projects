/*
 * Dio_Cfg.c
 *
 * Created: 17/06/2020 06:27:39 م
 *  Author: dell
 */ 
#include "Dio_Cfg.h"
#include "STD_Types.h"
#include "Dio_Types.h"
#include "BitMath.h"
#include <avr/io.h>
const Pin_Dir Pin_Cfg[Pin_Count]={
	{Output,low},//A0
	{Output,low},//A1
	{Output,low},//A2
	{Output,low},//A3
	{Output,low},//A4
	{Output,low},//A5
	{Output,low},//A6
	{Output,low},//A7
	{Output,low},//B0
	{Output,low},//B1
	{Output,low},//B2
	{Output,low},//B3
	{Output,low},//B4
	{Output,low},//B5
	{Output,low},//B6
	{Output,low},//B7
	{Output,low},//C0
	{Output,low},//C1
	{Output,low},//C2
	{Output,low},//C3
	{Input,high},//C4
	{Input,high},//C5
	{Input,high},//C6
	{Input,high},//C7
	{Output,low},//D0
	{Output,low},//D1
	{Output,low},//D2
	{Output,low},//D3
	{Output,low},//D4
	{Output,low},//D5
	{Output,low},//D6
	{Input,low}//D7
};
void DIO_Init(){
	for(uint16 i=0;i<Pin_Count;i++){
		DIO_Port_Type portx = i/8;
		DIO_Channel_Type pos =i%8;
		switch (portx){
			case PORT_A:
				if (Pin_Cfg[i].Dir==Output){Set(DDRA,pos);}
					else{Clear(DDRA,pos);}
				if(Pin_Cfg[i].lev==high){Set(PORTA,pos);}
					else{Clear(PORTA,pos);}
				break;
			case PORT_B:
				if (Pin_Cfg[i].Dir==Output){Set(DDRB,pos);}
					else{Clear(DDRB,pos);}
				if(Pin_Cfg[i].lev==high){Set(PORTB,pos);}
					else{Clear(PORTB,pos);}
				break;
			case PORT_C:
				if (Pin_Cfg[i].Dir==Output){Set(DDRC,pos);}
					else{Clear(DDRC,pos);}
				if(Pin_Cfg[i].lev==high){Set(PORTC,pos);}
					else{Clear(PORTC,pos);}
				break;
			case PORT_D:
				if (Pin_Cfg[i].Dir==Output){Set(DDRD,pos);}
					else{Clear(DDRD,pos);}
				if(Pin_Cfg[i].lev==high){Set(PORTD,pos);}
					else{Clear(PORTD,pos);}
				break;
		}
	}
}