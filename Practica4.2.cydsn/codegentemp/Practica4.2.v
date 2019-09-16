// ======================================================================
// Practica4.2.v generated from TopDesign.cysch
// 06/05/2018 at 02:43
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_ES 17
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 33
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 33
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 9
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 10
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 11
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 12
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 13
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 14
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 15
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 16
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 17
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 18
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 19
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 20
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 21
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 22
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 23
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 24
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 28
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 29
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=0, Address2=0, BaudRate=115200, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=0, Enable_TX=1, Enable_TXIntInterrupt=0, EnableHWAddress=0, EnIntRXInterrupt=false, EnIntTXInterrupt=false, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=true, InternalClock=true, InternalClockToleranceMinus=3.93736842105263, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=1, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=false, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=921600, RXAddressMode=0, RXBufferSize=4, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=4, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=true, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=UART_v2_50, CY_CONFIG_TITLE=UART, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UART, CY_INSTANCE_SHORT_NAME=UART, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.2, INSTANCE_NAME=UART, )
module UART_v2_50_0 (
    cts_n,
    tx,
    rts_n,
    tx_en,
    clock,
    reset,
    rx,
    tx_interrupt,
    rx_interrupt,
    tx_data,
    tx_clk,
    rx_data,
    rx_clk);
    input       cts_n;
    output      tx;
    output      rts_n;
    output      tx_en;
    input       clock;
    input       reset;
    input       rx;
    output      tx_interrupt;
    output      rx_interrupt;
    output      tx_data;
    output      tx_clk;
    output      rx_data;
    output      rx_clk;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 0;
    parameter EnIntTXInterrupt = 0;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 1;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_clock_v1_0
		#(.id("b0162966-0060-4af5-82d1-fcb491ad7619/be0a0e37-ad17-42ca-b5a1-1a654d736358"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1085069444.44444"),
		  .is_direct(0),
		  .is_digital(1))
		IntClock
		 (.clock_out(Net_9));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = Net_9;

    B_UART_v2_50 BUART (
        .cts_n(cts_n),
        .tx(tx),
        .rts_n(rts_n),
        .tx_en(tx_en),
        .clock(Net_61),
        .reset(reset),
        .rx(rx),
        .tx_interrupt(tx_interrupt),
        .rx_interrupt(rx_interrupt),
        .tx_data(tx_data),
        .tx_clk(tx_clk),
        .rx_data(rx_data),
        .rx_clk(rx_clk));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 1;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 1;



endmodule

// CharLCD_v2_20(ConversionRoutines=true, CUSTOM0=0,E,8,8,8,E,0, CUSTOM1=0,A,A,4,4,4,0, CUSTOM2=0,E,A,E,8,8,0, CUSTOM3=0,E,A,C,A,A,0, CUSTOM4=0,E,8,C,8,E,0, CUSTOM5=0,E,8,E,2,E,0, CUSTOM6=0,E,8,E,2,E,0, CUSTOM7=0,4,4,4,0,4,0, CustomCharacterSet=0, TypeReplacementString=uint8, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=CharLCD_v2_20, CY_CONFIG_TITLE=Pantalla, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Pantalla, CY_INSTANCE_SHORT_NAME=Pantalla, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.2, INSTANCE_NAME=Pantalla, )
module CharLCD_v2_20_1 ;



	wire [6:0] tmpOE__LCDPort_net;
	wire [6:0] tmpFB_6__LCDPort_net;
	wire [6:0] tmpIO_6__LCDPort_net;
	wire [0:0] tmpINTERRUPT_0__LCDPort_net;
	electrical [0:0] tmpSIOVREF__LCDPort_net;

	cy_psoc3_pins_v1_10
		#(.id("9df1f67d-2b1d-4d1c-8951-d503e8d8170e/ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(21'b110_110_110_110_110_110_110),
		  .ibuf_enabled(7'b1_1_1_1_1_1_1),
		  .init_dr_st(7'b0_0_0_0_0_0_0),
		  .input_clk_en(0),
		  .input_sync(7'b1_1_1_1_1_1_1),
		  .input_sync_mode(7'b0_0_0_0_0_0_0),
		  .intr_mode(14'b00_00_00_00_00_00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,,,,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(7'b0_0_0_0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(7'b0_0_0_0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(7'b0_0_0_0_0_0_0),
		  .output_conn(7'b0_0_0_0_0_0_0),
		  .output_mode(7'b0_0_0_0_0_0_0),
		  .output_reset(0),
		  .output_sync(7'b0_0_0_0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,,,,,"),
		  .pin_mode("OOOOOOO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(7'b1_1_1_1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(14'b00_00_00_00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(7'b0_0_0_0_0_0_0),
		  .spanning(0),
		  .use_annotation(7'b0_0_0_0_0_0_0),
		  .vtrip(14'b10_10_10_10_10_10_10),
		  .width(7),
		  .ovt_hyst_trim(7'b0_0_0_0_0_0_0),
		  .ovt_needed(7'b0_0_0_0_0_0_0),
		  .ovt_slew_control(14'b00_00_00_00_00_00_00),
		  .input_buffer_sel(14'b00_00_00_00_00_00_00))
		LCDPort
		 (.oe(tmpOE__LCDPort_net),
		  .y({7'b0}),
		  .fb({tmpFB_6__LCDPort_net[6:0]}),
		  .io({tmpIO_6__LCDPort_net[6:0]}),
		  .siovref(tmpSIOVREF__LCDPort_net),
		  .interrupt({tmpINTERRUPT_0__LCDPort_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LCDPort_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{7'b1111111} : {7'b1111111};



endmodule

// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: demux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10\demux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10\demux_v1_10.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONFIG_TITLE=VDAC8, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=generadorOnda:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.2, INSTANCE_NAME=generadorOnda_VDAC8, )
module VDAC8_v1_90_2 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: cydff_v1_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.2\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`endif

// WaveDAC8_v2_10(Clock_SRC=0, DAC_Range=1, DacModeReplString=VDAC8, Sample_Clock_Freq=100000, Wave1_Amplitude=4, Wave1_Data=128u,128u,128u,128u,128u,128u,129u,129u,129u,129u,129u,130u,130u,130u,130u,130u,131u,131u,131u,131u,131u,132u,132u,132u,132u,132u,133u,133u,133u,133u,133u,134u,134u,134u,134u,134u,135u,135u,135u,135u,135u,136u,136u,136u,136u,136u,137u,137u,137u,137u,137u,138u,138u,138u,138u,138u,138u,139u,139u,139u,139u,139u,140u,140u,140u,140u,140u,141u,141u,141u,141u,141u,142u,142u,142u,142u,142u,143u,143u,143u,143u,143u,144u,144u,144u,144u,144u,145u,145u,145u,145u,145u,146u,146u,146u,146u,146u,146u,147u,147u,147u,147u,147u,148u,148u,148u,148u,148u,149u,149u,149u,149u,149u,150u,150u,150u,150u,150u,151u,151u,151u,151u,151u,152u,152u,152u,152u,152u,152u,153u,153u,153u,153u,153u,154u,154u,154u,154u,154u,155u,155u,155u,155u,155u,156u,156u,156u,156u,156u,156u,157u,157u,157u,157u,157u,158u,158u,158u,158u,158u,159u,159u,159u,159u,159u,160u,160u,160u,160u,160u,160u,161u,161u,161u,161u,161u,162u,162u,162u,162u,162u,163u,163u,163u,163u,163u,164u,164u,164u,164u,164u,164u,165u,165u,165u,165u,165u,166u,166u,166u,166u,166u,167u,167u,167u,167u,167u,167u,168u,168u,168u,168u,168u,169u,169u,169u,169u,169u,169u,170u,170u,170u,170u,170u,171u,171u,171u,171u,171u,172u,172u,172u,172u,172u,172u,173u,173u,173u,173u,173u,174u,174u,174u,174u,174u,174u,175u,175u,175u,175u,175u,176u,176u,176u,176u,176u,176u,177u,177u,177u,177u,177u,178u,178u,178u,178u,178u,178u,179u,179u,179u,179u,179u,179u,180u,180u,180u,180u,180u,181u,181u,181u,181u,181u,181u,182u,182u,182u,182u,182u,182u,183u,183u,183u,183u,183u,184u,184u,184u,184u,184u,184u,185u,185u,185u,185u,185u,185u,186u,186u,186u,186u,186u,187u,187u,187u,187u,187u,187u,188u,188u,188u,188u,188u,188u,189u,189u,189u,189u,189u,189u,190u,190u,190u,190u,190u,190u,191u,191u,191u,191u,191u,191u,192u,192u,192u,192u,192u,192u,193u,193u,193u,193u,193u,193u,194u,194u,194u,194u,194u,194u,195u,195u,195u,195u,195u,195u,196u,196u,196u,196u,196u,196u,197u,197u,197u,197u,197u,197u,198u,198u,198u,198u,198u,198u,199u,199u,199u,199u,199u,199u,200u,200u,200u,200u,200u,200u,200u,201u,201u,201u,201u,201u,201u,202u,202u,202u,202u,202u,202u,203u,203u,203u,203u,203u,203u,203u,204u,204u,204u,204u,204u,204u,205u,205u,205u,205u,205u,205u,206u,206u,206u,206u,206u,206u,206u,207u,207u,207u,207u,207u,207u,207u,208u,208u,208u,208u,208u,208u,209u,209u,209u,209u,209u,209u,209u,210u,210u,210u,210u,210u,210u,210u,211u,211u,211u,211u,211u,211u,211u,212u,212u,212u,212u,212u,212u,212u,213u,213u,213u,213u,213u,213u,213u,214u,214u,214u,214u,214u,214u,214u,215u,215u,215u,215u,215u,215u,215u,216u,216u,216u,216u,216u,216u,216u,217u,217u,217u,217u,217u,217u,217u,218u,218u,218u,218u,218u,218u,218u,218u,219u,219u,219u,219u,219u,219u,219u,220u,220u,220u,220u,220u,220u,220u,220u,221u,221u,221u,221u,221u,221u,221u,222u,222u,222u,222u,222u,222u,222u,222u,223u,223u,223u,223u,223u,223u,223u,223u,224u,224u,224u,224u,224u,224u,224u,224u,225u,225u,225u,225u,225u,225u,225u,225u,226u,226u,226u,226u,226u,226u,226u,226u,227u,227u,227u,227u,227u,227u,227u,227u,227u,228u,228u,228u,228u,228u,228u,228u,228u,229u,229u,229u,229u,229u,229u,229u,229u,229u,230u,230u,230u,230u,230u,230u,230u,230u,230u,231u,231u,231u,231u,231u,231u,231u,231u,231u,232u,232u,232u,232u,232u,232u,232u,232u,232u,233u,233u,233u,233u,233u,233u,233u,233u,233u,233u,234u,234u,234u,234u,234u,234u,234u,234u,234u,234u,235u,235u,235u,235u,235u,235u,235u,235u,235u,235u,236u,236u,236u,236u,236u,236u,236u,236u,236u,236u,237u,237u,237u,237u,237u,237u,237u,237u,237u,237u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,252u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,251u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,250u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,248u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,247u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,245u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,244u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,243u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,242u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,241u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,240u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,239u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,238u,237u,237u,237u,237u,237u,237u,237u,237u,237u,237u,236u,236u,236u,236u,236u,236u,236u,236u,236u,236u,235u,235u,235u,235u,235u,235u,235u,235u,235u,235u,234u,234u,234u,234u,234u,234u,234u,234u,234u,234u,233u,233u,233u,233u,233u,233u,233u,233u,233u,233u,232u,232u,232u,232u,232u,232u,232u,232u,232u,231u,231u,231u,231u,231u,231u,231u,231u,231u,230u,230u,230u,230u,230u,230u,230u,230u,230u,229u,229u,229u,229u,229u,229u,229u,229u,229u,228u,228u,228u,228u,228u,228u,228u,228u,227u,227u,227u,227u,227u,227u,227u,227u,227u,226u,226u,226u,226u,226u,226u,226u,226u,225u,225u,225u,225u,225u,225u,225u,225u,224u,224u,224u,224u,224u,224u,224u,224u,223u,223u,223u,223u,223u,223u,223u,223u,222u,222u,222u,222u,222u,222u,222u,222u,221u,221u,221u,221u,221u,221u,221u,220u,220u,220u,220u,220u,220u,220u,220u,219u,219u,219u,219u,219u,219u,219u,218u,218u,218u,218u,218u,218u,218u,218u,217u,217u,217u,217u,217u,217u,217u,216u,216u,216u,216u,216u,216u,216u,215u,215u,215u,215u,215u,215u,215u,214u,214u,214u,214u,214u,214u,214u,213u,213u,213u,213u,213u,213u,213u,212u,212u,212u,212u,212u,212u,212u,211u,211u,211u,211u,211u,211u,211u,210u,210u,210u,210u,210u,210u,210u,209u,209u,209u,209u,209u,209u,209u,208u,208u,208u,208u,208u,208u,207u,207u,207u,207u,207u,207u,207u,206u,206u,206u,206u,206u,206u,206u,205u,205u,205u,205u,205u,205u,204u,204u,204u,204u,204u,204u,203u,203u,203u,203u,203u,203u,203u,202u,202u,202u,202u,202u,202u,201u,201u,201u,201u,201u,201u,200u,200u,200u,200u,200u,200u,200u,199u,199u,199u,199u,199u,199u,198u,198u,198u,198u,198u,198u,197u,197u,197u,197u,197u,197u,196u,196u,196u,196u,196u,196u,195u,195u,195u,195u,195u,195u,194u,194u,194u,194u,194u,194u,193u,193u,193u,193u,193u,193u,192u,192u,192u,192u,192u,192u,191u,191u,191u,191u,191u,191u,190u,190u,190u,190u,190u,190u,189u,189u,189u,189u,189u,189u,188u,188u,188u,188u,188u,188u,187u,187u,187u,187u,187u,187u,186u,186u,186u,186u,186u,185u,185u,185u,185u,185u,185u,184u,184u,184u,184u,184u,184u,183u,183u,183u,183u,183u,182u,182u,182u,182u,182u,182u,181u,181u,181u,181u,181u,181u,180u,180u,180u,180u,180u,179u,179u,179u,179u,179u,179u,178u,178u,178u,178u,178u,178u,177u,177u,177u,177u,177u,176u,176u,176u,176u,176u,176u,175u,175u,175u,175u,175u,174u,174u,174u,174u,174u,174u,173u,173u,173u,173u,173u,172u,172u,172u,172u,172u,172u,171u,171u,171u,171u,171u,170u,170u,170u,170u,170u,169u,169u,169u,169u,169u,169u,168u,168u,168u,168u,168u,167u,167u,167u,167u,167u,167u,166u,166u,166u,166u,166u,165u,165u,165u,165u,165u,164u,164u,164u,164u,164u,164u,163u,163u,163u,163u,163u,162u,162u,162u,162u,162u,161u,161u,161u,161u,161u,160u,160u,160u,160u,160u,160u,159u,159u,159u,159u,159u,158u,158u,158u,158u,158u,157u,157u,157u,157u,157u,156u,156u,156u,156u,156u,156u,155u,155u,155u,155u,155u,154u,154u,154u,154u,154u,153u,153u,153u,153u,153u,152u,152u,152u,152u,152u,152u,151u,151u,151u,151u,151u,150u,150u,150u,150u,150u,149u,149u,149u,149u,149u,148u,148u,148u,148u,148u,147u,147u,147u,147u,147u,146u,146u,146u,146u,146u,146u,145u,145u,145u,145u,145u,144u,144u,144u,144u,144u,143u,143u,143u,143u,143u,142u,142u,142u,142u,142u,141u,141u,141u,141u,141u,140u,140u,140u,140u,140u,139u,139u,139u,139u,139u,138u,138u,138u,138u,138u,138u,137u,137u,137u,137u,137u,136u,136u,136u,136u,136u,135u,135u,135u,135u,135u,134u,134u,134u,134u,134u,133u,133u,133u,133u,133u,132u,132u,132u,132u,132u,131u,131u,131u,131u,131u,130u,130u,130u,130u,130u,129u,129u,129u,129u,129u,128u,128u,128u,128u,128u,128u,127u,127u,127u,127u,127u,126u,126u,126u,126u,126u,125u,125u,125u,125u,125u,124u,124u,124u,124u,124u,123u,123u,123u,123u,123u,122u,122u,122u,122u,122u,121u,121u,121u,121u,121u,120u,120u,120u,120u,120u,119u,119u,119u,119u,119u,118u,118u,118u,118u,118u,117u,117u,117u,117u,117u,117u,116u,116u,116u,116u,116u,115u,115u,115u,115u,115u,114u,114u,114u,114u,114u,113u,113u,113u,113u,113u,112u,112u,112u,112u,112u,111u,111u,111u,111u,111u,110u,110u,110u,110u,110u,109u,109u,109u,109u,109u,109u,108u,108u,108u,108u,108u,107u,107u,107u,107u,107u,106u,106u,106u,106u,106u,105u,105u,105u,105u,105u,104u,104u,104u,104u,104u,103u,103u,103u,103u,103u,103u,102u,102u,102u,102u,102u,101u,101u,101u,101u,101u,100u,100u,100u,100u,100u,99u,99u,99u,99u,99u,99u,98u,98u,98u,98u,98u,97u,97u,97u,97u,97u,96u,96u,96u,96u,96u,95u,95u,95u,95u,95u,95u,94u,94u,94u,94u,94u,93u,93u,93u,93u,93u,92u,92u,92u,92u,92u,91u,91u,91u,91u,91u,91u,90u,90u,90u,90u,90u,89u,89u,89u,89u,89u,88u,88u,88u,88u,88u,88u,87u,87u,87u,87u,87u,86u,86u,86u,86u,86u,86u,85u,85u,85u,85u,85u,84u,84u,84u,84u,84u,83u,83u,83u,83u,83u,83u,82u,82u,82u,82u,82u,81u,81u,81u,81u,81u,81u,80u,80u,80u,80u,80u,79u,79u,79u,79u,79u,79u,78u,78u,78u,78u,78u,77u,77u,77u,77u,77u,77u,76u,76u,76u,76u,76u,76u,75u,75u,75u,75u,75u,74u,74u,74u,74u,74u,74u,73u,73u,73u,73u,73u,73u,72u,72u,72u,72u,72u,71u,71u,71u,71u,71u,71u,70u,70u,70u,70u,70u,70u,69u,69u,69u,69u,69u,68u,68u,68u,68u,68u,68u,67u,67u,67u,67u,67u,67u,66u,66u,66u,66u,66u,66u,65u,65u,65u,65u,65u,65u,64u,64u,64u,64u,64u,64u,63u,63u,63u,63u,63u,63u,62u,62u,62u,62u,62u,62u,61u,61u,61u,61u,61u,61u,60u,60u,60u,60u,60u,60u,59u,59u,59u,59u,59u,59u,58u,58u,58u,58u,58u,58u,57u,57u,57u,57u,57u,57u,56u,56u,56u,56u,56u,56u,55u,55u,55u,55u,55u,55u,55u,54u,54u,54u,54u,54u,54u,53u,53u,53u,53u,53u,53u,52u,52u,52u,52u,52u,52u,52u,51u,51u,51u,51u,51u,51u,50u,50u,50u,50u,50u,50u,49u,49u,49u,49u,49u,49u,49u,48u,48u,48u,48u,48u,48u,48u,47u,47u,47u,47u,47u,47u,46u,46u,46u,46u,46u,46u,46u,45u,45u,45u,45u,45u,45u,45u,44u,44u,44u,44u,44u,44u,44u,43u,43u,43u,43u,43u,43u,43u,42u,42u,42u,42u,42u,42u,42u,41u,41u,41u,41u,41u,41u,41u,40u,40u,40u,40u,40u,40u,40u,39u,39u,39u,39u,39u,39u,39u,38u,38u,38u,38u,38u,38u,38u,37u,37u,37u,37u,37u,37u,37u,37u,36u,36u,36u,36u,36u,36u,36u,35u,35u,35u,35u,35u,35u,35u,35u,34u,34u,34u,34u,34u,34u,34u,33u,33u,33u,33u,33u,33u,33u,33u,32u,32u,32u,32u,32u,32u,32u,32u,31u,31u,31u,31u,31u,31u,31u,31u,30u,30u,30u,30u,30u,30u,30u,30u,29u,29u,29u,29u,29u,29u,29u,29u,28u,28u,28u,28u,28u,28u,28u,28u,28u,27u,27u,27u,27u,27u,27u,27u,27u,26u,26u,26u,26u,26u,26u,26u,26u,26u,25u,25u,25u,25u,25u,25u,25u,25u,25u,24u,24u,24u,24u,24u,24u,24u,24u,24u,23u,23u,23u,23u,23u,23u,23u,23u,23u,22u,22u,22u,22u,22u,22u,22u,22u,22u,22u,21u,21u,21u,21u,21u,21u,21u,21u,21u,21u,20u,20u,20u,20u,20u,20u,20u,20u,20u,20u,19u,19u,19u,19u,19u,19u,19u,19u,19u,19u,18u,18u,18u,18u,18u,18u,18u,18u,18u,18u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,4u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,5u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,6u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,7u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,8u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,9u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,10u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,11u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,12u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,13u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,14u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,15u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,16u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,17u,18u,18u,18u,18u,18u,18u,18u,18u,18u,18u,19u,19u,19u,19u,19u,19u,19u,19u,19u,19u,20u,20u,20u,20u,20u,20u,20u,20u,20u,20u,21u,21u,21u,21u,21u,21u,21u,21u,21u,21u,22u,22u,22u,22u,22u,22u,22u,22u,22u,22u,23u,23u,23u,23u,23u,23u,23u,23u,23u,24u,24u,24u,24u,24u,24u,24u,24u,24u,25u,25u,25u,25u,25u,25u,25u,25u,25u,26u,26u,26u,26u,26u,26u,26u,26u,26u,27u,27u,27u,27u,27u,27u,27u,27u,28u,28u,28u,28u,28u,28u,28u,28u,28u,29u,29u,29u,29u,29u,29u,29u,29u,30u,30u,30u,30u,30u,30u,30u,30u,31u,31u,31u,31u,31u,31u,31u,31u,32u,32u,32u,32u,32u,32u,32u,32u,33u,33u,33u,33u,33u,33u,33u,33u,34u,34u,34u,34u,34u,34u,34u,35u,35u,35u,35u,35u,35u,35u,35u,36u,36u,36u,36u,36u,36u,36u,37u,37u,37u,37u,37u,37u,37u,37u,38u,38u,38u,38u,38u,38u,38u,39u,39u,39u,39u,39u,39u,39u,40u,40u,40u,40u,40u,40u,40u,41u,41u,41u,41u,41u,41u,41u,42u,42u,42u,42u,42u,42u,42u,43u,43u,43u,43u,43u,43u,43u,44u,44u,44u,44u,44u,44u,44u,45u,45u,45u,45u,45u,45u,45u,46u,46u,46u,46u,46u,46u,46u,47u,47u,47u,47u,47u,47u,48u,48u,48u,48u,48u,48u,48u,49u,49u,49u,49u,49u,49u,49u,50u,50u,50u,50u,50u,50u,51u,51u,51u,51u,51u,51u,52u,52u,52u,52u,52u,52u,52u,53u,53u,53u,53u,53u,53u,54u,54u,54u,54u,54u,54u,55u,55u,55u,55u,55u,55u,55u,56u,56u,56u,56u,56u,56u,57u,57u,57u,57u,57u,57u,58u,58u,58u,58u,58u,58u,59u,59u,59u,59u,59u,59u,60u,60u,60u,60u,60u,60u,61u,61u,61u,61u,61u,61u,62u,62u,62u,62u,62u,62u,63u,63u,63u,63u,63u,63u,64u,64u,64u,64u,64u,64u,65u,65u,65u,65u,65u,65u,66u,66u,66u,66u,66u,66u,67u,67u,67u,67u,67u,67u,68u,68u,68u,68u,68u,68u,69u,69u,69u,69u,69u,70u,70u,70u,70u,70u,70u,71u,71u,71u,71u,71u,71u,72u,72u,72u,72u,72u,73u,73u,73u,73u,73u,73u,74u,74u,74u,74u,74u,74u,75u,75u,75u,75u,75u,76u,76u,76u,76u,76u,76u,77u,77u,77u,77u,77u,77u,78u,78u,78u,78u,78u,79u,79u,79u,79u,79u,79u,80u,80u,80u,80u,80u,81u,81u,81u,81u,81u,81u,82u,82u,82u,82u,82u,83u,83u,83u,83u,83u,83u,84u,84u,84u,84u,84u,85u,85u,85u,85u,85u,86u,86u,86u,86u,86u,86u,87u,87u,87u,87u,87u,88u,88u,88u,88u,88u,88u,89u,89u,89u,89u,89u,90u,90u,90u,90u,90u,91u,91u,91u,91u,91u,91u,92u,92u,92u,92u,92u,93u,93u,93u,93u,93u,94u,94u,94u,94u,94u,95u,95u,95u,95u,95u,95u,96u,96u,96u,96u,96u,97u,97u,97u,97u,97u,98u,98u,98u,98u,98u,99u,99u,99u,99u,99u,99u,100u,100u,100u,100u,100u,101u,101u,101u,101u,101u,102u,102u,102u,102u,102u,103u,103u,103u,103u,103u,103u,104u,104u,104u,104u,104u,105u,105u,105u,105u,105u,106u,106u,106u,106u,106u,107u,107u,107u,107u,107u,108u,108u,108u,108u,108u,109u,109u,109u,109u,109u,109u,110u,110u,110u,110u,110u,111u,111u,111u,111u,111u,112u,112u,112u,112u,112u,113u,113u,113u,113u,113u,114u,114u,114u,114u,114u,115u,115u,115u,115u,115u,116u,116u,116u,116u,116u,117u,117u,117u,117u,117u,117u,118u,118u,118u,118u,118u,119u,119u,119u,119u,119u,120u,120u,120u,120u,120u,121u,121u,121u,121u,121u,122u,122u,122u,122u,122u,123u,123u,123u,123u,123u,124u,124u,124u,124u,124u,125u,125u,125u,125u,125u,126u,126u,126u,126u,126u,127u,127u,127u,127u,127u, Wave1_DCOffset=2.04, Wave1_Length=4000, Wave1_PhaseShift=0, Wave1_Type=0, Wave2_Amplitude=4, Wave2_Data=128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u, Wave2_DCOffset=2.04, Wave2_Length=100, Wave2_PhaseShift=0, Wave2_Type=2, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONFIG_TITLE=generadorOnda, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=generadorOnda, CY_INSTANCE_SHORT_NAME=generadorOnda, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.2, INSTANCE_NAME=generadorOnda, )
module WaveDAC8_v2_10_3 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = clock;

    VDAC8_v1_90_2 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_256);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// top
module top ;

          wire  Net_51;
          wire  Net_23;
          wire  Net_22;
          wire  Net_21;
          wire  Net_13;
          wire  Net_12;
          wire  Net_11;
          wire  Net_10;
          wire  Net_9;
          wire  Net_8;
          wire  Net_7;
          wire  Net_6;
          wire  Net_5;
          wire  Net_4;
          wire  Net_3;
          wire  Net_2;
          wire  Net_1;
          wire  Net_174;
    electrical  Net_20;

    assign Net_1 = 1'h0;

    UART_v2_50_0 UART (
        .cts_n(1'b0),
        .tx(Net_3),
        .rts_n(Net_4),
        .tx_en(Net_5),
        .clock(1'b0),
        .reset(Net_1),
        .rx(Net_7),
        .tx_interrupt(Net_8),
        .rx_interrupt(Net_9),
        .tx_data(Net_10),
        .tx_clk(Net_11),
        .rx_data(Net_12),
        .rx_clk(Net_13));
    defparam UART.Address1 = 0;
    defparam UART.Address2 = 0;
    defparam UART.EnIntRXInterrupt = 0;
    defparam UART.EnIntTXInterrupt = 0;
    defparam UART.FlowControl = 0;
    defparam UART.HalfDuplexEn = 0;
    defparam UART.HwTXEnSignal = 1;
    defparam UART.NumDataBits = 8;
    defparam UART.NumStopBits = 1;
    defparam UART.ParityType = 0;
    defparam UART.RXEnable = 1;
    defparam UART.TXEnable = 1;

	wire [0:0] tmpOE__Rx_1_net;
	wire [0:0] tmpIO_0__Rx_1_net;
	wire [0:0] tmpINTERRUPT_0__Rx_1_net;
	electrical [0:0] tmpSIOVREF__Rx_1_net;

	cy_psoc3_pins_v1_10
		#(.id("1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rx_1
		 (.oe(tmpOE__Rx_1_net),
		  .y({1'b0}),
		  .fb({Net_7}),
		  .io({tmpIO_0__Rx_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Rx_1_net),
		  .interrupt({tmpINTERRUPT_0__Rx_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rx_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Tx_1_net;
	wire [0:0] tmpFB_0__Tx_1_net;
	wire [0:0] tmpIO_0__Tx_1_net;
	wire [0:0] tmpINTERRUPT_0__Tx_1_net;
	electrical [0:0] tmpSIOVREF__Tx_1_net;

	cy_psoc3_pins_v1_10
		#(.id("ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Tx_1
		 (.oe(tmpOE__Tx_1_net),
		  .y({Net_3}),
		  .fb({tmpFB_0__Tx_1_net[0:0]}),
		  .io({tmpIO_0__Tx_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Tx_1_net),
		  .interrupt({tmpINTERRUPT_0__Tx_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Tx_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b10))
		UART_isr
		 (.int_signal(Net_9));


    CharLCD_v2_20_1 Pantalla ();

	wire [0:0] tmpOE__Pin_1_net;
	wire [0:0] tmpFB_0__Pin_1_net;
	wire [0:0] tmpIO_0__Pin_1_net;
	wire [0:0] tmpINTERRUPT_0__Pin_1_net;
	electrical [0:0] tmpSIOVREF__Pin_1_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Pin_1
		 (.oe(tmpOE__Pin_1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Pin_1_net[0:0]}),
		  .analog({Net_20}),
		  .io({tmpIO_0__Pin_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Pin_1_net),
		  .interrupt({tmpINTERRUPT_0__Pin_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Pin_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    WaveDAC8_v2_10_3 generadorOnda (
        .Wave(Net_20),
        .ws(Net_21),
        .clock(Net_174),
        .wc1(Net_22),
        .wc2(Net_23));

    assign Net_21 = 1'h0;


	cy_clock_v1_0
		#(.id("ef6cff08-8b10-44cf-b265-5a1fb10d0818"),
		  .source_clock_id("CEF43CFB-0213-49b9-B980-2FFAB81C5B47"),
		  .divisor(10000),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_174));




endmodule

