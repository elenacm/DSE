/*******************************************************************************
* File Name: MAS.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MAS_H) /* Pins MAS_H */
#define CY_PINS_MAS_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MAS_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MAS__PORT == 15 && ((MAS__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MAS_Write(uint8 value);
void    MAS_SetDriveMode(uint8 mode);
uint8   MAS_ReadDataReg(void);
uint8   MAS_Read(void);
void    MAS_SetInterruptMode(uint16 position, uint16 mode);
uint8   MAS_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MAS_SetDriveMode() function.
     *  @{
     */
        #define MAS_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MAS_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MAS_DM_RES_UP          PIN_DM_RES_UP
        #define MAS_DM_RES_DWN         PIN_DM_RES_DWN
        #define MAS_DM_OD_LO           PIN_DM_OD_LO
        #define MAS_DM_OD_HI           PIN_DM_OD_HI
        #define MAS_DM_STRONG          PIN_DM_STRONG
        #define MAS_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MAS_MASK               MAS__MASK
#define MAS_SHIFT              MAS__SHIFT
#define MAS_WIDTH              1u

/* Interrupt constants */
#if defined(MAS__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MAS_SetInterruptMode() function.
     *  @{
     */
        #define MAS_INTR_NONE      (uint16)(0x0000u)
        #define MAS_INTR_RISING    (uint16)(0x0001u)
        #define MAS_INTR_FALLING   (uint16)(0x0002u)
        #define MAS_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MAS_INTR_MASK      (0x01u) 
#endif /* (MAS__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MAS_PS                     (* (reg8 *) MAS__PS)
/* Data Register */
#define MAS_DR                     (* (reg8 *) MAS__DR)
/* Port Number */
#define MAS_PRT_NUM                (* (reg8 *) MAS__PRT) 
/* Connect to Analog Globals */                                                  
#define MAS_AG                     (* (reg8 *) MAS__AG)                       
/* Analog MUX bux enable */
#define MAS_AMUX                   (* (reg8 *) MAS__AMUX) 
/* Bidirectional Enable */                                                        
#define MAS_BIE                    (* (reg8 *) MAS__BIE)
/* Bit-mask for Aliased Register Access */
#define MAS_BIT_MASK               (* (reg8 *) MAS__BIT_MASK)
/* Bypass Enable */
#define MAS_BYP                    (* (reg8 *) MAS__BYP)
/* Port wide control signals */                                                   
#define MAS_CTL                    (* (reg8 *) MAS__CTL)
/* Drive Modes */
#define MAS_DM0                    (* (reg8 *) MAS__DM0) 
#define MAS_DM1                    (* (reg8 *) MAS__DM1)
#define MAS_DM2                    (* (reg8 *) MAS__DM2) 
/* Input Buffer Disable Override */
#define MAS_INP_DIS                (* (reg8 *) MAS__INP_DIS)
/* LCD Common or Segment Drive */
#define MAS_LCD_COM_SEG            (* (reg8 *) MAS__LCD_COM_SEG)
/* Enable Segment LCD */
#define MAS_LCD_EN                 (* (reg8 *) MAS__LCD_EN)
/* Slew Rate Control */
#define MAS_SLW                    (* (reg8 *) MAS__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MAS_PRTDSI__CAPS_SEL       (* (reg8 *) MAS__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MAS_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MAS__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MAS_PRTDSI__OE_SEL0        (* (reg8 *) MAS__PRTDSI__OE_SEL0) 
#define MAS_PRTDSI__OE_SEL1        (* (reg8 *) MAS__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MAS_PRTDSI__OUT_SEL0       (* (reg8 *) MAS__PRTDSI__OUT_SEL0) 
#define MAS_PRTDSI__OUT_SEL1       (* (reg8 *) MAS__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MAS_PRTDSI__SYNC_OUT       (* (reg8 *) MAS__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MAS__SIO_CFG)
    #define MAS_SIO_HYST_EN        (* (reg8 *) MAS__SIO_HYST_EN)
    #define MAS_SIO_REG_HIFREQ     (* (reg8 *) MAS__SIO_REG_HIFREQ)
    #define MAS_SIO_CFG            (* (reg8 *) MAS__SIO_CFG)
    #define MAS_SIO_DIFF           (* (reg8 *) MAS__SIO_DIFF)
#endif /* (MAS__SIO_CFG) */

/* Interrupt Registers */
#if defined(MAS__INTSTAT)
    #define MAS_INTSTAT            (* (reg8 *) MAS__INTSTAT)
    #define MAS_SNAP               (* (reg8 *) MAS__SNAP)
    
	#define MAS_0_INTTYPE_REG 		(* (reg8 *) MAS__0__INTTYPE)
#endif /* (MAS__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MAS_H */


/* [] END OF FILE */
