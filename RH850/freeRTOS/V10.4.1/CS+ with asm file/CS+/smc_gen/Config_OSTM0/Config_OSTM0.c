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
* File Name    : Config_OSTM0.c
* Version      : 1.1.0
* Device(s)    : R7F701690
* Description  : This file implements device driver for Config_OSTM0.
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
#include "Config_OSTM0.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_OSTM0_Create
* Description  : This function initializes the OS timer
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_OSTM0_Create(void)
{
    /* Disable OSTM0 operation */
    OSTM0.TT = _OSTM_COUNTER_STOP;
    /* Disable OSTM0 interrupt operation and clear request */
    INTC2.ICOSTM0.BIT.MKOSTM0 = _INT_PROCESSING_DISABLED;
    INTC2.ICOSTM0.BIT.RFOSTM0 = _INT_REQUEST_NOT_OCCUR;
    /* Set OSTM0 interrupt setting */
    INTC2.ICOSTM0.BIT.TBOSTM0 = _INT_TABLE_VECTOR;
    INTC2.ICOSTM0.UINT16 &= _INT_PRIORITY_LOWEST;
    /* Set OSTM0 control setting */
    OSTM0.CTL = _OSTM_MODE_INTERVAL_TIMER | _OSTM_START_INTERRUPT_ENABLE;
    OSTM0.CMP = _OSTM0_COMPARING_COUNTER;
    /* Synchronization processing */
    g_cg_sync_read = OSTM0.CTL;
    __syncp();

    R_Config_OSTM0_Create_UserInit();
}
/***********************************************************************************************************************
* Function Name: R_Config_OSTM0_Start
* Description  : This function enables the OS timer
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_OSTM0_Start(void)
{
    /* Enable OSTM0 operation */
    /* Clear OSTM0 interrupt request and enable operation */
    INTC2.ICOSTM0.BIT.RFOSTM0 = _INT_REQUEST_NOT_OCCUR;
    INTC2.ICOSTM0.BIT.MKOSTM0 = _INT_PROCESSING_ENABLED;
    OSTM0.TS = _OSTM_COUNTER_START;
}
/***********************************************************************************************************************
* Function Name: R_Config_OSTM0_Stop
* Description  : This function stops the OS timer
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_OSTM0_Stop(void)
{
    /* Disable OSTM0 operation */
    OSTM0.TT = _OSTM_COUNTER_STOP;
    /* Disable OSTM0 interrupt operation and clear request */
    INTC2.ICOSTM0.BIT.MKOSTM0 = _INT_PROCESSING_DISABLED;
    INTC2.ICOSTM0.BIT.RFOSTM0 = _INT_REQUEST_NOT_OCCUR;
    /* Synchronization processing */
    g_cg_sync_read = OSTM0.TT;
    __syncp();
}
/***********************************************************************************************************************
* Function Name: R_Config_OSTM0_Set_CompareValue
* Description  : This function sets counter value of OS timer
* Arguments    : value -
*                    counter value
* Return Value : None
***********************************************************************************************************************/
void R_Config_OSTM0_Set_CompareValue(uint32_t value)
{
    OSTM0.CMP = value;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
