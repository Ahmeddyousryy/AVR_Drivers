#include "LED_interface.h"
void H_LED_Void_LedInit(u8 Copy_u8_Led)
{
	switch(Copy_u8_Led)
		{
		  case LED0:
			  M_DIO_Void_SetPinDirection(LED_0,OUTPUT);
			 break;

		  case LED1:
			  M_DIO_Void_SetPinDirection(LED_1,OUTPUT);
			  break;

		  case LED2 :
			  M_DIO_Void_SetPinDirection(LED_2,OUTPUT);
			  break;

		}
}
void H_LED_Void_LedOn(u8 Copy_u8_Led)
{
	switch(Copy_u8_Led)
		{
		  case LED0:
			  M_DIO_Void_SetPinValue(LED_0,HIGH);
			 break;

		  case LED1:
			  M_DIO_Void_SetPinValue(LED_1,HIGH);
			  break;

		  case LED2 :
			  M_DIO_Void_SetPinValue(LED_2,HIGH);
			  break;

		}
}
void H_LED_Void_LedOff(u8 Copy_u8_Led)
{
	switch(Copy_u8_Led)
		{
		  case LED0:
			  M_DIO_Void_SetPinValue(LED_0,LOW);
			 break;

		  case LED1:
			  M_DIO_Void_SetPinValue(LED_1,LOW);
			  break;

		  case LED2 :
			  M_DIO_Void_SetPinValue(LED_2,LOW);
			  break;

		}
}
void H_LED_Void_LedTogg(u8 Copy_u8_Led)
{
	switch(Copy_u8_Led)
			{
			  case LED0:
                 M_DIO_Void_ToggPin(LED_0);

				 break;

			  case LED1:
				  M_DIO_Void_ToggPin(LED_1);
				  break;

			  case LED2 :
				  M_DIO_Void_ToggPin(LED_2);
				  break;

			}
}

