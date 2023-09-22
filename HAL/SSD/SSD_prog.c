#include "SSD_interface.h"

void H_SSD_Void_SSDInit()
 {
	 M_DIO_Void_SetPinDirection(SSD_A,OUTPUT);
	 M_DIO_Void_SetPinDirection(SSD_B,OUTPUT);
	 M_DIO_Void_SetPinDirection(SSD_C,OUTPUT);
	 M_DIO_Void_SetPinDirection(SSD_D,OUTPUT);

	 M_DIO_Void_SetPinDirection(SSD_EN2,OUTPUT);
	 M_DIO_Void_SetPinDirection(SSD_EN1,OUTPUT);
 }
 void H_SSD_Void_SSD_Display(u8 Copy_u8_Num)
 {
	u8 Local_u8_Tens = Copy_u8_Num / 10;
	u8 Local_u8_Ones = Copy_u8_Num % 10;
	u32 Local_u8_Counter;
     for(Local_u8_Counter=0;Local_u8_Counter<200;Local_u8_Counter++)
     {
		M_DIO_Void_SetPinValue(SSD_A, GET_BIT(Local_u8_Tens, 0));
		M_DIO_Void_SetPinValue(SSD_B, GET_BIT(Local_u8_Tens, 1));
		M_DIO_Void_SetPinValue(SSD_C, GET_BIT(Local_u8_Tens, 2));
		M_DIO_Void_SetPinValue(SSD_D, GET_BIT(Local_u8_Tens, 3));

        M_DIO_Void_SetPinValue(SSD_EN1, HIGH);
        _delay_ms(1);
        M_DIO_Void_SetPinValue(SSD_EN1, LOW);



		M_DIO_Void_SetPinValue(SSD_A, GET_BIT(Local_u8_Ones, 0));
		M_DIO_Void_SetPinValue(SSD_B, GET_BIT(Local_u8_Ones, 1));
		M_DIO_Void_SetPinValue(SSD_C, GET_BIT(Local_u8_Ones, 2));
		M_DIO_Void_SetPinValue(SSD_D, GET_BIT(Local_u8_Ones, 3));

		M_DIO_Void_SetPinValue(SSD_EN2, HIGH);
		_delay_ms(1);
		M_DIO_Void_SetPinValue(SSD_EN2, LOW);

     }

}



