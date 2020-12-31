`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:32 12/14/2020 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
	 input PC_en,
    input [31:0] NPC,
	 input eret,
    output reg [31:0] PC
    );
	initial begin
	PC <= 32'h00003000;
	end
	
	always@(posedge clk) begin
		if(reset)
			PC <= 32'h00003000;
		else if(PC_en|eret) begin
			PC <= NPC;
		end
	end

endmodule
