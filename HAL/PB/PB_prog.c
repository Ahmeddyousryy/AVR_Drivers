/*
 * PB_prog.c
 *
 *  Created on: Sep 7, 2022
 *      Author: HP
 */
#include "PB_interface.h"
void H_PB_Void_PBInit(u8 Copy_u8_PB)
{
	switch(Copy_u8_PB)
	{
	case PB0:
		M_DIO_Void_SetPinDirection(PB_0,INPUT);
		break;
	case PB1:
		M_DIO_Void_SetPinDirection(PB_1,INPUT);
			break;
	case PB2:
		M_DIO_Void_SetPinDirection(PB_2,INPUT);
			break;
	}


}
u8 H_PB_u8_PBRead(u8 Copy_u8_PB)
{
	u8 Local_u8_Return=RELEASED;
	switch(Copy_u8_PB)
	{
	case PB0:
		if(M_DIO_u8_GetPinValue(PB_0)==PRESSED)
		{
			_delay_ms(PB_DEBOUNCING_TIME);
			if(M_DIO_u8_GetPinValue(PB_0)==PRESSED)
			{
				while((M_DIO_u8_GetPinValue(PB_0)==PRESSED));
			Local_u8_Return = PRESSED;
		    }
		}
		break;
	case PB1:
		if(M_DIO_u8_GetPinValue(PB_1)==PRESSED)
				{
			         _delay_ms(PB_DEBOUNCING_TIME);
					if(M_DIO_u8_GetPinValue(PB_1)==PRESSED)
					{
						while((M_DIO_u8_GetPinValue(PB_1)==PRESSED));
					Local_u8_Return =PRESSED;
				    }
				}
			break;
	case PB2:
		if(M_DIO_u8_GetPinValue(PB_2)==PRESSED)
				{
			      _delay_ms(PB_DEBOUNCING_TIME);
					if(M_DIO_u8_GetPinValue(PB_2)==PRESSED)
					{
						while((M_DIO_u8_GetPinValue(PB_2)==PRESSED));
					Local_u8_Return = PRESSED;
				    }
				}
			break;
    }

  return Local_u8_Return;

}
