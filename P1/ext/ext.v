`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:37:09 10/25/2020 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
	 wire [31:0] p;
	 wire [31:0] q;
	 assign p = {{16{1'b1}},imm[15:0]};
	 assign q = {16'b0,imm[15:0]};
	 
	assign ext = (EOp == 0)? ((imm[15] == 1)? p : q):
						(EOp == 1)?  q:
						(EOp == 2)?	 imm << 16:
						(EOp == 3)?  ((imm[15] == 1)? p : q) << 2:
										0;

endmodule
