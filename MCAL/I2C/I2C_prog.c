/*
 * I2C_prog.c
 *
 *  Created on: Oct 7, 2022
 *      Author: HP
 */
#include "I2C_interface.h"

void M_I2C_Void_I2CInit(void)
{
#if I2C_MODE == MASTER_MODE
	/* TO SELECT F SCL --> 400 KHZ */
	TWBR_REG = 12;
#elif I2C_MODE == SLAVE_MODE
	 TWAR == (I2C_SLAVE_ADDRESS << 0x01) | I2C_GENERAL_CALL;
#endif
	 /* TO ENABLE I2C CIRCUIT */
	SET_BIT(TWCR_REG,TWEN_BIT);
}
void M_I2C_Void_StartCondition(void)
{
   SET_BIT(TWCR_REG,TWSTA_BIT);
   SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */
   while(GET_BIT(TWCR_REG,TWINT_BIT) == STILL_PROCESSING);

}
void M_I2C_Void_StopCondition(void)
{
   SET_BIT(TWCR_REG,TWSTO_BIT);
   SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */

}
void M_I2C_Void_RepeatedStart(void)
{
   SET_BIT(TWCR_REG,TWSTA_BIT);
   SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */
   while(GET_BIT(TWCR_REG,TWINT_BIT) == STILL_PROCESSING);

}
void M_I2C_Void_SendSlaveAddressWrite(u8 Copy_u8_SlaveAddress)
{
	TWDR_REG = (Copy_u8_SlaveAddress << 0x01);
	SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */
	while(GET_BIT(TWCR_REG,TWINT_BIT) == STILL_PROCESSING);
}
void M_I2C_Void_SendSlaveAddressRead(u8 Copy_u8_SlaveAddress)
{
	TWDR_REG = (Copy_u8_SlaveAddress << 0x01) | 0x01;
	CLR_BIT(TWCR_REG,TWSTA_BIT);
	SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */
	while(GET_BIT(TWCR_REG,TWINT_BIT) == STILL_PROCESSING);

}
void M_I2C_Void_SendByte(u8 Copy_u8_Data)
{
   TWDR_REG = Copy_u8_Data;
   CLR_BIT(TWCR_REG,TWSTA_BIT);
   SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */
   while(GET_BIT(TWCR_REG,TWINT_BIT) == STILL_PROCESSING);
}
u8 M_I2C_Void_ReadByte(void)
{
	CLR_BIT(TWCR_REG,TWSTA_BIT);
	SET_BIT(TWCR_REG,TWINT_BIT);     /* TO CLEAR THE FLAG */
	while(GET_BIT(TWCR_REG,TWINT_BIT) == STILL_PROCESSING);


	return TWDR_REG;

}
