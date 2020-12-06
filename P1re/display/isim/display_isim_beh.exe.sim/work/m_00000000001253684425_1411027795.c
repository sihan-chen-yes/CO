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
static const char *ng0 = "C:/Users/86181/Desktop/P1re/display/display.v";
static unsigned int ng1[] = {0U, 1U};
static const char *ng2 = "floating";
static unsigned int ng3[] = {1U, 1U};
static const char *ng4 = "unknown";
static const char *ng5 = "sig";



static void Always_23_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;

LAB0:    t1 = (t0 + 1260U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1456);
    *((int *)t2) = 1;
    t3 = (t0 + 1288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(27, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(25, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    goto LAB13;

LAB9:    xsi_set_current_line(26, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB13;

}


extern void work_m_00000000001253684425_1411027795_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_00000000001253684425_1411027795", "isim/display_isim_beh.exe.sim/work/m_00000000001253684425_1411027795.didat");
	xsi_register_executes(pe);
}
