/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2016, 2017 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_cgc.c
* Version      : 1.1.0
* Device(s)    : R7F701690
* Description  : This file contains clock setting according to Clocks tabs setting.
* Creation Date: 2020-09-28
***********************************************************************************************************************/
/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"
#include "r_cg_cgc.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_CGC_Create
* Description  : This function initializes the CLOCK
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_CGC_Create(void)
{
    /* MainOSC setting */
    CLKCTL.MOSCM = _CGC_MAINOSC_OSC_MODE;
    CLKCTL.MOSCC = _CGC_MOSCC_DEFAULT_VALUE | _CGC_MAINOSC_8MHZ;
    CLKCTL.MOSCST = _CGC_MAINOSC_STABILIZE_TIME;
    CLKCTL.MOSCSTPM = _CGC_MOSCSTPM_DEFAULT_VALUE  | _CGC_MAINOSC_REQUEST_STOP;
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.MOSCE = _CGC_MAINOSC_START;
    CLKCTL.MOSCE = (uint32_t) ~_CGC_MAINOSC_START;
    CLKCTL.MOSCE = _CGC_MAINOSC_START;
    while ((CLKCTL.MOSCS & _CGC_MAINOSC_ACTIVE) != _CGC_MAINOSC_ACTIVE)
    {
         NOP();
    }
    /* HS IntOSC setting */
    CLKCTL.ROSCSTPM = _CGC_ROSCSTPM_DEFAULT_VALUE | _CGC_HSOSC_REQUEST_STOP;
    /* PLL setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_PLL1IS_CTL = _CGC_PLL1_SOURCE_MAINOSC;
    CLKCTL.CKSC_PLL1IS_CTL = (uint32_t) ~_CGC_PLL1_SOURCE_MAINOSC;
    CLKCTL.CKSC_PLL1IS_CTL = _CGC_PLL1_SOURCE_MAINOSC;
    while ((CLKCTL.CKSC_PLL1IS_ACT & _CGC_PLL1_SOURCE_ACTIVE) != _CGC_PLL1_SOURCE_MAINOSC)
    {
        NOP();
    }
    CLKCTL.PLL1C = _CGC_PLL1C_DEFAULT_VALUE | _CGC_PLL1_DIVISION_RATIO;
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.PLL1E = _CGC_PLL1_START;
    CLKCTL.PLL1E = (uint32_t) ~_CGC_PLL1_START;
    CLKCTL.PLL1E = _CGC_PLL1_START;
    while ((CLKCTL.PLL1S & _CGC_PLL1_ACTIVE) != _CGC_PLL1_ACTIVE)
    {
        NOP();
    }
    /* PPLLCLK setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_PPLLCLKS_CTL = _CGC_PPLLCLK_SOURCE_PPLLOUT;
    CLKCTL.CKSC_PPLLCLKS_CTL = (uint32_t) ~_CGC_PPLLCLK_SOURCE_PPLLOUT;
    CLKCTL.CKSC_PPLLCLKS_CTL = _CGC_PPLLCLK_SOURCE_PPLLOUT;
    while ((CLKCTL.CKSC_PPLLCLKS_ACT & _CGC_PPLLCLK_SOURCE_ACTIVE) != _CGC_PPLLCLK_SOURCE_PPLLOUT)
    {
        NOP();
    }
    /* CPU clock setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_CPUCLKS_CTL = _CGC_CPU_CLK_SOURCE_CPLL1OUT;
    CLKCTL.CKSC_CPUCLKS_CTL = (uint32_t) ~_CGC_CPU_CLK_SOURCE_CPLL1OUT;
    CLKCTL.CKSC_CPUCLKS_CTL = _CGC_CPU_CLK_SOURCE_CPLL1OUT;
    while (CLKCTL.CKSC_CPUCLKS_ACT != _CGC_CPU_CLK_SOURCE_CPLL1OUT)
    {
        NOP();
    }
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_CPUCLKD_CTL = _CGC_CPLLOUT_DIVIDER_6 | _CGC_CPU_CLK_DIVIDER_1;
    CLKCTL.CKSC_CPUCLKD_CTL = (uint32_t) ~(_CGC_CPLLOUT_DIVIDER_6 | _CGC_CPU_CLK_DIVIDER_1);
    CLKCTL.CKSC_CPUCLKD_CTL = _CGC_CPLLOUT_DIVIDER_6 | _CGC_CPU_CLK_DIVIDER_1;
    while (CLKCTL.CKSC_CPUCLKD_ACT != (_CGC_CPLLOUT_DIVIDER_6 | _CGC_CPU_CLK_DIVIDER_1))
    {
        NOP();
    }
    /* WDTA0 clock domain setting */
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_AWDTAD_CTL = _CGC_WDTA_CLK_SOURCE_LSOSC_128;
    CLKCTL.CKSC_AWDTAD_CTL = (uint32_t) ~_CGC_WDTA_CLK_SOURCE_LSOSC_128;
    CLKCTL.CKSC_AWDTAD_CTL = _CGC_WDTA_CLK_SOURCE_LSOSC_128;
    while (CLKCTL.CKSC_AWDTAD_ACT != _CGC_WDTA_CLK_SOURCE_LSOSC_128)
    {
        NOP();
    }
    CLKCTL.CKSC_AWDTAD_STPM = _CGC_CKSC_AWDTAD_STPM_DEFAULT_VALUE | _CGC_WDTA_CLK_REQUEST_STOP;
    /* TAUJ0 clock domain setting */
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ATAUJS_CTL = _CGC_TAUJ_CLK_SOURCE_HSOSC;
    CLKCTL.CKSC_ATAUJS_CTL = (uint32_t) ~_CGC_TAUJ_CLK_SOURCE_HSOSC;
    CLKCTL.CKSC_ATAUJS_CTL = _CGC_TAUJ_CLK_SOURCE_HSOSC;
    while (CLKCTL.CKSC_ATAUJS_ACT != _CGC_TAUJ_CLK_SOURCE_HSOSC)
    {
        NOP();
    }
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ATAUJD_CTL = _CGC_TAUJ_CLK_DIVIDER_1;
    CLKCTL.CKSC_ATAUJD_CTL = (uint32_t) ~_CGC_TAUJ_CLK_DIVIDER_1;
    CLKCTL.CKSC_ATAUJD_CTL = _CGC_TAUJ_CLK_DIVIDER_1;
    while (CLKCTL.CKSC_ATAUJD_ACT != _CGC_TAUJ_CLK_DIVIDER_1)
    {
        NOP();
    }
    CLKCTL.CKSC_ATAUJD_STPM = _CGC_CKSC_ATAUJD_STPM_DEFAULT_VALUE | _CGC_TAUJ_CLK_REQUEST_STOP;
    /* RTCA0 clock domain setting */
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ARTCAS_CTL = _CGC_RTCA_CLK_SOURCE_DISABLE;
    CLKCTL.CKSC_ARTCAS_CTL = (uint32_t) ~_CGC_RTCA_CLK_SOURCE_DISABLE;
    CLKCTL.CKSC_ARTCAS_CTL = _CGC_RTCA_CLK_SOURCE_DISABLE;
    while (CLKCTL.CKSC_ARTCAS_ACT != _CGC_RTCA_CLK_SOURCE_DISABLE)
    {
        NOP();
    }
    /* ADCA0 clock domain setting */
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_AADCAS_CTL = _CGC_ADCA0_CLK_SOURCE_HSOSC;
    CLKCTL.CKSC_AADCAS_CTL = (uint32_t) ~_CGC_ADCA0_CLK_SOURCE_HSOSC;
    CLKCTL.CKSC_AADCAS_CTL = _CGC_ADCA0_CLK_SOURCE_HSOSC;
    while (CLKCTL.CKSC_AADCAS_ACT != _CGC_ADCA0_CLK_SOURCE_HSOSC)
    {
        NOP();
    }
    WPROTR.PROTCMD0 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_AADCAD_CTL = _CGC_ADCA0_CLK_DIVIDER_1;
    CLKCTL.CKSC_AADCAD_CTL = (uint32_t) ~_CGC_ADCA0_CLK_DIVIDER_1;
    CLKCTL.CKSC_AADCAD_CTL = _CGC_ADCA0_CLK_DIVIDER_1;
    while (CLKCTL.CKSC_AADCAD_ACT != _CGC_ADCA0_CLK_DIVIDER_1)
    {
        NOP();
    }
    CLKCTL.CKSC_AADCAD_STPM = _CGC_CKSC_AADCAD_STPM_DEFAULT_VALUE | _CGC_ADCA0_CLK_REQUEST_STOP;
    /* RLIN clock domain setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ILINS_CTL = _CGC_RLIN_CLK_SOURCE_PPLLCLK2;
    CLKCTL.CKSC_ILINS_CTL = (uint32_t) ~_CGC_RLIN_CLK_SOURCE_PPLLCLK2;
    CLKCTL.CKSC_ILINS_CTL = _CGC_RLIN_CLK_SOURCE_PPLLCLK2;
    while (CLKCTL.CKSC_ILINS_ACT != _CGC_RLIN_CLK_SOURCE_PPLLCLK2)
    {
        NOP();
    }
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ILIND_CTL = _CGC_RLIN_CLK_DIVIDER_1;
    CLKCTL.CKSC_ILIND_CTL = (uint32_t) ~_CGC_RLIN_CLK_DIVIDER_1;
    CLKCTL.CKSC_ILIND_CTL = _CGC_RLIN_CLK_DIVIDER_1;
    while (CLKCTL.CKSC_ILIND_ACT != _CGC_RLIN_CLK_DIVIDER_1)
    {
        NOP();
    }
    CLKCTL.CKSC_ILIND_STPM = _CGC_CKSC_ILIND_STPM_DEFAULT_VALUE | _CGC_RLIN_CLK_REQUEST_STOP;
    /* Peripheral clock domain setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_IPERI1S_CTL = _CGC_PERI1_CLK_SOURCE_PPLLCLK;
    CLKCTL.CKSC_IPERI1S_CTL = (uint32_t) ~_CGC_PERI1_CLK_SOURCE_PPLLCLK;
    CLKCTL.CKSC_IPERI1S_CTL = _CGC_PERI1_CLK_SOURCE_PPLLCLK;
    while (CLKCTL.CKSC_IPERI1S_ACT != _CGC_PERI1_CLK_SOURCE_PPLLCLK)
    {
        NOP();
    }
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_IPERI2S_CTL = _CGC_PERI2_CLK_SOURCE_PPLLCLK2;
    CLKCTL.CKSC_IPERI2S_CTL = (uint32_t) ~_CGC_PERI2_CLK_SOURCE_PPLLCLK2;
    CLKCTL.CKSC_IPERI2S_CTL = _CGC_PERI2_CLK_SOURCE_PPLLCLK2;
    while (CLKCTL.CKSC_IPERI2S_ACT != _CGC_PERI2_CLK_SOURCE_PPLLCLK2)
    {
        NOP();
    }
    /* RS-CANn clock domains setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ICANS_CTL = _CGC_RSCAN_CLK_SOURCE_MAINOSC;
    CLKCTL.CKSC_ICANS_CTL = (uint32_t) ~_CGC_RSCAN_CLK_SOURCE_MAINOSC;
    CLKCTL.CKSC_ICANS_CTL = _CGC_RSCAN_CLK_SOURCE_MAINOSC;
    while (CLKCTL.CKSC_ICANS_ACT != _CGC_RSCAN_CLK_SOURCE_MAINOSC)
    {
        NOP();
    }
    CLKCTL.CKSC_ICANS_STPM = _CGC_CKSC_ICANS_STPM_DEFAULT_VALUE | _CGC_RSCAN_CLK_REQUEST_STOP;
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ICANOSCD_CTL = _CGC_RSCANOSC_CLK_SOURCE_MAINOSC2;
    CLKCTL.CKSC_ICANOSCD_CTL = (uint32_t) ~_CGC_RSCANOSC_CLK_SOURCE_MAINOSC2;
    CLKCTL.CKSC_ICANOSCD_CTL = _CGC_RSCANOSC_CLK_SOURCE_MAINOSC2;
    while (CLKCTL.CKSC_ICANOSCD_ACT != _CGC_RSCANOSC_CLK_SOURCE_MAINOSC2)
    {
        NOP();
    }
    CLKCTL.CKSC_ICANOSCD_STPM = _CGC_CKSC_ICANOSCD_STPM_DEFAULT_VALUE | _CGC_RSCANOSC_CLK_REQUEST_STOP;
    /* CSI clock domain setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_ICSIS_CTL = _CGC_CSI_CLK_SOURCE_PPLLCLK;
    CLKCTL.CKSC_ICSIS_CTL = (uint32_t) ~_CGC_CSI_CLK_SOURCE_PPLLCLK;
    CLKCTL.CKSC_ICSIS_CTL = _CGC_CSI_CLK_SOURCE_PPLLCLK;
    while (CLKCTL.CKSC_ICSIS_ACT != _CGC_CSI_CLK_SOURCE_PPLLCLK)
    {
        NOP();
    }
    /* IIC clock domain setting */
    WPROTR.PROTCMD1 = _WRITE_PROTECT_COMMAND;
    CLKCTL.CKSC_IIICS_CTL = _CGC_IIC_CLK_SOURCE_PPLLCLK2;
    CLKCTL.CKSC_IIICS_CTL = (uint32_t) ~_CGC_IIC_CLK_SOURCE_PPLLCLK2;
    CLKCTL.CKSC_IIICS_CTL = _CGC_IIC_CLK_SOURCE_PPLLCLK2;
    while (CLKCTL.CKSC_IIICS_ACT != _CGC_IIC_CLK_SOURCE_PPLLCLK2)
    {
        NOP();
    }
    /* Synchronization processing */
    g_cg_sync_read = CLKCTL.CKSC_CPUCLKS_CTL;
    __syncp();   

    R_CGC_Create_UserInit();
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
