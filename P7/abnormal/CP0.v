`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:29:12 12/27/2020 
// Design Name: 
// Module Name:    CP0 
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
`define SR 12
`define CAUSE 13
`define EPC 14
`define PrID 15

`define Id 32'h66666666
module CP0(
    input clk,
    input reset,
    input [4:0] A,
    input [31:0] Din,
    input [31:2] PC_Int,
    input [6:2] ExcCode,
    input [15:10] HWInt,
    input We,
	 input eret,
    input BD,
    output [31:0] Dout,
	 output reg [31:0] EPC,
	 output IntReq
    );
	//SR
	reg [15:10] IM;
	reg EXL,IE;
	//Cause
	reg bd;
	reg [15:10] IP;
	reg [6:2] exccode;
	//EPC
	//PRId
	reg [31:0] PrID;
	wire InInt,ExInt;
	assign InInt = (ExcCode != 0)? 1:0;
	//内部中断：异常
	assign ExInt = (|(IM&HWInt))&IE&(~EXL);
	//外部中断
	assign IntReq = InInt|ExInt;
	
	always@(posedge clk)begin
		if(eret)begin
			EXL <= 0;
		end
	end
	reg [15:0] SR_0;
	reg [14:0] Cause_0;
	reg [7:0] SR_1;
	reg [2:0] Cause_1;
	reg [1:0] Cause_2;
	always@(posedge clk)begin
		if(reset)begin
		//SR
			SR_0 <= 0;
			SR_1 <= 0;
			IM <= 6'b000000;
			EXL <= 0;
			IE <= 0;
		//Cause
			bd <= 0;
			Cause_0 <= 0;
			Cause_1 <= 0;
			Cause_2 <= 0;
			IP <= 6'b000000;
			exccode <= 5'b00000;
		//EPC
			EPC <= 32'h00000000;
		//PrID
			PrID <= `Id;
		end
		else begin	
			if(IntReq)begin
				EPC <= (BD)?{(PC_Int-1),2'b00}:{PC_Int,2'b00};
				EXL <= 1;
				exccode <= (ExInt)?5'b00000:
										ExcCode;
				bd <= BD;
			end
			else if(We)begin
				case(A)
					`SR:begin
						SR_0 <= Din[31:16];
						IM <= Din[15:10];
						SR_1 <= Din[9:2];
						EXL <= Din[1];
						IE <= Din[0];
					end
					
					`CAUSE:begin
						bd <= Din[31];
						Cause_0 <= Din[30:16];
						IP <= Din[15:10];
						Cause_1 <= Din[9:7];
						exccode <= Din[6:2];
						Cause_2 <= Din[1:0];
					end
						
					`EPC:
						EPC <= Din;		
						
					`PrID:
						PrID <= Din;
				endcase
			end
		end	
	end
	
	assign Dout = 	(A == `SR)? {SR_0,IM,SR_1,EXL,IE}:
						(A == `CAUSE)? {bd,Cause_0,IP,Cause_1,exccode,Cause_2}:
						(A == `EPC)? 	EPC:
						(A == `PrID)? PrID:
											32'h0;
endmodule
