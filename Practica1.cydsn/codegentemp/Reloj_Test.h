/*******************************************************************************
* File Name: Reloj_Test.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Reloj_Test_H)
#define CY_CLOCK_Reloj_Test_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void Reloj_Test_Start(void) ;
void Reloj_Test_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Reloj_Test_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Reloj_Test_StandbyPower(uint8 state) ;
void Reloj_Test_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Reloj_Test_GetDividerRegister(void) ;
void Reloj_Test_SetModeRegister(uint8 modeBitMask) ;
void Reloj_Test_ClearModeRegister(uint8 modeBitMask) ;
uint8 Reloj_Test_GetModeRegister(void) ;
void Reloj_Test_SetSourceRegister(uint8 clkSource) ;
uint8 Reloj_Test_GetSourceRegister(void) ;
#if defined(Reloj_Test__CFG3)
void Reloj_Test_SetPhaseRegister(uint8 clkPhase) ;
uint8 Reloj_Test_GetPhaseRegister(void) ;
#endif /* defined(Reloj_Test__CFG3) */

#define Reloj_Test_Enable()                       Reloj_Test_Start()
#define Reloj_Test_Disable()                      Reloj_Test_Stop()
#define Reloj_Test_SetDivider(clkDivider)         Reloj_Test_SetDividerRegister(clkDivider, 1u)
#define Reloj_Test_SetDividerValue(clkDivider)    Reloj_Test_SetDividerRegister((clkDivider) - 1u, 1u)
#define Reloj_Test_SetMode(clkMode)               Reloj_Test_SetModeRegister(clkMode)
#define Reloj_Test_SetSource(clkSource)           Reloj_Test_SetSourceRegister(clkSource)
#if defined(Reloj_Test__CFG3)
#define Reloj_Test_SetPhase(clkPhase)             Reloj_Test_SetPhaseRegister(clkPhase)
#define Reloj_Test_SetPhaseValue(clkPhase)        Reloj_Test_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Reloj_Test__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Reloj_Test_CLKEN              (* (reg8 *) Reloj_Test__PM_ACT_CFG)
#define Reloj_Test_CLKEN_PTR          ((reg8 *) Reloj_Test__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Reloj_Test_CLKSTBY            (* (reg8 *) Reloj_Test__PM_STBY_CFG)
#define Reloj_Test_CLKSTBY_PTR        ((reg8 *) Reloj_Test__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Reloj_Test_DIV_LSB            (* (reg8 *) Reloj_Test__CFG0)
#define Reloj_Test_DIV_LSB_PTR        ((reg8 *) Reloj_Test__CFG0)
#define Reloj_Test_DIV_PTR            ((reg16 *) Reloj_Test__CFG0)

/* Clock MSB divider configuration register. */
#define Reloj_Test_DIV_MSB            (* (reg8 *) Reloj_Test__CFG1)
#define Reloj_Test_DIV_MSB_PTR        ((reg8 *) Reloj_Test__CFG1)

/* Mode and source configuration register */
#define Reloj_Test_MOD_SRC            (* (reg8 *) Reloj_Test__CFG2)
#define Reloj_Test_MOD_SRC_PTR        ((reg8 *) Reloj_Test__CFG2)

#if defined(Reloj_Test__CFG3)
/* Analog clock phase configuration register */
#define Reloj_Test_PHASE              (* (reg8 *) Reloj_Test__CFG3)
#define Reloj_Test_PHASE_PTR          ((reg8 *) Reloj_Test__CFG3)
#endif /* defined(Reloj_Test__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Reloj_Test_CLKEN_MASK         Reloj_Test__PM_ACT_MSK
#define Reloj_Test_CLKSTBY_MASK       Reloj_Test__PM_STBY_MSK

/* CFG2 field masks */
#define Reloj_Test_SRC_SEL_MSK        Reloj_Test__CFG2_SRC_SEL_MASK
#define Reloj_Test_MODE_MASK          (~(Reloj_Test_SRC_SEL_MSK))

#if defined(Reloj_Test__CFG3)
/* CFG3 phase mask */
#define Reloj_Test_PHASE_MASK         Reloj_Test__CFG3_PHASE_DLY_MASK
#endif /* defined(Reloj_Test__CFG3) */

#endif /* CY_CLOCK_Reloj_Test_H */


/* [] END OF FILE */
