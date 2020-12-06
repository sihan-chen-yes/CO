`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:10:54 10/29/2020 
// Design Name: 
// Module Name:    compare 
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
module compare(
    input [2:0] A,
    input [2:0] B,
    output reg result
    );
	 always @(*) begin
	 if(A[2] == 1 && B[2] == 0)
		result <= 1;
	 else if(A[2] == 0 && B[2] == 1)
		result <= 0;
	 else if(A[1] ==1 && B[1] == 0)
	 	result <= 1;
	 else if(A[1] ==0 && B[1] == 1)
		result <= 0;
	 else if(A[0] ==1 && B[0] == 0)
	 	result <= 1;
	 else if(A[0] ==0 && B[0] == 1)
		result <= 0;
	 else
		result <=1;
	 end


endmodule
