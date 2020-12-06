`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:36:42 11/12/2020
// Design Name:   countone
// Module Name:   C:/Users/86181/Desktop/P1re/count/countone_tb.v
// Project Name:  count
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: countone
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module countone_tb;

	// Inputs
	reg [5:0] in;

	// Outputs
	wire [2:0] out;

	// Instantiate the Unit Under Test (UUT)
	countone uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 6'b111101;
		#10
		in = 6'b000001;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

