/*********************************************************************************************************************
 * Led.h
 * Created on: Mar 29, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_


/*********************************************************************************************************************
 *                                                  Includes
 ********************************************************************************************************************/

#include <HAL/LED/Led_Cfg.h>
#include "MCAL/DIO/Dio.h"

/*********************************************************************************************************************
 *                                             Led data types
 ********************************************************************************************************************/

typedef uint8 Led_StateMode;
#define ACTIVE_LOW      (0x00U)
#define ACTIVE_HIGH     (0x01U)

typedef uint8 Led_Id;

typedef struct
{
    Dio_ChannelType         Channel;
    Led_StateMode           Mode;
}Led_ConfigType;

/*********************************************************************************************************************
 *                                         Led function prototypes
 ********************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Led_TurnOn
 *  Parameters(in): LedId: Id of the Led index
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Sets the selected Led pin to high
 *****************************************************************************************/

void Led_TurnOn( Led_Id LedId );

/******************************************************************************************
 *  Service Name: Led_TurnOff
 *  Parameters(in): LedId: Id of the Led index
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Sets the selected Led pin to low
 *****************************************************************************************/

void Led_TurnOff( Led_Id LedId );

/******************************************************************************************
 *  Service Name: Led_Toggle
 *  Parameters(in): LedId: Id of the Led index
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Toggles the selected Led pin
 *****************************************************************************************/

void Led_Toggle( Led_Id LedId );




#endif /* HAL_LED_LED_H_ */
