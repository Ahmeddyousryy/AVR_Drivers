#include "BUZZER_interface.h"

 void H_BUZZER_Void_BuzzerInit()
 {
	M_DIO_Void_SetPinDirection(BUZZER,OUTPUT);
 }

 void H_BUZZER_Void_BuzzerOn()
  {
 	M_DIO_Void_SetPinValue(BUZZER,HIGH);
  }
 void H_BUZZER_Void_BuzzerOff()
  {
 	M_DIO_Void_SetPinValue(BUZZER,LOW);
  }
