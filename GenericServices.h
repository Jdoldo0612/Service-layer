/*
 * GenericServices.h
 *
 *  Created on: Jun 21, 2017
 *      Author: Jordan
 */

#ifndef GENERICSERVICES_GENERICSERVICES_H_
#define GENERICSERVICES_GENERICSERVICES_H_

#include "SharedTypes.h"

/**********************************************************************************************************************
   Function Name: U32_Max
   Purpose: Calculates the maximum of 2 32-bit unsigned integers.
   Parameters:
           Value1 - The first value to be compared
           Value2 - The second value to be compared
   Return:
           UINT32 - The maximum value between the two.
**********************************************************************************************************************/
UINT32 U32_Max(UINT32 Value1, UINT32 Value2);

/**********************************************************************************************************************
   Function Name: S32_Max
   Purpose: Calculates the maximum of 2 32-bit signed integers.
   Parameters:
           Value1 - The first value to be compared
           Value2 - The second value to be compared
   Return:
           SINT32 - The maximum value between the two.
**********************************************************************************************************************/
SINT32 S32_Max(UINT32 Value1, UINT32 Value2);

#endif /* GENERICSERVICES_GENERICSERVICES_H_ */
