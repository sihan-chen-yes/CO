`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:43:39 11/05/2020
// Design Name:   vote
// Module Name:   C:/Users/86181/Desktop/P1re/vote/vote_tb.v
// Project Name:  vote
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vote
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vote_tb;

	// Inputs
	reg [31:0] common;
	reg [7:0] vip;
	reg vvip;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	vote uut (
		.common(common), 
		.vip(vip), 
		.vvip(vvip), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		common = 32'h0000ffff;
		vip = 8'h0f;
		vvip = 0;
		
		#100
		common = 32'h00000fff;
		vip = 8'h00;
		vvip = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

