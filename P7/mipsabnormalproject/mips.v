`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:46 12/27/2020 
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
module mips(
    input clk,
    input reset,
	 input interrupt,
	 output [31:0] addr
    );
	 wire [31:0] PrRD,PrWD,DEV_WD,DEV0_RD,DEV1_RD;
	 wire [15:10] HWInt;
	 wire PrWE,DEV0_WE,DEV1_WE;
	 wire [31:2] PrAddr,DEV_Addr;
	 wire IRQ0,IRQ1;
	 assign HWInt = 6'b0;
	 wire [31:0] PC;
	CPU CPU(
	 .clk(clk),
	 .reset(reset),
	 .PrRD(PrRD),
	 .HWInt(HWInt),
	 .PrWE(PrWE),
	 .PrWD(PrWD),
	 .PrAddr(PrAddr),
	 .addr(addr),
	 .PC(PC)
	);
	
	Bridge Bridge(
	 .PrAddr(PrAddr),
	 .PrWD(PrWD),
	 .PrWe(PrWE),
	 .DEV0_RD(DEV0_RD),
	 .DEV1_RD(DEV1_RD),
	 .DEV_Addr(DEV_Addr),
	 .DEV_WD(DEV_WD),
	 .DEV0_WE(DEV0_WE),
	 .DEV1_WE(DEV1_WE),
	 .PrRD(PrRD)
	);
	
	Timer Timer0(
	 .clk(clk),
	 .reset(reset),
	 .Addr(DEV_Addr),
	 .WE(DEV0_WE),
	 .Din(DEV_WD),
	 .Dout(DEV0_RD),
	 .IRQ(IRQ0),
	 .PC(PC)
	);
	
	Timer Timer1(
	 .clk(clk),
	 .reset(reset),
	 .Addr(DEV_Addr),
	 .WE(DEV1_WE),
	 .Din(DEV_WD),
	 .Dout(DEV1_RD),
	 .IRQ(IRQ1),
	 .PC(PC)
	);

endmodule
