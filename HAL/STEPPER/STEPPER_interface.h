/*
 * STEPPER_interface.h
 *
 *  Created on: Oct 8, 2022
 *      Author: HP
 */

#ifndef HAL_STEPPER_STEPPER_INTERFACE_H_
#define HAL_STEPPER_STEPPER_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include "DIO_interface.h"
#include "STEPPER_config.h"
#include "STEPPER_private.h"

void H_STEPPER_Void_StepperInit();
void H_STEPPER_Void_StepperStart(u8);
void H_STEPPER_Void_StepperStop();

#endif /* HAL_STEPPER_STEPPER_INTERFACE_H_ */
