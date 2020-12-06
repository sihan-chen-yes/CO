`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:54:48 11/06/2020
// Design Name:   finder
// Module Name:   C:/Users/86181/Desktop/P1re/finder/finder_tb.v
// Project Name:  finder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: finder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module finder_tb;

	// Inputs
	reg [7:0] A;

	// Outputs
	wire [2:0] B;

	// Instantiate the Unit Under Test (UUT)
	finder uut (
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 8'b 1010_1010;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

