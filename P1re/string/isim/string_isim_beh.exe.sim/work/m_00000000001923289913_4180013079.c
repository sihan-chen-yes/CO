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
static const char *ng0 = "C:/Users/86181/Desktop/P1re/string/string.v";
static int ng1[] = {0, 0};
static int ng2[] = {48, 0};
static int ng3[] = {57, 0};
static int ng4[] = {1, 0};
static int ng5[] = {43, 0};
static int ng6[] = {42, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t14[8];
    char t18[8];
    char t27[8];
    char t31[8];
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
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2112);
    *((int *)t2) = 1;
    t3 = (t0 + 1800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
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

LAB7:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(42, ng0);

LAB20:    xsi_set_current_line(43, ng0);
    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB22;

LAB21:    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB24;

LAB23:    *((unsigned int *)t14) = 1;

LAB24:    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t19) != 0)
        goto LAB28;

LAB29:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB30;

LAB31:    memcpy(t39, t18, 8);

LAB32:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB51;

LAB48:    if (t34 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t14) = 1;

LAB51:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t15) != 0)
        goto LAB54;

LAB55:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB56;

LAB57:    memcpy(t39, t18, 8);

LAB58:    t45 = (t39 + 4);
    t95 = *((unsigned int *)t45);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB72:
LAB47:    goto LAB19;

LAB13:    xsi_set_current_line(48, ng0);

LAB73:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 784U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB75;

LAB74:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB77;

LAB76:    *((unsigned int *)t14) = 1;

LAB77:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t16) != 0)
        goto LAB81;

LAB82:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB83;

LAB84:    memcpy(t39, t18, 8);

LAB85:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB104;

LAB101:    if (t34 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t14) = 1;

LAB104:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t15) != 0)
        goto LAB107;

LAB108:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB109;

LAB110:    memcpy(t39, t18, 8);

LAB111:    t45 = (t39 + 4);
    t95 = *((unsigned int *)t45);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB125:
LAB100:    goto LAB19;

LAB15:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB19;

LAB17:    xsi_set_current_line(56, ng0);

LAB126:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 784U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB128;

LAB127:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB128;

LAB131:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB130;

LAB129:    *((unsigned int *)t14) = 1;

LAB130:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t16) != 0)
        goto LAB134;

LAB135:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB136;

LAB137:    memcpy(t39, t18, 8);

LAB138:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB151;

LAB152:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB157;

LAB154:    if (t34 != 0)
        goto LAB156;

LAB155:    *((unsigned int *)t14) = 1;

LAB157:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t15) != 0)
        goto LAB160;

LAB161:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB162;

LAB163:    memcpy(t39, t18, 8);

LAB164:    t45 = (t39 + 4);
    t95 = *((unsigned int *)t45);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB176;

LAB177:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB178:
LAB153:    goto LAB19;

LAB22:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB24;

LAB26:    *((unsigned int *)t18) = 1;
    goto LAB29;

LAB28:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB30:    t25 = (t0 + 784U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB34;

LAB33:    t29 = (t25 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB36;

LAB35:    *((unsigned int *)t27) = 1;

LAB36:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t32) != 0)
        goto LAB40;

LAB41:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB32;

LAB34:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB36;

LAB38:    *((unsigned int *)t31) = 1;
    goto LAB41;

LAB40:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB41;

LAB42:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t18 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB44;

LAB45:    xsi_set_current_line(43, ng0);
    t77 = ((char*)((ng4)));
    t78 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 2, 0LL);
    goto LAB47;

LAB50:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t18) = 1;
    goto LAB55;

LAB54:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB55;

LAB56:    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng6)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB62;

LAB59:    if (t62 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t27) = 1;

LAB62:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t28) != 0)
        goto LAB65;

LAB66:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t79 = *((unsigned int *)t32);
    t80 = (t76 | t79);
    *((unsigned int *)t38) = t80;
    t81 = *((unsigned int *)t38);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t31) = 1;
    goto LAB66;

LAB65:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB66;

LAB67:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t83 | t84);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t85 = *((unsigned int *)t43);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t13 = (t87 & t86);
    t88 = *((unsigned int *)t44);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t63 = (t90 & t89);
    t91 = (~(t13));
    t92 = (~(t63));
    t93 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t93 & t91);
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    goto LAB69;

LAB70:    xsi_set_current_line(44, ng0);
    t53 = ((char*)((ng7)));
    t54 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    goto LAB72;

LAB75:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB77;

LAB79:    *((unsigned int *)t18) = 1;
    goto LAB82;

LAB81:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB82;

LAB83:    t20 = (t0 + 784U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB87;

LAB86:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB87;

LAB90:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB89;

LAB88:    *((unsigned int *)t27) = 1;

LAB89:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t29) != 0)
        goto LAB93;

LAB94:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB85;

LAB87:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB89;

LAB91:    *((unsigned int *)t31) = 1;
    goto LAB94;

LAB93:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB94;

LAB95:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB97;

LAB98:    xsi_set_current_line(49, ng0);
    t54 = ((char*)((ng7)));
    t71 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    goto LAB100;

LAB103:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB104;

LAB105:    *((unsigned int *)t18) = 1;
    goto LAB108;

LAB107:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB108;

LAB109:    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng6)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB115;

LAB112:    if (t62 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t27) = 1;

LAB115:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t28) != 0)
        goto LAB118;

LAB119:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t79 = *((unsigned int *)t32);
    t80 = (t76 | t79);
    *((unsigned int *)t38) = t80;
    t81 = *((unsigned int *)t38);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB120;

LAB121:
LAB122:    goto LAB111;

LAB114:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t31) = 1;
    goto LAB119;

LAB118:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB119;

LAB120:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t83 | t84);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t85 = *((unsigned int *)t43);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t13 = (t87 & t86);
    t88 = *((unsigned int *)t44);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t63 = (t90 & t89);
    t91 = (~(t13));
    t92 = (~(t63));
    t93 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t93 & t91);
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    goto LAB122;

LAB123:    xsi_set_current_line(50, ng0);
    t53 = ((char*)((ng8)));
    t54 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    goto LAB125;

LAB128:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB130;

LAB132:    *((unsigned int *)t18) = 1;
    goto LAB135;

LAB134:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB135;

LAB136:    t20 = (t0 + 784U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB140;

LAB139:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB140;

LAB143:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB142;

LAB141:    *((unsigned int *)t27) = 1;

LAB142:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t29) != 0)
        goto LAB146;

LAB147:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB138;

LAB140:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB142;

LAB144:    *((unsigned int *)t31) = 1;
    goto LAB147;

LAB146:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB147;

LAB148:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB150;

LAB151:    xsi_set_current_line(57, ng0);
    t54 = ((char*)((ng4)));
    t71 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    goto LAB153;

LAB156:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB157;

LAB158:    *((unsigned int *)t18) = 1;
    goto LAB161;

LAB160:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB161;

LAB162:    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng6)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB168;

LAB165:    if (t62 != 0)
        goto LAB167;

LAB166:    *((unsigned int *)t27) = 1;

LAB168:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t28) != 0)
        goto LAB171;

LAB172:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t79 = *((unsigned int *)t32);
    t80 = (t76 | t79);
    *((unsigned int *)t38) = t80;
    t81 = *((unsigned int *)t38);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB164;

LAB167:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB168;

LAB169:    *((unsigned int *)t31) = 1;
    goto LAB172;

LAB171:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB172;

LAB173:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t83 | t84);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t85 = *((unsigned int *)t43);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t13 = (t87 & t86);
    t88 = *((unsigned int *)t44);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t63 = (t90 & t89);
    t91 = (~(t13));
    t92 = (~(t63));
    t93 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t93 & t91);
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    goto LAB175;

LAB176:    xsi_set_current_line(58, ng0);
    t53 = ((char*)((ng7)));
    t54 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    goto LAB178;

}

static void Cont_67_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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

LAB7:    t22 = (t0 + 2164);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 2120);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}


extern void work_m_00000000001923289913_4180013079_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_37_1,(void *)Cont_67_2};
	xsi_register_didat("work_m_00000000001923289913_4180013079", "isim/string_isim_beh.exe.sim/work/m_00000000001923289913_4180013079.didat");
	xsi_register_executes(pe);
}
