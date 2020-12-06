`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:36:57 11/05/2020 
// Design Name: 
// Module Name:    vote 
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
module vote(
    input [31:0] common,
    input [7:0] vip,
    input vvip,
    output reg out
    );
	 integer count = 0;
	 integer i;
	 always@(*)begin
	 count = 0;
		for(i=0;i<32;i=i+1)begin
			if(common[i])count = count + 1;
		end
		
		for(i=0;i<8;i=i+1)begin
			if(vip[i]) count = count + 4;
		end
		
		if(vvip) count = count + 32;
		
		out <= (count>=32)? 1:0;
		
	 end
endmodule
