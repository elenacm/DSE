/*******************************************************************************
* File Name: Paso_actual.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware to read the value of a Status 
*  Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Paso_actual.h"

#if !defined(Paso_actual_sts_sts_reg__REMOVED) /* Check for removal by optimization */


/*******************************************************************************
* Function Name: Paso_actual_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The current value in the Status Register.
*
*******************************************************************************/
uint8 Paso_actual_Read(void) 
{ 
    return Paso_actual_Status;
}


/*******************************************************************************
* Function Name: Paso_actual_InterruptEnable
********************************************************************************
*
* Summary:
*  Enables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void Paso_actual_InterruptEnable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    Paso_actual_Status_Aux_Ctrl |= Paso_actual_STATUS_INTR_ENBL;
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: Paso_actual_InterruptDisable
********************************************************************************
*
* Summary:
*  Disables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void Paso_actual_InterruptDisable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    Paso_actual_Status_Aux_Ctrl &= (uint8)(~Paso_actual_STATUS_INTR_ENBL);
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: Paso_actual_WriteMask
********************************************************************************
*
* Summary:
*  Writes the current mask value assigned to the Status Register.
*
* Parameters:
*  mask:  Value to write into the mask register.
*
* Return:
*  None.
*
*******************************************************************************/
void Paso_actual_WriteMask(uint8 mask) 
{
    #if(Paso_actual_INPUTS < 8u)
    	mask &= ((uint8)(1u << Paso_actual_INPUTS) - 1u);
	#endif /* End Paso_actual_INPUTS < 8u */
    Paso_actual_Status_Mask = mask;
}


/*******************************************************************************
* Function Name: Paso_actual_ReadMask
********************************************************************************
*
* Summary:
*  Reads the current interrupt mask assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The value of the interrupt mask of the Status Register.
*
*******************************************************************************/
uint8 Paso_actual_ReadMask(void) 
{
    return Paso_actual_Status_Mask;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
