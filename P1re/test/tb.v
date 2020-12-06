`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:17:53 11/05/2020
// Design Name:   test
// Module Name:   C:/Users/86181/Desktop/P1re/test/tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
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
	reg [2:0] a;
	reg [2:0] b;

	// Outputs
	wire [5:0] out;
	wire OUT;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.a(a), 
		.b(b), 
		.out(out), 
		.OUT(OUT)
	);

	initial begin
		// Initialize Inputs
		a = 3'b111;
		b = 3'b000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

