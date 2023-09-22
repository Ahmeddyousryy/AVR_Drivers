/*
 * ADC_interface.h
 *
 *  Created on: Oct 3, 2022
 *      Author: HP
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include "ADC_config.h"
#include "ADC_private.h"

#define ADCCHANNEL_0                            0
#define ADCCHANNEL_1                            1
#define ADCCHANNEL_2                            2
#define ADCCHANNEL_3                            3
#define ADCCHANNEL_4                            4
#define ADCCHANNEL_5                            5
#define ADCCHANNEL_6                            6
#define ADCCHANNEL_7                            7

void M_ADC_Void_ADCInit(void);
u16 M_ADC_u16_ADCRead(u8);


#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
