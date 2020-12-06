`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:33 11/05/2020 
// Design Name: 
// Module Name:    test 
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
module test(
    input  [5:0]a,
    input  b,
    output out,
    );
	integer i;
	integer n = 0;
	always@(*)begin
		for(i=0;i<6;i=i+1)begin
			if(q[i] == 1 && n == 0) n = i;
		end
	end
	assign o = n;
endmodule

