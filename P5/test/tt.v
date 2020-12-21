`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:38:49 12/18/2020
// Design Name:   test
// Module Name:   C:/Users/86181/Desktop/P5/test/tt.v
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

module tt;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	
	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.A(A), 
		.B(B), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 32'h7fff0000;
		B = 32'h0000ffff;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

