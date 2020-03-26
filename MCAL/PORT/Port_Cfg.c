/*********************************************************************************************************************
 * Port_Cfg.c
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#include "Port.h"

const Port_ConfigType Port_Configuration =
{
{
/***********************************************************************************************************************************************************************
*       Pin       *    Direction    *        Mode     *  Initial Value  *    Internal Res   *    Open Drain          *
***********************************************************************************************************************************************************************/

{   PORT_A_PIN_0,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_1,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_2,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_3,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_4,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_HIGH,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_5,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_6,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_A_PIN_7,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },

{   PORT_B_PIN_0,    PORT_PIN_OUT,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_1,    PORT_PIN_OUT,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_2,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_3,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_4,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_5,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_6,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_B_PIN_7,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },

{   PORT_C_PIN_0,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_1,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_2,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_3,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_4,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_5,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_6,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_C_PIN_7,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },

{   PORT_D_PIN_0,    PORT_PIN_OUT,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_1,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_2,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_3,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_4,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_5,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_6,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_D_PIN_7,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },

{   PORT_E_PIN_0,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_1,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_2,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_3,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_4,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_5,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_6,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_E_PIN_7,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },

{   PORT_F_PIN_0,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_F_PIN_1,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_F_PIN_2,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,       PUSH_PULL           },
{   PORT_F_PIN_3,    PORT_PIN_OUT,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,      PUSH_PULL           },
{   PORT_F_PIN_4,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_F_PIN_5,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_F_PIN_6,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           },
{   PORT_F_PIN_7,    PORT_PIN_IN,       PORTX_PINX_DIO,     STD_LOW,        NO_PULL_RES,        PUSH_PULL           }


}
};




