/*******************************************************************************
* File Name: Marcar.h  
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

#if !defined(CY_PINS_Marcar_H) /* Pins Marcar_H */
#define CY_PINS_Marcar_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Marcar_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Marcar__PORT == 15 && ((Marcar__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Marcar_Write(uint8 value);
void    Marcar_SetDriveMode(uint8 mode);
uint8   Marcar_ReadDataReg(void);
uint8   Marcar_Read(void);
void    Marcar_SetInterruptMode(uint16 position, uint16 mode);
uint8   Marcar_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Marcar_SetDriveMode() function.
     *  @{
     */
        #define Marcar_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Marcar_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Marcar_DM_RES_UP          PIN_DM_RES_UP
        #define Marcar_DM_RES_DWN         PIN_DM_RES_DWN
        #define Marcar_DM_OD_LO           PIN_DM_OD_LO
        #define Marcar_DM_OD_HI           PIN_DM_OD_HI
        #define Marcar_DM_STRONG          PIN_DM_STRONG
        #define Marcar_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Marcar_MASK               Marcar__MASK
#define Marcar_SHIFT              Marcar__SHIFT
#define Marcar_WIDTH              1u

/* Interrupt constants */
#if defined(Marcar__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Marcar_SetInterruptMode() function.
     *  @{
     */
        #define Marcar_INTR_NONE      (uint16)(0x0000u)
        #define Marcar_INTR_RISING    (uint16)(0x0001u)
        #define Marcar_INTR_FALLING   (uint16)(0x0002u)
        #define Marcar_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Marcar_INTR_MASK      (0x01u) 
#endif /* (Marcar__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Marcar_PS                     (* (reg8 *) Marcar__PS)
/* Data Register */
#define Marcar_DR                     (* (reg8 *) Marcar__DR)
/* Port Number */
#define Marcar_PRT_NUM                (* (reg8 *) Marcar__PRT) 
/* Connect to Analog Globals */                                                  
#define Marcar_AG                     (* (reg8 *) Marcar__AG)                       
/* Analog MUX bux enable */
#define Marcar_AMUX                   (* (reg8 *) Marcar__AMUX) 
/* Bidirectional Enable */                                                        
#define Marcar_BIE                    (* (reg8 *) Marcar__BIE)
/* Bit-mask for Aliased Register Access */
#define Marcar_BIT_MASK               (* (reg8 *) Marcar__BIT_MASK)
/* Bypass Enable */
#define Marcar_BYP                    (* (reg8 *) Marcar__BYP)
/* Port wide control signals */                                                   
#define Marcar_CTL                    (* (reg8 *) Marcar__CTL)
/* Drive Modes */
#define Marcar_DM0                    (* (reg8 *) Marcar__DM0) 
#define Marcar_DM1                    (* (reg8 *) Marcar__DM1)
#define Marcar_DM2                    (* (reg8 *) Marcar__DM2) 
/* Input Buffer Disable Override */
#define Marcar_INP_DIS                (* (reg8 *) Marcar__INP_DIS)
/* LCD Common or Segment Drive */
#define Marcar_LCD_COM_SEG            (* (reg8 *) Marcar__LCD_COM_SEG)
/* Enable Segment LCD */
#define Marcar_LCD_EN                 (* (reg8 *) Marcar__LCD_EN)
/* Slew Rate Control */
#define Marcar_SLW                    (* (reg8 *) Marcar__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Marcar_PRTDSI__CAPS_SEL       (* (reg8 *) Marcar__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Marcar_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Marcar__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Marcar_PRTDSI__OE_SEL0        (* (reg8 *) Marcar__PRTDSI__OE_SEL0) 
#define Marcar_PRTDSI__OE_SEL1        (* (reg8 *) Marcar__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Marcar_PRTDSI__OUT_SEL0       (* (reg8 *) Marcar__PRTDSI__OUT_SEL0) 
#define Marcar_PRTDSI__OUT_SEL1       (* (reg8 *) Marcar__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Marcar_PRTDSI__SYNC_OUT       (* (reg8 *) Marcar__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Marcar__SIO_CFG)
    #define Marcar_SIO_HYST_EN        (* (reg8 *) Marcar__SIO_HYST_EN)
    #define Marcar_SIO_REG_HIFREQ     (* (reg8 *) Marcar__SIO_REG_HIFREQ)
    #define Marcar_SIO_CFG            (* (reg8 *) Marcar__SIO_CFG)
    #define Marcar_SIO_DIFF           (* (reg8 *) Marcar__SIO_DIFF)
#endif /* (Marcar__SIO_CFG) */

/* Interrupt Registers */
#if defined(Marcar__INTSTAT)
    #define Marcar_INTSTAT            (* (reg8 *) Marcar__INTSTAT)
    #define Marcar_SNAP               (* (reg8 *) Marcar__SNAP)
    
	#define Marcar_0_INTTYPE_REG 		(* (reg8 *) Marcar__0__INTTYPE)
#endif /* (Marcar__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Marcar_H */


/* [] END OF FILE */
