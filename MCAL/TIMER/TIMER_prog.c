/*
 * TIMER_prog.c
 *
 *  Created on: Sep 23, 2022
 *      Author: HP
 */


#include "TIMER_interface.h"
#include "LED_interface.h"
#include <avr/interrupt.h>

u32  TIMER_u32_NumOverFLow = 0;
u32 Timer_u8_NumofCM=0;
void M_TIMER_Void_TimerInit()
{
#if    TIMER_MODE ==  NORMAL_MODE
	CLR_BIT(TCCR0,WGM00_BIT);
	CLR_BIT(TCCR0,WGM01_BIT);
	SET_BIT(TIMSK,TOIE0_BIT);
#elif  TIMER_MODE == CTC_MODE   // clear timer on compare

	CLR_BIT(TCCR0,WGM00_BIT);
    SET_BIT(TCCR0,WGM01_BIT);
    SET_BIT(TIMSK,OCIE0_BIT);
#elif  TIMER_MODE == FAST_PWM_MODE
     SET_BIT(TCCR0,WGM00_BIT);
     SET_BIT(TCCR0,WGM01_BIT);
#elif  TIMER_MODE == PHASE_CORRECT_PWM_MODE
      SET_BIT(TCCR0,WGM00_BIT);
      CLR_BIT(TCCR0,WGM01_BIT);
#endif


}


void M_TIMER_Void_TimerSetTime(u32 Copy_u32_DesiredTime)
{
	 u32 Local_u32_TickTime = 1024 / F_OSC;
	 u32 TotalTick  = (Copy_u32_DesiredTime *1000) / Local_u32_TickTime;
#if TIMER_MODE == NORMAL_MODE

     Local_u32_TickTime = 1024 / F_OSC;
     TotalTick  = (Copy_u32_DesiredTime *1000) / Local_u32_TickTime;
    TIMER_u32_NumOverFLow = TotalTick / 256;

#elif TIMER_MODE == CTC_MODE
    u8 Local_u8_DivValue=255;
    while(Local_u32_TickTime % Local_u8_DivValue)
    {
    	Local_u8_DivValue--;
    }
    OCR0 = Local_u8_DivValue-1;
    Timer_u8_NumofCM = TotalTick / Local_u8_DivValue;
   #endif


}
void M_TIMER_Void_TimerStart(void)
{
	        SET_BIT(TCCR0,CS00_BIT);
		    CLR_BIT(TCCR0,CS01_BIT);
		    SET_BIT(TCCR0,CS02_BIT);
}
void M_TIMER_Void_TimerStop(void)
{
        CLR_BIT(TCCR0,CS00_BIT);
	    CLR_BIT(TCCR0,CS01_BIT);
	    CLR_BIT(TCCR0,CS02_BIT);
}
#if TIMER_MODE == NORMAL_MODE
ISR (TIMER0_OVF_vect)
{
	static u32 Local_u8_Counter=0;
	Local_u8_Counter++;
	if(Local_u8_Counter==TIMER_u32_NumOverFLow)
	{
		H_LED_Void_LedTogg(LED0);
		Local_u8_Counter=0;

	}
}
#elif TIMER_MODE == CTC_MODE
ISR (TIMER0_COMP_vect)
{
	static u32 Local_u8_Counter=0;
	Local_u8_Counter++;
	if(Local_u8_Counter==TIMER_u32_NumOverFLow)
	{
		H_LED_Void_LedTogg(LED0);
		Local_u8_Counter=0;

	}
}
#endif

void M_TIMER_Void_PWMInit(void)
{
	M_DIO_Void_SetPinDirection(OC0,OUTPUT);
#if TIMER_MODE == FAST_PWM_MODE
	   SET_BIT(TCCR0,WGM00_BIT);
	   SET_BIT(TCCR0,WGM01_BIT);
#elif  TIMER_MODE == PHASE_CORRECT_PWM_MODE
      SET_BIT(TCCR0,WGM00_BIT);
      CLR_BIT(TCCR0,WGM01_BIT);
#endif
#if TIMER0_FAST_PWM_MODE == NON_INVERTED
           CLR_BIT(TCCR0,COM00_BIT);
      	   SET_BIT(TCCR0,COM01_BIT);
#elif TIMER0_FAST_PWM_MODE == INVERTED
      	 SET_BIT(TCCR0,COM00_BIT);
      	 SET_BIT(TCCR0,COM01_BIT);
#endif

}

void M_TIMER_Void_PWMStart(void)
{
  M_TIMER_Void_TimerStart();
}
void M_TIMER_Void_PWMStop(void)
{
   M_TIMER_Void_TimerStop();
}
void M_TIMER_Void_SetDutyCycle(u8 Copy_u8_DutyCycle)
{
#if TIMER_MODE == FAST_PWM_MODE
  OCR0 = (Copy_u8_DutyCycle * 256)/100 - 1;
#elif TIMER_MODE == PHASE_CORRECT_PWM_MODE
   OCR0 =(Copy_u8_DutyCycle*255)/100;
#endif
}
