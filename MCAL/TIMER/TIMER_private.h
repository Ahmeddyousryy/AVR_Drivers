/*
 * TIMER_private.h
 *
 *  Created on: Sep 23, 2022
 *      Author: HP
 */

#ifndef MCAL_TIMER_TIMER_PRIVATE_H_
#define MCAL_TIMER_TIMER_PRIVATE_H_

#define NORMAL_MODE                          1
#define CTC_MODE                             2
#define FAST_PWM_MODE                        3
#define PHASE_CORRECT_PWM_MODE               4

#define INVERTED                             1
#define NON_INVERTED                         0

#define  TCCR0                   *(volatile u8*)0x53
#define  TIMSK                   *(volatile u8*)0x59
#define  OCR0                    *(volatile u8*)0x5C

#define  TOIE0_BIT                   0
#define  OCIE0_BIT                   1
#define  WGM00_BIT                   6
#define  WGM01_BIT                   3

#define COM01_BIT                    5
#define COM00_BIT                    4

#define  CS00_BIT                    0
#define  CS01_BIT                    1
#define  CS02_BIT                    2

#define OC0                         PB3_PIN



#endif /* MCAL_TIMER_TIMER_PRIVATE_H_ */
