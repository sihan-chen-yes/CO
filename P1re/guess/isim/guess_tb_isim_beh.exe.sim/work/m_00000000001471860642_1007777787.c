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
static const char *ng0 = "C:/Users/86181/Desktop/P1re/guess/guess.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_26_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t39[8];
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
    unsigned int t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2428);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 692U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t14) = 1;

LAB9:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 784U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB16;

LAB13:    if (t25 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t14) = 1;

LAB16:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 876U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB23;

LAB20:    if (t25 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 968U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB30;

LAB27:    if (t25 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t14) = 1;

LAB30:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 4);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 1060U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB37;

LAB34:    if (t25 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t14) = 1;

LAB37:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 5);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 1152U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t6 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB44;

LAB41:    if (t25 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t14) = 1;

LAB44:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB2;

LAB8:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 1564);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);
    goto LAB12;

LAB15:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(31, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 1564);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);
    goto LAB19;

LAB22:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(33, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 1564);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);
    goto LAB26;

LAB29:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(35, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 1564);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);
    goto LAB33;

LAB36:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(37, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 1564);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);
    goto LAB40;

LAB43:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(39, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 1564);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);
    goto LAB47;

}

static void Cont_41_1(char *t0)
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

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2480);
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
    t18 = (t0 + 2436);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001471860642_1007777787_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Cont_41_1};
	xsi_register_didat("work_m_00000000001471860642_1007777787", "isim/guess_tb_isim_beh.exe.sim/work/m_00000000001471860642_1007777787.didat");
	xsi_register_executes(pe);
}
