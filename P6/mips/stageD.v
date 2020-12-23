`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:30:01 12/14/2020 
// Design Name: 
// Module Name:    stageD 
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
module stageD(
    input clk,
    input reset,
    input [4:0] A1_D,
    input [4:0] A2_D,
    input [4:0] A3_W,
    input [31:0] PC_W,
	 input [31:0] PC_F,
    input EXTOp,
	 input [31:0] PC_D,
	 input [15:0] imm16,
	 input [25:0] addr26,
    input [1:0] NPCOp,
	 input [1:0] MF_RD1_Sel,
	 input [1:0] MF_RD2_Sel,
	 input [31:0] RFWD_M,
	 input [31:0] PC8_E,
	 input [31:0] RFWD_W,
	 input Br,
    output [31:0] RD1_D,
    output [31:0] RD2_D,
    output [31:0] imm32_D,
	 output [31:0] Next_PC,
	 output Equ,
	 output Ltz,
	 output Gtz
    );
	 
	//------------------GRF---------------
	wire [31:0] RD1_D_raw,RD2_D_raw;
	GRF GRF(
		.clk(clk),
		.reset(reset),
		.A1(A1_D),
		.A2(A2_D),
		.A3(A3_W),
		.WD(RFWD_W),
		.PC(PC_W),
		.RD1(RD1_D_raw),
		.RD2(RD2_D_raw)
	);
	
	//×ª·¢£¡ RD1 RD2
	assign RD1_D = (MF_RD1_Sel == 2'b10)? PC8_E:
						(MF_RD1_Sel == 2'b01)? RFWD_M:
														RD1_D_raw;
	assign RD2_D = (MF_RD2_Sel == 2'b10)? PC8_E:
						(MF_RD2_Sel == 2'b01)? RFWD_M:
														RD2_D_raw;		
	//------------------EXT---------------
	EXT EXT(
		.imm16(imm16),
		.EXTOp(EXTOp),
		.imm32(imm32_D)
	);

	//------------------CMP---------------		
	CMP CMP(
		.A(RD1_D),
		.B(RD2_D),
		.Equ(Equ),
		.Ltz(Ltz),
		.Gtz(Gtz)
	);
	
	//------------------NPC---------------
	NPC NPC(
		.imm16(imm16),
		.addr26(addr26),
		.PC_F(PC_F),
		.PC_D(PC_D),
		.RA(RD1_D),
		.NPCOp(NPCOp),
		.Br(Br),
		.NPC(Next_PC)
	);

endmodule
