`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:54:52 11/06/2020
// Design Name:   date
// Module Name:   C:/Users/86181/Desktop/P1re/date/tb.v
// Project Name:  date
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: date
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
	reg clr;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	date uut (
		.in(in), 
		.clk(clk), 
		.clr(clr), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = "2";
		clk = 0;
		clr = 0;
		#10
		in = "0";
		#10
		in = "0";
		#10
		in = "2";
		#10
		in = ".";
		#10
		in = "2";
		#10
		in = ".";
		#10
		in = "2";
		#10
		in = "2";
		#10
		in = "2";

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
     always #5 clk = ~clk;
endmodule

