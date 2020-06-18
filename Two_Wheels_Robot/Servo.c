/*
 * Servo.c
 *
 * Created: 18/06/2020 01:51:41 ص
 *  Author: dell
 */ 
#include <avr/io.h>
void Servo_Init(){
		TCCR1A=(1<<COM1A1)|(1<<WGM11);
		TCCR1B=(1<<WGM12)|(1<<WGM13)|(1<<CS10)|(1<<CS11);
		ICR1=4999;
}
void Close_Grip(){
	OCR1A=249;
}
void Open_Grip(){
	OCR1A=500;
}