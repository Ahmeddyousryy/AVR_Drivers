/*
 * I2C_private.h
 *
 *  Created on: Oct 7, 2022
 *      Author: HP
 */

#ifndef MCAL_I2C_I2C_PRIVATE_H_
#define MCAL_I2C_I2C_PRIVATE_H_

#define TWBR_REG                 *(volatile u8*)0x20
#define TWDR_REG                 *(volatile u8*)0x23
#define TWAR_REG                 *(volatile u8*)0x22

#define TWCR_REG                 *(volatile u8*)0x56
// TWCR_REG --> BITS
#define TWINT_BIT                             7
#define TWSTA_BIT                             5
#define TWSTO_BIT                             4
#define TWEN_BIT                              2


#define MASTER_MODE                           1
#define SLAVE_MODE                            0

#define STILL_PROCESSING                      0


#endif /* MCAL_I2C_I2C_PRIVATE_H_ */
