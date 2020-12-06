`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:13:32 10/29/2020
// Design Name:   compare
// Module Name:   C:/Users/86181/Desktop/P1/compare/compare_tb.v
// Project Name:  compare
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: compare
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module compare_tb;

	// Inputs
	reg [2:0] A;
	reg [2:0] B;

	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	compare uut (
		.A(A), 
		.B(B), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		A = 3'b101;
		B = 3'b101;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

