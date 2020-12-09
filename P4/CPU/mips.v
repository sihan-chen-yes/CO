`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:27:40 12/01/2020 
// Design Name: 
// Module Name:    mips 
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
`define ra 5'b11111
module mips(
    input clk,
    input reset
    );
	wire [5:0] opcode,funct;
	wire [1:0] ALUOp,A3Sel,WDSel,NPCOp;
	wire GRFWr,EXTOp,DMWr,BSel,Equ,Gre,Less,Br;
	wire [4:0] rs,rd,rt,M_A3;
	wire [15:0] imm16;
	wire [25:0] addr26;
	wire [31:0] Instr,RD1,RD2,M_WD,C,D,PC4,imm32,Ext,M_B,PC;
	
	
	controller Controller (
		.opcode(opcode),
		.funct(funct),
		.Equ(Equ),
		.Gre(Gre),
		.Less(Less),
		.NPCOp(NPCOp),
		.GRFWr(GRFWr),
		.EXTOp(EXTOp),
		.ALUOp(ALUOp),
		.DMWr(DMWr),
		.A3Sel(A3Sel),
		.WDSel(WDSel),
		.BSel(BSel),
		.Br(Br)
	);

	dc DC(
		.Instr(Instr),
		.opcode(opcode),
		.funct(funct),
		.rs(rs),
		.rt(rt),
		.rd(rd),
		.imm16(imm16),
		.addr26(addr26)
	);
	
	ifu IFU (
		.CLK(clk),
		.Reset(reset),
		.Br(Br),
		.NPCOp(NPCOp),
		.RA(RD1),
		.PC(PC),
		.PC4(PC4),
		.Instr(Instr)
	);
	
	grf GRF (
		.CLK(clk),
		.Reset(reset),
		.RFWr(GRFWr),
		.A1(rs),
		.A2(rt),
		.A3(M_A3),
		.WD(M_WD),
		.PC(PC),
		.RD1(RD1),
		.RD2(RD2)
	);
	
	mux3 MUX_A3 (
		.In0(rd),
		.In1(rt),
		.In2(`ra),
		.Sel(A3Sel),
		.Out(M_A3)
	);
	
	mux4 MUX_WD (
		.In0(C),
		.In1(D),
		.In2(PC4),
		.In3(imm32),
		.Sel(WDSel),
		.Out(M_WD)
	);

	ext EXT (
		.imm16(imm16),
		.Ext(Ext),
		.EXTOp(EXTOp),
		.imm32(imm32)
	);
	
	mux2 MUX_B(
		.In0(RD2),
		.In1(Ext),
		.Sel(BSel),
		.Out(M_B)
	);
	
	alu ALU (
		.A(RD1),
		.B(M_B),
		.ALUOp(ALUOp),
		.C(C),
		.Equ(Equ),
		.Gre(Gre),
		.Less(Less)
	);

	dm DM (
		.CLK(clk),
		.Reset(reset),
		.DMWr(DMWr),
		.A(C),
		.WD(RD2),
		.PC(PC),
		.D(D)
	);
	
endmodule
