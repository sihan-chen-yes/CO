`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:58 11/12/2020 
// Design Name: 
// Module Name:    trist1 
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
module trist1(sout,sin,ena);
output sout;
input sin, ena;
	mytri tri_inst(sout,sin,ena);
endmodule

module mytri(out,in,enable);
output out;
input in, enable;
	assign out = enable? in:'bz;
	
endmodule