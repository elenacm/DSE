/*******************************************************************************
* File Name: CONT.h  
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

#if !defined(CY_PINS_CONT_H) /* Pins CONT_H */
#define CY_PINS_CONT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CONT_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CONT__PORT == 15 && ((CONT__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CONT_Write(uint8 value);
void    CONT_SetDriveMode(uint8 mode);
uint8   CONT_ReadDataReg(void);
uint8   CONT_Read(void);
void    CONT_SetInterruptMode(uint16 position, uint16 mode);
uint8   CONT_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CONT_SetDriveMode() function.
     *  @{
     */
        #define CONT_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CONT_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CONT_DM_RES_UP          PIN_DM_RES_UP
        #define CONT_DM_RES_DWN         PIN_DM_RES_DWN
        #define CONT_DM_OD_LO           PIN_DM_OD_LO
        #define CONT_DM_OD_HI           PIN_DM_OD_HI
        #define CONT_DM_STRONG          PIN_DM_STRONG
        #define CONT_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CONT_MASK               CONT__MASK
#define CONT_SHIFT              CONT__SHIFT
#define CONT_WIDTH              1u

/* Interrupt constants */
#if defined(CONT__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CONT_SetInterruptMode() function.
     *  @{
     */
        #define CONT_INTR_NONE      (uint16)(0x0000u)
        #define CONT_INTR_RISING    (uint16)(0x0001u)
        #define CONT_INTR_FALLING   (uint16)(0x0002u)
        #define CONT_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CONT_INTR_MASK      (0x01u) 
#endif /* (CONT__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CONT_PS                     (* (reg8 *) CONT__PS)
/* Data Register */
#define CONT_DR                     (* (reg8 *) CONT__DR)
/* Port Number */
#define CONT_PRT_NUM                (* (reg8 *) CONT__PRT) 
/* Connect to Analog Globals */                                                  
#define CONT_AG                     (* (reg8 *) CONT__AG)                       
/* Analog MUX bux enable */
#define CONT_AMUX                   (* (reg8 *) CONT__AMUX) 
/* Bidirectional Enable */                                                        
#define CONT_BIE                    (* (reg8 *) CONT__BIE)
/* Bit-mask for Aliased Register Access */
#define CONT_BIT_MASK               (* (reg8 *) CONT__BIT_MASK)
/* Bypass Enable */
#define CONT_BYP                    (* (reg8 *) CONT__BYP)
/* Port wide control signals */                                                   
#define CONT_CTL                    (* (reg8 *) CONT__CTL)
/* Drive Modes */
#define CONT_DM0                    (* (reg8 *) CONT__DM0) 
#define CONT_DM1                    (* (reg8 *) CONT__DM1)
#define CONT_DM2                    (* (reg8 *) CONT__DM2) 
/* Input Buffer Disable Override */
#define CONT_INP_DIS                (* (reg8 *) CONT__INP_DIS)
/* LCD Common or Segment Drive */
#define CONT_LCD_COM_SEG            (* (reg8 *) CONT__LCD_COM_SEG)
/* Enable Segment LCD */
#define CONT_LCD_EN                 (* (reg8 *) CONT__LCD_EN)
/* Slew Rate Control */
#define CONT_SLW                    (* (reg8 *) CONT__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CONT_PRTDSI__CAPS_SEL       (* (reg8 *) CONT__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CONT_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CONT__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CONT_PRTDSI__OE_SEL0        (* (reg8 *) CONT__PRTDSI__OE_SEL0) 
#define CONT_PRTDSI__OE_SEL1        (* (reg8 *) CONT__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CONT_PRTDSI__OUT_SEL0       (* (reg8 *) CONT__PRTDSI__OUT_SEL0) 
#define CONT_PRTDSI__OUT_SEL1       (* (reg8 *) CONT__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CONT_PRTDSI__SYNC_OUT       (* (reg8 *) CONT__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CONT__SIO_CFG)
    #define CONT_SIO_HYST_EN        (* (reg8 *) CONT__SIO_HYST_EN)
    #define CONT_SIO_REG_HIFREQ     (* (reg8 *) CONT__SIO_REG_HIFREQ)
    #define CONT_SIO_CFG            (* (reg8 *) CONT__SIO_CFG)
    #define CONT_SIO_DIFF           (* (reg8 *) CONT__SIO_DIFF)
#endif /* (CONT__SIO_CFG) */

/* Interrupt Registers */
#if defined(CONT__INTSTAT)
    #define CONT_INTSTAT            (* (reg8 *) CONT__INTSTAT)
    #define CONT_SNAP               (* (reg8 *) CONT__SNAP)
    
	#define CONT_0_INTTYPE_REG 		(* (reg8 *) CONT__0__INTTYPE)
#endif /* (CONT__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CONT_H */


/* [] END OF FILE */
