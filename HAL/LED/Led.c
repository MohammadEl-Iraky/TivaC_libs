/*********************************************************************************************************************
 * Led.c
 * Created on: Mar 29, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#include "Led.h"

extern Led_ConfigType Led_Config[NO_OF_LEDS];


/*********************************************************************************************************************
 *                                         Led function definitions
 ********************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Led_TurnOn
 *  Parameters(in): LedId: Id of the Led index
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Sets the selected Led pin to high
 *****************************************************************************************/

void Led_TurnOn( Led_Id LedId )
{
    if( ACTIVE_HIGH == Led_Config[LedId].Mode )
    {
        Dio_WriteChannel( Led_Config[LedId].Channel , STD_HIGH );
    }
    else
    {
        Dio_WriteChannel( Led_Config[LedId].Channel , STD_LOW );
    }
}


/******************************************************************************************
 *  Service Name: Led_TurnOff
 *  Parameters(in): LedId: Id of the Led index
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Sets the selected Led pin to low
 *****************************************************************************************/

void Led_TurnOff( Led_Id LedId )
{
    if( ACTIVE_HIGH == Led_Config[LedId].Mode )
    {
        Dio_WriteChannel( Led_Config[LedId].Channel , STD_LOW );
    }
    else
    {
        Dio_WriteChannel( Led_Config[LedId].Channel , STD_HIGH );
    }
}

/******************************************************************************************
 *  Service Name: Led_Toggle
 *  Parameters(in): LedId: Id of the Led index
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Toggles the selected Led pin
 *****************************************************************************************/

void Led_Toggle( Led_Id LedId )
{
    Dio_FlipChannel( Led_Config[LedId].Channel );
}


