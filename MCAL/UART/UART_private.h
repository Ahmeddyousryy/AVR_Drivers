/*
 * UART_private.h
 *
 *  Created on: Oct 5, 2022
 *      Author: HP
 */

#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_

#define UCSRB_REG                  *(volatile u8*)0x2A
//UCSRB_REG --> BITS
#define UCSZ2_BIT                        2
#define TXEN_BIT                         3
#define RXEN_BIT                         4


#define UCSRC_REG                  *(volatile u8*)0x40
//UCSRC_REG --> BITS
#define UCSZ0_BIT                        1
#define UCSZ1_BIT                        2
#define USBS_BIT                         3
#define UPM0_BIT                         4
#define UPM1_BIT                         5
#define UMSEL_BIT                        6

#define UCSRA_REG                  *(volatile u8*)0x2B
// UCSRA_REG --> BITS
#define TXC_BIT                             6
#define RXC_BIT                             7

#define UBRRL_REG                  *(volatile u8*)0x29

#define UDR_REG                  *(volatile u8*)0x2C


#endif /* MCAL_UART_UART_PRIVATE_H_ */
