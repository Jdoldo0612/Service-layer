/*
 * Logger.h
 *
 *  Created on: Jun 18, 2017
 *      Author: Jordan
 */

#ifndef LOGGING_SERVICES_LOGGINGSERVICES_H_
#define LOGGING_SERVICES_LOGGINGSERVICES_H_

typedef enum
{
   eEvent = 0,
   eNonCritical_Fault,
   eReducedFunctionality_Fault,
   eCritical_Fault
}eFaultLevel;

/**********************************************************************************************************************
   Function Name: InitializeLogger
   Purpose: Initializes the logger by loading any existing logs from persistent data storage.
   Parameters:
           None
   Return:
           None
**********************************************************************************************************************/
void InitializeLogger(void);

/**********************************************************************************************************************
   Function Name: LogFault_Event
   Purpose: Logs a new fault or event
   Parameters:
           faultID - The ID number of the fault that should be flagged.
           faultState - TRUE of the fault should be set, FALSE if it should be cleared.
   Return:
           None
**********************************************************************************************************************/
void LogFault_Event(UINT16 faultID, BOOLEAN faultState);

/**********************************************************************************************************************
   Function Name: IsFaultFailed
   Purpose: Checks if the passed in fault ID is in the failed state.
   Parameters:
           faultID - The ID number of the fault that is going to be checked
   Return:
           BOOLEAN - TRUE if the fault is failed, FALSE otherwise.
**********************************************************************************************************************/
BOOLEAN IsFaultFailed(UINT16 faultID);

/**********************************************************************************************************************
   Function Name: TransmitFaultEventLog
   Purpose: Transmits the entire event/fault log over USB. This function is used ot view the events of the log on a PC.
   Parameters:
           None
   Return:
           None
**********************************************************************************************************************/
void TransmitFaultEventLog(void);

#endif /* LOGGING_SERVICES_LOGGINGSERVICES_H_ */
