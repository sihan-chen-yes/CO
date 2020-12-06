`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:17 11/05/2020 
// Design Name: 
// Module Name:    string 
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
`define s0 0
`define s_N 1
`define s_W 2
`define s_F 3


module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	 reg [1:0] state;
	 initial begin
	 state <= `s0;
	 end
	always@(posedge clk,posedge clr) begin
	if(clr)state <= `s0;
	
	else begin
	case(state)
		`s0:begin
		if(in >= "0" && in <= "9")state <= `s_N;
		else if(in == "+" || in == "*") state<= `s_W;
		else state <= `s0;
		end
		
		`s_N:begin
		if( in >= "0" && in <= "9")state <= `s_W;
		else if(in == "+" || in == "*") state <= `s_F;
		else state<= `s0;
		end
		
		`s_W:state <= `s_W;

		`s_F:begin
		if(in >= "0" && in <= "9")state <= `s_N;
		else if(in == "+" || in == "*") state<= `s_W;
		else state <= `s0;
		end
	endcase
	
	end
	
	end

	assign out = (state == `s_N);
endmodule
