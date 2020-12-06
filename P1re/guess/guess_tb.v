`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:44:10 11/12/2020
// Design Name:   guess
// Module Name:   C:/Users/86181/Desktop/P1re/guess/guess_tb.v
// Project Name:  guess
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: guess
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module guess_tb;

	// Inputs
	reg [5:0] ans;
	reg a;
	reg b;
	reg c;
	reg d;
	reg e;
	reg f;

	// Outputs
	wire [2:0] count;

	// Instantiate the Unit Under Test (UUT)
	guess uut (
		.ans(ans), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.count(count)
	);

	initial begin
		// Initialize Inputs
		ans = 6'b111000;
		a = 0;
		b = 1;
		c = 0;
		d = 1;
		e = 0;
		f = 1;
		#10
		a = 1;
		b = 1;
		c = 1;
		d = 1;
		e = 1;
		f = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

