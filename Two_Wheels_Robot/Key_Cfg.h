/*
 * Key_Cfg.h
 *
 * Created: 17/06/2020 08:59:30 م
 *  Author: dell
 */ 


#ifndef KEY_CFG_H_
#define KEY_CFG_H_
#include "STD_Types.h"
const char Key_Map[16]={
	'7','8','9','%',
	'4','5','6','x',
	'1','2','3','-',
	'C','0','=','+'
};
#define Key_Release 255
uint8 Key_Pressed = Key_Release;

#endif /* KEY_CFG_H_ */