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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000120579413_3832581141_init();
    work_m_00000000003934421750_2381739659_init();
    work_m_00000000003067112934_3037777339_init();
    work_m_00000000002320704264_1621107508_init();
    work_m_00000000002963943794_2067619323_init();
    work_m_00000000004265112998_2725559894_init();
    work_m_00000000002714502144_2684609642_init();
    work_m_00000000003061413410_1589731567_init();
    work_m_00000000001211472131_3213298780_init();
    work_m_00000000000889753126_3797123641_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000889753126_3797123641");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}