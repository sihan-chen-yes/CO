`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:51:10 12/14/2020 
// Design Name: 
// Module Name:    stageF 
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
`define HandlerPC 32'h00004180
`define AdEL 4
module stageF(
    input clk,
    input reset,
    input [31:0] NPC,
	 input [31:0] EPC,
    input PC_en,
	 input eret,
	 input IntReq,
    output [31:0] instr_F,
    output [31:0] PC_F,
    output [31:0] PC8_F,
	 output [6:2] ExcCodeF
    );
	 
	 //------------------PC---------------
	 wire [31:0] nextPC;
	 PC PC(
		.clk(clk),
		.reset(reset),
		.PC_en(PC_EN),
		.NPC(nextPC),
		.PC(PC_F),
		.eret(eret)
	 );
	 assign PC_EN = (IntReq === 1) ? 1:PC_en;
	 assign nextPC = (IntReq === 1)? `HandlerPC:
						  (eret === 1) ?  EPC:
										NPC;
	 
	 
	 assign PC8_F = PC_F + 8;
	 
	 assign ExcCodeF = ((PC_F[1:0] != 2'b0)||(PC_F < 32'h3000 || PC_F > 32'h4ffc))? `AdEL:5'b00000;
							 
	 //------------------IM---------------
	
	IM IM(
		.PC(PC_F),
		.instr(instr_F),
		.ExcCodeF(ExcCodeF)
	);
	
endmodule
