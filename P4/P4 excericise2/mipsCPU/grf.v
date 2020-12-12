`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:16:12 12/01/2020 
// Design Name: 
// Module Name:    grf 
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
module grf(
    input CLK,
    input Reset,
    input RFWr,
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
	//GRF初始化
	
	always@(posedge CLK) begin
		if(Reset)
			for(i=0;i<32;i=i+1)
			GRF[i] <= 32'h00000000;
		else begin
			if(RFWr && A3 != 5'b00000) begin
				GRF[A3] <= WD;
				$display("@%h: $%d <= %h", PC, A3, WD);
			end
		end
	end
	//GRF写入
	
	assign RD1 = GRF[A1];
	assign RD2 = GRF[A2];
	//GRF读出
endmodule
