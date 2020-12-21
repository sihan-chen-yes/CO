`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:14:39 12/14/2020 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC,
    output [31:0] instr
    );
	 reg [31:0] IM [0:1023];
	 integer i;
	initial begin
		for(i=0;i<1024;i=i+1)
			IM[i] = 32'h00000000;
		$readmemh("code.txt",IM);
	end
	assign instr = IM[PC[11:2]];
	
endmodule
