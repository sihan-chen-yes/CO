`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:09:00 12/15/2020 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input [31:0] A,
    input [31:0] WD,
	 input DMWr,
	 input [31:0] PC,
    input clk,
    input reset,
    output [31:0] D
    );
	reg [31:0] DM[0:3071];
	integer i;
	initial begin
		for(i=0;i<3072;i=i+1) begin
			DM[i] <= 32'b00000000;
		end
	end
	//初始化
	
	always @(posedge clk)begin
		if(reset) begin
			for(i=0;i<3072;i=i+1) begin
				DM[i] <= 32'b0;
			end
		end
		else if(DMWr) begin
			DM[A[15:2]] <= WD;
			$display("%d@%h: *%h <= %h",$time, PC, A, WD);
		end
	end
	//DM写入操作
	
	assign D = DM[A[11:2]];
endmodule
