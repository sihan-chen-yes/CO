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
static const char *ng0 = "C:/Users/86181/Desktop/P1re/vote/vote.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static int ng4[] = {8, 0};
static int ng5[] = {4, 0};



static void Always_29_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1916);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_signed_greatereq(t31, 32, t4, 32, t5, 32);
    memset(t15, 0, 8);
    t7 = (t31 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t31);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB26:    t14 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB27;

LAB28:    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t33 = *((unsigned int *)t14);
    t34 = (t26 || t33);
    if (t34 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t14) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t15) > 0)
        goto LAB33;

LAB34:    memcpy(t6, t17, 8);

LAB35:    t18 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    t13 = (t0 + 576U);
    t16 = (t13 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1196);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(32, ng0);
    t27 = (t0 + 1104);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t29, 32, t30, 32);
    t32 = (t0 + 1104);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB12;

LAB14:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(36, ng0);
    t13 = (t0 + 692U);
    t14 = *((char **)t13);
    t13 = (t0 + 668U);
    t16 = (t13 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1196);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

LAB17:    xsi_set_current_line(36, ng0);
    t27 = (t0 + 1104);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t29, 32, t30, 32);
    t32 = (t0 + 1104);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB19;

LAB20:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1104);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t7, 32, t13, 32);
    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    goto LAB22;

LAB23:    *((unsigned int *)t15) = 1;
    goto LAB26;

LAB25:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB27:    t16 = ((char*)((ng3)));
    goto LAB28;

LAB29:    t17 = ((char*)((ng1)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t6, 32, t16, 32, t17, 32);
    goto LAB35;

LAB33:    memcpy(t6, t16, 8);
    goto LAB35;

}


extern void work_m_00000000000011449578_4097232175_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000011449578_4097232175", "isim/vote_tb_isim_beh.exe.sim/work/m_00000000000011449578_4097232175.didat");
	xsi_register_executes(pe);
}
