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
* Copyright (C) . All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : Pin.h
* Version      : 1.0.0.0
* Device(s)    : R7F701690
* Description  : This file implements SMC pin code generation.
* Creation Date: 2020-10-05
***********************************************************************************************************************/
#ifndef PIN_H
#define PIN_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
/* Specify PORT initialize clear bits */
#define _PORT_CLEAR_BIT0                    (0xFFFEU)  /* clear bit 0 */
#define _PORT_CLEAR_BIT1                    (0xFFFDU)  /* clear bit 1 */
#define _PORT_CLEAR_BIT2                    (0xFFFBU)  /* clear bit 2 */
#define _PORT_CLEAR_BIT3                    (0xFFF7U)  /* clear bit 3 */
#define _PORT_CLEAR_BIT4                    (0xFFEFU)  /* clear bit 4 */
#define _PORT_CLEAR_BIT5                    (0xFFDFU)  /* clear bit 5 */
#define _PORT_CLEAR_BIT6                    (0xFFBFU)  /* clear bit 6 */
#define _PORT_CLEAR_BIT7                    (0xFF7FU)  /* clear bit 7 */
#define _PORT_CLEAR_BIT8                    (0xFEFFU)  /* clear bit 8 */
#define _PORT_CLEAR_BIT9                    (0xFDFFU)  /* clear bit 9 */
#define _PORT_CLEAR_BIT10                   (0xFBFFU)  /* clear bit 10 */
#define _PORT_CLEAR_BIT11                   (0xF7FFU)  /* clear bit 11 */
#define _PORT_CLEAR_BIT12                   (0xEFFFU)  /* clear bit 12 */
#define _PORT_CLEAR_BIT13                   (0xDFFFU)  /* clear bit 13 */
#define _PORT_CLEAR_BIT14                   (0xBFFFU)  /* clear bit 14 */
#define _PORT_CLEAR_BIT15                   (0x7FFFU)  /* clear bit 15 */
/* Specify PORT initialize set bits */
#define _PORT_SET_BIT0                      (0x0001U)  /* set bit 0 */
#define _PORT_SET_BIT1                      (0x0002U)  /* set bit 1 */
#define _PORT_SET_BIT2                      (0x0004U)  /* set bit 2 */
#define _PORT_SET_BIT3                      (0x0008U)  /* set bit 3 */
#define _PORT_SET_BIT4                      (0x0010U)  /* set bit 4 */
#define _PORT_SET_BIT5                      (0x0020U)  /* set bit 5 */
#define _PORT_SET_BIT6                      (0x0040U)  /* set bit 6 */
#define _PORT_SET_BIT7                      (0x0080U)  /* set bit 7 */
#define _PORT_SET_BIT8                      (0x0100U)  /* set bit 8 */
#define _PORT_SET_BIT9                      (0x0200U)  /* set bit 9 */
#define _PORT_SET_BIT10                     (0x0400U)  /* set bit 10 */
#define _PORT_SET_BIT11                     (0x0800U)  /* set bit 11 */
#define _PORT_SET_BIT12                     (0x1000U)  /* set bit 12 */
#define _PORT_SET_BIT13                     (0x2000U)  /* set bit 13 */
#define _PORT_SET_BIT14                     (0x4000U)  /* set bit 14 */
#define _PORT_SET_BIT15                     (0x8000U)  /* set bit 15 */
/* Specify JPORT initialize clear bits */
#define _JPORT_CLEAR_BIT0                   (0xFEU)  /* clear bit 0 */
#define _JPORT_CLEAR_BIT1                   (0xFDU)  /* clear bit 1 */
#define _JPORT_CLEAR_BIT2                   (0xFBU)  /* clear bit 2 */
#define _JPORT_CLEAR_BIT3                   (0xF7U)  /* clear bit 3 */
#define _JPORT_CLEAR_BIT4                   (0xEFU)  /* clear bit 4 */
#define _JPORT_CLEAR_BIT5                   (0xDFU)  /* clear bit 5 */
#define _JPORT_CLEAR_BIT6                   (0xBFU)  /* clear bit 6 */
#define _JPORT_CLEAR_BIT7                   (0x7FU)  /* clear bit 7 */
/* Specify JPORT initialize set bits */
#define _JPORT_SET_BIT0                     (0x01U)  /* set bit 0 */
#define _JPORT_SET_BIT1                     (0x02U)  /* set bit 1 */
#define _JPORT_SET_BIT2                     (0x04U)  /* set bit 2 */
#define _JPORT_SET_BIT3                     (0x08U)  /* set bit 3 */
#define _JPORT_SET_BIT4                     (0x10U)  /* set bit 4 */
#define _JPORT_SET_BIT5                     (0x20U)  /* set bit 5 */
#define _JPORT_SET_BIT6                     (0x40U)  /* set bit 6 */
#define _JPORT_SET_BIT7                     (0x80U)  /* set bit 7 */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Pins_Create(void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
