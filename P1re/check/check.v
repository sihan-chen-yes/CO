`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:01 11/05/2020 
// Design Name: 
// Module Name:    check 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module check(
    input [7:0] in,
    input clk,
    output out
    );
 integer state = 0;
	 always@(posedge clk) begin
	 case(state)
		0:state <= (in == "1")? 1:0;
		1:state <= (in == "0")? 2:1;
		2:state <= (in == "1")? 3:0;
		3:state <= (in == "0")? 4:1;
		4:state <= (in == "1")? 3:0;
		default: state <= 0;
	 endcase
	 end
	 
	 assign out = (state == 4);

endmodule
