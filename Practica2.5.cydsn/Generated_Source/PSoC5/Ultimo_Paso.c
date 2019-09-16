/*******************************************************************************
* File Name: Ultimo_Paso.c  
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

#include "Ultimo_Paso.h"

#if !defined(Ultimo_Paso_sts_sts_reg__REMOVED) /* Check for removal by optimization */


/*******************************************************************************
* Function Name: Ultimo_Paso_Read
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
uint8 Ultimo_Paso_Read(void) 
{ 
    return Ultimo_Paso_Status;
}


/*******************************************************************************
* Function Name: Ultimo_Paso_InterruptEnable
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
void Ultimo_Paso_InterruptEnable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    Ultimo_Paso_Status_Aux_Ctrl |= Ultimo_Paso_STATUS_INTR_ENBL;
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: Ultimo_Paso_InterruptDisable
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
void Ultimo_Paso_InterruptDisable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    Ultimo_Paso_Status_Aux_Ctrl &= (uint8)(~Ultimo_Paso_STATUS_INTR_ENBL);
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: Ultimo_Paso_WriteMask
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
void Ultimo_Paso_WriteMask(uint8 mask) 
{
    #if(Ultimo_Paso_INPUTS < 8u)
    	mask &= ((uint8)(1u << Ultimo_Paso_INPUTS) - 1u);
	#endif /* End Ultimo_Paso_INPUTS < 8u */
    Ultimo_Paso_Status_Mask = mask;
}


/*******************************************************************************
* Function Name: Ultimo_Paso_ReadMask
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
uint8 Ultimo_Paso_ReadMask(void) 
{
    return Ultimo_Paso_Status_Mask;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
