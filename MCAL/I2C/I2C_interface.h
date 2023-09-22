/*
 * I2C_interface.h
 *
 *  Created on: Oct 7, 2022
 *      Author: HP
 */

#ifndef MCAL_I2C_I2C_INTERFACE_H_
#define MCAL_I2C_I2C_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include "I2C_config.h"
#include "I2C_private.h"

void M_I2C_Void_I2CInit(void);
void M_I2C_Void_StartCondition(void);
void M_I2C_Void_StopCondition(void);
void M_I2C_Void_RepeatedStart(void);
void M_I2C_Void_SendSlaveAddressWrite(u8);
void M_I2C_Void_SendSlaveAddressRead(u8);

void M_I2C_Void_SendByte(u8);
u8 M_I2C_Void_ReadByte(void);


#endif /* MCAL_I2C_I2C_INTERFACE_H_ */
