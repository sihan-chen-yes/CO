`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:13 12/14/2020 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm16,
    input  EXTOp,
    output [31:0] imm32
    );
	assign imm32 = (EXTOp == 2'b00)? {16'h0000,imm16}:
						(EXTOp == 2'b01)? {{16{imm16[15]}},imm16}:
																	32'hxxxxxxxx;

endmodule
