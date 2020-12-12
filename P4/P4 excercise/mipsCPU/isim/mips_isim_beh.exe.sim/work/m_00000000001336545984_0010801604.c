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
static const char *ng0 = "C:/Users/86181/Desktop/P4 excercise/mipsCPU/dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static const char *ng5 = "@%h: *%h <= %h";



static void Initial_36_0(char *t0)
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

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1748);
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
LAB4:    xsi_set_current_line(37, ng0);

LAB6:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1656);
    t16 = (t0 + 1656);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1656);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1748);
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

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1748);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1748);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Cont_44_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 3204);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 3136);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_45_2(char *t0)
{
    char t6[8];
    char t19[8];
    char t20[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3144);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1840);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(48, ng0);

LAB6:    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t5) == 0)
        goto LAB7;

LAB9:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB10:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB11;

LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t21 = (t0 + 1564);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    memset(t20, 0, 8);
    t24 = (t20 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 8);
    *((unsigned int *)t20) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 8);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t30 & 16777215U);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 16777215U);
    t33 = (t0 + 1564);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 255U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 255U);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t32, 8, t20, 24);
    t44 = (t0 + 1564);
    xsi_vlogvar_assign_value(t44, t19, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t12 = (t0 + 1840);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 32);
    goto LAB6;

}

static void Always_54_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t43[8];
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
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3152);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
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

LAB7:    xsi_set_current_line(60, ng0);
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

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1748);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 1748);
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

LAB11:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 1656);
    t17 = (t0 + 1656);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 1748);
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

LAB15:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1748);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(60, ng0);

LAB19:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t30 = (~(t27));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t30);
    t37 = (t34 & 1U);
    if (t37 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t4) == 0)
        goto LAB20;

LAB22:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB23:    t12 = (t13 + 4);
    t38 = *((unsigned int *)t12);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(65, ng0);

LAB30:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t11 = (t0 + 1656);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t17 = (t0 + 1656);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t20 = (t0 + 968U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1023U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 1023U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t16, 10, 2);
    t23 = (t13 + 4);
    t30 = *((unsigned int *)t23);
    t28 = (!(t30));
    t24 = (t15 + 4);
    t33 = *((unsigned int *)t24);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 30, t2, 2);
    t12 = (t0 + 1564);
    t14 = (t12 + 36U);
    t17 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t3, 32, (char)118, t13, 32, (char)119, t17, 32);

LAB26:    goto LAB18;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(61, ng0);

LAB27:    xsi_set_current_line(62, ng0);
    t14 = (t0 + 1060U);
    t17 = *((char **)t14);
    t14 = (t0 + 1656);
    t18 = (t0 + 1656);
    t19 = (t18 + 44U);
    t20 = *((char **)t19);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 968U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t24 = (t43 + 4);
    t26 = (t25 + 4);
    t44 = *((unsigned int *)t25);
    t45 = (t44 >> 2);
    *((unsigned int *)t43) = t45;
    t46 = *((unsigned int *)t26);
    t47 = (t46 >> 2);
    *((unsigned int *)t24) = t47;
    t48 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t48 & 1023U);
    t49 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t49 & 1023U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t20, t23, 2, 1, t43, 10, 2);
    t29 = (t15 + 4);
    t50 = *((unsigned int *)t29);
    t28 = (!(t50));
    t51 = (t16 + 4);
    t52 = *((unsigned int *)t51);
    t31 = (!(t52));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    t2 = (t0 + 1060U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t3, 32, (char)118, t4, 32, (char)118, t5, 32);
    goto LAB26;

LAB28:    t53 = *((unsigned int *)t15);
    t54 = *((unsigned int *)t16);
    t35 = (t53 - t54);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t17, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB29;

LAB31:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB32;

}

static void Cont_73_4(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1656);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1656);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 968U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 10, 2);
    t22 = (t0 + 3240);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 3160);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000001336545984_0010801604_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Cont_44_1,(void *)Always_45_2,(void *)Always_54_3,(void *)Cont_73_4};
	xsi_register_didat("work_m_00000000001336545984_0010801604", "isim/mips_isim_beh.exe.sim/work/m_00000000001336545984_0010801604.didat");
	xsi_register_executes(pe);
}
