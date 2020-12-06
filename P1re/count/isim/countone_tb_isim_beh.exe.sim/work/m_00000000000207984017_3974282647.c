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
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 1784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2124);
    *((int *)t2) = 1;
    t3 = (t0 + 1812);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1076);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 3132);
    *((int *)t4) = t9;

LAB6:    t5 = (t0 + 3132);
    if (*((int *)t5) > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);

LAB9:    t10 = (t0 + 148);
    xsi_vlog_namedbase_setdisablestate(t10, &&LAB10);
    t11 = (t0 + 1684);
    xsi_vlog_namedbase_pushprocess(t10, t11);

LAB11:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 756U);
    t13 = *((char **)t12);
    t12 = (t0 + 732U);
    t15 = (t12 + 44U);
    t16 = *((char **)t15);
    t17 = (t0 + 1260);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t16, 2, t19, 32, 1);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1260);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t4, 32, t5, 32);
    t10 = (t0 + 1260);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    t2 = (t0 + 148);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 1684);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    t2 = (t0 + 3132);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB6;

LAB12:    xsi_set_current_line(29, ng0);

LAB15:    xsi_set_current_line(30, ng0);
    goto LAB10;

LAB16:    goto LAB14;

}

static void Cont_36_1(char *t0)
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

LAB0:    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1076);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2176);
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
    t18 = (t0 + 2132);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000207984017_3974282647_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000000207984017_3974282647", "isim/countone_tb_isim_beh.exe.sim/work/m_00000000000207984017_3974282647.didat");
	xsi_register_executes(pe);
}
