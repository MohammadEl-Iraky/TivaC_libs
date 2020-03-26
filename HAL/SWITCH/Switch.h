/*********************************************************************************************************************
 * Switch.h
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef HAL_SWITCH_SWITCH_H_
#define HAL_SWITCH_SWITCH_H_

/*********************************************************************************************************************
 *                                                  Includes
 ********************************************************************************************************************/

#include "MCAL/DIO/Dio.h"
#include "HAL/SWITCH/Switch_Cfg.h"

/*********************************************************************************************************************
 *                                             Switch data types
 ********************************************************************************************************************/

typedef uint8 Switch_StateMode;
#define ACTIVE_HIGH     0x00U
#define ACTIVE_LOW      0x00U

typedef uint8 Switch_StateType;
#define RELEASED        0x00U
#define PRESSED         0x01U

typedef uint8 Switch_ReturnType;

typedef uint8 Switch_Id;

typedef uint8 Switch_CountType;

typedef struct
{
    Dio_ChannelType         Channel;
    Switch_StateMode        Mode;
    Switch_StateType        Active_State;
}Switch_ConfigType;

/*********************************************************************************************************************
 *                                         Switch function prototypes
 ********************************************************************************************************************/

Switch_ReturnType Switch_ReadChannel( Switch_Id SwitchId );


#endif /* HAL_SWITCH_SWITCH_H_ */
