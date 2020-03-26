/*********************************************************************************************************************
 * Std_Types.h
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef COMMON_STD_TYPES_H_
#define COMMON_STD_TYPES_H_

#define STD_HIGH             0x01        /* Physical state 5V or 3.3V */
#define STD_LOW              0x00        /* Physical state 0V */

#define STD_ACTIVE           0x01        /* Logical state active */
#define STD_IDLE             0x00        /* Logical state idle */

#define STD_ON               0x01
#define STD_OFF              0x00

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned long       uint32;
typedef unsigned long long  uint64;

typedef signed char         sint8;
typedef signed short        sint16;
typedef signed long         sint32;
typedef signed long long    sint64;

typedef float               float32;
typedef double              float64;

#define NULL_PTR            ((void *)0)

#define HW_REG(reg)         (*((volatile uint32 *)(reg)))


#endif /* COMMON_STD_TYPES_H_ */
