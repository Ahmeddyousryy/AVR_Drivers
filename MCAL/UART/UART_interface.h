/*
 * UART_interface.h
 *
 *  Created on: Oct 5, 2022
 *      Author: HP
 */

#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include "UART_config.h"
#include "UART_private.h"
#include "DIO_interface.h"


void M_UART_Void_UARTInit();
void M_UART_Void_UARTSend(u8);
u8 M_UART_u8_UARTReceive(void);
#endif /* MCAL_UART_UART_INTERFACE_H_ */
