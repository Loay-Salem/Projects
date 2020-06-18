/*
 * Two_Wheels_Robot.c
 *
 * Created: 17/06/2020 06:00:08 م
 * Author : dell
 */ 
#define  F_CPU 16000000
#include <util/delay.h>
#include <avr/io.h>
#include "Dio_Cfg.h"
#include "Servo.h"
#include "Robot_Ctr.h"
int main(void)
{

    DIO_Init();
	Servo_Init();

    while (1) 
    {
		Robot_Ctr();
	}
}

