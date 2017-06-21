/*
 * MathServices.h
 *
 *  Created on: Jun 17, 2017
 *      Author: Jordan
 */

#ifndef MATHSERVICES_H_
#define MATHSERVICES_H_

#include "SharedTypes.h"
#include "Math.h"
#include "Float.h"

/**********************************************************************************************************************
   Function Name: U16_CalculateAverage
   Purpose: Calculates the average of a set of U16 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of UINT16 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           UINT16 - The calculated average
**********************************************************************************************************************/
UINT16 U16_CalculateAverage(UINT16 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: S16_CalculateAverage
   Purpose: Calculates the average of a set of S16 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of SINT16 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           SINT16 - The calculated average
**********************************************************************************************************************/
SINT16 S16_CalculateAverage(SINT16 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: U32_CalculateAverage
   Purpose: Calculates the average of a set of U32 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of UINT32 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           UINT32 - The calculated average
**********************************************************************************************************************/
UINT32 U32_CalculateAverage(UINT32 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: S32_CalculateAverage
   Purpose: Calculates the average of a set of S32 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of SINT32 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           SINT32 - The calculated average
**********************************************************************************************************************/
SINT32 S32_CalculateAverage(SINT32 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: U64_CalculateAverage
   Purpose: Calculates the average of a set of U64 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of UINT64 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           UINT32 - The calculated average
**********************************************************************************************************************/
UINT64 U64_CalculateAverage(UINT64 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: S64_CalculateAverage
   Purpose: Calculates the average of a set of S64 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of SINT64 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           SINT64 - The calculated average
**********************************************************************************************************************/
SINT64 S64_CalculateAverage(SINT64 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: U32_CalculateStdDev
   Purpose: Calculates the standard deviation of a set of U32 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of UINT32 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           UINT32 - The calculated standard deviation
**********************************************************************************************************************/
UINT32 U32_CalculateStdDev(UINT32 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: S32_CalculateStdDev
   Purpose: Calculates the standard deviation of a set of S32 values.
   Parameters:
           pDataPtr - Pointer to the first element in an array of SINT32 values
           dataLength - The number of pieces of data to be averaged
                        Note: This length cannot exceed 100.
   Return:
           SINT32 - The calculated standard deviation
**********************************************************************************************************************/
SINT32 S32_CalculateStdDev(SINT32 *pDataPtr, UINT16 dataLength);

/**********************************************************************************************************************
   Function Name: S32_CalculateStdDev
   Purpose: Calculates the standard deviation of a set of S32 values.
   Parameters:
           pSignalPtr - Pointer to the first element in a floating point array where the signal is held
           signalLength - The amount of data points in the signal
                        Note: This length cannot exceed 100.
           pSystemPtr - Pointer to the first element in a floating point array where the system is held
           systemLength - The amount of data points in the system
                        Note: This length cannot exceed 100.
           pOutput - Pointer to the first element in a floating point array where the result of the convolution
                     will be stored.
                        Note: This array must be at least the length of the signal plus the length of the system.
   Return:
           None
**********************************************************************************************************************/
void CalculateConvolution(float *pSignalPtr, UINT16 signalLength, float *pSystemPtr, UINT16 systemLength, float *pOutput);

/**********************************************************************************************************************
   Function Name: CalculateFFT
   Purpose: Calculates the forward FFT of the passed in data.
   Parameters:
           pSignalReal - Pointer to the first element in the array of the real portion of the signal
           pSignalImaginary - Pointer to the first element in the array of the imaginary portion of the signal
           signalLength - The length of the signal
           pOutput - Pointer to the first element in the array where the output will be stored, this array must be at
                     least the length of the signal.
   Return:
           None
**********************************************************************************************************************/
void CalculateFFT(float *pSignalReal, float *pSignalImaginary, UINT16 signalLength, float *pOutput);

/**********************************************************************************************************************
   Function Name: CalculateSlopeAndIntercept
   Purpose: Calculates the slope and intercept from the set of X and Y values passed in. Returns the Slope, and stores
            the offset in a passed in pointer.
   Parameters:
           x1 - The first x-value to calculate the slope and intercept from
           y1 - The first y-value to calculate the slope and intercept from
           x2 - The second x-value to calculate the slope and intercept from
           x2 - The second y-value to calculate the slope and intercept from
           pIntercept - Pointer to where the intercept will be stored.
   Return:
           float - The calculated slope
**********************************************************************************************************************/
float CalculateSlopeAndIntercept(SINT32 x1, SINT32 y1, SINT32 x2, SINT32 y2, float *pIntercept);


#endif /* MATHSERVICES_H_ */
