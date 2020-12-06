`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:19 10/25/2020 
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
    output  [2:0] Output,
    output reg Overflow
    );
	 reg [2:0] counter;
	 
	initial begin
	counter = 0;
	Overflow <= 0;
	end
	 
	always @(posedge Clk) begin
	if (Reset) begin
	counter <= 0;
	Overflow <= 0;
	end
	
	else if (En) begin
	if (counter == 7) begin
	counter <= 0;
	Overflow <= 1;
	end
	else
		counter <= counter + 1;
	end
	
	end
	
	assign Output = (counter == 0)? 3'b0:
						 (counter == 1)? 3'b001:
						 (counter == 2)? 3'b011:
						 (counter == 3)? 3'b010:
						 (counter == 4)? 3'b110:
						 (counter == 5)? 3'b111:
						 (counter == 6)? 3'b101:
						 (counter == 7)? 3'b100:
												0;
	
endmodule
