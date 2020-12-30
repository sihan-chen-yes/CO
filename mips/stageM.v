`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:06:16 12/15/2020 
// Design Name: 
// Module Name:    stageM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define AdEL 4
`define AdES 5
module stageM(
    input clk,
    input reset,
    input [31:0] PC_M,
    input DMWr,
    input [31:0] A_M,
    input [31:0] WD_M,
	 input [31:0] RFWD_W,
	 input MF_DMWD_Sel,
	 input [1:0] WDSel_M,
	 input [31:0] C_M,
	 input [31:0] PC8_M,
	 input [1:0] DAOp,
	 input SSel,
	 input [6:2] ExcCodeM_raw,
	 input [1:0] LoadType,
	 input [1:0] StoreType,
	 input [4:0] rd,
	 input [15:10] HWInt,
	 input We,
	 input eret,
	 input [31:0] PrRD,
	 input [31:0] PC_E,
	 input [31:0] PC_D,
	 input [31:0] PC_F,
	 input [6:2] ExcCodeE,
	 input [6:2] ExcCodeD,
	 input BD_D,
	 input BD_E,
	 input BD_M,
    output [31:0] D_M,
	 output [31:0] RFWD_M,
	 output [31:0] EPC,
	 output IntReq,
	 output [31:0] PrWD,
	 output [31:2] PrAddr,
	 output [31:0] PC_Int
    );
	wire [31:0] WD,WD_raw,D_raw;
	//×ª·¢ WD
	assign WD_raw = (MF_DMWD_Sel == 1) ? RFWD_W:
														WD_M;
														
	assign RFWD_M = (WDSel_M == 2'b00) ? C_M:
						 (WDSel_M == 2'b10) ? PC8_M:
													 32'h33333333;
													 
	wire [31:0] D_DM;												 
	DA DA(
	   .addr(A_M[1:0]),
		.WD_raw(WD_raw),
		.D_raw(D_raw),
		.DAOp(DAOp),
		.SSel(SSel),
		.WD_new(WD),
		.D_new(D_DM)
	);
	assign PrWD = WD_raw;
	assign PrAddr = A_M[31:2];
	
	wire [31:0] D;
	wire DEV0_hit,DEV1_hit,DM_hit,Count_hit;
	assign DEV0_hit = A_M >= 32'h7f00 && A_M <= 32'h7f0b;
	assign DEV1_hit = A_M >= 32'h7f10 && A_M <= 32'h7f1b;
	assign DM_hit = A_M >= 0 && A_M <= 32'h2fff;
	assign Count_hit = (A_M >= 32'h7f08 && A_M <= 32'h7f0b)||(A_M >= 32'h7f18 && A_M <= 32'h7f1b);
	
	
	assign D = (DM_hit) ? D_DM:
				  (DEV0_hit|DEV1_hit) ? PrRD:
												32'h33333333;
	assign D_M = (LoadType == 1 || LoadType == 2 || LoadType == 3)?D:
																						D_C0;
	DM DM(
		.clk(clk),
		.reset(reset),
		.PC(PC_M),
		.DMWr(DMWr&DM_hit&(~IntReq)),
		.A(A_M),
		.WD(WD),
		.D(D_raw)
	);
	
	wire [6:2] ExcCodeM_new,ExcCodeM;
	assign ExcCodeM = (ExcCodeM_raw)?ExcCodeM_raw:
												ExcCodeM_new;
	
	
	assign ExcCodeM_new = (((LoadType == 1)&&(A_M[1:0] != 0))
								||((LoadType == 2)&&(A_M[0] != 0))
								||(((LoadType == 2)||(LoadType == 3))&&(DEV0_hit|DEV1_hit))
								||(((LoadType == 1)||(LoadType == 2)||(LoadType == 3))&&(~(DM_hit|DEV0_hit|DEV1_hit))))? `AdEL:
								(((StoreType == 1)&&(A_M[1:0] != 0))
								||((StoreType == 2)&&(A_M[0] != 0))
								||(((StoreType == 2)||(StoreType == 3))&&(DEV0_hit|DEV1_hit))
								||(((StoreType == 1)||(StoreType == 2)||(StoreType == 3))&&(~(DM_hit|DEV0_hit|DEV1_hit)))
								||(((StoreType == 1)||(StoreType == 2)||(StoreType == 3))&&(Count_hit)))? `AdES:
																																	5'b00000;
	
	wire [31:0] D_C0;
	assign PC_Int = (PC_M != 0|| ExcCodeM != 0) ? PC_M:
						 (PC_E != 0|| ExcCodeE != 0) ? PC_E:
						 (PC_D != 0|| ExcCodeD != 0) ? PC_D:
															    PC_F;
																 
	wire BD_Int;
	assign BD_Int = (PC_M != 0|| ExcCodeM != 0) ? BD_M:
						 (PC_E != 0|| ExcCodeE != 0) ? BD_E:
																 BD_D;
															    
	
	CP0 CP0(
		.clk(clk),
		.reset(reset),
		.A(rd),
		.Din(WD_raw),
		.PC_Int(PC_Int[31:2]),
		.ExcCode(ExcCodeM),
		.HWInt(HWInt),
		.We(We&(~IntReq)),
		.eret(eret),
		.BD(BD_Int),
		.Dout(D_C0),
		.EPC(EPC),
		.IntReq(IntReq)
	);
	
endmodule
