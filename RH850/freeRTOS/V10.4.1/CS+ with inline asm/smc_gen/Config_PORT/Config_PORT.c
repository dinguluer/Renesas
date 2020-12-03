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
* File Name    : Config_PORT.c
* Version      : 1.1.0
* Device(s)    : R7F701690
* Description  : This file implements device driver for Config_PORT.
* Creation Date: 2020-10-05
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
#include "Config_PORT.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

extern volatile uint32_t g_cg_sync_read;
/***********************************************************************************************************************
* Function Name: R_Config_PORT_Create
* Description  : This function initializes the PORT
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_PORT_Create(void)
{
    PORT.PIBC9 = _PORT_PIBC_INIT;
    PORT.PBDC9 = _PORT_PBDC_INIT;
    PORT.PM9 = _PORT_PM_INIT;
    PORT.PMC9 = _PORT_PMC_INIT;
    /* PORT9 setting */
    PORT.PPCMD9 = _WRITE_PROTECT_COMMAND;
    PORT.PODC9 = _PORT_PODCn0_PUSH_PULL | _PORT_PODCn1_PUSH_PULL | _PORT_PODCn2_PUSH_PULL;
    PORT.PODC9 = (uint32_t) ~(_PORT_PODCn0_PUSH_PULL | _PORT_PODCn1_PUSH_PULL | _PORT_PODCn2_PUSH_PULL);
    PORT.PODC9 = _PORT_PODCn0_PUSH_PULL | _PORT_PODCn1_PUSH_PULL | _PORT_PODCn2_PUSH_PULL;
    PORT.PBDC9 = _PORT_PBDCn0_MODE_DISABLED | _PORT_PBDCn1_MODE_DISABLED | _PORT_PBDCn2_MODE_DISABLED;
    PORT.P9 = _PORT_Pn0_OUTPUT_HIGH | _PORT_Pn1_OUTPUT_HIGH | _PORT_Pn2_OUTPUT_HIGH;
    PORT.PM9 = _PORT_PM9_DEFAULT_VALUE | _PORT_PMn0_MODE_OUTPUT | _PORT_PMn1_MODE_OUTPUT | _PORT_PMn2_MODE_OUTPUT | 
               _PORT_PMn3_MODE_UNUSED;
    /* Synchronization processing */
    g_cg_sync_read = PORT.PM9;
    __syncp();
	
    R_Config_PORT_Create_UserInit();
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
