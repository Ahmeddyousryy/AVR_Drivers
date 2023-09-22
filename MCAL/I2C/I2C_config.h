/*
 * I2C_config.h
 *
 *  Created on: Oct 7, 2022
 *      Author: HP
 */

#ifndef MCAL_I2C_I2C_CONFIG_H_
#define MCAL_I2C_I2C_CONFIG_H_

/* SELECT I2C_MODE [ MASTER , SLAVE ] */
#define I2C_MODE                                 MASTER_MODE

/* SELECT SLAVE ADDRES--> RANGE FROM 1 TO 119 */
#define I2C_SLAVE_ADDRESS                           1

/* I2C GENERAL CALL OPTION [ 0 (DISABLE) , 1 (ENABLE) ] */
#define I2C_GENERAL_CALL                            1

#endif /* MCAL_I2C_I2C_CONFIG_H_ */
