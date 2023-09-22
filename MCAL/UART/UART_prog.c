/*
 * UART_prog.c
 *
 *  Created on: Oct 5, 2022
 *      Author: HP
 */
#include "UART_interface.h"



void M_UART_Void_UARTInit()
{
	u8 Local_u8_UCSRC = 0b10000000;

	/* to select BAUDRATE --> 9600 */
	UBRRL_REG = 103;

	/* to select character size --> 8 bits */
	SET_BIT(Local_u8_UCSRC,UCSZ0_BIT);
	SET_BIT(Local_u8_UCSRC,UCSZ1_BIT);
	CLR_BIT(UCSRB_REG,UCSZ2_BIT);

	/* to select ASYNCH_MODE */
	CLR_BIT(Local_u8_UCSRC,UMSEL_BIT);

	/* to select 1 stop bit */
	CLR_BIT(Local_u8_UCSRC,USBS_BIT);

	/* to Disable PARITY_MODE */
	CLR_BIT(Local_u8_UCSRC,UPM0_BIT);
	CLR_BIT(Local_u8_UCSRC,UPM1_BIT);

	UCSRC_REG = Local_u8_UCSRC;

	/* to enable data receiver circuit --> RX */
	SET_BIT(UCSRB_REG,RXEN_BIT);

	/* to enable data transmitter --> TX */
    SET_BIT(UCSRB_REG,TXEN_BIT);




}
void M_UART_Void_UARTSend(u8 Copy_u8_Data)
{
	UDR_REG = Copy_u8_Data;
	while(GET_BIT(UCSRA_REG,TXC_BIT) == 0);
}
u8 M_UART_u8_UARTReceive(void)
{
	while(GET_BIT(UCSRA_REG,RXC_BIT) == 0);
    return UDR_REG;
}

