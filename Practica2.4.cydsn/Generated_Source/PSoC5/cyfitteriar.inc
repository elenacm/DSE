;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* LCD */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__0__MASK EQU 0x02
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 1
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__1__MASK EQU 0x04
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 2
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__2__MASK EQU 0x08
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 3
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__3__MASK EQU 0x10
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 4
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__4__MASK EQU 0x20
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 5
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__5__MASK EQU 0x40
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 6
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE7
LCD_LCDPort__6__MASK EQU 0x80
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC7
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 7
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0xFE
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 1
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

/* dec */
dec__0__INTTYPE EQU CYREG_PICU1_INTTYPE6
dec__0__MASK EQU 0x40
dec__0__PC EQU CYREG_PRT1_PC6
dec__0__PORT EQU 1
dec__0__SHIFT EQU 6
dec__AG EQU CYREG_PRT1_AG
dec__AMUX EQU CYREG_PRT1_AMUX
dec__BIE EQU CYREG_PRT1_BIE
dec__BIT_MASK EQU CYREG_PRT1_BIT_MASK
dec__BYP EQU CYREG_PRT1_BYP
dec__CTL EQU CYREG_PRT1_CTL
dec__DM0 EQU CYREG_PRT1_DM0
dec__DM1 EQU CYREG_PRT1_DM1
dec__DM2 EQU CYREG_PRT1_DM2
dec__DR EQU CYREG_PRT1_DR
dec__INP_DIS EQU CYREG_PRT1_INP_DIS
dec__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
dec__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
dec__LCD_EN EQU CYREG_PRT1_LCD_EN
dec__MASK EQU 0x40
dec__PORT EQU 1
dec__PRT EQU CYREG_PRT1_PRT
dec__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
dec__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
dec__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
dec__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
dec__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
dec__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
dec__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
dec__PS EQU CYREG_PRT1_PS
dec__SHIFT EQU 6
dec__SLW EQU CYREG_PRT1_SLW

/* inc */
inc__0__INTTYPE EQU CYREG_PICU3_INTTYPE0
inc__0__MASK EQU 0x01
inc__0__PC EQU CYREG_PRT3_PC0
inc__0__PORT EQU 3
inc__0__SHIFT EQU 0
inc__AG EQU CYREG_PRT3_AG
inc__AMUX EQU CYREG_PRT3_AMUX
inc__BIE EQU CYREG_PRT3_BIE
inc__BIT_MASK EQU CYREG_PRT3_BIT_MASK
inc__BYP EQU CYREG_PRT3_BYP
inc__CTL EQU CYREG_PRT3_CTL
inc__DM0 EQU CYREG_PRT3_DM0
inc__DM1 EQU CYREG_PRT3_DM1
inc__DM2 EQU CYREG_PRT3_DM2
inc__DR EQU CYREG_PRT3_DR
inc__INP_DIS EQU CYREG_PRT3_INP_DIS
inc__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
inc__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
inc__LCD_EN EQU CYREG_PRT3_LCD_EN
inc__MASK EQU 0x01
inc__PORT EQU 3
inc__PRT EQU CYREG_PRT3_PRT
inc__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
inc__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
inc__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
inc__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
inc__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
inc__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
inc__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
inc__PS EQU CYREG_PRT3_PS
inc__SHIFT EQU 0
inc__SLW EQU CYREG_PRT3_SLW

/* Clock_1 */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

/* registro */
registro_Sync_ctrl_reg__0__MASK EQU 0x01
registro_Sync_ctrl_reg__0__POS EQU 0
registro_Sync_ctrl_reg__1__MASK EQU 0x02
registro_Sync_ctrl_reg__1__POS EQU 1
registro_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
registro_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
registro_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
registro_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
registro_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
registro_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB11_12_MSK
registro_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
registro_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB11_12_MSK
registro_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
registro_Sync_ctrl_reg__2__MASK EQU 0x04
registro_Sync_ctrl_reg__2__POS EQU 2
registro_Sync_ctrl_reg__3__MASK EQU 0x08
registro_Sync_ctrl_reg__3__POS EQU 3
registro_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
registro_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB11_CTL
registro_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB11_ST_CTL
registro_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB11_CTL
registro_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB11_ST_CTL
registro_Sync_ctrl_reg__MASK EQU 0x0F
registro_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
registro_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
registro_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB11_MSK

/* registro2 */
registro2_sts_sts_reg__0__MASK EQU 0x01
registro2_sts_sts_reg__0__POS EQU 0
registro2_sts_sts_reg__1__MASK EQU 0x02
registro2_sts_sts_reg__1__POS EQU 1
registro2_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
registro2_sts_sts_reg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
registro2_sts_sts_reg__2__MASK EQU 0x04
registro2_sts_sts_reg__2__POS EQU 2
registro2_sts_sts_reg__3__MASK EQU 0x08
registro2_sts_sts_reg__3__POS EQU 3
registro2_sts_sts_reg__MASK EQU 0x0F
registro2_sts_sts_reg__MASK_REG EQU CYREG_B0_UDB11_MSK
registro2_sts_sts_reg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
registro2_sts_sts_reg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
registro2_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
registro2_sts_sts_reg__STATUS_CNT_REG EQU CYREG_B0_UDB11_ST_CTL
registro2_sts_sts_reg__STATUS_CONTROL_REG EQU CYREG_B0_UDB11_ST_CTL
registro2_sts_sts_reg__STATUS_REG EQU CYREG_B0_UDB11_ST

/* siguiente */
siguiente__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
siguiente__0__MASK EQU 0x80
siguiente__0__PC EQU CYREG_PRT1_PC7
siguiente__0__PORT EQU 1
siguiente__0__SHIFT EQU 7
siguiente__AG EQU CYREG_PRT1_AG
siguiente__AMUX EQU CYREG_PRT1_AMUX
siguiente__BIE EQU CYREG_PRT1_BIE
siguiente__BIT_MASK EQU CYREG_PRT1_BIT_MASK
siguiente__BYP EQU CYREG_PRT1_BYP
siguiente__CTL EQU CYREG_PRT1_CTL
siguiente__DM0 EQU CYREG_PRT1_DM0
siguiente__DM1 EQU CYREG_PRT1_DM1
siguiente__DM2 EQU CYREG_PRT1_DM2
siguiente__DR EQU CYREG_PRT1_DR
siguiente__INP_DIS EQU CYREG_PRT1_INP_DIS
siguiente__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
siguiente__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
siguiente__LCD_EN EQU CYREG_PRT1_LCD_EN
siguiente__MASK EQU 0x80
siguiente__PORT EQU 1
siguiente__PRT EQU CYREG_PRT1_PRT
siguiente__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
siguiente__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
siguiente__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
siguiente__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
siguiente__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
siguiente__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
siguiente__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
siguiente__PS EQU CYREG_PRT1_PS
siguiente__SHIFT EQU 7
siguiente__SLW EQU CYREG_PRT1_SLW

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
