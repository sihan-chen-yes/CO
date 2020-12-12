`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:17:42 12/01/2020 
// Design Name: 
// Module Name:    IFU 
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
module ifu(
    input CLK,
    input Reset,
	 input Br,
    input [1:0] NPCOp,
    input [31:0] RA,
    output [31:0] Instr,
	 output reg [31:0] PC,
	 output [31:0] PC4
    );
	 reg [31:0] IM [0:1023];
	 integer i;
	 initial begin
		PC = 32'h00003000;
		for(i=0;i<1024;i=i+1)
			IM[i] = 32'h00000000;
		$readmemh("code.txt",IM);
	 end
	 //IM PC 初始化
	 
	 
	 wire [31:0] beqPC,jalPC,jrPC;
	 wire [15:0] imm16;
	 wire [25:0] addr26;
	 assign imm16 = Instr[15:0];
	 assign addr26 = Instr[25:0];
	 assign PC4 = PC+4;
	 assign beqPC = (Br == 0)? PC4:PC4+{{14{imm16[15]}},imm16,2'b00};
	 assign jalPC = {PC[31:28],addr26,2'b00};
	 assign jrPC = RA;
	 //NPC逻辑
	 
	 
	 always@(posedge CLK) begin
		if(Reset)
			PC <= 32'h00003000;
		else begin
			PC <= (NPCOp == 2'b00)?PC4:
					(NPCOp == 2'b01)?beqPC:
					(NPCOp == 2'b10)?jalPC:
											jrPC;
		end
	 end
	 //PC更新
	 
	 assign Instr = IM[PC[11:2]];
	 //指令更新
	 
endmodule
