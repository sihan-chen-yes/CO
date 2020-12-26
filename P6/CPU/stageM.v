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
`define test 32'h00003fff
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
    output [31:0] D_M,
	 output [31:0] RFWD_M
    );
	wire [31:0] WD,WD_raw,D_raw;
	//×ª·¢ WD
	assign WD_raw = (MF_DMWD_Sel == 1) ? RFWD_W:
														WD_M;
														
	assign RFWD_M = (WDSel_M == 2'b00) ? C_M:
						 (WDSel_M == 2'b10) ? PC8_M:
														 32'hxxxxxxxx;
	DA DA(
	   .addr(A_M[1:0]),
		.WD_raw(WD_raw),
		.D_raw(D_raw),
		.DAOp(DAOp),
		.SSel(SSel),
		.WD_new(WD),
		.D_new(D_M)
	);
	
	
	DM DM(
		.clk(clk),
		.reset(reset),
		.PC(PC_M),
		.DMWr(DMWr),
		.A(A_M),
		.WD(WD),
		.D(D_raw)
	);

endmodule
