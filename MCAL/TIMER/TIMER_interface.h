/*
 * TIMER_interface.h
 *
 *  Created on: Sep 23, 2022
 *      Author: HP
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include "TIMER_config.h"
#include "TIMER_private.h"
#include "DIO_interface.h"

void M_TIMER_Void_TimerInit(void);
void M_TIMER_Void_TimerSetTime(u32);
void M_TIMER_Void_TimerStart(void);
void M_TIMER_Void_TimerStop(void);

void M_TIMER_Void_PWMInit(void);
void M_TIMER_Void_PWMSetTime(u32);
void M_TIMER_Void_PWMStart(void);
void M_TIMER_Void_PWMStop(void);
void M_TIMER_Void_SetDutyCycle(u8);




#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
