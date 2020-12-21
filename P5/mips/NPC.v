`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:55:14 12/14/2020 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [15:0] imm16,
    input [25:0] addr26,
	 input [31:0] PC_F,
	 input [31:0] PC_D,
	 input [31:0] RA,
    input [1:0] NPCOp,
	 input Equ,
	 input Gez,
    output [31:0] NPC
    );
	 wire [31:0] PC4,beqPC,jalPC,jrPC;
	 assign PC4 = PC_F + 4;
	 assign beqPC = (Equ|Gez)? PC_D+4+{{14{imm16[15]}},imm16,2'b00}:PC4;
	 assign jalPC = {PC_D[31:28],addr26,2'b00};
	 assign jrPC = RA;
	 assign NPC = (NPCOp == 2'b00) ? PC4:
					  (NPCOp == 2'b01) ? beqPC:
					  (NPCOp == 2'b10) ? jalPC:
												jrPC;
endmodule
