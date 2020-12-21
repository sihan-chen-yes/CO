`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:36:45 12/14/2020 
// Design Name: 
// Module Name:    controller 
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
`define Rtype 6'b000000
`define ADDU 6'b100001
`define SUBU 6'b100011
`define ORI 6'b001101
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011
`define J 6'b000010
`define JR 6'b001000
`define LUI 6'b001111
`define COO 6'b111111
`define BGEZALL 6'b111110
`define LWSO 6'b111100

`define RA 5'b11111
module controller(
    input [31:0] instr,
	 input over,
	 input Gez,
    output [1:0] NPCOp,
    output RFWr,
    output EXTOp,
    output [2:0] ALUOp,
    output DMWr,
    output [1:0] A3Sel,
    output [1:0] WDSel,
	 output DMSel,
    output BSel,
	 output [15:0] imm16,
	 output [25:0] addr26,
    output [4:0] rs,
    output [4:0] rt,
	 output [4:0] rd,
	 output [4:0] A3,
    output [1:0] Tuse_rs,
    output [1:0] Tuse_rt,
    output [1:0] Tnew_E,
	 output [1:0] Tnew_M
    );
	wire [5:0] opcode,funct;
	//译码
	assign opcode = instr[31:26];
	assign funct = instr[5:0];
	assign imm16 = instr[15:0];
	assign addr26 = instr[25:0];
	assign rs = instr[25:21];
	assign rt = instr[20:16];
	assign rd = instr[15:11];
	//写入地址 写入值
	assign A3 = (!RFWr)? 5'b00000:
					(A3Sel == 2'b00)? rd:
					(A3Sel == 2'b01)? rt:
					(A3Sel == 2'b10)? `RA:
											5'bxxxxx;
																									
	 //指令变量生成
	 wire addu,subu,ori,lw,sw,beq,jal,j,jr,lui,coo,bgezall,lwso;
	 wire lwso_;
	 wire bgezall_;
	 
	  //指令变量的与阵列
	 assign addu = (opcode == `Rtype)&(funct == `ADDU);
	 assign subu = (opcode == `Rtype)&(funct == `SUBU);
	 assign coo = (opcode == `Rtype)&(funct == `COO);
	 assign ori = (opcode == `ORI);
	 assign lw = (opcode == `LW);
	 assign sw = (opcode == `SW);
	 assign beq = (opcode == `BEQ);
	 assign jal = (opcode == `JAL);
	 assign j = (opcode == `J);
	 assign jr = (opcode == `Rtype)&(funct == `JR);
	 assign lui = (opcode == `LUI);
	 assign bgezall = (opcode == `BGEZALL);
	 assign lwso = (opcode == `LWSO);
	 
	 assign lwso_ = lwso_ & over;
	 assign bgezall_ = bgezall & Gez;
	 //控制信号或阵列
	 assign NPCOp = {jal|j|jr,beq|jr|bgezall};
	 assign RFWr = addu|subu|ori|lw|jal|lui|coo|bgezall|(~lwso_);
	 assign EXTOp = lw|sw|lwso;
	 assign ALUOp = {coo,lui|ori,lui|subu|beq};
	 assign DMWr = sw;
	 assign A3Sel = {jal|bgezall,ori|lw|lui|lwso};
	 assign WDSel = {jal|bgezall,lw|lwso};
	 assign BSel = ori|lw|sw|lui|lwso;
	 assign DMSel = lwso;
	 //Tuse
	 assign Tuse_rs = {lui|jal|j,addu|subu|ori|lui|lw|sw|jal|j|coo|lwso};
	 assign Tuse_rt = {ori|lui|lw|sw|jal|j|jr|bgezall|lwso,addu|subu|ori|lui|lw|jal|j|jr|coo|bgezall};
	 
	 //Tnew_E
	 assign Tnew_E = {lw|lwso,addu|subu|ori|lui|coo};
	 
	 //Tnew_M
	 assign Tnew_M = {1'b0,lw|lwso};
	 
	 
endmodule
