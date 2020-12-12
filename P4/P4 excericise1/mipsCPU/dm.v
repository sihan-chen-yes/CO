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
	input [31:0] A,
	input [31:0] WD,
	input [31:0] PC,
	input Lah_Sel,
	output [31:0] D
    );
	reg [31:0] DM[0:1023];
	integer i;
	 
	initial begin
		for(i=0;i<1024;i=i+1) begin
			DM[i] = 32'b0;
		end
	end
	//寄存器的清空
	
	always @(posedge CLK)begin
		if(Reset) begin
			for(i=0;i<1024;i=i+1) begin
				DM[i] <= 32'b0;
			end
		end
		else if(DMWr) begin
			DM[A[11:2]] <= WD;
			$display("@%h: *%h <= %h", PC, A, WD);
		end
		//DM写入操作
	end
	
	
	wire [31:0] d,tmp;
	wire h_Sel;
	assign h_Sel = A[1];
	assign tmp = (h_Sel)? {16'b0,DM[A[11:2]][31:16]}:{16'b0,DM[A[11:2]][15:0]};
	assign d = (tmp % 4 == 0)? tmp:32'b0;

	assign D = (Lah_Sel) ? 		d:
									DM[A[11:2]];
	//DM读取操作
endmodule
