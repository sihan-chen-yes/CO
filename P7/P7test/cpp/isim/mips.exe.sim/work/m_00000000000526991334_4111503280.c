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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {0, 0};
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {3, 0};
static int ng4[] = {4, 0};
static int ng5[] = {5, 0};
static int ng6[] = {6, 0};
static int ng7[] = {7, 0};
static int ng8[] = {10, 0};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {4294967295U, 4294967295U};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Cont_47_1(char *t0)
{
    char t4[8];
    char t22[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 1848U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB11;

LAB8:    if (t34 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t22) = 1;

LAB11:    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t22);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = (t4 + 4);
    t43 = (t22 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB12;

LAB13:
LAB14:    t66 = (t0 + 9384);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t70, 0, 8);
    t71 = 1U;
    t72 = t71;
    t73 = (t38 + 4);
    t74 = *((unsigned int *)t38);
    t71 = (t71 & t74);
    t75 = *((unsigned int *)t73);
    t72 = (t72 & t75);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 | t71);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 | t72);
    xsi_driver_vfirst_trans(t66, 0, 0);
    t79 = (t0 + 9112);
    *((int *)t79) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB10:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t4 + 4);
    t53 = (t22 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t4);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t22);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t64 & t62);
    t65 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t65 & t63);
    goto LAB14;

}

static void Cont_48_2(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB6;

LAB7:    t10 = (t0 + 9448);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t10, 0, 0);
    t23 = (t0 + 9128);
    *((int *)t23) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

}

static void Cont_54_3(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlogtype_sign_extend(t3, 64, t4, 32);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    xsi_vlogtype_sign_extend(t5, 64, t6, 32);
    xsi_vlog_signed_multiply(t7, 64, t3, 64, t5, 64);
    t2 = (t0 + 9512);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t7, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t12 = (t0 + 9144);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_55_4(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t5, 64, t3, 32, t4, 32);
    t2 = (t0 + 9576);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t10 = (t0 + 9160);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_56_5(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_divide(t7, 32, t4, 32, t6, 32);
    t2 = (t0 + 9640);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t12 = (t0 + 9176);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_57_6(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t4, 32, t6, 32);
    t2 = (t0 + 9704);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t12 = (t0 + 9192);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_58_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_divide(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 9768);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 9208);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_59_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_mod(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 9832);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 9224);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_61_9(char *t0)
{
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

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9240);
    *((int *)t2) = 1;
    t3 = (t0 + 7832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    t11 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_66_10(char *t0)
{
    char t13[8];
    char t27[8];
    char t42[8];
    char t58[8];
    char t66[8];
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
    unsigned int t14;
    unsigned int t15;
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
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9256);
    *((int *)t2) = 1;
    t3 = (t0 + 8080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB66;

LAB65:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB67;

LAB68:    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB11:
LAB14:    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t23 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    memset(t27, 0, 8);
    t28 = (t13 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t28) != 0)
        goto LAB21;

LAB22:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    memcpy(t66, t27, 8);

LAB25:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB37;

LAB38:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    memset(t27, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t12) != 0)
        goto LAB46;

LAB47:    t28 = (t27 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB48;

LAB49:    memcpy(t66, t27, 8);

LAB50:    t80 = (t66 + 4);
    t88 = *((unsigned int *)t80);
    t90 = (~(t88));
    t91 = *((unsigned int *)t66);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB62;

LAB63:
LAB64:
LAB39:    goto LAB13;

LAB17:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t27) = 1;
    goto LAB22;

LAB21:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB23:    t40 = (t0 + 1848U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng5)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB29;

LAB26:    if (t54 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t42) = 1;

LAB29:    memset(t58, 0, 8);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t59) != 0)
        goto LAB32;

LAB33:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t27 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB28:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t58) = 1;
    goto LAB33;

LAB32:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB33;

LAB34:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t27 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB36;

LAB37:    t100 = ((char*)((ng5)));
    t101 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 4, 0LL);
    goto LAB39;

LAB42:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t27) = 1;
    goto LAB47;

LAB46:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB47;

LAB48:    t34 = (t0 + 1848U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng7)));
    memset(t42, 0, 8);
    t40 = (t35 + 4);
    t41 = (t34 + 4);
    t33 = *((unsigned int *)t35);
    t36 = *((unsigned int *)t34);
    t37 = (t33 ^ t36);
    t38 = *((unsigned int *)t40);
    t39 = *((unsigned int *)t41);
    t45 = (t38 ^ t39);
    t46 = (t37 | t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t41);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB54;

LAB51:    if (t49 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t42) = 1;

LAB54:    memset(t58, 0, 8);
    t44 = (t42 + 4);
    t52 = *((unsigned int *)t44);
    t53 = (~(t52));
    t54 = *((unsigned int *)t42);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t44) != 0)
        goto LAB57;

LAB58:    t60 = *((unsigned int *)t27);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t66) = t62;
    t59 = (t27 + 4);
    t65 = (t58 + 4);
    t70 = (t66 + 4);
    t63 = *((unsigned int *)t59);
    t64 = *((unsigned int *)t65);
    t67 = (t63 | t64);
    *((unsigned int *)t70) = t67;
    t68 = *((unsigned int *)t70);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t43 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t58) = 1;
    goto LAB58;

LAB57:    t57 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB58;

LAB59:    t73 = *((unsigned int *)t66);
    t74 = *((unsigned int *)t70);
    *((unsigned int *)t66) = (t73 | t74);
    t71 = (t27 + 4);
    t72 = (t58 + 4);
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t27);
    t85 = (t77 & t76);
    t78 = *((unsigned int *)t72);
    t79 = (~(t78));
    t82 = *((unsigned int *)t58);
    t89 = (t82 & t79);
    t83 = (~(t85));
    t84 = (~(t89));
    t86 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t86 & t83);
    t87 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t87 & t84);
    goto LAB61;

LAB62:    t81 = ((char*)((ng8)));
    t94 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t94, t81, 0, 0, 4, 0LL);
    goto LAB64;

LAB66:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t13) = 1;
    goto LAB68;

LAB70:
LAB73:    t34 = (t0 + 3848);
    t35 = (t34 + 56U);
    t40 = *((char **)t35);
    t41 = ((char*)((ng9)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t40, 4, t41, 32);
    t43 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t43, t27, 0, 0, 4, 0LL);
    goto LAB72;

}

static void Always_90_11(char *t0)
{
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
    int t13;
    char *t14;
    char *t15;
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
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9272);
    *((int *)t2) = 1;
    t3 = (t0 + 8328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = (t0 + 1848U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB8;

LAB11:    t14 = (t0 + 2488U);
    t15 = *((char **)t14);
    t14 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 64, 0LL);
    goto LAB19;

LAB13:    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 64, 0LL);
    goto LAB19;

LAB15:
LAB20:    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t16, 0, 8);
    t5 = (t4 + 4);
    t11 = (t3 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t16) = 1;

LAB24:    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:
LAB29:    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB27:    goto LAB19;

LAB17:
LAB30:    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t16, 0, 8);
    t5 = (t4 + 4);
    t11 = (t3 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB34;

LAB31:    if (t21 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t16) = 1;

LAB34:    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB35;

LAB36:
LAB39:    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB37:    goto LAB19;

LAB23:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:
LAB28:    t29 = (t0 + 4488);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 32, 0LL);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB27;

LAB33:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB35:
LAB38:    t29 = (t0 + 4488);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 32, 0LL);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB37;

}

static void Always_123_12(char *t0)
{
    char t13[8];
    char t33[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9288);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB16:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:
LAB17:    t28 = (t0 + 3688);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);

LAB18:    t31 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 4, t31, 32);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 32);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 32);
    if (t32 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 32);
    if (t32 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:
LAB28:    t34 = (t0 + 4008);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t33, 0, 8);
    t37 = (t33 + 4);
    t38 = (t36 + 8);
    t39 = (t36 + 12);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 0);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 4294967295U);
    t46 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t46, t33, 0, 0, 32, 0LL);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 4294967295U);
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);
    goto LAB27;

LAB21:
LAB29:    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 8);
    t21 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 4294967295U);
    t22 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t22, t13, 0, 0, 32, 0LL);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 4294967295U);
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);
    goto LAB27;

LAB23:
LAB30:    t3 = (t0 + 4328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB27;

LAB25:
LAB31:    t3 = (t0 + 4328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB27;

LAB32:
LAB35:    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB36:    t4 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t32 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t32 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB37:    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB41;

LAB39:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB41;

}

static void Cont_165_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
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
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 8792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t79 = (t0 + 9896);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memcpy(t83, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t84 = (t0 + 9304);
    *((int *)t84) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 4488);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng9)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 4648);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t78 = ((char*)((ng10)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

}


extern void work_m_00000000000526991334_4111503280_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Cont_47_1,(void *)Cont_48_2,(void *)Cont_54_3,(void *)Cont_55_4,(void *)Cont_56_5,(void *)Cont_57_6,(void *)Cont_58_7,(void *)Cont_59_8,(void *)Always_61_9,(void *)Always_66_10,(void *)Always_90_11,(void *)Always_123_12,(void *)Cont_165_13};
	xsi_register_didat("work_m_00000000000526991334_4111503280", "isim/mips.exe.sim/work/m_00000000000526991334_4111503280.didat");
	xsi_register_executes(pe);
}
