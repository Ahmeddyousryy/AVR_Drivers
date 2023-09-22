/*
 * PB_config.h
 *
 *  Created on: Sep 7, 2022
 *      Author: HP
 */

#ifndef PB_PB_CONFIG_H_
#define PB_PB_CONFIG_H_
#define PB_0					 PB0_PIN
#define PB_1				     PD6_PIN
#define PB_2       		    	 PD2_PIN
/*
 SELECT PB_MODE OPTION :    ACTIVE_HIGH    ACTIVE_LOW

 */
#define  PB_MODE                      ACTIVE_HIGH

/*
 SELECT PB_DEBOUNCING_TIME IN MILI SECOND
 */
#define  PB_DEBOUNCING_TIME              120

#endif /* PB_PB_CONFIG_H_ */
