`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:02:05 11/12/2020
// Design Name:   display
// Module Name:   C:/Users/86181/Desktop/P1re/display/display_tb.v
// Project Name:  display
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module display_tb;

	// Inputs
	reg sig;

	// Instantiate the Unit Under Test (UUT)
	display uut (
		.sig(sig)
	);

	initial begin
		// Initialize Inputs
		sig = 1'bz;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

