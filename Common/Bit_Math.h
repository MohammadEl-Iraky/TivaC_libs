/*********************************************************************************************************************
 * Bit_Math.h
 * Created on: Mar 26, 2020
 * Author: Mohammad Metwally
 ********************************************************************************************************************/

#ifndef COMMON_BIT_MATH_H_
#define COMMON_BIT_MATH_H_

/* A macro for setting a bit */
#define SET_BIT( REG, BIT_NO )           (REG) |= (1<<(BIT_NO))

/* A macro for clearing a bit */
#define CLEAR_BIT( REG, BIT_NO )         (REG) &= (~(1<<(BIT_NO)))

/* A macro for toggling a bit */
#define TOGGLE_BIT( REG, BIT_NO )        (REG) ^= (1<<(BIT_NO))

/* A macro for getting the bit value */
#define GET_BIT( REG, BIT_NO )           (((REG)>>(BIT_NO))&1)


#endif /* COMMON_BIT_MATH_H_ */
