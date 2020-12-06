`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:27 11/05/2020 
// Design Name: 
// Module Name:    BlockChecker 
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
`define s_W 1
`define s_space 2
`define s_b 3
`define s_e1 4
`define s_g 5
`define s_i 6
`define s_n1 7
`define s_e2 8
`define s_n2 9
`define s_d 10
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
	 integer count = 0;
	 integer judge = 0;
	 integer state = 0;
	always@(posedge clk, posedge reset)begin
	if(reset)begin
	count <= 0;
	judge <= 0;
	state <= 0;
	end
	
	else begin
	case(state)
		`s0:begin
		if( in == " ")state <= `s_space;
		else if (in == "b" || in == "B")state <= `s_b;
		else if (in == "e" || in == "E") state <= `s_e2;
		else state <= `s_W;
		end
		
		`s_W:begin
		if (in == " ")state <= `s_space;
		else state <= `s_W;
		end
		
		`s_space:begin
		if( in == " ")state <= `s_space;
		else if (in == "b" || in == "B") state <= `s_b;
		else if (in == "e" || in == "E") state <= `s_e2;
		else state <= `s_W;
		end
		
		`s_b:begin
		if(in == "e" || in == "E") state <= `s_e1;
		else if (in == " ") state <= `s_space;
		else state <= `s_W;
		end
		
		`s_e1:begin
		if(in == "g" || in == "G") state <= `s_g;
		else if (in == " ") state <= `s_space;
		else state <= `s_W;
		end
		
		`s_g:begin
		if(in == "i" || in == "I") state <= `s_i;
		else if (in == " ") state <= `s_space;
		else state <= `s_W;
		end
		
		`s_i:begin
		if(in == "n" || in == "N")begin
		state <= `s_n1;
		count <= count + 1;
		end
		else if (in == " ") state <= `s_space;
		else state <= `s_W;
		end
		
		`s_n1:begin
		if (in == " ") state <= `s_space;
		else begin
		state <= `s_W;
		count <= count - 1;
		end
		end
		
		`s_e2:begin
		if(in == "n" || in == "N") state <= `s_n2;
		else if (in == " ") state <= `s_space;
		else state <= `s_W;
		end
		
		`s_n2:begin
		if(in == "d" || in == "D")begin
		state <= `s_d;
		count <= count - 1;
		end		
		else if (in == " ") state <= `s_space;
		else state <= `s_W;
		end
		
		`s_d:begin
		if (in == " ") begin
			state <= `s_space;
			if (count < 0)judge <= 1;
		end
		else begin
		state <= `s_W;
		count <= count + 1;
		end
		end
		
	
	endcase
	end
	
	end
	
	assign result = (judge == 1)? 0:
						 (count == 0)? 1:
						 0;

endmodule
