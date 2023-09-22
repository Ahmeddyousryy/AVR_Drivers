/*
 * WDT_prog.c
 *
 *  Created on: Sep 24, 2022
 *      Author: HP
 */
#include "WDT_interface.h"
void M_DIO_Void_WDTInit(void)
{
	SET_BIT(WDTCR,3);

	SET_BIT(WDTCR,0);
	SET_BIT(WDTCR,1);
	SET_BIT(WDTCR,2);

}
void M_DIO_Void_WDTFresh(void)
{
asm("WDR");
}
