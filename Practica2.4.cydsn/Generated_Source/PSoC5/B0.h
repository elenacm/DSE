/*******************************************************************************
* File Name: B0.h  
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

#if !defined(CY_PINS_B0_H) /* Pins B0_H */
#define CY_PINS_B0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "B0_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 B0__PORT == 15 && ((B0__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    B0_Write(uint8 value);
void    B0_SetDriveMode(uint8 mode);
uint8   B0_ReadDataReg(void);
uint8   B0_Read(void);
void    B0_SetInterruptMode(uint16 position, uint16 mode);
uint8   B0_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the B0_SetDriveMode() function.
     *  @{
     */
        #define B0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define B0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define B0_DM_RES_UP          PIN_DM_RES_UP
        #define B0_DM_RES_DWN         PIN_DM_RES_DWN
        #define B0_DM_OD_LO           PIN_DM_OD_LO
        #define B0_DM_OD_HI           PIN_DM_OD_HI
        #define B0_DM_STRONG          PIN_DM_STRONG
        #define B0_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define B0_MASK               B0__MASK
#define B0_SHIFT              B0__SHIFT
#define B0_WIDTH              1u

/* Interrupt constants */
#if defined(B0__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in B0_SetInterruptMode() function.
     *  @{
     */
        #define B0_INTR_NONE      (uint16)(0x0000u)
        #define B0_INTR_RISING    (uint16)(0x0001u)
        #define B0_INTR_FALLING   (uint16)(0x0002u)
        #define B0_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define B0_INTR_MASK      (0x01u) 
#endif /* (B0__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define B0_PS                     (* (reg8 *) B0__PS)
/* Data Register */
#define B0_DR                     (* (reg8 *) B0__DR)
/* Port Number */
#define B0_PRT_NUM                (* (reg8 *) B0__PRT) 
/* Connect to Analog Globals */                                                  
#define B0_AG                     (* (reg8 *) B0__AG)                       
/* Analog MUX bux enable */
#define B0_AMUX                   (* (reg8 *) B0__AMUX) 
/* Bidirectional Enable */                                                        
#define B0_BIE                    (* (reg8 *) B0__BIE)
/* Bit-mask for Aliased Register Access */
#define B0_BIT_MASK               (* (reg8 *) B0__BIT_MASK)
/* Bypass Enable */
#define B0_BYP                    (* (reg8 *) B0__BYP)
/* Port wide control signals */                                                   
#define B0_CTL                    (* (reg8 *) B0__CTL)
/* Drive Modes */
#define B0_DM0                    (* (reg8 *) B0__DM0) 
#define B0_DM1                    (* (reg8 *) B0__DM1)
#define B0_DM2                    (* (reg8 *) B0__DM2) 
/* Input Buffer Disable Override */
#define B0_INP_DIS                (* (reg8 *) B0__INP_DIS)
/* LCD Common or Segment Drive */
#define B0_LCD_COM_SEG            (* (reg8 *) B0__LCD_COM_SEG)
/* Enable Segment LCD */
#define B0_LCD_EN                 (* (reg8 *) B0__LCD_EN)
/* Slew Rate Control */
#define B0_SLW                    (* (reg8 *) B0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define B0_PRTDSI__CAPS_SEL       (* (reg8 *) B0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define B0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) B0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define B0_PRTDSI__OE_SEL0        (* (reg8 *) B0__PRTDSI__OE_SEL0) 
#define B0_PRTDSI__OE_SEL1        (* (reg8 *) B0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define B0_PRTDSI__OUT_SEL0       (* (reg8 *) B0__PRTDSI__OUT_SEL0) 
#define B0_PRTDSI__OUT_SEL1       (* (reg8 *) B0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define B0_PRTDSI__SYNC_OUT       (* (reg8 *) B0__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(B0__SIO_CFG)
    #define B0_SIO_HYST_EN        (* (reg8 *) B0__SIO_HYST_EN)
    #define B0_SIO_REG_HIFREQ     (* (reg8 *) B0__SIO_REG_HIFREQ)
    #define B0_SIO_CFG            (* (reg8 *) B0__SIO_CFG)
    #define B0_SIO_DIFF           (* (reg8 *) B0__SIO_DIFF)
#endif /* (B0__SIO_CFG) */

/* Interrupt Registers */
#if defined(B0__INTSTAT)
    #define B0_INTSTAT            (* (reg8 *) B0__INTSTAT)
    #define B0_SNAP               (* (reg8 *) B0__SNAP)
    
	#define B0_0_INTTYPE_REG 		(* (reg8 *) B0__0__INTTYPE)
#endif /* (B0__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_B0_H */


/* [] END OF FILE */
