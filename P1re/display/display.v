`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:51:32 11/12/2020 
// Design Name: 
// Module Name:    display 
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
module display(sig);
input sig;
	always@(*)begin
		case(sig)
			1'bz:$display(sig);
			1'bx:$display("unknown");
			default:$display("sig");
		endcase
	end

endmodule
