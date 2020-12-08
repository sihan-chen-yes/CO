`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:26 12/01/2020 
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
    input [15:0] imm16,
    output [31:0] Ext,
	 output [31:0] imm32,
    input EXTOp
    );
	assign imm32 = {imm16,16'b0};
	assign Ext = (EXTOp == 1)?{{16{imm16[15]}},imm16}:
									  {16'h0000,imm16};								
endmodule
