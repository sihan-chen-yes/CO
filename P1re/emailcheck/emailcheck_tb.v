`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:12:06 11/12/2020
// Design Name:   emailcheck
// Module Name:   C:/Users/86181/Desktop/P1re/emailcheck/emailcheck_tb.v
// Project Name:  emailcheck
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: emailcheck
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`define MAX 1023
module emailcheck_tb;

	// Inputs
	reg clk;
	reg [7:0] in;
	reg reset;
	reg [`MAX:0] string ="AVB23@ASD.SD";
	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	emailcheck uut (
		.clk(clk), 
		.in(in), 
		.ans(ans), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		
		reset = 1;
		#5
		reset = 0;
		while(string[`MAX:`MAX-7] == 8'b0) string = string << 8;
		#5
		for(;string[`MAX:`MAX-7] != 8'b0;string = string << 8)begin
			in = string[`MAX:`MAX-7];
			#10;
		end
		
		


	end
  always #5 clk = ~clk;
endmodule

