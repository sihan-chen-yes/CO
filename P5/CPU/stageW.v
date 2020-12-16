`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:33:25 12/15/2020 
// Design Name: 
// Module Name:    stageW 
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
module stageW(
    input [31:0] D_W,
    input [31:0] C_W,
    input [31:0] PC8_W,
	 input [1:0] WDSel_W,
    output [31:0] RFWD_W
    );
	assign RFWD_W = (WDSel_W == 2'b00) ? C_W:
						 (WDSel_W == 2'b01) ? D_W:
						 (WDSel_W == 2'b10) ? PC8_W:
														 32'hxxxxxxxx;
	
endmodule
