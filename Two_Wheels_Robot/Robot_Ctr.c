/*
 * Robot_Ctr.c
 *
 * Created: 18/06/2020 08:57:44 م
 *  Author: dell
 */ 
#include "Servo.h"
#include "DC.h"
#include "KeyPad.h"
void Robot_Ctr(){
			if (Get_Key_Pressed()=='8')
			{
				DC_Forward();
			}
			if (Get_Key_Pressed()=='2')
			{
				DC_Backward();
			}
			if (Get_Key_Pressed()=='4')
			{
				DC_Left();
			}
			if (Get_Key_Pressed()=='6')
			{
				DC_Right();
			}
			if (Get_Key_Pressed()=='3')
			{
				Close_Grip();
			}
			if (Get_Key_Pressed()=='1')
			{
				Open_Grip();
			}
			if (Get_Key_Pressed()=='5')
			{
				DC_Stop();
			}
}