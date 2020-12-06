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
static const char *ng0 = "C:/Users/86181/Desktop/P1re/count/countone.v";
static int ng1[] = {0, 0};
static int ng2[] = {6, 0};
static int ng3[] = {1, 0};



static void Always_25_0(char *t0)
{
    char t12[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 2868);
    *((int *)t4) = t9;

LAB6:    t5 = (t0 + 2868);
    if (*((int *)t5) > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t10 = (t0 + 600U);
    t11 = *((char **)t10);
    t10 = (t0 + 576U);
    t13 = (t10 + 44U);
    t14 = *((char **)t13);
    t15 = (t0 + 1012);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_index_select_value(t12, 1, t11, t14, 2, t17, 32, 1);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t4, 32, t5, 32);
    t10 = (t0 + 1012);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    t2 = (t0 + 2868);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB6;

LAB10:    xsi_set_current_line(30, ng0);
    t24 = (t0 + 920);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t26, 32, t27, 32);
    t29 = (t0 + 920);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB12;

}

static void Cont_34_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 1884);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002457991857_3974282647_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_34_1};
	xsi_register_didat("work_m_00000000002457991857_3974282647", "isim/countone_tb_isim_beh.exe.sim/work/m_00000000002457991857_3974282647.didat");
	xsi_register_executes(pe);
}
