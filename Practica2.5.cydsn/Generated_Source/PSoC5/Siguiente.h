/*******************************************************************************
* File Name: Siguiente.h  
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

#if !defined(CY_PINS_Siguiente_H) /* Pins Siguiente_H */
#define CY_PINS_Siguiente_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Siguiente_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Siguiente__PORT == 15 && ((Siguiente__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Siguiente_Write(uint8 value);
void    Siguiente_SetDriveMode(uint8 mode);
uint8   Siguiente_ReadDataReg(void);
uint8   Siguiente_Read(void);
void    Siguiente_SetInterruptMode(uint16 position, uint16 mode);
uint8   Siguiente_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Siguiente_SetDriveMode() function.
     *  @{
     */
        #define Siguiente_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Siguiente_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Siguiente_DM_RES_UP          PIN_DM_RES_UP
        #define Siguiente_DM_RES_DWN         PIN_DM_RES_DWN
        #define Siguiente_DM_OD_LO           PIN_DM_OD_LO
        #define Siguiente_DM_OD_HI           PIN_DM_OD_HI
        #define Siguiente_DM_STRONG          PIN_DM_STRONG
        #define Siguiente_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Siguiente_MASK               Siguiente__MASK
#define Siguiente_SHIFT              Siguiente__SHIFT
#define Siguiente_WIDTH              1u

/* Interrupt constants */
#if defined(Siguiente__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Siguiente_SetInterruptMode() function.
     *  @{
     */
        #define Siguiente_INTR_NONE      (uint16)(0x0000u)
        #define Siguiente_INTR_RISING    (uint16)(0x0001u)
        #define Siguiente_INTR_FALLING   (uint16)(0x0002u)
        #define Siguiente_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Siguiente_INTR_MASK      (0x01u) 
#endif /* (Siguiente__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Siguiente_PS                     (* (reg8 *) Siguiente__PS)
/* Data Register */
#define Siguiente_DR                     (* (reg8 *) Siguiente__DR)
/* Port Number */
#define Siguiente_PRT_NUM                (* (reg8 *) Siguiente__PRT) 
/* Connect to Analog Globals */                                                  
#define Siguiente_AG                     (* (reg8 *) Siguiente__AG)                       
/* Analog MUX bux enable */
#define Siguiente_AMUX                   (* (reg8 *) Siguiente__AMUX) 
/* Bidirectional Enable */                                                        
#define Siguiente_BIE                    (* (reg8 *) Siguiente__BIE)
/* Bit-mask for Aliased Register Access */
#define Siguiente_BIT_MASK               (* (reg8 *) Siguiente__BIT_MASK)
/* Bypass Enable */
#define Siguiente_BYP                    (* (reg8 *) Siguiente__BYP)
/* Port wide control signals */                                                   
#define Siguiente_CTL                    (* (reg8 *) Siguiente__CTL)
/* Drive Modes */
#define Siguiente_DM0                    (* (reg8 *) Siguiente__DM0) 
#define Siguiente_DM1                    (* (reg8 *) Siguiente__DM1)
#define Siguiente_DM2                    (* (reg8 *) Siguiente__DM2) 
/* Input Buffer Disable Override */
#define Siguiente_INP_DIS                (* (reg8 *) Siguiente__INP_DIS)
/* LCD Common or Segment Drive */
#define Siguiente_LCD_COM_SEG            (* (reg8 *) Siguiente__LCD_COM_SEG)
/* Enable Segment LCD */
#define Siguiente_LCD_EN                 (* (reg8 *) Siguiente__LCD_EN)
/* Slew Rate Control */
#define Siguiente_SLW                    (* (reg8 *) Siguiente__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Siguiente_PRTDSI__CAPS_SEL       (* (reg8 *) Siguiente__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Siguiente_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Siguiente__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Siguiente_PRTDSI__OE_SEL0        (* (reg8 *) Siguiente__PRTDSI__OE_SEL0) 
#define Siguiente_PRTDSI__OE_SEL1        (* (reg8 *) Siguiente__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Siguiente_PRTDSI__OUT_SEL0       (* (reg8 *) Siguiente__PRTDSI__OUT_SEL0) 
#define Siguiente_PRTDSI__OUT_SEL1       (* (reg8 *) Siguiente__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Siguiente_PRTDSI__SYNC_OUT       (* (reg8 *) Siguiente__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Siguiente__SIO_CFG)
    #define Siguiente_SIO_HYST_EN        (* (reg8 *) Siguiente__SIO_HYST_EN)
    #define Siguiente_SIO_REG_HIFREQ     (* (reg8 *) Siguiente__SIO_REG_HIFREQ)
    #define Siguiente_SIO_CFG            (* (reg8 *) Siguiente__SIO_CFG)
    #define Siguiente_SIO_DIFF           (* (reg8 *) Siguiente__SIO_DIFF)
#endif /* (Siguiente__SIO_CFG) */

/* Interrupt Registers */
#if defined(Siguiente__INTSTAT)
    #define Siguiente_INTSTAT            (* (reg8 *) Siguiente__INTSTAT)
    #define Siguiente_SNAP               (* (reg8 *) Siguiente__SNAP)
    
	#define Siguiente_0_INTTYPE_REG 		(* (reg8 *) Siguiente__0__INTTYPE)
#endif /* (Siguiente__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Siguiente_H */


/* [] END OF FILE */
