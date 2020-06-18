/*
 * Dio.h
 *
 * Created: 17/06/2020 06:26:39 م
 *  Author: dell
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "Dio_Types.h"
#include "STD_Types.h"
void Dio_WriteChannel(DIO_Channel_Type Id,STD_Level lev);
STD_Level DIO_ReadChannel(DIO_Channel_Type Id);
void DIO_WritePort(DIO_Port_Type Port,uint8 Cmd);


#endif /* DIO_H_ */