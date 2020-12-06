`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:07:05 10/25/2020 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input  [2:0] ALUOp,
    output  reg [31:0] C
    );
	always @(*) begin
		case(ALUOp)
			0:
				C<=A+B;
			1:
				C<=A-B;
			2:
				C<=A&B;
			3:
				C<=A|B;
			4:
				C<= A>>B;
			5:
				C<=$signed(A)>>>B;
			default:
				C<=0;
		endcase
	end
endmodule
