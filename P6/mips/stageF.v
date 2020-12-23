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
module stageF(
    input clk,
    input reset,
    input [31:0] NPC,
    input PC_en,
    output [31:0] instr_F,
    output [31:0] PC_F,
    output [31:0] PC8_F
    );
	 
	 //------------------PC---------------
	 PC PC(
		.clk(clk),
		.reset(reset),
		.PC_en(PC_en),
		.NPC(NPC),
		.PC(PC_F)
	 );
	 
	 assign PC8_F = PC_F + 8;
	 
	 
	 //------------------IM---------------
	
	IM IM(
		.PC(PC_F),
		.instr(instr_F)
	);
	
endmodule
