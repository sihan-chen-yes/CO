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
static int ng1[] = {6, 0};
static int ng2[] = {1, 0};



static void Always_25_0(char *t0)
{
    char t16[8];
    char t32[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;

LAB0:    t1 = (t0 + 1692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2032);
    *((int *)t2) = 1;
    t3 = (t0 + 1720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t0 + 3032);
    *((int *)t10) = t9;

LAB6:    t11 = (t0 + 3032);
    if (*((int *)t11) > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);

LAB9:    t12 = (t0 + 148);
    xsi_vlog_namedbase_setdisablestate(t12, &&LAB10);
    t13 = (t0 + 1592);
    xsi_vlog_namedbase_pushprocess(t12, t13);

LAB11:    xsi_set_current_line(28, ng0);
    t14 = (t0 + 756U);
    t15 = *((char **)t14);
    t14 = (t0 + 732U);
    t17 = (t14 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1168);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t18, 2, t21, 32, 1);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1168);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t4, 32, t5, 32);
    t10 = (t0 + 1168);
    xsi_vlogvar_assign_value(t10, t16, 0, 0, 32);
    t2 = (t0 + 148);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 1592);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    t2 = (t0 + 3032);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB6;

LAB12:    xsi_set_current_line(29, ng0);
    t28 = (t0 + 1076);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t30, 32, t31, 32);
    t33 = (t0 + 1076);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 32);
    goto LAB14;

}

static void Cont_33_1(char *t0)
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

LAB0:    t1 = (t0 + 1836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1076);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2084);
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
    t18 = (t0 + 2040);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001478069728_3974282647_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_33_1};
	xsi_register_didat("work_m_00000000001478069728_3974282647", "isim/countone_tb_isim_beh.exe.sim/work/m_00000000001478069728_3974282647.didat");
	xsi_register_executes(pe);
}
