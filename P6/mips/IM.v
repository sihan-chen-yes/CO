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
`define start 32'h00003000
module IM(
    input [31:0] PC,
    output [31:0] instr
    );
	 reg [31:0] IM [0:4095];
	 integer i;
	initial begin
		for(i=0;i<4096;i=i+1)
			IM[i] = 32'h00000000;
		$readmemh("code.txt",IM);
	end
	wire [31:0] PC_IM;
	assign PC_IM = PC - `start;
	assign instr = IM[PC_IM[13:2]];
	
endmodule
