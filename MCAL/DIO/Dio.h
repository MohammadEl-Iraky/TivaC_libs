/*********************************************************************************************************************
 * Dio.h
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_

/*********************************************************************************************************************
 *                                                  Includes
 ********************************************************************************************************************/

#include "Common/Bit_Math.h"
#include "Common/Std_Types.h"
#include "Common/Gpio_Regs.h"
#include "Dio_cfg.h"

/*********************************************************************************************************************
 *                                               Dio Data types
 ********************************************************************************************************************/

/* Typedef for Dio_ChannelType used by Dio APIs */
typedef uint8 Dio_ChannelType ;

/* Typedef for Dio_PortType used by Dio APIs */
typedef uint8 Dio_PortType ;

/* Typedef for Dio_LevelType used by Dio APIs */
typedef uint8 Dio_LevelType ;           /* Dio level type */

/* Typedef for Dio_PortLevelType used by Dio APIs */
typedef uint8 Dio_PortLevelType;

/* Typedef for Dio_ChannelGroupType used by Dio APIs */
typedef struct
{
    uint32 mask;
    uint8 offset;
    Dio_PortType port;
}Dio_ChannelGroupType;

/*******************************************************************************************************************
 *                                           Dio function prototypes
 *******************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Dio_ReadChannel
 *  Parameters(in): channelId: Id of the dio channel
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: STD_HIGH, The value of the pin is high 3.3v
 *                STD_LOW, The value of the pin is low 0v
 *  Description: Returns the value of the specified Dio Channel
 *****************************************************************************************/

Dio_LevelType Dio_ReadChannel( Dio_ChannelType ChannelId );

/******************************************************************************************
 *  Service Name: Dio_WriteChannel
 *  Parameters(in): channelId: Id of the Dio channel
 *                  Level: Value to be written
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Set the level of the selected Dio Channel
 *****************************************************************************************/

void Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level);

/******************************************************************************************
 *  Service Name: Dio_FlipChannel
 *  Parameters(in): ChannelId: Id of the Dio Channel
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: STD_HIGH, The value of the pin is high 3.3v
 *                STD_LOW, The value of the pin is low 0v
 *  Description: Flip the level of the selected Dio Channel group and return the new value
 *****************************************************************************************/

Dio_LevelType Dio_FlipChannel( Dio_ChannelType ChannelId );

#endif /* MCAL_DIO_DIO_H_ */
