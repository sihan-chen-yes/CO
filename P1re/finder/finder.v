`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:54:21 11/06/2020 
// Design Name: 
// Module Name:    finder 
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
module finder(
    input [7:0] A,
    output [2:0] B
    );
	integer i;
	integer n = 0;
	always@(*)begin
		for(i=0;i<6;i=i+1)begin
			if(A[i] == 1 && n == 0) n = i;
		end
	end
	assign B = n;

endmodule
