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
`define ORI 6'b001101
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011
`define JR 6'b001000
`define LUI 6'b001111

module controller(
    input [5:0] opcode,
    input [5:0] funct,
    output [1:0] NPCOp,
    output GRFWr,
    output EXTOp,
    output [1:0] ALUOp,
    output DMWr,
    output [1:0] A3Sel,
    output [1:0] WDSel,
    output BSel
    );
	wire addu,subu,ori,lw,sw,beq,jal,jr,lui;
	
	assign addu = (opcode == `Rtype)&(funct == `ADDU_FC);
	assign subu = (opcode == `Rtype)&(funct == `SUBU_FC);
	assign ori = (opcode == `ORI);
	assign lw = (opcode == `LW);
	assign sw = (opcode == `SW);
	assign beq = (opcode == `BEQ);
	assign jal = (opcode == `JAL);
	assign jr = (opcode == `Rtype)&(funct == `JR);
	assign lui = (opcode == `LUI);
	//指令变量的与阵列
	
	assign NPCOp = {jal|jr,beq|jr};
	assign GRFWr = ori|addu|subu|lw|jal|lui;
	assign EXTOp = lw|sw;
	assign ALUOp = {ori,subu|beq};
	assign DMWr = sw;
	assign A3Sel = {jal,ori|lw|lui};
	assign WDSel = {jal|lui,lw|lui};
	assign BSel = ori|lw|sw;
	//控制信号或阵列

endmodule
