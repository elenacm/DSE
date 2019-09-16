/*******************************************************************************
* File Name: Marcar.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Marcar_ALIASES_H) /* Pins Marcar_ALIASES_H */
#define CY_PINS_Marcar_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Marcar_0			(Marcar__0__PC)
#define Marcar_0_INTR	((uint16)((uint16)0x0001u << Marcar__0__SHIFT))

#define Marcar_INTR_ALL	 ((uint16)(Marcar_0_INTR))

#endif /* End Pins Marcar_ALIASES_H */


/* [] END OF FILE */
