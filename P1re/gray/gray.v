`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:08 11/05/2020 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output reg Overflow
    );
	reg [2:0] count;
	initial begin
	count <= 0;
	Overflow <= 0;
	end
	
	always@(posedge Clk) begin
	if(Reset)begin
	count <= 0;
	Overflow <= 0;
	end
	
	else if (En) begin
	count <= count + 1;
	if (count == 7)begin
	count <= 0;
	Overflow <= 1;
	end
	
	end
						 
	end
	
	assign Output = (count == 0)? 3'b000:
						 (count == 1)? 3'b001:
						 (count == 2)? 3'b011:
						 (count == 3)? 3'b010:
						 (count == 4)? 3'b110:
						 (count == 5)? 3'b111:
						 (count == 6)? 3'b101:
						 (count == 7)? 3'b100:
						 0;
						 

endmodule
