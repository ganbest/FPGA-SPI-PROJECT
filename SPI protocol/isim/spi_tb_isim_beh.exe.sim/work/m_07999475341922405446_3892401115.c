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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/nguyenquan/Desktop/SPI/SPI_master/spi_slave.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 1U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {1U, 0U};



static void Always_41_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t38[8];
    char t52[8];
    char t59[8];
    char t97[8];
    char t100[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);

LAB14:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(85, ng0);

LAB105:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);

LAB22:    xsi_set_current_line(57, ng0);
    t12 = (t0 + 3208);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t19 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t20) == 0)
        goto LAB23;

LAB25:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;

LAB26:    t28 = (t21 + 4);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    *((unsigned int *)t21) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB28;

LAB27:    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    memset(t38, 0, 8);
    t39 = (t21 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t21);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t39) != 0)
        goto LAB31;

LAB32:    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB33;

LAB34:    memcpy(t59, t38, 8);

LAB35:    t91 = (t59 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t59);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t6) != 0)
        goto LAB49;

LAB50:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB51;

LAB52:    memcpy(t52, t4, 8);

LAB53:    t64 = (t52 + 4);
    t79 = *((unsigned int *)t64);
    t80 = (~(t79));
    t81 = *((unsigned int *)t52);
    t82 = (t81 & t80);
    t85 = (t82 != 0);
    if (t85 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t4) = 1;

LAB74:    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t30 = (t26 & t25);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB82;

LAB79:    if (t18 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t4) = 1;

LAB82:    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t30 = (t26 & t25);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t13) != 0)
        goto LAB85;

LAB86:    t20 = (t21 + 4);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t20);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB87;

LAB88:    memcpy(t59, t21, 8);

LAB89:    t64 = (t59 + 4);
    t85 = *((unsigned int *)t64);
    t86 = (~(t85));
    t87 = *((unsigned int *)t59);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB101;

LAB102:
LAB103:    goto LAB21;

LAB23:    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB28:    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB27;

LAB29:    *((unsigned int *)t38) = 1;
    goto LAB32;

LAB31:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB32;

LAB33:    t50 = (t0 + 1368U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t50 = (t51 + 4);
    t53 = *((unsigned int *)t50);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t50) != 0)
        goto LAB38;

LAB39:    t60 = *((unsigned int *)t38);
    t61 = *((unsigned int *)t52);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t38 + 4);
    t64 = (t52 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t52) = 1;
    goto LAB39;

LAB38:    t58 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB39;

LAB40:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t38 + 4);
    t74 = (t52 + 4);
    t75 = *((unsigned int *)t38);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t52);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB42;

LAB43:    xsi_set_current_line(57, ng0);

LAB46:    xsi_set_current_line(58, ng0);
    t98 = (t0 + 1528U);
    t99 = *((char **)t98);
    t98 = (t0 + 2728);
    t101 = (t98 + 56U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t103 = (t100 + 4);
    t104 = (t102 + 4);
    t105 = *((unsigned int *)t102);
    t106 = (t105 >> 0);
    *((unsigned int *)t100) = t106;
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 0);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t109 & 127U);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t110 & 127U);
    xsi_vlogtype_concat(t97, 8, 8, 2U, t100, 7, t99, 1);
    t111 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t111, t97, 0, 0, 8, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    goto LAB45;

LAB47:    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB49:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB50;

LAB51:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t20 + 4);
    t17 = *((unsigned int *)t19);
    t18 = (~(t17));
    t22 = *((unsigned int *)t20);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t19) == 0)
        goto LAB54;

LAB56:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;

LAB57:    t28 = (t21 + 4);
    t29 = (t20 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    *((unsigned int *)t21) = t26;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB59;

LAB58:    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & 1U);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1U);
    memset(t38, 0, 8);
    t39 = (t21 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (~(t36));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t39) != 0)
        goto LAB62;

LAB63:    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t38);
    t47 = (t43 & t44);
    *((unsigned int *)t52) = t47;
    t46 = (t4 + 4);
    t50 = (t38 + 4);
    t51 = (t52 + 4);
    t48 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t50);
    t53 = (t48 | t49);
    *((unsigned int *)t51) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB53;

LAB54:    *((unsigned int *)t21) = 1;
    goto LAB57;

LAB59:    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t30 | t31);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t32 | t33);
    goto LAB58;

LAB60:    *((unsigned int *)t38) = 1;
    goto LAB63;

LAB62:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB63;

LAB64:    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t52) = (t56 | t57);
    t58 = (t4 + 4);
    t63 = (t38 + 4);
    t60 = *((unsigned int *)t4);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t66 = (~(t62));
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t69 = *((unsigned int *)t63);
    t70 = (~(t69));
    t83 = (t61 & t66);
    t84 = (t68 & t70);
    t71 = (~(t83));
    t72 = (~(t84));
    t75 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t75 & t71);
    t76 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t76 & t72);
    t77 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t77 & t71);
    t78 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t78 & t72);
    goto LAB66;

LAB67:    xsi_set_current_line(67, ng0);

LAB70:    xsi_set_current_line(68, ng0);
    t65 = (t0 + 2888);
    t73 = (t65 + 56U);
    t74 = *((char **)t73);
    t91 = ((char*)((ng4)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_lshift(t59, 8, t74, 8, t91, 32);
    t98 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t98, t59, 0, 0, 8, 0LL);
    goto LAB69;

LAB73:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(72, ng0);

LAB78:    xsi_set_current_line(73, ng0);
    t27 = (t0 + 2728);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t39 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t39, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB77;

LAB81:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t21) = 1;
    goto LAB86;

LAB85:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB86;

LAB87:    t27 = (t0 + 1688U);
    t28 = *((char **)t27);
    memset(t38, 0, 8);
    t27 = (t28 + 4);
    t35 = *((unsigned int *)t27);
    t36 = (~(t35));
    t37 = *((unsigned int *)t28);
    t40 = (t37 & t36);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t27) == 0)
        goto LAB90;

LAB92:    t29 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t29) = 1;

LAB93:    memset(t52, 0, 8);
    t39 = (t38 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (~(t42));
    t44 = *((unsigned int *)t38);
    t47 = (t44 & t43);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t39) != 0)
        goto LAB96;

LAB97:    t49 = *((unsigned int *)t21);
    t53 = *((unsigned int *)t52);
    t54 = (t49 & t53);
    *((unsigned int *)t59) = t54;
    t46 = (t21 + 4);
    t50 = (t52 + 4);
    t51 = (t59 + 4);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t50);
    t57 = (t55 | t56);
    *((unsigned int *)t51) = t57;
    t60 = *((unsigned int *)t51);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB98;

LAB99:
LAB100:    goto LAB89;

LAB90:    *((unsigned int *)t38) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t52) = 1;
    goto LAB97;

LAB96:    t45 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB97;

LAB98:    t62 = *((unsigned int *)t59);
    t66 = *((unsigned int *)t51);
    *((unsigned int *)t59) = (t62 | t66);
    t58 = (t21 + 4);
    t63 = (t52 + 4);
    t67 = *((unsigned int *)t21);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (~(t71));
    t75 = *((unsigned int *)t63);
    t76 = (~(t75));
    t83 = (t68 & t70);
    t84 = (t72 & t76);
    t77 = (~(t83));
    t78 = (~(t84));
    t79 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t79 & t77);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & t78);
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t77);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t78);
    goto LAB100;

LAB101:    xsi_set_current_line(81, ng0);

LAB104:    xsi_set_current_line(82, ng0);
    t65 = (t0 + 1848U);
    t73 = *((char **)t65);
    t65 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t65, t73, 0, 0, 8, 0LL);
    goto LAB103;

}


extern void work_m_07999475341922405446_3892401115_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_07999475341922405446_3892401115", "isim/spi_tb_isim_beh.exe.sim/work/m_07999475341922405446_3892401115.didat");
	xsi_register_executes(pe);
}
