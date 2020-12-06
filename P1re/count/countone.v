`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:15:37 11/12/2020 
// Design Name: 
// Module Name:    countone 
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
module countone(in,out);
input [5:0]in;
output [2:0]out;
integer count,i;
always@(*) begin
	count = 0;
	repeat(6)begin:countone
		integer i = 0;
		if(in[i]) 
			count = count + 1;
		i = i + 1;
	end
end
assign out = count;

endmodule
