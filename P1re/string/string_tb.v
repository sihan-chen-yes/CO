`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:12:20 11/05/2020
// Design Name:   string
// Module Name:   C:/Users/86181/Desktop/P1re/string/string_tb.v
// Project Name:  string
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module string_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = "1";
		#10
		in = "+";
		#10
		in = "2";
		#10
		in = "*";
		#10
		in = "2";
		#10
		in = "3";
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

