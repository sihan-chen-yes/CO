`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:49 12/27/2020 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
    input [31:2] PrAddr,
    input [31:0] PrWD,
    input PrWe,
    input [31:0] DEV0_RD,
    input [31:0] DEV1_RD,
    output [31:2] DEV_Addr,
    output [31:0] DEV_WD,
    output DEV0_WE,
    output DEV1_WE,
    output [31:0] PrRD
    );
	 wire [31:0] addr;
	 assign addr = {PrAddr,2'b00};
	 //µØÖ·²¹È«
	 assign DEV_Addr = PrAddr;
	 
	 assign DEV_WD = PrWD;
	 
	 
	 wire DEV0_hit,DEV1_hit;
	 assign DEV0_hit = (addr == 32'h00007f00)||(addr == 32'h00007f04)||(addr == 32'h00007f08);
	 assign DEV1_hit = (addr == 32'h00007f10)||(addr == 32'h00007f14)||(addr == 32'h00007f18);
	 
	 assign DEV0_WE = DEV0_hit & PrWe;
	 assign DEV1_WE = DEV1_hit & PrWe;
	 
	 assign PrRD = (DEV0_hit == 1)? DEV0_RD:
						(DEV1_hit == 1)? DEV1_RD:
											32'hbbbbbbbb;

endmodule
