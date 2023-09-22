/*
 * DC_interface.h
 *
 *  Created on: Feb 9, 2023
 *      Author: HP
 */

#ifndef HAL_DCMOTOR_DC_INTERFACE_H_
#define HAL_DCMOTOR_DC_INTERFACE_H_
#include "DIO_Interface.h"
#include "BitMath.h"
#include "STD.h"
#include "Timer_Interface.h"

#define CW		0
#define CCW		1


void H_DCMotor_Void_DCMotorInit(void);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotorSetSpeed(u8);
void H_DCMotor_Void_DCMotorStart(void);
void H_DCMotor_Void_DCMotorStop(void);




#endif /* HAL_DCMOTOR_DC_INTERFACE_H_ */
