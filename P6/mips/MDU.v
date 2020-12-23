`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:50:18 12/21/2020 
// Design Name: 
// Module Name:    MDU 
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
module MDU(
	input [31:0] D1,
	input [31:0] D2,
	input clk,
	input reset,
   input start,
	input [2:0] MDOp,
	output busy,
	output [31:0] result
 );
   reg [2:0] now;
	reg [3:0] cnt;
	reg [63:0] mult_result;
	reg [31:0] quotient;
	reg [31:0] remainder;
	reg [31:0] hi,lo;
	initial begin
		cnt <= 0;
		mult_result <= 0;
		quotient <= 0;
		remainder <= 0;
		hi <= 0;
		lo <= 0;
	end
	//初始化
	wire Wr;
	assign Wr = (MDOp == 3'b010)|(MDOp == 3'b011);
	assign busy = (cnt > 0);
	
	//计算
	wire [63:0] mult_tmp,mult_tmpu;
	wire [31:0] quotient_tmp,remainder_tmp,quotient_tmpu,remainder_tmpu;
	
	assign mult_tmp = ($signed(D1))*($signed(D2));
	assign mult_tmpu = D1*D2;
	assign quotient_tmp = ($signed(D1))/($signed(D2));
	assign remainder_tmp = ($signed(D1))%($signed(D2));
	assign quotient_tmpu = D1/D2;
	assign remainder_tmpu = D1%D2;
	
	always@(posedge clk)begin
		if(start)
			now <= MDOp;
	end
	
	always@(posedge clk) begin
		if(reset) begin
			cnt <= 0;
			mult_result <= 0;
			quotient <= 0;
			remainder <= 0;
			hi <= 0;
			lo <= 0;
			now <= 0;
		end
		else begin
			if(start)begin
				if(MDOp == 3'b100||MDOp == 3'b101)
					cnt <= 5;
				else if(MDOp == 3'b110||MDOp == 3'b111)
					cnt <= 10;
			end
			
			if(cnt > 0) begin
				cnt <= cnt - 1;
			end
		end
	end
	//计数器更新
	always@(posedge clk)begin
		if(start) begin
			case(MDOp)
				4:mult_result <= mult_tmp;
				
				5:mult_result <= mult_tmpu;
				
				6:begin
					remainder <= remainder_tmp;
					quotient <= quotient_tmp;
				end
				
				7:begin
					remainder <= remainder_tmpu;
					quotient <= quotient_tmpu;
				end
			endcase
		end
	end
	//写入临时寄存器 以便模拟
	
	always@(posedge clk)begin
		if(reset) begin
			cnt <= 0;
			mult_result <= 0;
			quotient <= 0;
			remainder <= 0;
			now <= 0;
		end
		else if(cnt == 1) begin
			case(now)			
				4:begin
					hi <= mult_result[63:32];
					lo <= mult_result[31:0];
				end
				
				5:begin
					hi <= mult_result[63:32];
					lo <= mult_result[31:0];
				end
				
				6:begin
					hi <= remainder;
					lo <= quotient;
				end
				
				7:begin
					hi <= remainder;
					lo <= quotient;
				end	
			endcase
		end
		//mult multu div divu
		else if(Wr)begin
			case(MDOp)
				2:hi <= D1;
				
				3:lo <= D1;
			endcase
		end
		//mthi mtlo
	end
	
	assign result = (MDOp == 0)? hi:
						 (MDOp == 1)? lo:
										  32'hxxxxxxxx;
	//mfhi mflo

endmodule
