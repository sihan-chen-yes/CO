`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:19:10 11/12/2020
// Design Name:   trist1
// Module Name:   C:/Users/86181/Desktop/P1re/tri/trist1_tb.v
// Project Name:  tri
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trist1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module trist1_tb;

	// Inputs
	reg sin;
	reg ena;

	// Outputs
	wire sout;

	// Instantiate the Unit Under Test (UUT)
	trist1 uut (
		.sout(sout), 
		.sin(sin), 
		.ena(ena)
	);

	initial begin
		// Initialize Inputs
		sin = 8'h4x;
		ena = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

