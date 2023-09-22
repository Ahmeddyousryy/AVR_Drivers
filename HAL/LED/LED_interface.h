/*
 * LED_interface.h
 *
 *  Created on: Sep 6, 2022
 *      Author: HP
 */

#ifndef LED_LED_INTERFACE_H_
#define LED_LED_INTERFACE_H_
#include "DIO_interface.h"
#include "LED_config.h"
#define LED0               0
#define LED1               1
#define LED2               2
void H_LED_Void_LedInit(u8);
void H_LED_Void_LedOn(u8);
void H_LED_Void_LedOff(u8);
void H_LED_Void_LedTogg(u8);
#endif /* LED_LED_INTERFACE_H_ */
