`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:39:50 12/15/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
	assign C = (ALUOp == 2'b000)? A+B:
				  (ALUOp == 2'b001)? A-B:
				  (ALUOp == 2'b010)? A|B:
				  (ALUOp == 2'b011)? {B[15:0],16'h0000}:
											32'hxxxxxxxx;
	
endmodule
