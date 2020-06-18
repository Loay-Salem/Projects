/*
 * KeyPad.h
 *
 * Created: 17/06/2020 08:59:46 م
 *  Author: dell
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "STD_Types.h"
#define r0 DIO_Channel_C0
#define r1 DIO_Channel_C1
#define r2 DIO_Channel_C2
#define r3 DIO_Channel_C3
#define c0 DIO_Channel_C4
#define c1 DIO_Channel_C5
#define c2 DIO_Channel_C6
#define c3 DIO_Channel_C7
void Checkcol(uint8 col);
uint8 Get_Key_Pressed ();
#endif /* KEYPAD_H_ */