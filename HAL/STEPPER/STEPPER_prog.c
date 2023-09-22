/*
 * STEPPER_prog.c
 *
 *  Created on: Oct 8, 2022
 *      Author: HP
 */
#include "STEPPER_interface.h"



void H_STEPPER_Void_StepperInit()
{
	M_DIO_Void_SetPinDirection(STEPPER_PIN_1,OUTPUT);
	M_DIO_Void_SetPinDirection(STEPPER_PIN_2,OUTPUT);
	M_DIO_Void_SetPinDirection(STEPPER_PIN_3,OUTPUT);
	M_DIO_Void_SetPinDirection(STEPPER_PIN_4,OUTPUT);

}
void H_STEPPER_Void_StepperStart(u8 Copu_u8_Degrees)
{

	M_DIO_Void_SetPinValue(STEPPER_PIN_1,HIGH);
	M_DIO_Void_SetPinValue(STEPPER_PIN_2,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_3,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_4,LOW);

	M_DIO_Void_SetPinValue(STEPPER_PIN_1,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_2,HIGH);
	M_DIO_Void_SetPinValue(STEPPER_PIN_3,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_4,LOW);

	M_DIO_Void_SetPinValue(STEPPER_PIN_1,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_2,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_3,HIGH);
	M_DIO_Void_SetPinValue(STEPPER_PIN_4,LOW);

	M_DIO_Void_SetPinValue(STEPPER_PIN_1,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_2,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_3,LOW);
	M_DIO_Void_SetPinValue(STEPPER_PIN_4,HIGH);


}
void H_STEPPER_Void_StepperStop()
{
	    M_DIO_Void_SetPinValue(STEPPER_PIN_1,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN_2,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN_3,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN_4,LOW);

}
