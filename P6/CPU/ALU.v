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
`define ADD 4'b0000
`define SUB 4'b0001
`define AND 4'b0010
`define OR  4'b0011
`define XOR 4'b0100
`define NOR 4'b0101
`define LUI 4'b0110
`define SLT 4'b0111
`define SLTU 4'b1000
`define SLL 4'b1001
`define SRL 4'b1010
`define SRA 4'b1011

module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALUOp,
	 input [4:0] shamt,
    output [31:0] C
    );
	wire [31:0] slt,sltu,sra;
	
	assign slt = ($signed(A)<$signed(B))? 32'h00000001:
													32'h00000000;
													
	assign sltu = (A<B) ? 32'h00000001:
								 32'h00000000;
								 
	assign sra = $signed(B)>>>shamt;	
	
	assign C = (ALUOp == `ADD)? A+B:
				  (ALUOp == `SUB)? A-B:
				  (ALUOp == `AND)? A&B:
				  (ALUOp == `OR)?  A|B:
				  (ALUOp == `XOR)? A^B:
				  (ALUOp == `NOR)? ~(A|B):
				  (ALUOp == `LUI)? {B[15:0],16'h0000}:
				  (ALUOp == `SLT)? slt:
				  (ALUOp == `SLTU)? sltu:
				  (ALUOp == `SLL)? B<<shamt:
				  (ALUOp == `SRL)? B>>shamt:
				  (ALUOp == `SRA)? sra:			  
											32'hxxxxxxxx;
	
endmodule
