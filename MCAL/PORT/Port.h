/*********************************************************************************************************************
 * Port.h
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef MCAL_PORT_PORT_H_
#define MCAL_PORT_PORT_H_

#include "Common/Gpio_Regs.h"
#include "Common/Bit_Math.h"
#include "Common/Std_Types.h"
#include "Port_Cfg.h"

/*******************************************************************************************************************
 *                                                      Port types
 *******************************************************************************************************************/

/* Typedef variable Port_PinType shall be used for the symbolic name of a Port Pin. */
typedef uint8   Port_PinType;

/* Typedef variable Port_PinDirectionType is a type for defining the direction of a Port Pin.
 * having range as PORT_PIN_IN and PORT_PIN_OUT.
 */
typedef uint8 Port_PinDirectionType;

/* Typedef variable Port_PinModeType is a type for defining the mode of a Port Pin.
 * having range as the available Port pin modes
 */
typedef uint8 Port_PinModeType;

/* Typedef variable Port_PinDirectionType is a type for defining the initial value of a Port Pin.
 * having range as STD_HIGH and STD_LOW.
 */
typedef uint8 Port_PinLevelInitValue;

/* Typedef variable Port_PinPullUp is a type for the Pullup resistor functionality of a Port Pin. */
typedef uint8 Port_PinInternalResistor;

/* Typedef variable Port_PinOpenDrain is a type for the Open drain functionality of a Port Pin. */
typedef uint8 Port_PinOpenDrain;


typedef struct
{
    Port_PinType                        PinType;
    Port_PinDirectionType               Direction;
    Port_PinModeType                    Mode;
    Port_PinLevelInitValue              InitValue;
    Port_PinInternalResistor            InternalRes;
    Port_PinOpenDrain                   OpenDrain;
}Port_ConfigChannel;

/* The type Port_ConfigType is a type for the external data structure containing the initialization data for the Port Driver. */
typedef struct
{
    Port_ConfigChannel  Channels[PORT_MAX_NO_OF_PINS];
}Port_ConfigType;

/*******************************************************************************************************************
*                                                   Port Function prototypes
 *******************************************************************************************************************/

/******************************************************************************************
 *  Service Name: Port_Init
 *  Parameters(in): ConfigPtr: Pointer to configuration set.
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Initializes the Port Driver module.
 *****************************************************************************************/

void Port_Init( const Port_ConfigType* ConfigPtr );

/******************************************************************************************
 *  Service Name: Port_SetPinDirection
 *  Parameters(in): Pin: Port Pin ID number
 *                  Direction: Port pin direction
 *  Parameters(in/out): None
 *  Parameters(out): None
 *  Return value: None
 *  Description: Sets the Port Pin direction
 *****************************************************************************************/

void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction );

/*******************************************************************************************************************
 *                                          Port extern variables
 *******************************************************************************************************************/

extern const Port_ConfigType Port_Configuration;

#endif /* MCAL_PORT_PORT_H_ */
