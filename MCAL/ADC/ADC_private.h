/*
 * ADC_private.h
 *
 *  Created on: Oct 3, 2022
 *      Author: HP
 */

#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

#define ADCL_REG                 *(volatile u8*)0x24
#define ADCH_REG                 *(volatile u8*)0x25
#define ADCVALUE_REG             *(volatile u16*)0x24

#define ADMUX_REG              *(volatile u8*)0x27
/*ADMUX_BIT*/
#define REFS0_BIT                       6
#define REFS1_BIT                       7
#define ADLAR_BIT                       5

#define ADCSRA_REG              *(volatile u8*)0x26
/* ADCSRA_BIT  */
#define ADEN_BIT                        7
#define ADSC_BIT                        6
#define ADATE_BIT                       5
#define ADIF_BIT                        4
#define ADPS2_BIT                       2
#define ADPS1_BIT                       1
#define ADPS0_BIT                       0

#define AVCC                           1
#define AREF                           2
#define _2V5                           3

#define ADC_STIL_READING                0
#define ADC_MASK                       0xE0


#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
