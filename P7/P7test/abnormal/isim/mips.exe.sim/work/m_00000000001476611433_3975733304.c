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
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1717986918U, 0U};
static int ng4[] = {12, 0};
static int ng5[] = {13, 0};
static int ng6[] = {14, 0};
static int ng7[] = {15, 0};



static void Cont_53_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 6368U);
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
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

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

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 8088);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t52 = (t0 + 7928);
    *((int *)t52) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

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

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng0)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_55_1(char *t0)
{
    char t3[8];
    char t8[8];
    char t49[8];
    char t81[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;

LAB0:    t1 = (t0 + 6616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t6 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t39 = (t8 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t44 = (t43 & 63U);
    if (t44 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t39) != 0)
        goto LAB9;

LAB10:    t46 = (t0 + 4008);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t50 = *((unsigned int *)t3);
    t51 = *((unsigned int *)t48);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t53 = (t3 + 4);
    t54 = (t48 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB11;

LAB12:
LAB13:    t82 = (t0 + 3848);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t81, 0, 8);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t85) == 0)
        goto LAB14;

LAB16:    t91 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t91) = 1;

LAB17:    t92 = (t81 + 4);
    t93 = (t84 + 4);
    t94 = *((unsigned int *)t84);
    t95 = (~(t94));
    *((unsigned int *)t81) = t95;
    *((unsigned int *)t92) = 0;
    if (*((unsigned int *)t93) != 0)
        goto LAB19;

LAB18:    t100 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t100 & 1U);
    t101 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t101 & 1U);
    t103 = *((unsigned int *)t49);
    t104 = *((unsigned int *)t81);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t49 + 4);
    t107 = (t81 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB20;

LAB21:
LAB22:    t134 = (t0 + 8152);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    memset(t138, 0, 8);
    t139 = 1U;
    t140 = t139;
    t141 = (t102 + 4);
    t142 = *((unsigned int *)t102);
    t139 = (t139 & t142);
    t143 = *((unsigned int *)t141);
    t140 = (t140 & t143);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t145 | t139);
    t146 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t146 | t140);
    xsi_driver_vfirst_trans(t134, 0, 0);
    t147 = (t0 + 7944);
    *((int *)t147) = 1;

LAB1:    return;
LAB4:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t45 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB10;

LAB11:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t3 + 4);
    t64 = (t48 + 4);
    t65 = *((unsigned int *)t3);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t48);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (~(t71));
    t73 = (t66 & t68);
    t74 = (t70 & t72);
    t75 = (~(t73));
    t76 = (~(t74));
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & t75);
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & t76);
    t79 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t79 & t75);
    t80 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t80 & t76);
    goto LAB13;

LAB14:    *((unsigned int *)t81) = 1;
    goto LAB17;

LAB19:    t96 = *((unsigned int *)t81);
    t97 = *((unsigned int *)t93);
    *((unsigned int *)t81) = (t96 | t97);
    t98 = *((unsigned int *)t92);
    t99 = *((unsigned int *)t93);
    *((unsigned int *)t92) = (t98 | t99);
    goto LAB18;

LAB20:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t49 + 4);
    t117 = (t81 + 4);
    t118 = *((unsigned int *)t49);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t81);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB22;

}

static void Cont_57_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 6864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 8216);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 7960);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Always_59_3(char *t0)
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

LAB0:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7976);
    *((int *)t2) = 1;
    t3 = (t0 + 7144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2328U);
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
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_69_4(char *t0)
{
    char t13[16];
    char t14[8];
    char t23[16];
    char t27[8];
    char t32[16];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;

LAB0:    t1 = (t0 + 7360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7992);
    *((int *)t2) = 1;
    t3 = (t0 + 7392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
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
LAB10:    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB13:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:
LAB14:    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t5 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB18:    t12 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB19;

LAB20:    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t12) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t14) > 0)
        goto LAB25;

LAB26:    memcpy(t13, t32, 16);

LAB27:    t34 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t34, t13, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t27, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t2) != 0)
        goto LAB30;

LAB31:    t5 = (t27 + 4);
    t15 = *((unsigned int *)t27);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB32;

LAB33:    t18 = *((unsigned int *)t27);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t5) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t27) > 0)
        goto LAB38;

LAB39:    memcpy(t14, t24, 8);

LAB40:    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 5, 0LL);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t24 = ((char*)((ng2)));
    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng1)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t26, 30, t25, 32);
    xsi_vlogtype_concat(t23, 34, 34, 2U, t27, 32, t24, 2);
    goto LAB20;

LAB21:    t33 = ((char*)((ng2)));
    t34 = (t0 + 1688U);
    t35 = *((char **)t34);
    xsi_vlogtype_concat(t32, 34, 32, 2U, t35, 30, t33, 2);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t13, 34, t23, 34, t32, 34);
    goto LAB27;

LAB25:    memcpy(t13, t23, 16);
    goto LAB27;

LAB28:    *((unsigned int *)t27) = 1;
    goto LAB31;

LAB30:    t4 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t11 = ((char*)((ng2)));
    goto LAB33;

LAB34:    t12 = (t0 + 1848U);
    t24 = *((char **)t12);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t14, 5, t11, 5, t24, 5);
    goto LAB40;

LAB38:    memcpy(t14, t11, 8);
    goto LAB40;

LAB41:
LAB44:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB45:    t4 = ((char*)((ng4)));
    t36 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 32);
    if (t36 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng5)));
    t36 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t36 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng6)));
    t36 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t36 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng7)));
    t36 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t36 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:
LAB55:    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t24 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 16);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t24);
    t18 = (t17 >> 16);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 65535U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 65535U);
    t25 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t25, t14, 0, 0, 16, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 10);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t11 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 6, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 8, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    goto LAB54;

LAB48:
LAB56:    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 31);
    t15 = (t10 & 1);
    *((unsigned int *)t3) = t15;
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 32767U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 32767U);
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 15, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 10);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t11 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 6, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 3, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t11 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 5, 0LL);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 2, 0LL);
    goto LAB54;

LAB50:    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB54;

LAB52:    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB54;

}

static void Cont_126_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t53[8];
    char t54[8];
    char t57[8];
    char t84[8];
    char t107[8];
    char t108[8];
    char t111[8];
    char t145[8];
    char t146[8];
    char t149[8];
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;
    char *t189;

LAB0:    t1 = (t0 + 7608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB13:    t49 = *((unsigned int *)t4);
    t50 = (~(t49));
    t51 = *((unsigned int *)t29);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t53, 8);

LAB20:    t184 = (t0 + 8280);
    t185 = (t184 + 56U);
    t186 = *((char **)t185);
    t187 = (t186 + 56U);
    t188 = *((char **)t187);
    memcpy(t188, t3, 8);
    xsi_driver_vfirst_trans(t184, 0, 31);
    t189 = (t0 + 8008);
    *((int *)t189) = 1;

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

LAB12:    t34 = (t0 + 4008);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 3848);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 5128);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t0 + 3688);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t0 + 4808);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlogtype_concat(t33, 32, 32, 5U, t48, 16, t45, 6, t42, 8, t39, 1, t36, 1);
    goto LAB13;

LAB14:    t55 = (t0 + 1368U);
    t56 = *((char **)t55);
    t55 = ((char*)((ng5)));
    memset(t57, 0, 8);
    t58 = (t56 + 4);
    t59 = (t55 + 4);
    t60 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t55);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB24;

LAB21:    if (t69 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t57) = 1;

LAB24:    memset(t54, 0, 8);
    t73 = (t57 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t57);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t73) != 0)
        goto LAB27;

LAB28:    t80 = (t54 + 4);
    t81 = *((unsigned int *)t54);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB29;

LAB30:    t103 = *((unsigned int *)t54);
    t104 = (~(t103));
    t105 = *((unsigned int *)t80);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t80) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t54) > 0)
        goto LAB35;

LAB36:    memcpy(t53, t107, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t53, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t54) = 1;
    goto LAB28;

LAB27:    t79 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB28;

LAB29:    t85 = (t0 + 5448);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t0 + 4488);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = (t0 + 5288);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t0 + 4328);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t0 + 4968);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t0 + 4168);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    xsi_vlogtype_concat(t84, 32, 32, 6U, t102, 1, t99, 15, t96, 6, t93, 3, t90, 5, t87, 2);
    goto LAB30;

LAB31:    t109 = (t0 + 1368U);
    t110 = *((char **)t109);
    t109 = ((char*)((ng6)));
    memset(t111, 0, 8);
    t112 = (t110 + 4);
    t113 = (t109 + 4);
    t114 = *((unsigned int *)t110);
    t115 = *((unsigned int *)t109);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t112);
    t118 = *((unsigned int *)t113);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t113);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB41;

LAB38:    if (t123 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t111) = 1;

LAB41:    memset(t108, 0, 8);
    t127 = (t111 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t111);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t127) != 0)
        goto LAB44;

LAB45:    t134 = (t108 + 4);
    t135 = *((unsigned int *)t108);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB46;

LAB47:    t141 = *((unsigned int *)t108);
    t142 = (~(t141));
    t143 = *((unsigned int *)t134);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t134) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t108) > 0)
        goto LAB52;

LAB53:    memcpy(t107, t145, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t53, 32, t84, 32, t107, 32);
    goto LAB37;

LAB35:    memcpy(t53, t84, 8);
    goto LAB37;

LAB40:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t108) = 1;
    goto LAB45;

LAB44:    t133 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB45;

LAB46:    t138 = (t0 + 3528);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    goto LAB47;

LAB48:    t147 = (t0 + 1368U);
    t148 = *((char **)t147);
    t147 = ((char*)((ng7)));
    memset(t149, 0, 8);
    t150 = (t148 + 4);
    t151 = (t147 + 4);
    t152 = *((unsigned int *)t148);
    t153 = *((unsigned int *)t147);
    t154 = (t152 ^ t153);
    t155 = *((unsigned int *)t150);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = (t154 | t157);
    t159 = *((unsigned int *)t150);
    t160 = *((unsigned int *)t151);
    t161 = (t159 | t160);
    t162 = (~(t161));
    t163 = (t158 & t162);
    if (t163 != 0)
        goto LAB58;

LAB55:    if (t161 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t149) = 1;

LAB58:    memset(t146, 0, 8);
    t165 = (t149 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t149);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t165) != 0)
        goto LAB61;

LAB62:    t172 = (t146 + 4);
    t173 = *((unsigned int *)t146);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB63;

LAB64:    t179 = *((unsigned int *)t146);
    t180 = (~(t179));
    t181 = *((unsigned int *)t172);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t172) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t146) > 0)
        goto LAB69;

LAB70:    memcpy(t145, t183, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t107, 32, t140, 32, t145, 32);
    goto LAB54;

LAB52:    memcpy(t107, t140, 8);
    goto LAB54;

LAB57:    t164 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t146) = 1;
    goto LAB62;

LAB61:    t171 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB62;

LAB63:    t176 = (t0 + 4648);
    t177 = (t176 + 56U);
    t178 = *((char **)t177);
    goto LAB64;

LAB65:    t183 = ((char*)((ng2)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t145, 32, t178, 32, t183, 32);
    goto LAB71;

LAB69:    memcpy(t145, t178, 8);
    goto LAB71;

}


extern void work_m_00000000001476611433_3975733304_init()
{
	static char *pe[] = {(void *)Cont_53_0,(void *)Cont_55_1,(void *)Cont_57_2,(void *)Always_59_3,(void *)Always_69_4,(void *)Cont_126_5};
	xsi_register_didat("work_m_00000000001476611433_3975733304", "isim/mips.exe.sim/work/m_00000000001476611433_3975733304.didat");
	xsi_register_executes(pe);
}
