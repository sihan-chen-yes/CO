`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:20:36 12/15/2020 
// Design Name: 
// Module Name:    regW 
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
module regW(
    input clk,
    input reset,
	 input IntReq,
	 input eret,
    input [31:0] instr_M,
    input [31:0] PC8_M,
    input [31:0] D_M,
    input [31:0] C_M,
	 input [31:0] PC_M,
	 input [4:0] A3_M,
	 output reg [31:0] PC_W,
    output reg [31:0] instr_W,
    output reg [31:0] PC8_W,
    output reg [31:0] D_W,
    output reg [31:0] C_W,
	 output reg [4:0] A3_W
    );
	always@(posedge clk)begin
		if(reset|IntReq|eret)begin
			instr_W <= 32'h00000000;
			PC8_W <= 32'h00000000;
			D_W <= 32'h00000000;
			C_W <= 32'h00000000;
			A3_W <= 5'b00000;
			PC_W <= 32'h00000000;
		end
		else begin
			instr_W <= instr_M;
			PC8_W <= PC8_M;
			PC_W <= PC_M;
			D_W <= D_M;
			C_W <= C_M;
			A3_W <= A3_M;
		end
	end

endmodule
