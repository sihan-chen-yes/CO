`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:18:37 12/01/2020 
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
`define ADDU_FC 6'b100001
`define SUBU_FC 6'b100011
`define XOR_FC	6'b100110
`define ORI 6'b001101
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011
`define BSOAL 6'b111111
`define JR 6'b001000
`define LUI 6'b001111
`define SWRR 6'b111100

module controller(
    input [5:0] opcode,
    input [5:0] funct,
	 input Less,
	 input Gre,
	 input Equ,
	 input Judge,
    output [1:0] NPCOp,
    output GRFWr,
    output EXTOp,
    output [1:0] ALUOp,
    output DMWr,
    output [1:0] A3Sel,
    output [1:0] WDSel,
    output BSel,
	 output Br,
	 output RSel
    );
	wire addu,subu,ori,lw,sw,beq,jal,jr,lui,bsoal,xor_;
	//指令变量
	
	assign addu = (opcode == `Rtype)&(funct == `ADDU_FC);
	assign subu = (opcode == `Rtype)&(funct == `SUBU_FC);
	assign ori = (opcode == `ORI);
	assign lw = (opcode == `LW);
	assign sw = (opcode == `SW);
	assign beq = (opcode == `BEQ);
	assign jal = (opcode == `JAL);
	assign bsoal = (opcode == `BSOAL);
	assign xor_ = (opcode == `Rtype)&(funct == `XOR_FC);
	assign jr = (opcode == `Rtype)&(funct == `JR);
	assign lui = (opcode == `LUI);
	assign swrr = (opcode == `SWRR);
	//指令变量的与阵列
	
	wire beq_br,bsoal_br;
	
	assign beq_br = beq&Equ;
	assign bsoal_br = bsoal&Judge;
	
	//分支判断
	
	assign Br = beq_br|bsoal_br;
	assign NPCOp = {jal|jr,beq|jr|bsoal};
	assign GRFWr = ori|addu|subu|lw|jal|lui|bsoal_br|xor_;
	assign EXTOp = lw|sw|swrr;
	assign ALUOp = {ori|xor_,subu|beq|xor_};
	assign DMWr = sw|swrr;
	assign A3Sel = {jal|bsoal,ori|lw|lui};
	assign WDSel = {jal|lui|bsoal,lw|lui};
	assign BSel = ori|lw|sw|swrr;
	assign RSel = swrr;
	//控制信号或阵列

endmodule
