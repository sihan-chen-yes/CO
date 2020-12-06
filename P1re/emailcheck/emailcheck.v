`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:50:41 11/12/2020 
// Design Name: 
// Module Name:    emailcheck 
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
`define s0 1
`define s_u 2
`define s_str1 3
`define s_str2 4
module emailcheck(clk,in,ans,reset);
input clk;
input [7:0] in;
input reset;
output ans;
integer state,cnt;
	initial begin
		state <= `s0;
		cnt <= 0;
	end
	always@(posedge clk,posedge reset) begin
		if(reset) begin
			state <= `s0;
			cnt <= 0;
		end
		else begin
			case(state)
				`s0:begin
					if((in >= "A" && in <= "Z")||(in >= "a" && in <= "z"))begin
						state <= `s_u;
						cnt <= cnt + 1;
					end
					else 
						state <= `s0;
				end
				
				`s_u:begin
					if((in >= "A" && in <= "Z")||(in >= "a" && in <= "z")||(in >= "0" && in <= "9"))begin
						state <= `s_u;
						cnt = cnt + 1;
					end
					else if(in == "@" && cnt >= 5) begin
						state <= `s_str1;
						cnt <= 0;
					end
					else begin
						cnt <= 0;
						state <= `s0;
					end
				end
					
				`s_str1:begin
					if((in >= "A" && in <= "Z")||(in >= "a" && in <= "z")||(in >= "0" && in <= "9"))begin
						cnt <= cnt + 1;
					end
					else if(in == "." && cnt >= 3)begin
						state <= `s_str2;
						cnt <= 0;
					end
					else begin
						cnt <= 0;
						state <= `s0;
					end
				end
				
				`s_str2:begin
					if((in >= "A" && in <= "Z")||(in >= "a" && in <= "z")||(in >= "0" && in <= "9"))begin
						state <= `s_str2;
						cnt <= cnt + 1;
					end
					else begin
						state <= `s0;
						cnt <= 0;
					end
				end
				
				default:begin
					state <= `s0;
					cnt <= 0;
				end
		
			endcase
		end
	end
	
	assign ans = (state == `s_str2 && cnt > 0)? 1:0;


endmodule
