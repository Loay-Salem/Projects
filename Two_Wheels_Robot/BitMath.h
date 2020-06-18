/*
 * BitMath.h
 *
 * Created: 17/06/2020 06:26:09 م
 *  Author: dell
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_
#define Set(reg,var) reg|=(1<<var)
#define Clear(reg,var) reg&=~(1<<var)
#define Toggle(reg,var) reg^=(1<<var)
#define Get(reg,var) ((reg>>var)&1)


#endif /* BITMATH_H_ */