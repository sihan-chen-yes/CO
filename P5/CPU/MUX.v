`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:42:32 12/15/2020 
// Design Name: 
// Module Name:    MUX 
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
module MUX_32(
    input [31:0] In0,
    input [31:0] In1,
    input [31:0] In2,
    input [31:0] In3,
    input [1:0] Sel,
    output [31:0] Out
    );
	 assign Out = (Sel == 2'b00)? In0:
					  (Sel == 2'b01)? In1:
					  (Sel == 2'b10)? In2:
											In3;
											
									
endmodule

module MUX_5(
    input [4:0] In0,
    input [4:0] In1,
    input [4:0] In2,
    input [4:0] In3,
    input [1:0] Sel,
    output [4:0] Out
    );
	 assign Out = (Sel == 2'b00)? In0:
					  (Sel == 2'b01)? In1:
					  (Sel == 2'b10)? In2:
											In3;
											
									
endmodule
