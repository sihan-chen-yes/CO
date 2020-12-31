`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:16:04 12/15/2020 
// Design Name: 
// Module Name:    regE 
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
module regE(
    input clk,
    input reset,
    input E_clr,
	 input RI,
	 input eret,
	 input IntReq,
    input [31:0] instr_D,
    input [31:0] PC_D,
    input [31:0] PC8_D,
    input [31:0] RD1_D,
    input [31:0] RD2_D,
    input [31:0] imm32_D,
	 input [4:0] A3_D,
	 input [6:2] ExcCodeD,
	 input BD_D,
    output reg [31:0] RD1_E,
    output reg [31:0] RD2_E,
    output reg [31:0] imm32_E,
    output reg [31:0] instr_E,
    output reg [31:0] PC_E,
    output reg [31:0] PC8_E,
	 output reg [4:0] A3_E,
	 output reg [6:2] ExcCodeE_raw,
	 output reg BD_E
    );
	 always@(posedge clk)begin
		if(reset|E_clr|IntReq|eret)begin
			RD1_E <= 32'h00000000;
			RD2_E <= 32'h00000000;
			imm32_E <= 32'h00000000;
			instr_E <= 32'h00000000;
			PC_E <= 32'h00000000;
			PC8_E <= 32'h00000000;
			A3_E <= 5'b00000;
			ExcCodeE_raw <= 5'b00000;
			BD_E <= 0;
		end
		else if(RI) begin
			RD1_E <= 32'h00000000;
			RD2_E <= 32'h00000000;
			imm32_E <= 32'h00000000;
			instr_E <= 32'h00000000;
			PC_E <= PC_D;
			PC8_E <= 32'h00000000;
			A3_E <= 5'b00000;
			ExcCodeE_raw <= ExcCodeD;
			BD_E <= BD_D;
		end
		else begin
			RD1_E <= RD1_D;
			RD2_E <= RD2_D;
			imm32_E <= imm32_D;
			instr_E <= instr_D;
			PC_E <= PC_D;
			PC8_E <= PC8_D;
			A3_E <= A3_D;
			ExcCodeE_raw <= ExcCodeD;
			BD_E <= BD_D;
		end 
	 end


endmodule
