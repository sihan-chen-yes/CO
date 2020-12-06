`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:17:44 11/06/2020 
// Design Name: 
// Module Name:    date 
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
`define s_Y1 1
`define s_Y2 2
`define s_Y3 3
`define s_Y4 4
`define s_F1 5
`define s_F2 6
`define s_M1 7
`define s_M2 8
`define s_D1 9
`define s_D2 10

module date(
    input [7:0] in,
    input clk,
    input clr,
    output out
    );
	 integer mark1 = 0;
	 integer mark2 = 0;
	 integer mark3 = 0;
	 integer cnt = 0;
	 integer state = 0;
	always@(posedge clk,posedge clr)begin
		if(clr) begin
		mark1 <= 0;
		mark2 <= 0;
		mark3 <= 0;
		cnt <= 0;
		state <= 0;
		end
		else begin
			case(state)
				`s0:begin
					cnt <= 0;
					mark1<= 0;
					mark2<=0;
					mark3<=0;
					if(in == "0"||in == "/" || in == "." || in == "-")state <= `s0;
					else state <= `s_Y1;
				end
				
				`s_Y1:begin
					if(in >= "0" && in <= "9")state<=`s_Y2;
					else  if(in == "/") begin
						state<=`s_F1;
						mark1<=1;
						end
					else if(in == ".") begin
						state <=`s_F1;
						mark2<=1;
						end
					else if(in == "-")begin
						state<=`s_F1;
						mark3<=1;
					end
				end
				
				`s_Y2:begin
					if(in >= "0" && in <= "9")state<=`s_Y3;
					else  if(in == "/") begin
						state<=`s_F1;
						mark1<=1;
						end
					else if(in == ".") begin
						state <=`s_F1;
						mark2<=1;
						end
					else if(in == "-")begin
						state<=`s_F1;
						mark3<=1;
					end
				end
				
				`s_Y3:begin
					if(in >= "0" && in <= "9")state<=`s_Y4;
					else  if(in == "/") begin
						state<=`s_F1;
						mark1<=1;
						end
					else if(in == ".") begin
						state <=`s_F1;
						mark2<=1;
						end
					else if(in == "-")begin
						state<=`s_F1;
						mark3<=1;
					end
				end
				
				`s_Y4:begin
					if(in >= "0" && in <= "9")state<=`s0;
					else  if(in == "/") begin
						state<=`s_F1;
						mark1<=1;
						end
					else if(in == ".") begin
						state <=`s_F1;
						mark2<=1;
						end
					else if(in == "-")begin
						state<=`s_F1;
						mark3<=1;
					end
				end
				
				`s_F1:begin
					if(in == "0"||in == "/" || in == "." || in == "-")state <= `s0;
					else begin
					state <= `s_M1;
					cnt <= in-"0";
					end
				end
				
				`s_M1:begin
					if(in >= "0" && in <= "9")begin
						cnt <= cnt*10+in-"0";
						state <= `s_M2;
					end
					else if (in =="/" && mark1 == 1) state <=`s_F2;
					else if (in == "." && mark2 == 1 )state <=`s_F2;
					else if (in == "-" && mark3 == 1) state <=`s_F2;
					else state <= `s0;
				end
				
				`s_M2:begin
					if(in >= "0" && in <= "9")state <= `s0;
					else if (in =="/" && mark1 == 1 && cnt<=12)begin
					state <=`s_F2;
					cnt <= 0;
					end
					else if (in == "." && mark2 == 1 && cnt<=12 )begin
					state <=`s_F2;
					cnt <=0;
					end
					else if (in == "-" && mark3 == 1 &&cnt<=12)begin
					cnt <= 0;
					state <=`s_F2;
					end
					else state <= `s0;
				end
				
				`s_F2:begin
					if(in == "0"||in == "/" || in == "." || in == "-")state <= `s0;
					else begin
					state <= `s_D1;
					cnt <= in-"0";
					end
				end
				
				`s_D1:begin
					if(in >= "0" && in <= "9")begin
						cnt <= cnt*10+in-"0";
						state <= `s_D2;
					end
					else state <=`s0;
				end
				
				`s_D2:state<=`s0;
				
		endcase
		end
	end
	assign out = (state == `s_D1)? 1:
					 (state == `s_D2 && cnt<=30)? 1:
					 0;
	
endmodule
