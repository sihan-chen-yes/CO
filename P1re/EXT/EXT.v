`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:43 11/05/2020 
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

	assign ext = (EOp == 0)? {{16{imm[15]}},imm[15:0]}:
					 (EOp == 1)? {16'b0,imm[15:0]}:
					 (EOp == 2)? {imm[15:0],16'b0}:
					 (EOp == 3)? {{16{imm[15]}},imm[15:0]}<<2:
					 0;
					 
endmodule
