`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:56:11 11/05/2020
// Design Name:   check
// Module Name:   C:/Users/86181/Desktop/P1re/check/tb.v
// Project Name:  check
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: check
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [7:0] in;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	check uut (
		.in(in), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = "1";
		clk = 0;
		#10
		in = "0";
		#10
		in = "1";
		#10
			in = "0";
			#10
		in = "1";
		#10
		in = "0";
		#10
		in = "1";
		#10
		in = "0";
		#10
		in = "1";

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
     always #5 clk = ~clk;
endmodule

