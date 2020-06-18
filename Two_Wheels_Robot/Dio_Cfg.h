/*
 * Dio_Cfg.h
 *
 * Created: 17/06/2020 06:26:52 م
 *  Author: dell
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_
#include "STD_Types.h"
#include "Dio_Types.h"
typedef struct {
	DIO_Dir Dir;
	STD_Level lev;
	}Pin_Dir;
	
#define Pin_Count 32
extern const Pin_Dir Pin_Cfg[Pin_Count];
void DIO_Init();





#endif /* DIO_CFG_H_ */