/*******************************************************************************
* File Name: generadorOnda_VDAC8_PM.c  
* Version 1.90
*
* Description:
*  This file provides the power management source code to API for the
*  VDAC8.  
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "generadorOnda_VDAC8.h"

static generadorOnda_VDAC8_backupStruct generadorOnda_VDAC8_backup;


/*******************************************************************************
* Function Name: generadorOnda_VDAC8_SaveConfig
********************************************************************************
* Summary:
*  Save the current user configuration
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void generadorOnda_VDAC8_SaveConfig(void) 
{
    if (!((generadorOnda_VDAC8_CR1 & generadorOnda_VDAC8_SRC_MASK) == generadorOnda_VDAC8_SRC_UDB))
    {
        generadorOnda_VDAC8_backup.data_value = generadorOnda_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: generadorOnda_VDAC8_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
*******************************************************************************/
void generadorOnda_VDAC8_RestoreConfig(void) 
{
    if (!((generadorOnda_VDAC8_CR1 & generadorOnda_VDAC8_SRC_MASK) == generadorOnda_VDAC8_SRC_UDB))
    {
        if((generadorOnda_VDAC8_Strobe & generadorOnda_VDAC8_STRB_MASK) == generadorOnda_VDAC8_STRB_EN)
        {
            generadorOnda_VDAC8_Strobe &= (uint8)(~generadorOnda_VDAC8_STRB_MASK);
            generadorOnda_VDAC8_Data = generadorOnda_VDAC8_backup.data_value;
            generadorOnda_VDAC8_Strobe |= generadorOnda_VDAC8_STRB_EN;
        }
        else
        {
            generadorOnda_VDAC8_Data = generadorOnda_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: generadorOnda_VDAC8_Sleep
********************************************************************************
* Summary:
*  Stop and Save the user configuration
*
* Parameters:  
*  void:  
*
* Return: 
*  void
*
* Global variables:
*  generadorOnda_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void generadorOnda_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(generadorOnda_VDAC8_ACT_PWR_EN == (generadorOnda_VDAC8_PWRMGR & generadorOnda_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        generadorOnda_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        generadorOnda_VDAC8_backup.enableState = 0u;
    }
    
    generadorOnda_VDAC8_Stop();
    generadorOnda_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: generadorOnda_VDAC8_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  generadorOnda_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void generadorOnda_VDAC8_Wakeup(void) 
{
    generadorOnda_VDAC8_RestoreConfig();
    
    if(generadorOnda_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        generadorOnda_VDAC8_Enable();

        /* Restore the data register */
        generadorOnda_VDAC8_SetValue(generadorOnda_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
