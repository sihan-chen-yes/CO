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
	 integer i,j,num1,num2,tag1,tag2;
	 
	assign C = (ALUOp == 2'b00)? A+B:
				  (ALUOp == 2'b01)? A-B:
				  (ALUOp == 2'b10)? A|B:
												32'hxxxxxxxx;
												
	assign Gre = (C > 0)? 1:0;
	assign Less = (C < 0)? 1:0;
	assign Equ = (C == 0);
	
	always@(*) begin
		num1 = 0;
		tag1 = 0;
		for(i=0;i<32;i=i+1)begin
			if(tag1 == 0) begin
				if(A[i] == 0)
					num1 = num1 + 1;
				else
					tag1 = 1;
			end	
		end
	end
	
	always@(*) begin
		num2 = 0;
		tag2 = 0;
		for(i=0;i<32;i=i+1)begin
			if(tag2 == 0) begin
				if(B[i] == 0)
					num2 = num2 + 1;
				else
					tag2 = 1;
			end	
		end
	end
	
	assign Judge = (num1 == num2);
	
	
endmodule
