`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:39:13 12/15/2020 
// Design Name: 
// Module Name:    stageE 
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
module stageE(
    input [31:0] RD1_E,
    input [31:0] RD2_E,
    input [31:0] imm32_E,
	 input [31:0] RFWD_M,
	 input [31:0] RFWD_W,
	 input [1:0] MF_ALUA_Sel,
	 input [1:0] MF_ALUB_Sel,
    input [1:0] ALUOp,
	 input BSel,
    output [31:0] C_E
    );
	 //------------------ALU---------------
	 //×ª·¢£¡ RD1 RD2 			
	 
	 wire	[31:0] ALUA,ALUB,RD2_new;								
	 assign ALUA = (MF_ALUA_Sel == 2'b10)? RFWD_M:
						(MF_ALUA_Sel == 2'b01)? RFWD_W:
														RD1_E;
														
	 assign RD2_new = (MF_ALUB_Sel == 2'b10)? RFWD_M:
							(MF_ALUB_Sel == 2'b01)? RFWD_W:
															RD2_E;

	
	 assign ALUB = (BSel == 0)? RD2_new:
										imm32_E;													
	 ALU ALU(
		.A(ALUA),
		.B(ALUB),
		.ALUOp(ALUOp),
		.C(C_E)
	 );
	 
endmodule
