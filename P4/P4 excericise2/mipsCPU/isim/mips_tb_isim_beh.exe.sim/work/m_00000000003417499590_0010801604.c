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
static const char *ng0 = "C:/Users/86181/Desktop/P4 excericise2/mipsCPU/dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static const char *ng5 = "@%h: *%h <= %h";
static int ng6[] = {4, 0};



static void Initial_34_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1656);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB6:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1564);
    t16 = (t0 + 1564);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1564);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1656);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1656);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1656);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_41_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3136);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 1564);
    t17 = (t0 + 1564);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1564);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 1656);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1656);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(47, ng0);

LAB19:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1564);
    t11 = (t0 + 1564);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t17 = (t0 + 1564);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t20 = (t0 + 876U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t30 = (t27 >> 2);
    *((unsigned int *)t16) = t30;
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 2);
    *((unsigned int *)t20) = t34;
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 1023U);
    t38 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t38 & 1023U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t16, 10, 2);
    t23 = (t13 + 4);
    t39 = *((unsigned int *)t23);
    t28 = (!(t39));
    t24 = (t15 + 4);
    t40 = *((unsigned int *)t24);
    t31 = (!(t40));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = (t0 + 968U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t3, 32, (char)118, t4, 32, (char)118, t5, 32);
    goto LAB18;

LAB20:    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t15);
    t35 = (t41 - t42);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB21;

}

static void Cont_55_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 3204);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 3144);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_56_3(char *t0)
{
    char t7[8];
    char t11[8];
    char t18[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3152);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);

LAB12:    xsi_set_current_line(59, ng0);
    t8 = (t0 + 1564);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t12 = (t0 + 1564);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t0 + 1564);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t19 = (t0 + 876U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 2);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 2);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 1023U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 1023U);
    xsi_vlog_generic_get_array_select_value(t11, 32, t10, t14, t17, 2, 1, t18, 10, 2);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t30 = (t11 + 4);
    t31 = *((unsigned int *)t11);
    t32 = (t31 >> 0);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 65535U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 65535U);
    t37 = ((char*)((ng3)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t37, 16, t28, 16);
    t38 = (t0 + 1840);
    xsi_vlogvar_assign_value(t38, t7, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t4, 32, t8, 32);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t7, 32, t9, 32);
    t10 = (t11 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t11);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    goto LAB11;

LAB9:    xsi_set_current_line(66, ng0);

LAB16:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1564);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    t9 = (t0 + 1564);
    t10 = (t9 + 44U);
    t12 = *((char **)t10);
    t13 = (t0 + 1564);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t0 + 876U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t22 = *((unsigned int *)t17);
    t23 = (t22 >> 2);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 2);
    *((unsigned int *)t16) = t25;
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 1023U);
    t27 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t27 & 1023U);
    xsi_vlog_generic_get_array_select_value(t11, 32, t8, t12, t15, 2, 1, t18, 10, 2);
    memset(t28, 0, 8);
    t20 = (t28 + 4);
    t21 = (t11 + 4);
    t31 = *((unsigned int *)t11);
    t32 = (t31 >> 16);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t21);
    t34 = (t33 >> 16);
    *((unsigned int *)t20) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 65535U);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 65535U);
    t29 = ((char*)((ng3)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t29, 16, t28, 16);
    t30 = (t0 + 1840);
    xsi_vlogvar_assign_value(t30, t7, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t4, 32, t8, 32);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t7, 32, t9, 32);
    t10 = (t11 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t11);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t12 = (t0 + 1840);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1748);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB15;

LAB17:    xsi_set_current_line(69, ng0);
    t12 = (t0 + 1840);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1748);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB19;

}

static void Cont_76_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t26[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 2940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1152U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t43 = (t0 + 3240);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 3160);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1748);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 1564);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t27 = (t0 + 1564);
    t28 = (t27 + 44U);
    t29 = *((char **)t28);
    t30 = (t0 + 1564);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    t34 = (t0 + 876U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 2);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 2);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 1023U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 1023U);
    xsi_vlog_generic_get_array_select_value(t26, 32, t25, t29, t32, 2, 1, t33, 10, 2);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}


extern void work_m_00000000003417499590_0010801604_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_41_1,(void *)Cont_55_2,(void *)Always_56_3,(void *)Cont_76_4};
	xsi_register_didat("work_m_00000000003417499590_0010801604", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003417499590_0010801604.didat");
	xsi_register_executes(pe);
}
