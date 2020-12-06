/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/86181/Desktop/P1re/emailcheck/emailcheck_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {8, 0};



static void Initial_43_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t42[256];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);

LAB6:    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 248);
    t8 = (t4 + 252);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 24);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 24);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t5 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB10;

LAB7:    if (t28 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t16) = 1;

LAB10:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB9:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);
    t38 = (t0 + 1104);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t42, 1024, t40, 1024, t41, 32);
    t43 = (t0 + 1104);
    xsi_vlogvar_assign_value(t43, t42, 0, 0, 1024);
    goto LAB6;

LAB13:    xsi_set_current_line(52, ng0);

LAB14:    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t6 = *((char **)t4);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 248);
    t15 = (t6 + 252);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 24);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 24);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t17 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t18 = (t5 + 4);
    t31 = (t17 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t17);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t31);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t18);
    t27 = *((unsigned int *)t31);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB16;

LAB15:    if (t28 != 0)
        goto LAB17;

LAB18:    t38 = (t16 + 4);
    t33 = *((unsigned int *)t38);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB19;

LAB20:    goto LAB1;

LAB16:    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB17:    t32 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(52, ng0);

LAB21:    xsi_set_current_line(53, ng0);
    t39 = (t0 + 1104);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t43 = (t44 + 4);
    t45 = (t41 + 248);
    t46 = (t41 + 252);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 24);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 24);
    *((unsigned int *)t43) = t50;
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 & 255U);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t52 & 255U);
    t53 = (t0 + 920);
    xsi_vlogvar_assign_value(t53, t44, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t42, 1024, t4, 1024, t6, 32);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t42, 0, 0, 1024);
    goto LAB14;

}

static void Always_61_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 828);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000002283160759_3880575872_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_61_1};
	xsi_register_didat("work_m_00000000002283160759_3880575872", "isim/emailcheck_tb_isim_beh.exe.sim/work/m_00000000002283160759_3880575872.didat");
	xsi_register_executes(pe);
}
