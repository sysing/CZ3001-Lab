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
static const char *ng0 = "D:/Dropbox/CZ3001 Project/Latest/CZ3001/control.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};



static void Always_15_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB40:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 3);
    goto LAB39;

LAB9:    xsi_set_current_line(36, ng0);

LAB41:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 3);
    goto LAB39;

LAB11:    xsi_set_current_line(40, ng0);

LAB42:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 3);
    goto LAB39;

LAB13:    xsi_set_current_line(44, ng0);

LAB43:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 3);
    goto LAB39;

LAB15:    xsi_set_current_line(48, ng0);

LAB44:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB39;

LAB17:    xsi_set_current_line(53, ng0);

LAB45:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB39;

LAB19:    xsi_set_current_line(58, ng0);

LAB46:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 3);
    goto LAB39;

LAB21:    xsi_set_current_line(62, ng0);

LAB47:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 7U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 3);
    goto LAB39;

LAB23:    xsi_set_current_line(66, ng0);

LAB48:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

LAB25:    xsi_set_current_line(73, ng0);

LAB49:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

LAB27:    xsi_set_current_line(81, ng0);

LAB50:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

LAB29:    xsi_set_current_line(89, ng0);

LAB51:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

LAB31:    xsi_set_current_line(96, ng0);

LAB52:    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

LAB33:    xsi_set_current_line(103, ng0);

LAB53:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

LAB35:    xsi_set_current_line(109, ng0);

LAB54:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB39;

}


extern void work_m_00000000003067112934_3037777339_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_00000000003067112934_3037777339", "isim/pipelined_regfile_5stage_isim_beh.exe.sim/work/m_00000000003067112934_3037777339.didat");
	xsi_register_executes(pe);
}
