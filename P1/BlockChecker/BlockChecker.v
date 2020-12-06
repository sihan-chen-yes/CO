`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:49:06 10/25/2020 
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
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
	 integer couple = 0;
	 integer fail = 0;
	 integer state = 11;
	 always @(posedge clk, posedge reset) begin
	 if (reset == 1) begin
	 couple <= 0;
	 fail <= 0;
	 state <= 0;
	 end
	 
	 else begin
	 case(state)
		0:begin
		if(in == " ")
			state <= 1;
		else
			state <= 0;
		end
		
		1:begin
		if((in == "b") || (in == "B"))
			state <= 2;
		else if ( in == "e" || in == "E")
			state <= 8;
		else if (in == " ")
			state <= 1;
		else 
			state <= 0;
		end
		
		2:begin
		if (in == " ")
			state <= 1;
		else if (in == "e" || in == "E")
			state <= 3;
		else
			state <= 0;
		end
		
		3:begin
		if (in == " ")
			state <= 1;
		else if(in == "g" || in == "G")
			state <= 4;
		else
			state <= 0;
		end
		
		4:begin
		if (in == " ")
			state <= 1;
		else if (in == "i" || in == "I")
			state <= 5;
		else 
			state <= 0;
		end
		
		5:begin
		if (in == " ")
			state <= 1;
		else if (in == "n" || in == "N") begin
			state <= 6;
			couple <= couple + 1;
		end
		else 
			state <= 0;
		end
		
		6:begin
		if (in == " ") begin
			state <= 7;
		end
		else begin
			state <= 0;
			couple <= couple - 1;
		end
		end
		
		7:begin
		if (in == " ")
			state <= 1;
		else if (in == "b" || in == "B")
			state <= 2;
		else if (in == "e" || in == "E")
			state <= 8;
		else
			state <= 0;
		end
		
		8:begin
		if (in == " ")
			state <= 1;
		else if(in == "n" || in == "N")
			state <= 9;
		else
			state <= 0;
		end
		
		9:begin
		if (in == " ")
			state <= 1;
		else if(in == "d" || in == "D") begin
			state <= 10;
			couple <= couple - 1;
		end
		else
			state <= 0;
		end
		
		10:begin
		if (in == " ") begin
			state <= 7;
			if (couple < 0) 
				fail <= 1;
		end
		else begin
			couple <= couple + 1;
			state <= 0;
		end
		end
		
		11:begin
		if(in == "b" || in == "B")
			state <= 2;
		else if(in == "e" || in == "E")
			state <= 8;
		else if (in == " ")
			state <= 1;
		else 
			state <= 0;
		end
		
	 endcase
	 
	 end
	 
	 end
	 
 
	 
	 assign result = (fail == 1)?  0:
						  (couple != 0)? 0:
												1;

endmodule
