/*
 * PB_interface.h
 *
 *  Created on: Sep 7, 2022
 *      Author: HP
 */

#ifndef PB_PB_INTERFACE_H_
#define PB_PB_INTERFACE_H_
#include "PB_config.h"
#include "DIO_interface.h"
#define PB0                       0
#define PB1                       1
#define PB2                       2



#define ACTIVE_HIGH               1
#define ACTIVE_LOW                0



#if  PB_MODE== 1
#define PRESSED                   1
#define RELEASED                  0
#elif PB_MODE== 0
#define PRESSED                   0
#define RELEASED                  1
#endif
void H_PB_Void_PBInit(u8);
u8 H_PB_u8_PBRead(u8);

#endif /* PB_PB_INTERFACE_H_ */
