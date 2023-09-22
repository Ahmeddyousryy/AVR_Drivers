/*
 * RELAY_prog.c
 *
 *  Created on: Sep 9, 2022
 *      Author: HP
 */
#include "RELAY_interface.h"

void H_RELAY_Void_RelayInit()
{
	M_DIO_Void_SetPinDirection(RELAY_PIN ,OUTPUT);
}
void H_RELAY_Void_RelayOn()
{
	M_DIO_Void_SetPinValue(RELAY_PIN ,HIGH);
}
void H_RELAY_Void_RelayOff()
{
	M_DIO_Void_SetPinValue(RELAY_PIN ,LOW);
}
