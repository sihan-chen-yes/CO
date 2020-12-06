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
static const char *ng0 = "C:/Users/86181/Desktop/P1re/check/check.v";
static int ng1[] = {0, 0};
static int ng2[] = {49, 0};
static int ng3[] = {1, 0};
static int ng4[] = {48, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};



static void Always_27_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
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
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB23;

LAB20:    if (t25 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t13) = 1;

LAB23:    memset(t10, 0, 8);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t29) != 0)
        goto LAB26;

LAB27:    t36 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB28;

LAB29:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t36) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t10) > 0)
        goto LAB34;

LAB35:    memcpy(t9, t45, 8);

LAB36:    t46 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t46, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB40;

LAB37:    if (t25 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t13) = 1;

LAB40:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB44:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB45;

LAB46:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t15) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t10) > 0)
        goto LAB51;

LAB52:    memcpy(t9, t29, 8);

LAB53:    t35 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t35, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB57;

LAB54:    if (t25 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;

LAB57:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t12) != 0)
        goto LAB60;

LAB61:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB62;

LAB63:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t15) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t10) > 0)
        goto LAB68;

LAB69:    memcpy(t9, t29, 8);

LAB70:    t35 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t35, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB74;

LAB71:    if (t25 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t13) = 1;

LAB74:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t12) != 0)
        goto LAB77;

LAB78:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB79;

LAB80:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t15) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t10) > 0)
        goto LAB85;

LAB86:    memcpy(t9, t29, 8);

LAB87:    t35 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t35, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB91;

LAB88:    if (t25 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t13) = 1;

LAB91:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t12) != 0)
        goto LAB94;

LAB95:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB96;

LAB97:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t15) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t10) > 0)
        goto LAB102;

LAB103:    memcpy(t9, t29, 8);

LAB104:    t35 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t35, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB22:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB26:    t35 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB27;

LAB28:    t40 = ((char*)((ng3)));
    goto LAB29;

LAB30:    t45 = ((char*)((ng1)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t9, 32, t40, 32, t45, 32);
    goto LAB36;

LAB34:    memcpy(t9, t40, 8);
    goto LAB36;

LAB39:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t10) = 1;
    goto LAB44;

LAB43:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB45:    t28 = ((char*)((ng5)));
    goto LAB46;

LAB47:    t29 = ((char*)((ng3)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB53;

LAB51:    memcpy(t9, t28, 8);
    goto LAB53;

LAB56:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t10) = 1;
    goto LAB61;

LAB60:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB61;

LAB62:    t28 = ((char*)((ng6)));
    goto LAB63;

LAB64:    t29 = ((char*)((ng1)));
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB70;

LAB68:    memcpy(t9, t28, 8);
    goto LAB70;

LAB73:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t10) = 1;
    goto LAB78;

LAB77:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB78;

LAB79:    t28 = ((char*)((ng7)));
    goto LAB80;

LAB81:    t29 = ((char*)((ng3)));
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB87;

LAB85:    memcpy(t9, t28, 8);
    goto LAB87;

LAB90:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t10) = 1;
    goto LAB95;

LAB94:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB95;

LAB96:    t28 = ((char*)((ng6)));
    goto LAB97;

LAB98:    t29 = ((char*)((ng1)));
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB104;

LAB102:    memcpy(t9, t28, 8);
    goto LAB104;

}

static void Cont_38_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 0);
    t20 = (t0 + 1884);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000000344457430_0843895934_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Cont_38_1};
	xsi_register_didat("work_m_00000000000344457430_0843895934", "isim/tb_isim_beh.exe.sim/work/m_00000000000344457430_0843895934.didat");
	xsi_register_executes(pe);
}
