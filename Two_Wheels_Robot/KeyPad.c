/*
 * KeyPad.c
 *
 * Created: 17/06/2020 08:59:04 م
 *  Author: dell
 */ 
#include "KeyPad.h"
#include "Key_Cfg.h"
#include "STD_Types.h"
#define Num_Col 4
#include "Dio.h"
uint8 Get_Key_Pressed (){
	Dio_WriteChannel(r0,low);
	Dio_WriteChannel(r1,high);
	Dio_WriteChannel(r2,high);
	Dio_WriteChannel(r3,high);
	Checkcol(0);	
	Dio_WriteChannel(r0,high);
	Dio_WriteChannel(r1,low);
	Dio_WriteChannel(r2,high);
	Dio_WriteChannel(r3,high);
	Checkcol(1);
	Dio_WriteChannel(r0,high);
	Dio_WriteChannel(r1,high);
	Dio_WriteChannel(r2,low);
	Dio_WriteChannel(r3,high);
	Checkcol(2);
	Dio_WriteChannel(r0,high);
	Dio_WriteChannel(r1,high);
	Dio_WriteChannel(r2,high);
	Dio_WriteChannel(r3,low);
	Checkcol(3);
	return Key_Pressed==Key_Release? Key_Release:Key_Map[Key_Pressed];
}
void Checkcol(uint8 row){
	if (DIO_ReadChannel(c0)==low){Key_Pressed =(Num_Col*row)+0;}
	if (DIO_ReadChannel(c1)==low){Key_Pressed =(Num_Col*row)+1;}
	if (DIO_ReadChannel(c2)==low){Key_Pressed =(Num_Col*row)+2;}
	if (DIO_ReadChannel(c3)==low){Key_Pressed =(Num_Col*row)+3;}
}