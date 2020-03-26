/*********************************************************************************************************************
 * Dio.c
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#include "Dio.h"

/*******************************************************************************************************************
 *                                          Dio user-defined Macros
 *******************************************************************************************************************/

#define GET_PORT_FROM_CHANNEL_ID( CHANNEL_ID )    ( ( CHANNEL_ID ) / 8 )
#define GET_PIN_FROM_CHANNEL_ID( CHANNEL_ID )     ( ( CHANNEL_ID ) % 8 )

/*******************************************************************************************************************
 *                                           Dio function definitions
 *******************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Dio_ReadChannel
 *  Parameters(in): ChannelId: Id of the dio channel
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: STD_HIGH, The value of the pin is high 3.3v
 *                STD_LOW, The value of the pin is low 0v
 *  Description: Returns the value of the specified Dio Channel
 *****************************************************************************************/

Dio_LevelType Dio_ReadChannel( Dio_ChannelType ChannelId )
{
    uint8 result;
    uint8 Port_no;
    uint8 Pin_no;
    volatile uint32 * PortDataPtr = NULL_PTR;

    Port_no = GET_PORT_FROM_CHANNEL_ID( ChannelId );
    Pin_no = GET_PIN_FROM_CHANNEL_ID( ChannelId );

    switch( Port_no )   /* Get the Port address into the PortDataPtr variable */
    {
        case 0: PortDataPtr = &HW_REG( GPIOA_BASE + GPIO_DATA_OFFSET );          /* Port A data address */
                break;
        case 1: PortDataPtr = &HW_REG( GPIOB_BASE + GPIO_DATA_OFFSET );          /* Port B data address */
                break;
        case 2: PortDataPtr = &HW_REG( GPIOC_BASE + GPIO_DATA_OFFSET );          /* Port C data address */
                break;
        case 3: PortDataPtr = &HW_REG( GPIOD_BASE + GPIO_DATA_OFFSET );          /* Port D data address */
                break;
        case 4: PortDataPtr = &HW_REG( GPIOE_BASE + GPIO_DATA_OFFSET );          /* Port E data address */
                break;
        case 5: PortDataPtr = &HW_REG( GPIOF_BASE + GPIO_DATA_OFFSET );          /* Port F data address */
                break;
    }
    result = GET_BIT( *PortDataPtr, Pin_no );       /* Value to be returned from this API */
    return result;
}

/******************************************************************************************
 *  Service Name: Dio_WriteChannel
 *  Parameters(in): ChannelId: Id of the Dio channel
 *                  Level: Value to be written
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Set the level of the selected Dio Channel
 *****************************************************************************************/

void Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level)
{
     uint8 Port_no;
     uint8 Pin_no;
     volatile uint32 * PortDataPtr = NULL_PTR;

     Port_no = GET_PORT_FROM_CHANNEL_ID( ChannelId );
     Pin_no = GET_PIN_FROM_CHANNEL_ID( ChannelId );

     switch( Port_no )   /* Get the Port address into the PortDataPtr variable */
     {
         case 0: PortDataPtr = &HW_REG( GPIOA_BASE + GPIO_DATA_OFFSET );             /* Port A data address */
                 break;
         case 1: PortDataPtr = &HW_REG( GPIOB_BASE + GPIO_DATA_OFFSET );             /* Port B data address */
                 break;
         case 2: PortDataPtr = &HW_REG( GPIOC_BASE + GPIO_DATA_OFFSET );             /* Port C data address */
                 break;
         case 3: PortDataPtr = &HW_REG( GPIOD_BASE + GPIO_DATA_OFFSET );             /* Port D data address */
                 break;
         case 4: PortDataPtr = &HW_REG( GPIOE_BASE + GPIO_DATA_OFFSET );             /* Port E data address */
                 break;
         case 5: PortDataPtr = &HW_REG( GPIOF_BASE + GPIO_DATA_OFFSET );             /* Port F data address */
                 break;
     }

    if( STD_HIGH == Level )
    {
        /* Write a logical high value at the requested Pin */
        SET_BIT( *PortDataPtr, Pin_no );
    }
    else
    {
        /* Write a logical low value at the requested Pin */
        CLEAR_BIT( *PortDataPtr, Pin_no );
    }
}


/******************************************************************************************
 *  Service Name: Dio_FlipChannel
 *  Parameters(in): ChannelId: Id of the Dio Channel
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: STD_HIGH, The value of the pin is high 3.3v
 *                STD_LOW, The value of the pin is low 0v
 *  Description: Flip the level of the selected Dio Channel group and return the new value
 *****************************************************************************************/

#if FLIP_CHANNEL_API == STD_ON
Dio_LevelType Dio_FlipChannel( Dio_ChannelType ChannelId )
{
    uint8 Port_no;
    uint8 Pin_no;
    uint8 result;
    volatile uint32 * PortDataPtr = NULL_PTR;

    Port_no = GET_PORT_FROM_CHANNEL_ID( ChannelId );
    Pin_no = GET_PIN_FROM_CHANNEL_ID( ChannelId );

    switch( Port_no )   /* Get the Port address into the PortDataPtr variable */
    {
        case 0: PortDataPtr = &HW_REG( GPIOA_BASE + GPIO_DATA_OFFSET );             /* Port A data address */
                break;
        case 1: PortDataPtr = &HW_REG( GPIOB_BASE + GPIO_DATA_OFFSET );             /* Port B data address */
                break;
        case 2: PortDataPtr = &HW_REG( GPIOC_BASE + GPIO_DATA_OFFSET );             /* Port C data address */
                break;
        case 3: PortDataPtr = &HW_REG( GPIOD_BASE + GPIO_DATA_OFFSET );             /* Port D data address */
                break;
        case 4: PortDataPtr = &HW_REG( GPIOE_BASE + GPIO_DATA_OFFSET );             /* Port E data address */
                break;
        case 5: PortDataPtr = &HW_REG( GPIOF_BASE + GPIO_DATA_OFFSET );             /* Port F data address */
                break;
    }


    if( STD_HIGH == GET_BIT( *PortDataPtr, Pin_no ) )
    {
       /* Write a logical low value at the requested Pin */
       CLEAR_BIT( *PortDataPtr, Pin_no );
       result = STD_LOW;
    }
    else
    {
       /* Write a logical high value at the requested Pin */
       SET_BIT( *PortDataPtr, Pin_no );
       result = STD_HIGH;
    }
    return result;
}
#endif
