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
static const char *ng0 = "D:/Dropbox/CZ3001 Project/Latest/CZ3001/data_memory.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static const char *ng3 = "dmem_test0.txt";
static const char *ng4 = "r";
static int ng5[] = {1, 0};
static const char *ng6 = "dmem_test1.txt";
static int ng7[] = {2, 0};
static const char *ng8 = "dmem_test2.txt";
static int ng9[] = {3, 0};
static const char *ng10 = "dmem_test3.txt";
static int ng11[] = {4, 0};
static const char *ng12 = "dmem_test4.txt";
static int ng13[] = {5, 0};
static const char *ng14 = "dmem_test5.txt";
static int ng15[] = {6, 0};
static const char *ng16 = "dmem_test6.txt";
static int ng17[] = {7, 0};
static const char *ng18 = "dmem_test7.txt";
static const char *ng19 = "Opening Fileid %d\n";
static int ng20[] = {47, 0};
static int ng21[] = {35, 0};
static int ng22[] = {37, 0};
static const char *ng23 = "%h %h";



static void Cont_43_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
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

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1528U);
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

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t32 = (t0 + 5272);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 65535U;
    t38 = t37;
    t39 = (t3 + 4);
    t40 = *((unsigned int *)t3);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 15);
    t45 = (t0 + 5176);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t19, 16, t18, t22, t25, 2, 1, t27, 16, 2);
    goto LAB9;

LAB10:    t26 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t19, 16, t26, 16);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Always_44_1(char *t0)
{
    char t14[8];
    char t17[8];
    char t26[8];
    char t75[8];
    char t91[8];
    char t131[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    unsigned int t78;
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
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    int t134;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(78, ng0);

LAB60:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t11, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(0, 0, 1, ng19, 2, t0, (char)118, t3, 3);
    xsi_set_current_line(61, ng0);

LAB28:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t17) = xsi_vlogfile_feof(*((unsigned int *)t4));
    t5 = (t17 + 4);
    *((int *)t5) = 0;
    memset(t14, 0, 8);
    t11 = (t17 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t17);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t11) == 0)
        goto LAB29;

LAB31:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;

LAB32:    t16 = (t14 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB8;

LAB11:    xsi_set_current_line(50, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t15 = (t14 + 4);
    *((int *)t15) = 0;
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    goto LAB27;

LAB13:    xsi_set_current_line(51, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng6, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(52, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng8, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(53, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng10, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(54, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng12, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(55, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng14, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(56, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng16, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB25:    xsi_set_current_line(57, ng0);
    *((int *)t14) = xsi_vlogfile_file_open_of_cname_ctype(ng18, ng4);
    t3 = (t14 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB27;

LAB29:    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(62, ng0);

LAB35:    xsi_set_current_line(63, ng0);
    t23 = (t0 + 2888);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((int *)t26) = xsi_vlogfile_fgetc(*((unsigned int *)t25));
    t27 = (t26 + 4);
    *((int *)t27) = 0;
    t28 = (t0 + 3208);
    xsi_vlogvar_assign_value(t28, t26, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t15 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t29 = (~(t22));
    t30 = (t19 & t29);
    if (t30 != 0)
        goto LAB39;

LAB36:    if (t22 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t14) = 1;

LAB39:    t23 = (t0 + 3208);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = ((char*)((ng21)));
    memset(t17, 0, 8);
    t28 = (t25 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t25);
    t33 = *((unsigned int *)t27);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB43;

LAB40:    if (t41 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t17) = 1;

LAB43:    t45 = *((unsigned int *)t14);
    t46 = *((unsigned int *)t17);
    t47 = (t45 | t46);
    *((unsigned int *)t26) = t47;
    t48 = (t14 + 4);
    t49 = (t17 + 4);
    t50 = (t26 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB44;

LAB45:
LAB46:    t71 = (t0 + 3208);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = ((char*)((ng22)));
    memset(t75, 0, 8);
    t76 = (t73 + 4);
    t77 = (t74 + 4);
    t78 = *((unsigned int *)t73);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB50;

LAB47:    if (t87 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t75) = 1;

LAB50:    t92 = *((unsigned int *)t26);
    t93 = *((unsigned int *)t75);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = (t26 + 4);
    t96 = (t75 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB51;

LAB52:
LAB53:    t119 = (t91 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t91);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(68, ng0);

LAB57:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t11 = (t5 + 56U);
    t15 = *((char **)t11);
    *((int *)t14) = xsi_vlogfile_ungetc(*((unsigned int *)t4), *((unsigned int *)t15));
    t16 = (t14 + 4);
    *((int *)t16) = 0;
    t23 = (t0 + 3368);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t11 = (t5 + 56U);
    t15 = *((char **)t11);
    xsi_vlog_bit_copy(t14, 0, t15, 0, 16);
    t16 = (t0 + 3688);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_bit_copy(t17, 0, t24, 0, 16);
    *((int *)t26) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng23, 3, t0, (char)118, t14, 16, (char)118, t17, 16);
    t25 = (t26 + 4);
    *((int *)t25) = 0;
    t27 = (t0 + 3528);
    xsi_vlogvar_assign_value(t27, t14, 0, 0, 16);
    t28 = (t0 + 3688);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 16);
    t31 = (t0 + 3368);
    xsi_vlogvar_assign_value(t31, t26, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t15 = (t11 + 72U);
    t16 = *((char **)t15);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t27 = (t0 + 3528);
    t28 = (t27 + 56U);
    t31 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t14, t17, t16, t25, 2, 1, t31, 16, 2);
    t44 = (t14 + 4);
    t6 = *((unsigned int *)t44);
    t13 = (!(t6));
    t48 = (t17 + 4);
    t7 = *((unsigned int *)t48);
    t66 = (!(t7));
    t110 = (t13 && t66);
    if (t110 == 1)
        goto LAB58;

LAB59:
LAB56:    goto LAB28;

LAB38:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB39;

LAB42:    t44 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB43;

LAB44:    t56 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t26) = (t56 | t57);
    t58 = (t14 + 4);
    t59 = (t17 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t14);
    t13 = (t62 & t61);
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t17);
    t66 = (t65 & t64);
    t67 = (~(t13));
    t68 = (~(t66));
    t69 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t69 & t67);
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    goto LAB46;

LAB49:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB50;

LAB51:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t26 + 4);
    t106 = (t75 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (~(t107));
    t109 = *((unsigned int *)t26);
    t110 = (t109 & t108);
    t111 = *((unsigned int *)t106);
    t112 = (~(t111));
    t113 = *((unsigned int *)t75);
    t114 = (t113 & t112);
    t115 = (~(t110));
    t116 = (~(t114));
    t117 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t117 & t115);
    t118 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t118 & t116);
    goto LAB53;

LAB54:    xsi_set_current_line(66, ng0);
    t125 = (t0 + 2728);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t0 + 2888);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    *((int *)t131) = xsi_vlogfile_fgets(t127, 8001, *((unsigned int *)t130));
    t132 = (t131 + 4);
    *((int *)t132) = 0;
    t133 = (t0 + 3368);
    xsi_vlogvar_assign_value(t133, t131, 0, 0, 32);
    goto LAB56;

LAB58:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t17);
    t114 = (t8 - t9);
    t134 = (t114 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t17), t134);
    goto LAB59;

LAB61:    xsi_set_current_line(81, ng0);

LAB64:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    t11 = (t0 + 2568);
    t15 = (t11 + 72U);
    t16 = *((char **)t15);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t27 = (t0 + 1688U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t14, t17, t16, t25, 2, 1, t28, 16, 2);
    t27 = (t14 + 4);
    t18 = *((unsigned int *)t27);
    t13 = (!(t18));
    t31 = (t17 + 4);
    t19 = *((unsigned int *)t31);
    t66 = (!(t19));
    t110 = (t13 && t66);
    if (t110 == 1)
        goto LAB65;

LAB66:    goto LAB63;

LAB65:    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t17);
    t114 = (t20 - t21);
    t134 = (t114 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t17), t134, 0LL);
    goto LAB66;

}


extern void work_m_00000000003061413410_1589731567_init()
{
	static char *pe[] = {(void *)Cont_43_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000003061413410_1589731567", "isim/pipelined_regfile_5stage_isim_beh.exe.sim/work/m_00000000003061413410_1589731567.didat");
	xsi_register_executes(pe);
}
