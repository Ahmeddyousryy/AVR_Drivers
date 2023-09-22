#include "GI_interface.h"

void M_GI_Void_GlobalInterruptEnable(void)
{
	SET_BIT(SREG,7);
}
void M_GI_Void_GlobalInterruptDisable(void)
{
	CLR_BIT(SREG,7);
}

