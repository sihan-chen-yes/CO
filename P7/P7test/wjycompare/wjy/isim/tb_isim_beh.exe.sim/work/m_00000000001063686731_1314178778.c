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
static const char *ng0 = "C:/Users/roife/Documents/ISE/p7/F_IFU.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {12288U, 0U};
static const char *ng5 = "code.txt";
static const char *ng6 = "code_handler.txt";
static int ng7[] = {1120, 0};
static int ng8[] = {2047, 0};
static unsigned int ng9[] = {20479U, 0U};
static unsigned int ng10[] = {3072U, 0U};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {0U, 0U};



static void Initial_24_0(char *t0)
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

LAB0:    xsi_set_current_line(24, ng0);

LAB2:    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
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

LAB5:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 3208);
    xsi_vlogfile_readmemh(ng5, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3208);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    xsi_vlogfile_readmemh(ng6, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3208);
    t16 = (t0 + 3208);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3208);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3368);
    t23 = (t22 + 56U);
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
        goto LAB6;

LAB7:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t26[8];
    char t30[8];
    char t62[8];
    char t66[8];
    char t94[8];
    char t106[8];
    char t115[8];
    char t123[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
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
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    int t147;
    int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 3U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 3U);
    memset(t3, 0, 8);
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 & 3U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 3048);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng4)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB9;

LAB8:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t24) < *((unsigned int *)t25))
        goto LAB10;

LAB11:    t31 = *((unsigned int *)t3);
    t32 = *((unsigned int *)t26);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = (t3 + 4);
    t35 = (t26 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB13;

LAB14:
LAB15:    t58 = (t0 + 3048);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = ((char*)((ng9)));
    memset(t62, 0, 8);
    t63 = (t60 + 4);
    if (*((unsigned int *)t63) != 0)
        goto LAB17;

LAB16:    t64 = (t61 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t60) > *((unsigned int *)t61))
        goto LAB18;

LAB19:    t67 = *((unsigned int *)t30);
    t68 = *((unsigned int *)t62);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t30 + 4);
    t71 = (t62 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB21;

LAB22:
LAB23:    memset(t94, 0, 8);
    t95 = (t66 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t66);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t95) != 0)
        goto LAB26;

LAB27:    t102 = (t94 + 4);
    t103 = *((unsigned int *)t94);
    t104 = *((unsigned int *)t102);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB28;

LAB29:    memcpy(t123, t94, 8);

LAB30:    t155 = (t0 + 5960);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memset(t159, 0, 8);
    t160 = 1U;
    t161 = t160;
    t162 = (t123 + 4);
    t163 = *((unsigned int *)t123);
    t160 = (t160 & t163);
    t164 = *((unsigned int *)t162);
    t161 = (t161 & t164);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t166 | t160);
    t167 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t167 | t161);
    xsi_driver_vfirst_trans(t155, 0, 0);
    t168 = (t0 + 5848);
    *((int *)t168) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB9:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t26) = 1;
    goto LAB11;

LAB13:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t3 + 4);
    t45 = (t26 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t3);
    t49 = (t48 & t47);
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t52 = *((unsigned int *)t26);
    t53 = (t52 & t51);
    t54 = (~(t49));
    t55 = (~(t53));
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & t54);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t55);
    goto LAB15;

LAB17:    t65 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t62) = 1;
    goto LAB19;

LAB21:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t30 + 4);
    t81 = (t62 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t30);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t62);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB23;

LAB24:    *((unsigned int *)t94) = 1;
    goto LAB27;

LAB26:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB27;

LAB28:    t107 = (t0 + 1208U);
    t108 = *((char **)t107);
    memset(t106, 0, 8);
    t107 = (t108 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t108);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t107) == 0)
        goto LAB31;

LAB33:    t114 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t114) = 1;

LAB34:    memset(t115, 0, 8);
    t116 = (t106 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t106);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t116) != 0)
        goto LAB37;

LAB38:    t124 = *((unsigned int *)t94);
    t125 = *((unsigned int *)t115);
    t126 = (t124 & t125);
    *((unsigned int *)t123) = t126;
    t127 = (t94 + 4);
    t128 = (t115 + 4);
    t129 = (t123 + 4);
    t130 = *((unsigned int *)t127);
    t131 = *((unsigned int *)t128);
    t132 = (t130 | t131);
    *((unsigned int *)t129) = t132;
    t133 = *((unsigned int *)t129);
    t134 = (t133 != 0);
    if (t134 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB31:    *((unsigned int *)t106) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t115) = 1;
    goto LAB38;

LAB37:    t122 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB38;

LAB39:    t135 = *((unsigned int *)t123);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t123) = (t135 | t136);
    t137 = (t94 + 4);
    t138 = (t115 + 4);
    t139 = *((unsigned int *)t94);
    t140 = (~(t139));
    t141 = *((unsigned int *)t137);
    t142 = (~(t141));
    t143 = *((unsigned int *)t115);
    t144 = (~(t143));
    t145 = *((unsigned int *)t138);
    t146 = (~(t145));
    t147 = (t140 & t142);
    t148 = (t144 & t146);
    t149 = (~(t147));
    t150 = (~(t148));
    t151 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t151 & t149);
    t152 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t152 & t150);
    t153 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t153 & t149);
    t154 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t154 & t150);
    goto LAB41;

}

static void Cont_33_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t53[8];
    char t60[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t34) != 0)
        goto LAB9;

LAB10:    t41 = (t4 + 4);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB11;

LAB12:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t41) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t53, 8);

LAB19:    t74 = (t0 + 6024);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memcpy(t78, t3, 8);
    xsi_driver_vfirst_trans(t74, 0, 31);
    t79 = (t0 + 5864);
    *((int *)t79) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t40 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB10;

LAB11:    t45 = ((char*)((ng1)));
    goto LAB12;

LAB13:    t50 = (t0 + 3208);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = (t0 + 3208);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 3208);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t61 = (t0 + 3048);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t60, 0, 8);
    t64 = (t60 + 4);
    t65 = (t63 + 4);
    t66 = *((unsigned int *)t63);
    t67 = (t66 >> 2);
    *((unsigned int *)t60) = t67;
    t68 = *((unsigned int *)t65);
    t69 = (t68 >> 2);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t70 & 8191U);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t71 & 8191U);
    t72 = ((char*)((ng10)));
    memset(t73, 0, 8);
    xsi_vlog_unsigned_minus(t73, 13, t60, 13, t72, 13);
    xsi_vlog_generic_get_array_select_value(t53, 32, t52, t56, t59, 2, 1, t73, 13, 2);
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t45, 32, t53, 32);
    goto LAB19;

LAB17:    memcpy(t3, t45, 8);
    goto LAB19;

}

static void Always_35_3(char *t0)
{
    char t13[8];
    char t38[8];
    char t39[8];
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5880);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB9;

LAB10:
LAB11:    t32 = (t13 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & t28);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    goto LAB11;

LAB12:    xsi_set_current_line(37, ng0);
    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t41 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t40) != 0)
        goto LAB17;

LAB18:    t48 = (t39 + 4);
    t49 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB19;

LAB20:    t54 = *((unsigned int *)t39);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t48) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t39) > 0)
        goto LAB25;

LAB26:    memcpy(t38, t58, 8);

LAB27:    t52 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t52, t38, 0, 0, 32, 0LL);
    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t47 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB18;

LAB19:    t52 = (t0 + 1368U);
    t53 = *((char **)t52);
    goto LAB20;

LAB21:    t52 = (t0 + 2168U);
    t58 = *((char **)t52);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t38, 32, t53, 32, t58, 32);
    goto LAB27;

LAB25:    memcpy(t38, t53, 8);
    goto LAB27;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng11)));
    t3 = (t0 + 6088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng12)));
    t3 = (t0 + 6152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000001063686731_1314178778_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Cont_32_1,(void *)Cont_33_2,(void *)Always_35_3,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000001063686731_1314178778", "isim/tb_isim_beh.exe.sim/work/m_00000000001063686731_1314178778.didat");
	xsi_register_executes(pe);
}
