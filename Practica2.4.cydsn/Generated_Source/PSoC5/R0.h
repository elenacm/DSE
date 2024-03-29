/*******************************************************************************
* File Name: R0.h  
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

#if !defined(CY_PINS_R0_H) /* Pins R0_H */
#define CY_PINS_R0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "R0_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 R0__PORT == 15 && ((R0__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    R0_Write(uint8 value);
void    R0_SetDriveMode(uint8 mode);
uint8   R0_ReadDataReg(void);
uint8   R0_Read(void);
void    R0_SetInterruptMode(uint16 position, uint16 mode);
uint8   R0_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the R0_SetDriveMode() function.
     *  @{
     */
        #define R0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define R0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define R0_DM_RES_UP          PIN_DM_RES_UP
        #define R0_DM_RES_DWN         PIN_DM_RES_DWN
        #define R0_DM_OD_LO           PIN_DM_OD_LO
        #define R0_DM_OD_HI           PIN_DM_OD_HI
        #define R0_DM_STRONG          PIN_DM_STRONG
        #define R0_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define R0_MASK               R0__MASK
#define R0_SHIFT              R0__SHIFT
#define R0_WIDTH              1u

/* Interrupt constants */
#if defined(R0__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in R0_SetInterruptMode() function.
     *  @{
     */
        #define R0_INTR_NONE      (uint16)(0x0000u)
        #define R0_INTR_RISING    (uint16)(0x0001u)
        #define R0_INTR_FALLING   (uint16)(0x0002u)
        #define R0_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define R0_INTR_MASK      (0x01u) 
#endif /* (R0__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define R0_PS                     (* (reg8 *) R0__PS)
/* Data Register */
#define R0_DR                     (* (reg8 *) R0__DR)
/* Port Number */
#define R0_PRT_NUM                (* (reg8 *) R0__PRT) 
/* Connect to Analog Globals */                                                  
#define R0_AG                     (* (reg8 *) R0__AG)                       
/* Analog MUX bux enable */
#define R0_AMUX                   (* (reg8 *) R0__AMUX) 
/* Bidirectional Enable */                                                        
#define R0_BIE                    (* (reg8 *) R0__BIE)
/* Bit-mask for Aliased Register Access */
#define R0_BIT_MASK               (* (reg8 *) R0__BIT_MASK)
/* Bypass Enable */
#define R0_BYP                    (* (reg8 *) R0__BYP)
/* Port wide control signals */                                                   
#define R0_CTL                    (* (reg8 *) R0__CTL)
/* Drive Modes */
#define R0_DM0                    (* (reg8 *) R0__DM0) 
#define R0_DM1                    (* (reg8 *) R0__DM1)
#define R0_DM2                    (* (reg8 *) R0__DM2) 
/* Input Buffer Disable Override */
#define R0_INP_DIS                (* (reg8 *) R0__INP_DIS)
/* LCD Common or Segment Drive */
#define R0_LCD_COM_SEG            (* (reg8 *) R0__LCD_COM_SEG)
/* Enable Segment LCD */
#define R0_LCD_EN                 (* (reg8 *) R0__LCD_EN)
/* Slew Rate Control */
#define R0_SLW                    (* (reg8 *) R0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define R0_PRTDSI__CAPS_SEL       (* (reg8 *) R0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define R0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) R0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define R0_PRTDSI__OE_SEL0        (* (reg8 *) R0__PRTDSI__OE_SEL0) 
#define R0_PRTDSI__OE_SEL1        (* (reg8 *) R0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define R0_PRTDSI__OUT_SEL0       (* (reg8 *) R0__PRTDSI__OUT_SEL0) 
#define R0_PRTDSI__OUT_SEL1       (* (reg8 *) R0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define R0_PRTDSI__SYNC_OUT       (* (reg8 *) R0__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(R0__SIO_CFG)
    #define R0_SIO_HYST_EN        (* (reg8 *) R0__SIO_HYST_EN)
    #define R0_SIO_REG_HIFREQ     (* (reg8 *) R0__SIO_REG_HIFREQ)
    #define R0_SIO_CFG            (* (reg8 *) R0__SIO_CFG)
    #define R0_SIO_DIFF           (* (reg8 *) R0__SIO_DIFF)
#endif /* (R0__SIO_CFG) */

/* Interrupt Registers */
#if defined(R0__INTSTAT)
    #define R0_INTSTAT            (* (reg8 *) R0__INTSTAT)
    #define R0_SNAP               (* (reg8 *) R0__SNAP)
    
	#define R0_0_INTTYPE_REG 		(* (reg8 *) R0__0__INTTYPE)
#endif /* (R0__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_R0_H */


/* [] END OF FILE */
