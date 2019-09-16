/*******************************************************************************
* File Name: Paso_sig_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Paso_sig.h"

/* Check for removal by optimization */
#if !defined(Paso_sig_Sync_ctrl_reg__REMOVED)

static Paso_sig_BACKUP_STRUCT  Paso_sig_backup = {0u};

    
/*******************************************************************************
* Function Name: Paso_sig_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Paso_sig_SaveConfig(void) 
{
    Paso_sig_backup.controlState = Paso_sig_Control;
}


/*******************************************************************************
* Function Name: Paso_sig_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void Paso_sig_RestoreConfig(void) 
{
     Paso_sig_Control = Paso_sig_backup.controlState;
}


/*******************************************************************************
* Function Name: Paso_sig_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Paso_sig_Sleep(void) 
{
    Paso_sig_SaveConfig();
}


/*******************************************************************************
* Function Name: Paso_sig_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Paso_sig_Wakeup(void)  
{
    Paso_sig_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
