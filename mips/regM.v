`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:57:43 12/15/2020 
// Design Name: 
// Module Name:    regM 
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
module regM(
    input clk,
    input reset,
	 input IntReq,
    input [31:0] instr_E,
    input [31:0] PC_E,
    input [31:0] PC8_E,
    input [31:0] C_E,
    input [31:0] RD2_E,
	 input [4:0] A3_E,
	 input [6:2] ExcCodeE,
	 input BD_E,
    output reg [31:0] C_M,
    output reg [31:0] RD2_M,
    output reg [31:0] instr_M,
    output reg [31:0] PC_M,
    output reg [31:0] PC8_M,
	 output reg [4:0] A3_M,
	 output reg [6:2] ExcCodeM_raw,
	 output reg BD_M
    );
	always@(posedge clk)begin
		if(reset|IntReq)begin
			C_M <= 32'h00000000;
			RD2_M <= 32'h00000000;
			instr_M <= 32'h00000000;
			PC_M <= 32'h00000000;
			PC8_M <= 32'h00000000;
			A3_M <= 5'b00000;
			ExcCodeM_raw <= 5'b00000;
			BD_M <= 0;
		end
		else begin
			C_M <= C_E;
			RD2_M <= RD2_E;
			instr_M <= instr_E;
			PC_M <= PC_E;
			PC8_M <= PC8_E;
			A3_M <= A3_E;
			ExcCodeM_raw <= ExcCodeE;
			BD_M <= BD_E;
		end
	end

endmodule
