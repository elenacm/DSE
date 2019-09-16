/*******************************************************************************
* File Name: MENOS.h  
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

#if !defined(CY_PINS_MENOS_H) /* Pins MENOS_H */
#define CY_PINS_MENOS_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MENOS_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MENOS__PORT == 15 && ((MENOS__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MENOS_Write(uint8 value);
void    MENOS_SetDriveMode(uint8 mode);
uint8   MENOS_ReadDataReg(void);
uint8   MENOS_Read(void);
void    MENOS_SetInterruptMode(uint16 position, uint16 mode);
uint8   MENOS_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MENOS_SetDriveMode() function.
     *  @{
     */
        #define MENOS_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MENOS_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MENOS_DM_RES_UP          PIN_DM_RES_UP
        #define MENOS_DM_RES_DWN         PIN_DM_RES_DWN
        #define MENOS_DM_OD_LO           PIN_DM_OD_LO
        #define MENOS_DM_OD_HI           PIN_DM_OD_HI
        #define MENOS_DM_STRONG          PIN_DM_STRONG
        #define MENOS_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MENOS_MASK               MENOS__MASK
#define MENOS_SHIFT              MENOS__SHIFT
#define MENOS_WIDTH              1u

/* Interrupt constants */
#if defined(MENOS__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MENOS_SetInterruptMode() function.
     *  @{
     */
        #define MENOS_INTR_NONE      (uint16)(0x0000u)
        #define MENOS_INTR_RISING    (uint16)(0x0001u)
        #define MENOS_INTR_FALLING   (uint16)(0x0002u)
        #define MENOS_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MENOS_INTR_MASK      (0x01u) 
#endif /* (MENOS__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MENOS_PS                     (* (reg8 *) MENOS__PS)
/* Data Register */
#define MENOS_DR                     (* (reg8 *) MENOS__DR)
/* Port Number */
#define MENOS_PRT_NUM                (* (reg8 *) MENOS__PRT) 
/* Connect to Analog Globals */                                                  
#define MENOS_AG                     (* (reg8 *) MENOS__AG)                       
/* Analog MUX bux enable */
#define MENOS_AMUX                   (* (reg8 *) MENOS__AMUX) 
/* Bidirectional Enable */                                                        
#define MENOS_BIE                    (* (reg8 *) MENOS__BIE)
/* Bit-mask for Aliased Register Access */
#define MENOS_BIT_MASK               (* (reg8 *) MENOS__BIT_MASK)
/* Bypass Enable */
#define MENOS_BYP                    (* (reg8 *) MENOS__BYP)
/* Port wide control signals */                                                   
#define MENOS_CTL                    (* (reg8 *) MENOS__CTL)
/* Drive Modes */
#define MENOS_DM0                    (* (reg8 *) MENOS__DM0) 
#define MENOS_DM1                    (* (reg8 *) MENOS__DM1)
#define MENOS_DM2                    (* (reg8 *) MENOS__DM2) 
/* Input Buffer Disable Override */
#define MENOS_INP_DIS                (* (reg8 *) MENOS__INP_DIS)
/* LCD Common or Segment Drive */
#define MENOS_LCD_COM_SEG            (* (reg8 *) MENOS__LCD_COM_SEG)
/* Enable Segment LCD */
#define MENOS_LCD_EN                 (* (reg8 *) MENOS__LCD_EN)
/* Slew Rate Control */
#define MENOS_SLW                    (* (reg8 *) MENOS__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MENOS_PRTDSI__CAPS_SEL       (* (reg8 *) MENOS__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MENOS_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MENOS__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MENOS_PRTDSI__OE_SEL0        (* (reg8 *) MENOS__PRTDSI__OE_SEL0) 
#define MENOS_PRTDSI__OE_SEL1        (* (reg8 *) MENOS__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MENOS_PRTDSI__OUT_SEL0       (* (reg8 *) MENOS__PRTDSI__OUT_SEL0) 
#define MENOS_PRTDSI__OUT_SEL1       (* (reg8 *) MENOS__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MENOS_PRTDSI__SYNC_OUT       (* (reg8 *) MENOS__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MENOS__SIO_CFG)
    #define MENOS_SIO_HYST_EN        (* (reg8 *) MENOS__SIO_HYST_EN)
    #define MENOS_SIO_REG_HIFREQ     (* (reg8 *) MENOS__SIO_REG_HIFREQ)
    #define MENOS_SIO_CFG            (* (reg8 *) MENOS__SIO_CFG)
    #define MENOS_SIO_DIFF           (* (reg8 *) MENOS__SIO_DIFF)
#endif /* (MENOS__SIO_CFG) */

/* Interrupt Registers */
#if defined(MENOS__INTSTAT)
    #define MENOS_INTSTAT            (* (reg8 *) MENOS__INTSTAT)
    #define MENOS_SNAP               (* (reg8 *) MENOS__SNAP)
    
	#define MENOS_0_INTTYPE_REG 		(* (reg8 *) MENOS__0__INTTYPE)
#endif /* (MENOS__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MENOS_H */


/* [] END OF FILE */
