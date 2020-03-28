/*********************************************************************************************************************
 * Led_Cfg.h
 * Created on: Mar 29, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef HAL_LED_LED_CFG_H_
#define HAL_LED_LED_CFG_H_

#include "MCAL/PORT/Port_Cfg.h"

#define NO_OF_LEDS  3

#define LED_1_PIN   PORT_F_PIN_3        /* Green LED */
#define LED_2_PIN   PORT_F_PIN_2        /* Blue LED */
#define LED_3_PIN   PORT_F_PIN_1        /* Red LED */


#define GREEN_LED   0
#define BLUE_LED    1
#define RED_LED     2


#endif /* HAL_LED_LED_CFG_H_ */
