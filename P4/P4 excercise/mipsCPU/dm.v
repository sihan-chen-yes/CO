`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:07:09 12/02/2020 
// Design Name: 
// Module Name:    dm 
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
module dm(
	input CLK,
	input Reset,
	input DMWr,
	input RSel,
	input [31:0] A,
	input [31:0] WD,
	input [31:0] PC,
	output [31:0] D
    );
	integer wd;
	reg [31:0] DM[0:1023];
	integer i;
	integer cnt;
	 
	initial begin
		for(i=0;i<1024;i=i+1) begin
			DM[i] = 32'b0;
		end
	end
	
	//寄存器的清空
	wire [1:0] addr;
	assign addr = A[1:0];
	always@(*) begin
		cnt = A;
		wd = WD;
		while(cnt) begin
			wd = {wd[7:0],wd[31:8]};
			cnt = cnt - 1;
		end
	end
	//swrr
	always @(posedge CLK)begin
		if(Reset) begin
			for(i=0;i<1024;i=i+1) begin
				DM[i] <= 32'b0;
			end
		end
		else if(DMWr) begin
			if(!RSel) begin
				DM[A[11:2]] <= WD;
				$display("@%h: *%h <= %h", PC, A, WD);
			end
			else begin
				DM[A[11:2]] <= wd;
				$display("@%h: *%h <= %h", PC, {A[31:2],2'b00}, wd);
			end
		end
		//DM写入操作
	end
	
	assign D = DM[A[11:2]];
	//DM读取操作
endmodule
