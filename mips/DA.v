`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:33:08 12/21/2020 
// Design Name: 
// Module Name:    DA 
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
module DA(
    input [1:0] addr,
    input [31:0] WD_raw,
    input [31:0] D_raw,
	 input [1:0] DAOp,
	 input SSel,
    output [31:0] WD_new,
	 output [31:0] D_new
    );
	 //WD Assemble
	 wire [31:0] WD_W,WD_H,WD_B;
	 assign WD_W = WD_raw;
	 
	 assign WD_H = (addr[1]) ? {WD_raw[15:0],D_raw[15:0]}:
										{D_raw[31:16],WD_raw[15:0]};
										
	 assign WD_B = (addr == 2'b00) ? {D_raw[31:8],WD_raw[7:0]}:
						(addr == 2'b01) ? {D_raw[31:16],WD_raw[7:0],D_raw[7:0]}:
						(addr == 2'b10) ? {D_raw[31:24],WD_raw[7:0],D_raw[15:0]}:
												{WD_raw[7:0],D_raw[23:0]};
												
	 assign WD_new = (DAOp == 2'b00) ? WD_W:
						  (DAOp == 2'b01) ? WD_H:
											     WD_B;
												  
	 //DR Assemble
	 wire [31:0] D_W,D_h,D_hu,D_H,D_b,D_bu,D_B;
	 assign D_W = D_raw;
	 
	 assign D_h = (addr[1]) ? {{16{D_raw[31]}},D_raw[31:16]}:
									  {{16{D_raw[15]}},D_raw[15:0]};
									  
	 assign D_hu = (addr[1]) ? {16'h0000,D_raw[31:16]}:
									  {16'h0000,D_raw[15:0]};
									  
	 assign D_H = (SSel) ? D_h:D_hu;
									  
	 assign D_b = (addr == 2'b00) ?{{24{D_raw[7]}},D_raw[7:0]}:
					  (addr == 2'b01) ?{{24{D_raw[15]}},D_raw[15:8]}:
					  (addr == 2'b10) ?{{24{D_raw[23]}},D_raw[23:16]}:
										    {{24{D_raw[31]}},D_raw[31:24]};
	
	 assign D_bu = (addr == 2'b00) ?{24'h000000,D_raw[7:0]}:
					   (addr == 2'b01) ?{24'h000000,D_raw[15:8]}:
					   (addr == 2'b10) ?{24'h000000,D_raw[23:16]}:
										     {24'h000000,D_raw[31:24]};
											  
	 assign D_B = (SSel) ? D_b:D_bu;
	 
	 assign D_new = (DAOp == 2'b00) ?D_W:
						 (DAOp == 2'b01) ?D_H:
												D_B;
						 
endmodule
