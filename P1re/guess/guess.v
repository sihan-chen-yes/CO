`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:01 11/12/2020 
// Design Name: 
// Module Name:    guess 
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
module guess(ans,a,b,c,d,e,f,count);
input [5:0]ans;
input a,b,c,d,e,f;
output [2:0] count;
integer i,cnt;
	always@(*)begin
		cnt = 0;
		if(ans[0] == a)
			cnt = cnt + 1;
		if(ans[1] == b)
			cnt = cnt + 1;
		if(ans[2] == c)
			cnt = cnt + 1;
		if(ans[3] == d)
			cnt = cnt + 1;
		if(ans[4] == e)
			cnt = cnt + 1;
		if(ans[5] == f)
			cnt = cnt + 1;
	end
	assign count = cnt;

endmodule
