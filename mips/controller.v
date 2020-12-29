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
`define ADD 6'b100000
`define SUBU 6'b100011
`define SUB 6'b100010
`define AND 6'b100100
`define OR 6'b100101
`define XOR 6'b100110
`define NOR 6'b100111
`define SLT 6'b101010
`define SLTU 6'b101011
`define SLL 6'b000000
`define SLLV 6'b000100
`define SRL 6'b000010
`define SRLV 6'b000110
`define SRA 6'b000011
`define SRAV 6'b000111

`define MFHI 6'b010000
`define MFLO 6'b010010
`define MTHI 6'b010001
`define MTLO 6'b010011
`define MULT 6'b011000
`define MULTU 6'b011001
`define DIV 6'b011010
`define DIVU 6'b011011


`define COP0 6'b010000
`define MT 5'b00100
`define MF 5'b00000
`define CO 1
`define ERET 6'b011000

`define ADDI 6'b001000
`define ADDIU 6'b001001
`define ORI 6'b001101
`define ANDI 6'b001100
`define XORI 6'b001110
`define SLTI 6'b001010
`define SLTIU 6'b001011
`define LUI 6'b001111

`define LW 6'b100011
`define LH 6'b100001
`define LHU 6'b100101
`define LB 6'b100000
`define LBU 6'b100100

`define SW 6'b101011
`define SH 6'b101001
`define SB 6'b101000

`define BEQ 6'b000100
`define BNE 6'b000101
`define BLEZ 6'b000110
`define BLTZ 6'b000001
`define BGEZ 5'b00001
`define BGTZ 6'b000111

`define JAL 6'b000011
`define JALR 6'b 001001
`define J 6'b000010
`define JR 6'b001000


`define RA 5'b11111
module controller(
    input [31:0] instr,
	 input Equ,
	 input Ltz,
	 input Gtz,
    output [1:0] NPCOp,
    output RFWr,
    output EXTOp,
    output [3:0] ALUOp,
	 output [1:0] DAOp,
	 output SSel,
    output DMWr,
    output [1:0] A3Sel,
    output [1:0] WDSel,
    output BSel,
	 output VSel,
	 output Br,
	 output CSel,
	 output start,
	 output MD_instr,
	 output [3:0] MDOp,
	 output RI,
	 output Care,
	 output eret,
	 output We,
	 output BDSel,
	 output [1:0] CalType,
	 output [1:0] LoadType,
	 output [1:0] StoreType,
	 output [15:0] imm16,
	 output [25:0] addr26,
    output [4:0] rs,
    output [4:0] rt,
	 output [4:0] rd,
	 output [4:0] shamt,
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
	assign shamt = instr[10:6];
	assign co = instr[25];
	
	//写入地址 写入值
	assign A3 = (RFWr === 0)? 5'b00000:
					(A3Sel == 2'b00)? rd:
					(A3Sel == 2'b01)? rt:
					(A3Sel == 2'b10)? `RA:
											5'bxxxxx;
																									
	 //指令变量生成
	 wire addu,add,subu,sub,and_,or_,xor_,nor_,slt,sltu,sll,sllv,srl,srlv,sra,srav,
	 mfhi,mflo,mthi,mtlo,mult,multu,div,divu,
	 mfc0,mtc0,
	 addi,addiu,ori,andi,xori,slti,sltiu,lui,
	 lw,lh,lhu,lb,lbu,
	 sw,sh,sb,
	 beq,bne,blez,bltz,bgez,bgtz,
	 beq_,bne_,blez_,bltz_,bgez_,bgtz_,
	 jal,j,jr,jalr;
	 
	  //指令变量的与阵列
	 assign addu = (opcode == `Rtype)&(funct == `ADDU);
	 assign add = (opcode == `Rtype)&(funct == `ADD);
	 assign subu = (opcode == `Rtype)&(funct == `SUBU);
	 assign sub = (opcode == `Rtype)&(funct == `SUB);
	 assign and_ = (opcode == `Rtype)&(funct == `AND);
	 assign or_ = (opcode == `Rtype)&(funct == `OR);
	 assign xor_ = (opcode == `Rtype)&(funct == `XOR);
	 assign nor_ = (opcode == `Rtype)&(funct == `NOR);
	 assign slt = (opcode == `Rtype)&(funct == `SLT);
	 assign sltu = (opcode == `Rtype)&(funct == `SLTU);
	 assign sll = (opcode == `Rtype)&(funct == `SLL);
	 assign sllv = (opcode == `Rtype)&(funct == `SLLV);
	 assign srl = (opcode == `Rtype)&(funct == `SRL);
	 assign srlv = (opcode == `Rtype)&(funct == `SRLV);
	 assign sra = (opcode == `Rtype)&(funct == `SRA);
	 assign srav = (opcode == `Rtype)&(funct == `SRAV);
	 
	 assign mfhi = (opcode == `Rtype)&(funct == `MFHI);
	 assign mflo = (opcode == `Rtype)&(funct == `MFLO);
	 assign mthi = (opcode == `Rtype)&(funct == `MTHI);
	 assign mtlo = (opcode == `Rtype)&(funct == `MTLO);
	 assign mult = (opcode == `Rtype)&(funct == `MULT);
	 assign multu = (opcode == `Rtype)&(funct == `MULTU);
	 assign div = (opcode == `Rtype)&(funct == `DIV);
	 assign divu = (opcode == `Rtype)&(funct == `DIVU);
	 
	 assign mfc0 = (opcode == `COP0)&(rs == `MF);
	 assign mtc0 = (opcode == `COP0)&(rs == `MT);
	 assign eret = (opcode == `COP0)&(co == `CO)&(funct == `ERET);
	 
	 assign addi = (opcode == `ADDI);
	 assign addiu = (opcode == `ADDIU);
	 assign ori = (opcode == `ORI);
	 assign andi = (opcode == `ANDI);
	 assign xori = (opcode == `XORI);
	 assign slti = (opcode == `SLTI);
	 assign sltiu = (opcode == `SLTIU);
	 assign lui = (opcode == `LUI);

	 assign lw = (opcode == `LW);
	 assign lh = (opcode == `LH);
	 assign lhu = (opcode == `LHU);
	 assign lb = (opcode == `LB);
	 assign lbu = (opcode == `LBU);
	 
	 
	 assign sw = (opcode == `SW);
	 assign sh = (opcode == `SH);
	 assign sb = (opcode == `SB);
	 
	 
	 assign beq = (opcode == `BEQ);
	 assign bne = (opcode == `BNE);
	 assign blez = (opcode == `BLEZ);
	 assign bltz = (opcode == `BLTZ)&(rt == 5'b00000);
	 assign bgez = (opcode == `BLTZ)&(rt == `BGEZ);
	 assign bgtz = (opcode == `BGTZ);
	 
	 //B型分支判定
	 assign beq_ = beq&Equ;
	 assign bne_ = bne&(~Equ);
	 assign blez_ = blez&(~Gtz);
	 assign bltz_ = bltz&Ltz;
	 assign bgez_ = bgez&(~Ltz);
	 assign bgtz_ = bgtz&Gtz;
	 
	 
	 assign jal = (opcode == `JAL);
	 assign jalr = (opcode == `Rtype)&(funct == `JALR);
	 assign j = (opcode == `J);
	 assign jr = (opcode == `Rtype)&(funct == `JR);
	 
	 
	 //指令归类
	 wire R_ALU,I;
	 assign R_ALU = addu|add|subu|sub|and_|or_|xor_|nor_|slt|sltu|sll|sllv|srl|srlv|sra|srav;
	 
	 assign I = addi|addiu|ori|andi|xori|slti|sltiu|lui;
	 
	 //控制信号或阵列
	 assign NPCOp = {jal|j|jr|jalr,
						  beq_|bne_|blez_|bltz_|bgez_|bgtz_|jr|jalr};
							
	 assign RFWr = R_ALU|I|mfhi|mflo|lw|lh|lhu|lb|lbu|jal|jalr|mfc0;
	 
	 assign EXTOp = addi|addiu|slti|sltiu|lw|lh|lhu|lb|lbu|sw|sh|sb;
	 
	 assign ALUOp = {sltu|sltiu|sll|sllv|srl|srlv|sra|srav,
						  xor_|nor_|slt|xori|slti|lui,
						  and_|or_|slt|srl|srlv|sra|srav|ori|andi|slti|lui,
						  subu|sub|or_|nor_|slt|sll|sllv|sra|srav|slti|ori};
	 
	 assign DMWr = sw|sh|sb;
	 
	 assign A3Sel = {jal,
						  I|lw|lh|lhu|lb|lbu|mfc0};
	 
	 assign WDSel = {jal|jalr,lw|lh|lhu|lb|lbu|mfc0};
	 
	 assign BSel = I|lw|lh|lhu|lb|lbu|sw|sh|sb;
	 
	 assign VSel = sllv|srlv|srav;
	 
	 assign DAOp = {lb|lbu|sb,lh|lhu|sh};
	 
	 assign SSel = lh|lb;
	 
	 assign Br = beq_|bne_|blez_|bltz_|bgez_|bgtz_;
	 
	 assign start = mult|multu|div|divu;
	 
	 assign CSel = mfhi|mflo;
	 
	 assign MDOp = {1'b0,mult|multu|div|divu,mthi|mtlo|div|divu,mflo|mtlo|multu|divu};
	 
	 assign MD_instr = mfhi|mflo|mthi|mtlo|mult|multu|div|divu;
	 
	 assign RI = ~(R_ALU|I|MD_instr|lw|lh|lhu|lb|lbu|sw|sh|sb|beq|bne|blez|bltz|bgez|bgtz|jal|j|jr|jalr|mfc0|mtc0|eret);

	 assign CalType = {lw|lh|lhu|lb|lbu|sw|sh|sb,add|sub|addi|sw|sh|sb};
	 
	 assign Care = add|sub|addi;
	 
	 assign LoadType = {lh|lhu|lb|lbu,lw|lb|lbu};
	 
	 assign StoreType = {sh|sb,sw|sb};
	 
	 assign BDSel =  beq|bne|blez|bltz|bgez|bgtz|jal|j|jr|jalr;
	 
	 
	 assign We = mtc0;
	 //Tuse
	 assign Tuse_rs = {sll|srl|sra|mfhi|mflo|lui|jal|j|mfc0|mtc0|eret,
							R_ALU|mfhi|mflo|mthi|mtlo|mult|multu|div|divu|I|lw|lh|lhu|lb|lbu|sw|sh|sb|jal|j|mfc0|mtc0|eret};
							
	 assign Tuse_rt = {mfhi|mflo|I|lw|lh|lhu|lb|lbu|sw|sh|sb|jal|j|jr|addi|jalr|mfc0|mtc0|eret,
							 R_ALU|mfhi|mflo|mthi|mtlo|mult|multu|div|divu|I|lw|lh|lhu|lb|lbu|jal|j|jr|addi|jalr|mfc0|eret};
	 
	 //Tnew_E
	 assign Tnew_E = {lw|lh|lhu|lb|lbu|mfc0,
							R_ALU|mfhi|mflo|I};
	 
	 //Tnew_M
	 assign Tnew_M = {1'b0,lw|lh|lhu|lb|lbu|mfc0};
	 
	 
endmodule
