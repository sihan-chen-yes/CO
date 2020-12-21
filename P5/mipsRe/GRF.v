`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:34:34 12/14/2020 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input clk,
    input reset,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input [31:0] PC,
    output [31:0] RD1,
    output [31:0] RD2
    );
	reg [31:0] GRF [0:31];
	integer i;
	initial begin
		for(i=0;i<32;i=i+1)
			GRF[i] = 32'h00000000;
	end
	//初始化
	
	always@(posedge clk) begin
		if(reset)
			for(i=0;i<32;i=i+1)
				GRF[i] <= 32'h00000000;
		else begin
			if(A3) begin
				GRF[A3] <= WD;
				$display("%d@%h: $%d <= %h",$time, PC, A3, WD);
			end
		end
	end
	//GRF写入
	
	assign RD1 = ((A3 == A1)&&(A3)) ? WD:GRF[A1];
	assign RD2 = ((A3 == A2)&&(A3)) ? WD:GRF[A2];
	//GRF读出

endmodule
