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
* Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : Config_TAUJ0_0.c
* Version      : 1.1.0
* Device(s)    : R7F701690
* Description  : This file implements device driver for Config_TAUJ0_0.
* Creation Date: 2020-10-14
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
#include "Config_TAUJ0_0.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_TAUJ0_0_Create
* Description  : This function initializes the TAUJ00 channel
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAUJ0_0_Create(void)
{
    /* Disable channel0 counter operation */
    TAUJ0.TT |= _TAUJ_CHANNEL0_COUNTER_STOP;
    /* Disable INTTAUJ0I0 operation and clear request */
    INTC2.ICTAUJ0I0.BIT.MKTAUJ0I0 = _INT_PROCESSING_DISABLED;
    INTC2.ICTAUJ0I0.BIT.RFTAUJ0I0 = _INT_REQUEST_NOT_OCCUR;
    /* Set INTTAUJ0I0 setting */
    INTC2.ICTAUJ0I0.BIT.TBTAUJ0I0 = _INT_TABLE_VECTOR;
    INTC2.ICTAUJ0I0.UINT16 &= _INT_PRIORITY_LOWEST;
    TAUJ0.TPS &= _TAUJ_CK0_PRS_CLEAR;
    TAUJ0.TPS |= _TAUJ_CK0_PRE_PCLK_5;
    /* Set channel 0 setting */
    TAUJ0.CMOR0 = _TAUJ_SELECTION_CK0 | _TAUJ_COUNT_CLOCK_PCLK | _TAUJ_INDEPENDENT_CHANNEL | 
                  _TAUJ_START_TRIGGER_SOFTWARE | _TAUJ_OVERFLOW_AUTO_CLEAR | _TAUJ_INTERVAL_TIMER_MODE | 
                  _TAUJ_START_INT_NOT_GENERATED;
    /* Set compare match register */
    TAUJ0.CMUR0 = _TAUJ_INPUT_EDGE_UNUSED;
    TAUJ0.CDR0 = _TAUJ00_COMPARE_VALUE;
    /* Set output mode setting */
    TAUJ0.TOE |= _TAUJ_CHANNEL0_ENABLES_OUTPUT_MODE;
    TAUJ0.TOM &= _TAUJ_CHANNEL0_INDEPENDENT_OPERATION;
    TAUJ0.TOC &= _TAUJ_CHANNEL0_OPERATION_MODE1;
    TAUJ0.TOL &= _TAUJ_CHANNEL0_POSITIVE_LOGIC;
    /* Synchronization processing */
    g_cg_sync_read = TAUJ0.TPS;
    __syncp();
    
    /* Set TAUJ0O0 pin */
    PORT.PIBC8 &= _PORT_CLEAR_BIT2;
    PORT.PBDC8 &= _PORT_CLEAR_BIT2;
    PORT.PM8 |= _PORT_SET_BIT2;
    PORT.PMC8 &= _PORT_CLEAR_BIT2;
    PORT.PFC8 &= _PORT_CLEAR_BIT2;
    PORT.PFCE8 &= _PORT_CLEAR_BIT2;
    PORT.PMC8 |= _PORT_SET_BIT2;
    PORT.PM8 &= _PORT_CLEAR_BIT2;

    R_Config_TAUJ0_0_Create_UserInit();
}
/***********************************************************************************************************************
* Function Name: R_Config_TAUJ0_0_Start
* Description  : This function starts the TAUJ00 channel counter
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAUJ0_0_Start(void)
{
    /* Clear INTTAUJ0I0 request and enable operation */
    INTC2.ICTAUJ0I0.BIT.RFTAUJ0I0 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICTAUJ0I0.BIT.MKTAUJ0I0 = _INT_PROCESSING_ENABLED;
    /* Enable channel0 counter operation */
    TAUJ0.TS |= _TAUJ_CHANNEL0_COUNTER_START;
}
/***********************************************************************************************************************
* Function Name: R_Config_TAUJ0_0_Stop
* Description  : This function stop the TAUJ00 channel counter
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAUJ0_0_Stop(void)
{
    /* Disable channel0 counter operation */
    TAUJ0.TT |= _TAUJ_CHANNEL0_COUNTER_STOP;
    /* Disable INTTAUJ0I0 operation and clear request */
    INTC2.ICTAUJ0I0.BIT.MKTAUJ0I0 = _INT_PROCESSING_DISABLED;
    INTC2.ICTAUJ0I0.BIT.RFTAUJ0I0 = _INT_REQUEST_NOT_OCCUR;
    /* Synchronization processing */
    g_cg_sync_read = TAUJ0.TT;
    __syncp();
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
