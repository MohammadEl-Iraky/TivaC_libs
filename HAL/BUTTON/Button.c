/*********************************************************************************************************************
 * Button.c
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#include <HAL/BUTTON/Button.h>

/*********************************************************************************************************************
 *                                         Button global variables
 ********************************************************************************************************************/

static Button_CountType g_ButtonHighCount[NO_OF_BUTTONS];
static Button_CountType g_ButtonLowCount[NO_OF_BUTTONS];

extern Button_ConfigType Button_Config[NO_OF_BUTTONS];

/*********************************************************************************************************************
 *                                         Button function definitions
 ********************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Button_ReadChannel
 *  Parameters(in): ButtonId: Id of the Dio channel
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: PRESSED, The switch is pressed
 *                RELEASED, The switch of the pin is low 0v
 *  Description: Returns the state of the selected switch and it fixes debouncing using
 *               a sampling method and the user selects the desired number of samples
 *****************************************************************************************/

Button_ReturnType Button_ReadChannel( Button_Id ButtonId )
{
    /* Read the Dio Button pin and if it's High, increment the High counter by 1 and clear the Low counter
     * If it's low, increment the Low counter by 1 and clear the High counter
     */
    if( Dio_ReadChannel( Button_Config[ButtonId].Channel ) == STD_HIGH )
    {
        g_ButtonHighCount[ButtonId]++;
        g_ButtonLowCount[ButtonId] = 0;
    }
    else
    {
        g_ButtonLowCount[ButtonId]++;
        g_ButtonHighCount[ButtonId] = 0;
    }

    /* Check if you get the desired number of repetitive readings to get rid of button debouncing */
    if( BUTTON_DEBOUNCE_PEAK <= g_ButtonHighCount[ButtonId] )
    {
        /* Check the current switch hardware connection whether it's Active high or active low and adjust the button status accordingly */
        if( ACTIVE_HIGH == Button_Config[ButtonId].Mode )
        {
            Button_Config[ButtonId].Active_State = PRESSED;
        }
        else
        {
            Button_Config[ButtonId].Active_State = RELEASED;
        }
        g_ButtonHighCount[ButtonId] = 0;
    }
    else if( BUTTON_DEBOUNCE_PEAK <= g_ButtonLowCount[ButtonId] )
    {
        /* Check the current switch hardware connection whether it's Active high or active low and adjust the button status accordingly */
        if( ACTIVE_HIGH == Button_Config[ButtonId].Mode )
        {
            Button_Config[ButtonId].Active_State = RELEASED;
        }
        else
        {
            Button_Config[ButtonId].Active_State = PRESSED;
        }
        g_ButtonLowCount[ButtonId] = 0;
    }
    else
    {
        /* Do nothing */
    }
    return Button_Config[ButtonId].Active_State;
}

