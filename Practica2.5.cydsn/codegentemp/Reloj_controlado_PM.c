/*******************************************************************************
* File Name: Reloj_controlado_PM.c
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

#include "Reloj_controlado.h"

/* Check for removal by optimization */
#if !defined(Reloj_controlado_Sync_ctrl_reg__REMOVED)

static Reloj_controlado_BACKUP_STRUCT  Reloj_controlado_backup = {0u};

    
/*******************************************************************************
* Function Name: Reloj_controlado_SaveConfig
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
void Reloj_controlado_SaveConfig(void) 
{
    Reloj_controlado_backup.controlState = Reloj_controlado_Control;
}


/*******************************************************************************
* Function Name: Reloj_controlado_RestoreConfig
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
void Reloj_controlado_RestoreConfig(void) 
{
     Reloj_controlado_Control = Reloj_controlado_backup.controlState;
}


/*******************************************************************************
* Function Name: Reloj_controlado_Sleep
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
void Reloj_controlado_Sleep(void) 
{
    Reloj_controlado_SaveConfig();
}


/*******************************************************************************
* Function Name: Reloj_controlado_Wakeup
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
void Reloj_controlado_Wakeup(void)  
{
    Reloj_controlado_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
