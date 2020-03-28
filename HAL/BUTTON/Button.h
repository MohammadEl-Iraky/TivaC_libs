/*********************************************************************************************************************
 * Button.h
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef HAL_BUTTON_BUTTON_H_
#define HAL_BUTTON_BUTTON_H_

/*********************************************************************************************************************
 *                                                  Includes
 ********************************************************************************************************************/

#include <HAL/BUTTON/Button_Cfg.h>
#include "MCAL/DIO/Dio.h"

/*********************************************************************************************************************
 *                                             Button data types
 ********************************************************************************************************************/

typedef uint8 Button_StateMode;
#define ACTIVE_LOW      (0x00U)
#define ACTIVE_HIGH     (0x01U)

typedef uint8 Button_StateType;
#define RELEASED        (0x00U)
#define PRESSED         (0x01U)

typedef uint8 Button_ReturnType;

typedef uint8 Button_Id;

typedef uint8 Button_CountType;

typedef struct
{
    Dio_ChannelType         Channel;
    Button_StateMode        Mode;
    Button_StateType        Active_State;
}Button_ConfigType;

/*********************************************************************************************************************
 *                                         Button function prototypes
 ********************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Button_ReadChannel
 *  Parameters(in): ButtonId: Id of the dio channel
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: PRESSED, The switch is pressed
 *                RELEASED, The switch of the pin is low 0v
 *  Description: Returns the state of the selected switch and it fixes debouncing using
 *               a sampling method and the user selects the desired number of samples
 *****************************************************************************************/

Button_ReturnType Button_ReadChannel( Button_Id ButtonId );


#endif /* HAL_BUTTON_BUTTON_H_ */
