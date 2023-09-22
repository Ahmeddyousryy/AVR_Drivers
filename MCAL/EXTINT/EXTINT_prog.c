/*
 * EXTINT_prog.c
 *
 *  Created on: Sep 17, 2022
 *      Author: HP
 */
#include "EXTINT_interface.h"
void(*ExtInt0_CallBack)(void);
void(*ExtInt1_CallBack)(void);
void(*ExtInt2_CallBack)(void);
void M_EXTINT_Void_ExtIntInit(u8 Copy_u8_ExtIntChannel)
{
	switch (Copy_u8_ExtIntChannel)
	{
	case INT0_CHANNEL :
#if EXTINT0_SENSE_CONTROL_MODE == RAISING_EDGE
	SET_BIT(MCUCR,ISC00_BIT);
	SET_BIT(MCUCR,ISC01_BIT);
#elif EXTINT0_SENSE_CONTROL_MODE == FALLING_EDGE
	    CLR_BIT(MCUCR,ISC00_BIT);
		SET_BIT(MCUCR,ISC01_BIT);
#elif EXTINT0_SENSE_CONTROL_MODE ==  LOW_LEVEL
		CLR_BIT(MCUCR,ISC00_BIT);
	    CLR_BIT(MCUCR,ISC01_BIT);
#elif EXTINT0_SENSE_CONTROL_MODE == LOGICAL_CHANGE
	    SET_BIT(MCUCR,ISC00_BIT);
	    CLR_BIT(MCUCR,ISC01_BIT);

#endif

    SET_BIT(GICR,6);    //local interrupt
	break;

	case INT1_CHANNEL :
		break;

	case INT2_CHANNEL :
		break;

   }


}

void M_EXTINT_Void_ExtIntSetCallBack(u8 Copy_u8_ExtIntChannel,void(*ptr)(void))
{
	switch(Copy_u8_ExtIntChannel)
	{
	case INT0_CHANNEL :
	   ExtInt0_CallBack=ptr;
	     break;
	case INT1_CHANNEL :
		ExtInt1_CallBack=ptr;
		break;
	case INT2_CHANNEL :
		ExtInt2_CallBack=ptr;
		break;

	}
}


ISR (INT0_vect)
{
	ExtInt0_CallBack();

}
ISR (INT1_vect)
{
	ExtInt1_CallBack();

}
ISR (INT2_vect)
{
	ExtInt2_CallBack();

}


