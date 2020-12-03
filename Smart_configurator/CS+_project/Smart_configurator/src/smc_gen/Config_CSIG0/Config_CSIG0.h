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
* File Name    : Config_CSIG0.h
* Version      : 1.0.2
* Device(s)    : R7F701690
* Description  : This file implements device driver for Config_CSIG0.
* Creation Date: 2020-10-14
***********************************************************************************************************************/
#ifndef CFG_Config_CSIG0_H
#define CFG_Config_CSIG0_H

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_csig.h"

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _CSIG0_SELECT_BASIC_CLOCK                      (0x2000U) /* Selects the basic clock */
#define _CSIG0_BAUD_RATE                               (0x0823U) /* baudrate set */
#define _CSIG_SETTING_INIT                             (0x00000000UL) /* Receive setting init value */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_CSIG0_Create(void);
void R_Config_CSIG0_Start(void);
void R_Config_CSIG0_Stop(void);
MD_STATUS R_Config_CSIG0_Receive(uint16_t* rx_buf, uint16_t rx_num);
MD_STATUS R_Config_CSIG0_Send(const uint16_t* tx_buf, uint16_t tx_num);
void R_Config_CSIG0_Create_UserInit(void);
static void r_Config_CSIG0_callback_receiveend(void);
static void r_Config_CSIG0_callback_sendend(void);
static void r_Config_CSIG0_callback_error(uint32_t err_type);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
