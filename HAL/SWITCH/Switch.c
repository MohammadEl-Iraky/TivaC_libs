/*********************************************************************************************************************
 * Switch.c
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#include "Switch.h"

/*********************************************************************************************************************
 *                                         Switch global variables
 ********************************************************************************************************************/

static Switch_CountType g_SwitchHighCount[NO_OF_SWITCHES] = {};
static Switch_CountType g_SwitchLowCount[NO_OF_SWITCHES] = {};

extern Switch_ConfigType Switch_Config[ NO_OF_SWITCHES ];

/*********************************************************************************************************************
 *                                         Switch function definitions
 ********************************************************************************************************************/

Switch_ReturnType Switch_ReadChannel( Switch_Id SwitchId )
{
    /* Read the Dio Button pin and if it's High, increment the High counter by 1 and clear the Low counter
     * If it's low, increment the Low counter by 1 and clear the High counter
     */
    if( Dio_ReadChannel( Switch_Config[SwitchId].Channel ) == STD_HIGH )
    {
        g_SwitchHighCount[SwitchId]++;
        g_SwitchLowCount[SwitchId] = 0;
    }
    else
    {
        g_SwitchLowCount[SwitchId]++;
        g_SwitchHighCount[SwitchId] = 0;
    }

    /* Check if you get the desired number of repetitive readings to get rid of button debouncing */
    if( SWITCH_DEBOUNCE_PEAK <= g_SwitchHighCount[SwitchId] )
    {
        /* Check the current switch hardware connection whether it's Active high or active low and adjust the button status accordingly */
        if( ACTIVE_HIGH == Switch_Config[SwitchId].Mode )
        {
            Switch_Config[SwitchId].Active_State = PRESSED;
        }
        else
        {
            Switch_Config[SwitchId].Active_State = RELEASED;
        }
        g_SwitchHighCount[SwitchId] = 0;
    }
    else if( SWITCH_DEBOUNCE_PEAK <= g_SwitchLowCount[SwitchId] )
    {
        /* Check the current switch hardware connection whether it's Active high or active low and adjust the button status accordingly */
        if( ACTIVE_HIGH == Switch_Config[SwitchId].Mode )
        {
            Switch_Config[SwitchId].Active_State = RELEASED;
        }
        else
        {
            Switch_Config[SwitchId].Active_State = PRESSED;
        }
    }
    else
    {
        /* Do nothing */
    }
    return Switch_Config[SwitchId].Active_State;
}

