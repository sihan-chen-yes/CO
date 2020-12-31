`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:33:43 12/15/2020 
// Design Name: 
// Module Name:    ATcontroller 
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
  module ATcontroller(
    input [4:0] rs_D,
    input [4:0] rt_D,
    input [4:0] rs_E,
    input [4:0] rt_E,
    input [4:0] rt_M,
	 input [4:0] A3_E,
	 input [4:0] A3_M,
	 input [4:0] A3_W,
	 input [1:0] Tuse_rs,
	 input [1:0] Tuse_rt,
	 input [1:0] Tnew_E,
	 input [1:0] Tnew_M,
	 input MD_instr,
	 input start,
	 input busy,
	 output [1:0] MF_RD1_Sel,
	 output [1:0] MF_RD2_Sel,
	 output [1:0] MF_ALUA_Sel,
	 output [1:0] MF_ALUB_Sel,
	 output MF_DMWD_Sel,
	 output PC_en,
	 output D_en,
	 output E_clr
    );
	 //转发MUX控制信号
	assign MF_RD1_Sel = 	((rs_D == A3_E)&&(A3_E))? 2:
								((rs_D == A3_M)&&(A3_M))? 1:
																	0;
																	
	assign MF_RD2_Sel =  ((rt_D == A3_E)&&(A3_E))? 2:
								((rt_D == A3_M)&&(A3_M))? 1:
																	0;
																	
	assign MF_ALUA_Sel = ((rs_E == A3_M)&&(A3_M))? 2:
								((rs_E == A3_W)&&(A3_W))? 1:
																	0;
																	
	assign MF_ALUB_Sel = ((rt_E == A3_M)&&(A3_M))? 2:
								((rt_E == A3_W)&&(A3_W))? 1:
																	0;
																	
	assign MF_DMWD_Sel = ((rt_M == A3_W)&&(A3_W))? 1:
																	0;	
	
	//stall  
	//rs_stall
	wire rs_stall_E,rs_stall_M,rt_stall_E,rt_stall_M,rs_stall,rt_stall,stall;
	assign rs_stall_E = ((rs_D == A3_E)&&(A3_E != 0)&&(Tuse_rs < Tnew_E)) ? 1:0;
	assign rs_stall_M = ((rs_D == A3_M)&&(A3_M != 0)&&(Tuse_rs < Tnew_M)) ? 1:0;
	assign rs_stall = rs_stall_E||rs_stall_M;
	//rt_stall
	assign rt_stall_E = ((rt_D == A3_E)&&(A3_E != 0)&&(Tuse_rt < Tnew_E)) ? 1:0;
	assign rt_stall_M = ((rt_D == A3_M)&&(A3_M != 0)&&(Tuse_rt < Tnew_M)) ? 1:0;
	assign rt_stall = rt_stall_E||rt_stall_M;
	//MDstall
	assign MD_stall = MD_instr&(start|busy);
	//stall
	assign stall = rs_stall|rt_stall|MD_stall;
	//暂停控制信号
	assign PC_en = ~stall;
	assign D_en = ~stall;
	assign E_clr = stall;
	
																		
endmodule
