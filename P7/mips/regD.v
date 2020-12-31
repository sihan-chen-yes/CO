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
	 input IntReq,
    input D_en,
	 input eret,
    input [31:0] instr_F,
    input [31:0] PC_F,
    input [31:0] PC8_F,
	 input [6:2] ExcCodeF,
	 input BDSel,
	 input eretpassed,
	 output reg [6:2] ExcCodeD_raw,
    output reg [31:0] instr_D,
    output reg [31:0] PC_D,
    output reg [31:0] PC8_D,
	 output reg BD_D
    );
	 reg passed;
	 always@(posedge clk)begin
		if(eretpassed)
			passed <= 1;
		if(eret) 
			passed <= 0;
	 end
	 always@(posedge clk) begin
		if(reset|IntReq|eret|eretpassed)begin
			instr_D <= 32'h00000000;
			PC_D <= 32'h00000000;
			PC8_D <= 32'h00000000;
			ExcCodeD_raw <= 5'b00000;
			BD_D <= 0;
		end
		else if(D_en)begin
			instr_D <= instr_F;
			PC_D <= PC_F;
			PC8_D <= PC8_F;
			ExcCodeD_raw <= ExcCodeF;
			if(BDSel)
				BD_D <= 1;
			else 
				BD_D <= 0;
		end
	 end


endmodule
