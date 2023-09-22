/*
 * EXTINT_private.h
 *
 *  Created on: Sep 17, 2022
 *      Author: HP
 */

#ifndef MCAL_EXTINT_EXTINT_PRIVATE_H_
#define MCAL_EXTINT_EXTINT_PRIVATE_H_

#include "BitMath.h"
#include "STD.h"
//
#define RAISING_EDGE                     1
#define FALLING_EDGE                     2
#define LOW_LEVEL                        3
#define LOGICAL_CHANGE                   4

#define MCUCR                  *(volatile u8*)0x55

#define GICR                   *(volatile u8*)0x5B


#define ISC00_BIT                        0
#define ISC01_BIT                        1




#endif /* MCAL_EXTINT_EXTINT_PRIVATE_H_ */
