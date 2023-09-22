/*
 * EXTINT_interface.h
 *
 *  Created on: Sep 17, 2022
 *      Author: HP
 */

#ifndef MCAL_EXTINT_EXTINT_INTERFACE_H_
#define MCAL_EXTINT_EXTINT_INTERFACE_H_
#include "EXTINT_private.h"
#include "EXTINT_config.h"
#include "STD.h"
#include <avr/interrupt.h>

#define INT0_CHANNEL                   0
#define INT1_CHANNEL                   1
#define INT2_CHANNEL                   2

void M_EXTINT_Void_ExtIntInit(u8);
void M_EXTINT_Void_ExtIntSetCallBack(u8,void(*)(void));


#endif /* MCAL_EXTINT_EXTINT_INTERFACE_H_ */
