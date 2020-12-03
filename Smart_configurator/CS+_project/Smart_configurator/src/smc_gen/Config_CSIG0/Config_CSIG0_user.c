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
* File Name    : Config_CSIG0_user.c
* Version      : 1.0.2
* Device(s)    : R7F701690
* Description  : This file implements device driver for Config_CSIG0.
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
#include "Config_CSIG0.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint16_t  g_csig0_tx_num;                        /* csig0 transmit data number */
extern volatile uint16_t  g_csig0_rx_num;                        /* csig0 receive data number */
extern volatile uint16_t  g_csig0_rx_total_num;                  /* csig0 receive data total times */
extern volatile uint16_t * gp_csig0_tx_address;                   /* csig0 transmit buffer address */
extern volatile uint16_t * gp_csig0_rx_address;                   /* csig0 receive buffer address */
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_CSIG0_Create_UserInit
* Description  : This function adds user code after initializing CSIG module
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSIG0_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}
/***********************************************************************************************************************
* Function Name: r_Config_CSIG0_interrupt_send
* Description  : This function is CSIG0 send interrupt service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_CSIG0_interrupt_send(enable=false, channel=27, fpu=true, callt=false)
void r_Config_CSIG0_interrupt_send(void)
{
    uint32_t regValue = CSIG0.TX0W & _CSIG_SETTING_INIT;
    if (g_csig0_tx_num > 0U)
    {
        regValue =  *gp_csig0_tx_address | regValue;
        CSIG0.TX0W = regValue;
        gp_csig0_tx_address++;
        g_csig0_tx_num--;
    }
    else
    {
    	r_Config_CSIG0_callback_sendend();
    }
}
/***********************************************************************************************************************
* Function Name: r_Config_CSIG0_interrupt_receive
* Description  : This function is CSIG0 receive interrupt service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_CSIG0_interrupt_receive(enable=false, channel=28, fpu=true, callt=false)
void r_Config_CSIG0_interrupt_receive(void)
{
    uint8_t err_type;
    uint16_t temp;
    err_type = (CSIG0.STR0 & (_CSIG_CONSISTENCY_ERROR_DETECTED | _CSIG_PARITY_ERROR_DETECTED | _CSIG_OVERRUN_ERROR_DETECTED));
    CSIG0.STCR0 |= (_CSIG_CONSISTENCY_ERROR_CLEAR | _CSIG_PARITY_ERROR_CLEAR | _CSIG_OVERRUN_ERROR_CLEAR);
    if (err_type != 0U)
    {
    	r_Config_CSIG0_callback_error(err_type);
    }
    else
    {
        temp = g_csig0_rx_total_num;
        if (temp > g_csig0_rx_num)
        {
            *gp_csig0_rx_address = CSIG0.RX0;
            gp_csig0_rx_address++;
            g_csig0_rx_num++;
        }
        temp = g_csig0_rx_total_num;
        if (temp == g_csig0_rx_num)
        {
        	r_Config_CSIG0_callback_receiveend();
        }
    }
}
/***********************************************************************************************************************
* Function Name: r_Config_CSIG0_interrupt_error
* Description  : This function is CSIG0 error interrupt service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_CSIG0_interrupt_error(enable=false, channel=57, fpu=true, callt=false)
void r_Config_CSIG0_interrupt_error(void)
{
    uint32_t err_type;
    err_type = (CSIG0.STR0 & (_CSIG_CONSISTENCY_ERROR_DETECTED | _CSIG_PARITY_ERROR_DETECTED | _CSIG_OVERRUN_ERROR_DETECTED));
    CSIG0.STCR0 |= (_CSIG_CONSISTENCY_ERROR_CLEAR | _CSIG_PARITY_ERROR_CLEAR | _CSIG_OVERRUN_ERROR_CLEAR);
    *gp_csig0_rx_address = CSIG0.RX0;
    if (err_type != 0U)
    {
    	r_Config_CSIG0_callback_error(err_type);
    }
}
/***********************************************************************************************************************
* Function Name: r_Config_CSIG0_callback_sendend
* Description  : This function is CSIG0 sendend callback service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_CSIG0_callback_sendend(void)
{
    /* Start user code for r_Config_CSIG0_callback_sendend. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}
/***********************************************************************************************************************
* Function Name: r_Config_CSIG0_callback_receiveend
* Description  : This function is CSIG0 receiveend callback service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_CSIG0_callback_receiveend(void)
{
    /* Start user code for r_Config_CSIG0_callback_receiveend. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}
/***********************************************************************************************************************
* Function Name: r_Config_CSIG0_callback_error
* Description  : This function is CSIG0 error callback service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_CSIG0_callback_error(uint32_t err_type)
{
    /* Start user code for r_Config_CSIG0_callback_error. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

