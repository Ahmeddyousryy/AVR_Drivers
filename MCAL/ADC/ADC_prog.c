/*
 * ADC_prog.c
 *
 *  Created on: Oct 3, 2022
 *      Author: HP
 */
#include "ADC_interface.h"

void M_ADC_Void_ADCInit(void)
{
#if ADC_VREF  ==  AVCC
	SET_BIT(ADMUX_REG, REFS0_BIT);
	CLR_BIT(ADMUX_REG, REFS1_BIT);

#elif ADC_VREF == AREF

	CLR_BIT(ADMUX_REG,REFS0_BIT);
	CLR_BIT(ADMUX_REG,REFS1_BIT);
#elif ADC_VREF  == _2V5
	SET_BIT(ADMUX_REG,REFS0_BIT);
	SET_BIT(ADMUX_REG,REFS1_BIT);
#endif
	CLR_BIT(ADMUX_REG,ADLAR_BIT);   // to select right shift adjust
#if ADC_PRESCALER_DV   ==  128
	SET_BIT(ADCSRA_REG,ADPS0_BIT);
	SET_BIT(ADCSRA_REG,ADPS1_BIT);
	SET_BIT(ADCSRA_REG,ADPS2_BIT);
#elif ADC_PRESCALER_DV == 64
	SET_BIT(ADCSRA_REG,ADPS0_BIT);
	SET_BIT(ADCSRA_REG,ADPS1_BIT);
	SET_BIT(ADCSRA_REG,ADPS2_BIT);
#endif

	SET_BIT(ADCSRA_REG,ADATE_BIT);   // to enable auto trigger mode
	SET_BIT(ADCSRA_REG,ADEN_BIT);   // to enable ADC circuit
	SET_BIT(ADCSRA_REG,ADSC_BIT);   // to start conversion


}
u16 M_ADC_u16_ADCRead(u8 Copy_u8_ADCChannel)
{
	ADMUX_REG = (ADMUX_REG & ADC_MASK) | Copy_u8_ADCChannel;
	while(GET_BIT(ADCSRA_REG,ADIF_BIT)==ADC_STIL_READING);
	return ADCVALUE_REG;





}
