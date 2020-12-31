`timescale 1ns / 1ps
`define IDLE 2'b00
`define LOAD 2'b01
`define CNT  2'b10
`define INT  2'b11

`define ctrl   mem[0]
`define preset mem[1]
`define count  mem[2]
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:39 12/28/2017 
// Design Name: 
// Module Name:    TC 
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
module Timer(
    input clk,
    input reset,
    input [31:2] Addr,
    input WE,
	 input [31:0] PC,
    input [31:0] Din,
    output [31:0] Dout,
    output IRQ
    );
	reg [31:0] mem [2:0];
	
	reg _IRQ;
	assign IRQ = `ctrl[3] & _IRQ;
	
	assign Dout = mem[Addr[3:2]];
	
	wire [31:0] load = Addr[3:2] == 0 ? {28'h0, Din[3:0]} : Din;
	
	integer i;
	always @(posedge clk) begin
		if(reset) begin
			for(i = 0; i < 3; i = i+1) mem[i] <= 0;
			_IRQ <= 0;
		end
		else if(WE) begin
			$display("%d@%h: *%h <= %h", $time,PC, {Addr, 2'b00}, load);
			mem[Addr[3:2]] <= load;
		end
	end
endmodule
