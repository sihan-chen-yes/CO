`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:11 12/14/2020 
// Design Name: 
// Module Name:    regD 
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
module regD(
    input clk,
    input reset,
    input D_en,
	 input D_clr,
    input [31:0] instr_F,
    input [31:0] PC_F,
    input [31:0] PC8_F,
    output reg [31:0] instr_D,
    output reg [31:0] PC_D,
    output reg [31:0] PC8_D
    );
	 always@(posedge clk) begin
		if(reset|(D_clr)begin
			instr_D <= 32'h00000000;
			PC_D <= 32'h00000000;
			PC8_D <= 32'h00000000;
		end
		else if(D_en)begin
			instr_D <= instr_F;
			PC_D <= PC_F;
			PC8_D <= PC8_F;
		end
	 end


endmodule
