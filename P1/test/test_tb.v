`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:57:52 10/29/2020
// Design Name:   test
// Module Name:   C:/Users/86181/Desktop/P1/test/test_tb.v
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

module test_tb;

	// Inputs
	reg [15:0] imm;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.imm(imm), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		imm = 16'hffff;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

