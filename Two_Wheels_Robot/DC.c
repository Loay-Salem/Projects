/*
 * DC.c
 *
 * Created: 18/06/2020 08:33:35 م
 *  Author: dell
 */ 
#include "Dio.h"
#include "Dio_Types.h"

void DC_Forward(){
	Dio_WriteChannel(DIO_Channel_B1,high);
	Dio_WriteChannel(DIO_Channel_B2,low);
	Dio_WriteChannel(DIO_Channel_B5,high);
	Dio_WriteChannel(DIO_Channel_B6,low);
	Dio_WriteChannel(DIO_Channel_B3,high);
	Dio_WriteChannel(DIO_Channel_B4,high);
}
void DC_Backward(){
	Dio_WriteChannel(DIO_Channel_B1,low);
	Dio_WriteChannel(DIO_Channel_B2,high);
	Dio_WriteChannel(DIO_Channel_B5,low);
	Dio_WriteChannel(DIO_Channel_B6,high);
	Dio_WriteChannel(DIO_Channel_B3,high);
	Dio_WriteChannel(DIO_Channel_B4,high);
}
void DC_Left(){
	Dio_WriteChannel(DIO_Channel_B1,high);
	Dio_WriteChannel(DIO_Channel_B2,low);
	Dio_WriteChannel(DIO_Channel_B5,high);
	Dio_WriteChannel(DIO_Channel_B6,low);
	Dio_WriteChannel(DIO_Channel_B3,low);
	Dio_WriteChannel(DIO_Channel_B4,high);
}
void DC_Right(){
	Dio_WriteChannel(DIO_Channel_B1,high);
	Dio_WriteChannel(DIO_Channel_B2,low);
	Dio_WriteChannel(DIO_Channel_B5,high);
	Dio_WriteChannel(DIO_Channel_B6,low);
	Dio_WriteChannel(DIO_Channel_B3,high);
	Dio_WriteChannel(DIO_Channel_B4,low);
}
void DC_Stop(){
		Dio_WriteChannel(DIO_Channel_B1,high);
		Dio_WriteChannel(DIO_Channel_B2,low);
		Dio_WriteChannel(DIO_Channel_B5,high);
		Dio_WriteChannel(DIO_Channel_B6,low);
		Dio_WriteChannel(DIO_Channel_B3,low);
		Dio_WriteChannel(DIO_Channel_B4,low);
}