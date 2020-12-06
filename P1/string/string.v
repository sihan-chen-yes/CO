`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:08:22 10/25/2020 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	 
	 integer state = 0;
	 
	always @ (posedge clk,posedge clr) begin
	if (clr) begin
	state <= 0;
	end
	
	else begin
	case(state)
		0:begin
		if((in >= "0") && (in <= "9"))
			state <= 1;
		else
			state <= 0; 
		end
		
		1:begin
		if((in >= "0") && (in <= "9"))
			state <= 3;
		else if((in == "+") || (in == "*"))
			state <= 2;
		else
			state <= 0;
		end
		
		2:begin
		if((in >= "0") && (in <= "9"))
			state <= 1;
		else if((in == "+") || (in == "*"))
			state <= 3;
		else
			state <= 0;
		end
		
		3:begin
		if((in >= "0") && (in <= "9"))
			state <= 3;
		else if((in == "+") || (in == "*"))
			state <= 3;
		else
			state <= 0;
		end
	
	endcase
	
	end
	
	end
	
	assign out = (state == 0)? 0:
					 (state == 1)? 1:
					 (state == 2)? 0:
					 (state == 3)? 0:
										0;

endmodule
