`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:12 12/01/2020 
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
    input [1:0] ALUOp,
    output [31:0] C,
    output Equ,
	 output Gre,
	 output Less,
	 output Judge
    );
	integer cnt;
	integer i;
	
	assign C = (ALUOp == 2'b00)? A+B:
				  (ALUOp == 2'b01)? A-B:
				  (ALUOp == 2'b10)? A|B:
				  (ALUOp == 2'b11)? A^B:
												32'hxxxxxxxx;
												
	assign Gre = (C > 0)? 1:0;
	assign Less = (C < 0)? 1:0;
	assign Equ = (C == 0);
	
	always@(*) begin
		cnt = 0;
		for(i=0;i<32;i=i+1) begin
			if(A[i])
				cnt = cnt + 1;
		end
	end
	
	assign Judge = (cnt%2)? 1:0;
	
endmodule
