`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:47:45 12/28/2020
// Design Name:   mips
// Module Name:   C:/Users/86181/Desktop/P7/mips/mips_tb.v
// Project Name:  mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

	// Inputs
	reg clk;
	reg reset;
	reg interrupt;

	// Outputs
	wire [31:0] addr;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset), 
		.interrupt(interrupt), 
		.addr(addr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		interrupt = 0;
		#10
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #5 clk=~clk;  
endmodule

