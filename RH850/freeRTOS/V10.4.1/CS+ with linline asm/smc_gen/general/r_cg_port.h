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
* File Name    : r_cg_port.h
* Version      : 1.0.1
* Device(s)    : R7F701690
* Description  : General header file for PORT peripheral.
* Creation Date: 2020-10-05
***********************************************************************************************************************/
#ifndef PORT_H
#define PORT_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    Port mode register (PMn)
*/
/* PMn0 Specifies input/output mode of the corresponding pin (PMn0) */
#define _PORT_PMn0_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn0_MODE_INPUT                     (0x0001U) /* input mode (output buffer off) */
#define _PORT_PMn0_MODE_UNUSED                    (0x0001U) /* unused mode */
/* PMn1 Specifies input/output mode of the corresponding pin (PMn1) */
#define _PORT_PMn1_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn1_MODE_INPUT                     (0x0002U) /* input mode (output buffer off) */
#define _PORT_PMn1_MODE_UNUSED                    (0x0002U) /* unused mode */
/* PMn2 Specifies input/output mode of the corresponding pin (PMn2) */
#define _PORT_PMn2_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn2_MODE_INPUT                     (0x0004U) /* input mode (output buffer off) */
#define _PORT_PMn2_MODE_UNUSED                    (0x0004U) /* unused mode */
/* PMn3 pin I/O Specifies input/output mode of the corresponding pin (PMn3) */
#define _PORT_PMn3_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn3_MODE_INPUT                     (0x0008U) /* input mode (output buffer off) */
#define _PORT_PMn3_MODE_UNUSED                    (0x0008U) /* unused mode */
/* PMn4 Specifies input/output mode of the corresponding pin (PMn4) */
#define _PORT_PMn4_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn4_MODE_INPUT                     (0x0010U) /* input mode (output buffer off) */
#define _PORT_PMn4_MODE_UNUSED                    (0x0010U) /* unused mode */
/* PMn5 Specifies input/output mode of the corresponding pin (PMn5) */
#define _PORT_PMn5_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn5_MODE_INPUT                     (0x0020U) /* input mode (output buffer off) */
#define _PORT_PMn5_MODE_UNUSED                    (0x0020U) /* unused mode */
/* PMn6 Specifies input/output mode of the corresponding pin (PMn6) */
#define _PORT_PMn6_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn6_MODE_INPUT                     (0x0040U) /* input mode (output buffer off) */
#define _PORT_PMn6_MODE_UNUSED                    (0x0040U) /* unused mode */
/* PMn7 Specifies input/output mode of the corresponding pin (PMn7) */
#define _PORT_PMn7_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn7_MODE_INPUT                     (0x0080U) /* input mode (output buffer off) */
#define _PORT_PMn7_MODE_UNUSED                    (0x0080U) /* unused mode */
/* PMn8 Specifies input/output mode of the corresponding pin (PMn8) */
#define _PORT_PMn8_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn8_MODE_INPUT                     (0x0100U) /* input mode (output buffer off) */
#define _PORT_PMn8_MODE_UNUSED                    (0x0100U) /* unused mode */
/* PMn9 Specifies input/output mode of the corresponding pin (PMn9) */
#define _PORT_PMn9_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn9_MODE_INPUT                     (0x0200U) /* input mode (output buffer off) */
#define _PORT_PMn9_MODE_UNUSED                    (0x0200U) /* unused mode */
/* PMn10 Specifies input/output mode of the corresponding pin (PMn10) */
#define _PORT_PMn10_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn10_MODE_INPUT                    (0x0400U) /* input mode (output buffer off) */
#define _PORT_PMn10_MODE_UNUSED                   (0x0400U) /* unused mode */
/* PMn11 Specifies input/output mode of the corresponding pin (PMn11) */
#define _PORT_PMn11_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn11_MODE_INPUT                    (0x0800U) /* input mode (output buffer off) */
#define _PORT_PMn11_MODE_UNUSED                   (0x0800U) /* unused mode */
/* PMn12 Specifies input/output mode of the corresponding pin (PMn12) */
#define _PORT_PMn12_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn12_MODE_INPUT                    (0x1000U) /* input mode (output buffer off) */
#define _PORT_PMn12_MODE_UNUSED                   (0x1000U) /* unused mode */
/* PMn13 Specifies input/output mode of the corresponding pin (PMn13) */
#define _PORT_PMn13_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn13_MODE_INPUT                    (0x2000U) /* input mode (output buffer off) */
#define _PORT_PMn13_MODE_UNUSED                   (0x2000U) /* unused mode */
/* PMn14 Specifies input/output mode of the corresponding pin (PMn14) */
#define _PORT_PMn14_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn14_MODE_INPUT                    (0x4000U) /* input mode (output buffer off) */
#define _PORT_PMn14_MODE_UNUSED                   (0x4000U) /* unused mode */
/* PMn15 Specifies input/output mode of the corresponding pin (PMn15) */
#define _PORT_PMn15_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn15_MODE_INPUT                    (0x8000U) /* input mode (output buffer off) */
#define _PORT_PMn15_MODE_UNUSED                   (0x8000U) /* unused mode */

/*
    Analog port mode register (APMn)
*/
/* APMn0 Specifies input/output mode of the corresponding pin (APMn0) */
#define _PORT_APMn0_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn0_MODE_INPUT                    (0x0001U) /* input mode (output buffer off) */
#define _PORT_APMn0_MODE_UNUSED                   (0x0001U) /* unused mode */
/* APMn1 Specifies input/output mode of the corresponding pin (APMn1) */
#define _PORT_APMn1_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn1_MODE_INPUT                    (0x0002U) /* input mode (output buffer off) */
#define _PORT_APMn1_MODE_UNUSED                   (0x0002U) /* unused mode */
/* APMn2 Specifies input/output mode of the corresponding pin (APMn2) */
#define _PORT_APMn2_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn2_MODE_INPUT                    (0x0004U) /* input mode (output buffer off) */
#define _PORT_APMn2_MODE_UNUSED                   (0x0004U) /* unused mode */
/* APMn3 Specifies input/output mode of the corresponding pin (APMn3) */
#define _PORT_APMn3_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn3_MODE_INPUT                    (0x0008U) /* input mode (output buffer off) */
#define _PORT_APMn3_MODE_UNUSED                   (0x0008U) /* unused mode */
/* APMn4 Specifies input/output mode of the corresponding pin (APMn4) */
#define _PORT_APMn4_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn4_MODE_INPUT                    (0x0010U) /* input mode (output buffer off) */
#define _PORT_APMn4_MODE_UNUSED                   (0x0010U) /* unused mode */
/* APMn5 Specifies input/output mode of the corresponding pin (APMn5) */
#define _PORT_APMn5_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn5_MODE_INPUT                    (0x0020U) /* input mode (output buffer off) */
#define _PORT_APMn5_MODE_UNUSED                   (0x0020U) /* unused mode */
/* APMn6 Specifies input/output mode of the corresponding pin (APMn6) */
#define _PORT_APMn6_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn6_MODE_INPUT                    (0x0040U) /* input mode (output buffer off) */
#define _PORT_APMn6_MODE_UNUSED                   (0x0040U) /* unused mode */
/* APMn7 Specifies input/output mode of the corresponding pin (APMn7) */
#define _PORT_APMn7_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn7_MODE_INPUT                    (0x0080U) /* input mode (output buffer off) */
#define _PORT_APMn7_MODE_UNUSED                   (0x0080U) /* unused mode */
/* APMn8 Specifies input/output mode of the corresponding pin (APMn8) */
#define _PORT_APMn8_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn8_MODE_INPUT                    (0x0100U) /* input mode (output buffer off) */
#define _PORT_APMn8_MODE_UNUSED                   (0x0100U) /* unused mode */
/* APMn9 Specifies input/output mode of the corresponding pin (APMn9) */
#define _PORT_APMn9_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn9_MODE_INPUT                    (0x0200U) /* input mode (output buffer off) */
#define _PORT_APMn9_MODE_UNUSED                   (0x0200U) /* unused mode */
/* APMn10 Specifies input/output mode of the corresponding pin (APMn10) */
#define _PORT_APMn10_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn10_MODE_INPUT                   (0x0400U) /* input mode (output buffer off) */
#define _PORT_APMn10_MODE_UNUSED                  (0x0400U) /* unused mode */
/* APMn11 Specifies input/output mode of the corresponding pin (APMn11) */
#define _PORT_APMn11_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn11_MODE_INPUT                   (0x0800U) /* input mode (output buffer off) */
#define _PORT_APMn11_MODE_UNUSED                  (0x0800U) /* unused mode */
/* APMn12 Specifies input/output mode of the corresponding pin (APMn12) */
#define _PORT_APMn12_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn12_MODE_INPUT                   (0x1000U) /* input mode (output buffer off) */
#define _PORT_APMn12_MODE_UNUSED                  (0x1000U) /* unused mode */
/* APMn13 Specifies input/output mode of the corresponding pin (APMn13) */
#define _PORT_APMn13_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn13_MODE_INPUT                   (0x2000U) /* input mode (output buffer off) */
#define _PORT_APMn13_MODE_UNUSED                  (0x2000U) /* unused mode */
/* APMn14 Specifies input/output mode of the corresponding pin (APMn14) */
#define _PORT_APMn14_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn14_MODE_INPUT                   (0x4000U) /* input mode (output buffer off) */
#define _PORT_APMn14_MODE_UNUSED                  (0x4000U) /* unused mode */
/* APMn15 Specifies input/output mode of the corresponding pin (APMn15) */
#define _PORT_APMn15_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn15_MODE_INPUT                   (0x8000U) /* input mode (output buffer off) */
#define _PORT_APMn15_MODE_UNUSED                  (0x8000U) /* unused mode */

/*
    JTAG port mode register (JPMn)
*/
/* JPMn0 Specifies input/output mode of the corresponding pin (JPMn0) */
#define _PORT_JPMn0_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn0_MODE_INPUT                    (0x01U) /* input mode (output buffer off) */
#define _PORT_JPMn0_MODE_UNUSED                   (0x01U) /* unused mode */
/* JPMn1 Specifies input/output mode of the corresponding pin (JPMn1) */
#define _PORT_JPMn1_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn1_MODE_INPUT                    (0x02U) /* input mode (output buffer off) */
#define _PORT_JPMn1_MODE_UNUSED                   (0x02U) /* unused mode */
/* JPMn2 Specifies input/output mode of the corresponding pin (JPMn2) */
#define _PORT_JPMn2_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn2_MODE_INPUT                    (0x04U) /* input mode (output buffer off) */
#define _PORT_JPMn2_MODE_UNUSED                   (0x04U) /* unused mode */
/* JPMn3 Specifies input/output mode of the corresponding pin (JPMn3) */
#define _PORT_JPMn3_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn3_MODE_INPUT                    (0x08U) /* input mode (output buffer off) */
#define _PORT_JPMn3_MODE_UNUSED                   (0x08U) /* unused mode */
/* JPMn4 Specifies input/output mode of the corresponding pin (JPMn4) */
#define _PORT_JPMn4_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn4_MODE_INPUT                    (0x10U) /* input mode (output buffer off) */
#define _PORT_JPMn4_MODE_UNUSED                   (0x10U) /* unused mode */
/* JPMn5 Specifies input/output mode of the corresponding pin (JPMn5) */
#define _PORT_JPMn5_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn5_MODE_INPUT                    (0x20U) /* input mode (output buffer off) */
#define _PORT_JPMn5_MODE_UNUSED                   (0x20U) /* unused mode */
/* JPMn6 Specifies input/output mode of the corresponding pin (JPMn6) */
#define _PORT_JPMn6_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn6_MODE_INPUT                    (0x40U) /* input mode (output buffer off) */
#define _PORT_JPMn6_MODE_UNUSED                   (0x40U) /* unused mode */
/* JPMn7 Specifies input/output mode of the corresponding pin (JPMn7) */
#define _PORT_JPMn7_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn7_MODE_INPUT                    (0x80U) /* input mode (output buffer off) */
#define _PORT_JPMn7_MODE_UNUSED                   (0x80U) /* unused mode */

/*
    Port input buffer control register (PIBCn)
*/
/* PIBCn0 enable and disable the input buffer in input port mode. (PIBCn0) */
#define _PORT_PIBCn0_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn0_INPUT_BUFFER_ENABLE          (0x0001U) /* Input buffer is enabled. */
/* PIBCn1 enable and disable the input buffer in input port mode. (PIBCn1) */
#define _PORT_PIBCn1_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn1_INPUT_BUFFER_ENABLE          (0x0002U) /* Input buffer is enabled. */
/* PIBCn2 enable and disable the input buffer in input port mode. (PIBCn2) */
#define _PORT_PIBCn2_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn2_INPUT_BUFFER_ENABLE          (0x0004U) /* Input buffer is enabled. */
/* PIBCn3 enable and disable the input buffer in input port mode. (PIBCn3) */
#define _PORT_PIBCn3_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn3_INPUT_BUFFER_ENABLE          (0x0008U) /* Input buffer is enabled. */
/* PIBCn4 enable and disable the input buffer in input port mode. (PIBCn4) */
#define _PORT_PIBCn4_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn4_INPUT_BUFFER_ENABLE          (0x0010U) /* Input buffer is enabled. */
/* PIBCn5 enable and disable the input buffer in input port mode. (PIBCn5) */
#define _PORT_PIBCn5_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn5_INPUT_BUFFER_ENABLE          (0x0020U) /* Input buffer is enabled. */
/* PIBCn6 enable and disable the input buffer in input port mode. (PIBCn6) */
#define _PORT_PIBCn6_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn6_INPUT_BUFFER_ENABLE          (0x0040U) /* Input buffer is enabled. */
/* PIBCn7 enable and disable the input buffer in input port mode. (PIBCn7) */
#define _PORT_PIBCn7_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn7_INPUT_BUFFER_ENABLE          (0x0080U) /* Input buffer is enabled. */
/* PIBCn8 enable and disable the input buffer in input port mode. (PIBCn8) */
#define _PORT_PIBCn8_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn8_INPUT_BUFFER_ENABLE          (0x0100U) /* Input buffer is enabled. */
/* PIBCn9 enable and disable the input buffer in input port mode. (PIBCn9) */
#define _PORT_PIBCn9_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn9_INPUT_BUFFER_ENABLE          (0x0200U) /* Input buffer is enabled. */
/* PIBCn10 enable and disable the input buffer in input port mode. (PIBCn10) */
#define _PORT_PIBCn10_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn10_INPUT_BUFFER_ENABLE         (0x0400U) /* Input buffer is enabled. */
/* PIBCn11 enable and disable the input buffer in input port mode. (PIBCn11) */
#define _PORT_PIBCn11_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn11_INPUT_BUFFER_ENABLE         (0x0800U) /* Input buffer is enabled. */
/* PIBCn12 enable and disable the input buffer in input port mode. (PIBCn12) */
#define _PORT_PIBCn12_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn12_INPUT_BUFFER_ENABLE         (0x1000U) /* Input buffer is enabled. */
/* PIBCn13 enable and disable the input buffer in input port mode. (PIBCn13) */
#define _PORT_PIBCn13_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn13_INPUT_BUFFER_ENABLE         (0x2000U) /* Input buffer is enabled. */
/* PIBCn14 enable and disable the input buffer in input port mode. (PIBCn14) */
#define _PORT_PIBCn14_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn14_INPUT_BUFFER_ENABLE         (0x4000U) /* Input buffer is enabled. */
/* PIBCn15 enable and disable the input buffer in input port mode. (PIBCn15) */
#define _PORT_PIBCn15_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn15_INPUT_BUFFER_ENABLE         (0x8000U) /* Input buffer is enabled. */

/*
    Analog port input buffer control register (APIBCn)
*/
/* APIBCn0 enable and disable the input buffer in input port mode. (APIBCn0) */
#define _PORT_APIBCn0_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn0_INPUT_BUFFER_ENABLE         (0x0001U) /* Input buffer is enabled. */
/* APIBCn1 enable and disable the input buffer in input port mode. (APIBCn1) */
#define _PORT_APIBCn1_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn1_INPUT_BUFFER_ENABLE         (0x0002U) /* Input buffer is enabled. */
/* APIBCn2 enable and disable the input buffer in input port mode. (APIBCn2) */
#define _PORT_APIBCn2_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn2_INPUT_BUFFER_ENABLE         (0x0004U) /* Input buffer is enabled. */
/* APIBCn3 enable and disable the input buffer in input port mode. (APIBCn3) */
#define _PORT_APIBCn3_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn3_INPUT_BUFFER_ENABLE         (0x0008U) /* Input buffer is enabled. */
/* APIBCn4 enable and disable the input buffer in input port mode. (APIBCn4) */
#define _PORT_APIBCn4_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn4_INPUT_BUFFER_ENABLE         (0x0010U) /* Input buffer is enabled. */
/* APIBCn5 enable and disable the input buffer in input port mode. (APIBCn5) */
#define _PORT_APIBCn5_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn5_INPUT_BUFFER_ENABLE         (0x0020U) /* Input buffer is enabled. */
/* APIBCn6 enable and disable the input buffer in input port mode. (APIBCn6) */
#define _PORT_APIBCn6_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn6_INPUT_BUFFER_ENABLE         (0x0040U) /* Input buffer is enabled. */
/* APIBCn7 enable and disable the input buffer in input port mode. (APIBCn7) */
#define _PORT_APIBCn7_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn7_INPUT_BUFFER_ENABLE         (0x0080U) /* Input buffer is enabled. */
/* APIBCn8 enable and disable the input buffer in input port mode. (APIBCn8) */
#define _PORT_APIBCn8_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn8_INPUT_BUFFER_ENABLE         (0x0100U) /* Input buffer is enabled. */
/* APIBCn9 enable and disable the input buffer in input port mode. (APIBCn9) */
#define _PORT_APIBCn9_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn9_INPUT_BUFFER_ENABLE         (0x0200U) /* Input buffer is enabled. */
/* APIBCn10 enable and disable the input buffer in input port mode. (APIBCn10) */
#define _PORT_APIBCn10_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn10_INPUT_BUFFER_ENABLE        (0x0400U) /* Input buffer is enabled. */
/* APIBCn11 enable and disable the input buffer in input port mode. (APIBCn11) */
#define _PORT_APIBCn11_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn11_INPUT_BUFFER_ENABLE        (0x0800U) /* Input buffer is enabled. */
/* APIBCn12 enable and disable the input buffer in input port mode. (APIBCn12) */
#define _PORT_APIBCn12_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn12_INPUT_BUFFER_ENABLE        (0x1000U) /* Input buffer is enabled. */
/* APIBCn13 enable and disable the input buffer in input port mode. (APIBCn13) */
#define _PORT_APIBCn13_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn13_INPUT_BUFFER_ENABLE        (0x2000U) /* Input buffer is enabled. */
/* APIBCn14 enable and disable the input buffer in input port mode. (APIBCn14) */
#define _PORT_APIBCn14_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn14_INPUT_BUFFER_ENABLE        (0x4000U) /* Input buffer is enabled. */
/* APIBCn15 enable and disable the input buffer in input port mode. (APIBCn15) */
#define _PORT_APIBCn15_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn15_INPUT_BUFFER_ENABLE        (0x8000U) /* Input buffer is enabled. */

/*
    JTAG port input buffer control register (JPIBCn)
*/
/* JPIBCn0 enable and disable the input buffer in input port mode. (JPIBCn0) */
#define _PORT_JPIBCn0_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn0_INPUT_BUFFER_ENABLE         (0x01U) /* Input buffer is enabled. */
/* JPIBCn1 enable and disable the input buffer in input port mode. (JPIBCn1) */
#define _PORT_JPIBCn1_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn1_INPUT_BUFFER_ENABLE         (0x02U) /* Input buffer is enabled. */
/* JPIBCn2 enable and disable the input buffer in input port mode. (JPIBCn2) */
#define _PORT_JPIBCn2_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn2_INPUT_BUFFER_ENABLE         (0x04U) /* Input buffer is enabled. */
/* JPIBCn3 enable and disable the input buffer in input port mode. (JPIBCn3) */
#define _PORT_JPIBCn3_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn3_INPUT_BUFFER_ENABLE         (0x08U) /* Input buffer is enabled. */
/* JPIBCn4 enable and disable the input buffer in input port mode. (JPIBCn4) */
#define _PORT_JPIBCn4_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn4_INPUT_BUFFER_ENABLE         (0x10U) /* Input buffer is enabled. */
/* JPIBCn5 enable and disable the input buffer in input port mode. (JPIBCn5) */
#define _PORT_JPIBCn5_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn5_INPUT_BUFFER_ENABLE         (0x20U) /* Input buffer is enabled. */
/* JPIBCn6 enable and disable the input buffer in input port mode. (JPIBCn6) */
#define _PORT_JPIBCn6_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn6_INPUT_BUFFER_ENABLE         (0x40U) /* Input buffer is enabled. */
/* JPIBCn7 enable and disable the input buffer in input port mode. (JPIBCn7) */
#define _PORT_JPIBCn7_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn7_INPUT_BUFFER_ENABLE         (0x80U) /* Input buffer is enabled. */

/*
    Input port input buffer control register (IPIBCn)
*/
/* IPIBCn0 enable and disable the input buffer in input port mode. (IPIBCn0) */
#define _PORT_IPIBCn0_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn0_INPUT_BUFFER_ENABLE         (0x0001U) /* Input buffer is enabled. */
/* IPIBCn1 enable and disable the input buffer in input port mode. (IPIBCn1) */
#define _PORT_IPIBCn1_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn1_INPUT_BUFFER_ENABLE         (0x0002U) /* Input buffer is enabled. */
/* IPIBCn2 enable and disable the input buffer in input port mode. (IPIBCn2) */
#define _PORT_IPIBCn2_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn2_INPUT_BUFFER_ENABLE         (0x0004U) /* Input buffer is enabled. */
/* IPIBCn3 enable and disable the input buffer in input port mode. (IPIBCn3) */
#define _PORT_IPIBCn3_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn3_INPUT_BUFFER_ENABLE         (0x0008U) /* Input buffer is enabled. */
/* IPIBCn4 enable and disable the input buffer in input port mode. (IPIBCn4) */
#define _PORT_IPIBCn4_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn4_INPUT_BUFFER_ENABLE         (0x0010U) /* Input buffer is enabled. */
/* IPIBCn5 enable and disable the input buffer in input port mode. (IPIBCn5) */
#define _PORT_IPIBCn5_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn5_INPUT_BUFFER_ENABLE         (0x0020U) /* Input buffer is enabled. */
/* IPIBCn6 enable and disable the input buffer in input port mode. (IPIBCn6) */
#define _PORT_IPIBCn6_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn6_INPUT_BUFFER_ENABLE         (0x0040U) /* Input buffer is enabled. */
/* IPIBCn7 enable and disable the input buffer in input port mode. (IPIBCn7) */
#define _PORT_IPIBCn7_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn7_INPUT_BUFFER_ENABLE         (0x0080U) /* Input buffer is enabled. */
/* IPIBCn8 enable and disable the input buffer in input port mode. (IPIBCn8) */
#define _PORT_IPIBCn8_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn8_INPUT_BUFFER_ENABLE         (0x0100U) /* Input buffer is enabled. */
/* IPIBCn9 enable and disable the input buffer in input port mode. (IPIBCn9) */
#define _PORT_IPIBCn9_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn9_INPUT_BUFFER_ENABLE         (0x0200U) /* Input buffer is enabled. */
/* IPIBCn10 enable and disable the input buffer in input port mode. (IPIBCn10) */
#define _PORT_IPIBCn10_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn10_INPUT_BUFFER_ENABLE        (0x0400U) /* Input buffer is enabled. */
/* IPIBCn11 enable and disable the input buffer in input port mode. (IPIBCn11) */
#define _PORT_IPIBCn11_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn11_INPUT_BUFFER_ENABLE        (0x0800U) /* Input buffer is enabled. */
/* IPIBCn12 enable and disable the input buffer in input port mode. (IPIBCn12) */
#define _PORT_IPIBCn12_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn12_INPUT_BUFFER_ENABLE        (0x1000U) /* Input buffer is enabled. */
/* IPIBCn13 enable and disable the input buffer in input port mode. (IPIBCn13) */
#define _PORT_IPIBCn13_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn13_INPUT_BUFFER_ENABLE        (0x2000U) /* Input buffer is enabled. */
/* IPIBCn14 enable and disable the input buffer in input port mode. (IPIBCn14) */
#define _PORT_IPIBCn14_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn14_INPUT_BUFFER_ENABLE        (0x4000U) /* Input buffer is enabled. */
/* IPIBCn15 enable and disable the input buffer in input port mode. (IPIBCn15) */
#define _PORT_IPIBCn15_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_IPIBCn15_INPUT_BUFFER_ENABLE        (0x8000U) /* Input buffer is enabled. */

/*
    Port bidirection control register (PBDCn)
*/
/* PBDCn0 Enables/disables bidirectional mode of the corresponding pin (PBDCn0) */
#define _PORT_PBDCn0_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn0_MODE_ENABLE                  (0x0001U) /* Bidirectional mode enabled */
/* PBDCn1 Enables/disables bidirectional mode of the corresponding pin (PBDCn1) */
#define _PORT_PBDCn1_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn1_MODE_ENABLE                  (0x0002U) /* Bidirectional mode enabled */
/* PBDCn2 Enables/disables bidirectional mode of the corresponding pin (PBDCn2) */
#define _PORT_PBDCn2_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn2_MODE_ENABLE                  (0x0004U) /* Bidirectional mode enabled */
/* PBDCn3 Enables/disables bidirectional mode of the corresponding pin (PBDCn3) */
#define _PORT_PBDCn3_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn3_MODE_ENABLE                  (0x0008U) /* Bidirectional mode enabled */
/* PBDCn4 Enables/disables bidirectional mode of the corresponding pin (PBDCn4) */
#define _PORT_PBDCn4_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn4_MODE_ENABLE                  (0x0010U) /* Bidirectional mode enabled */
/* PBDCn5 Enables/disables bidirectional mode of the corresponding pin (PBDCn5) */
#define _PORT_PBDCn5_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn5_MODE_ENABLE                  (0x0020U) /* Bidirectional mode enabled */
/* PBDCn6 Enables/disables bidirectional mode of the corresponding pin (PBDCn6) */
#define _PORT_PBDCn6_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn6_MODE_ENABLE                  (0x0040U) /* Bidirectional mode enabled */
/* PBDCn7 Enables/disables bidirectional mode of the corresponding pin (PBDCn7) */
#define _PORT_PBDCn7_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn7_MODE_ENABLE                  (0x0080U) /* Bidirectional mode enabled */
/* PBDCn8 Enables/disables bidirectional mode of the corresponding pin (PBDCn8) */
#define _PORT_PBDCn8_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn8_MODE_ENABLE                  (0x0100U) /* Bidirectional mode enabled */
/* PBDCn9 Enables/disables bidirectional mode of the corresponding pin (PBDCn9) */
#define _PORT_PBDCn9_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn9_MODE_ENABLE                  (0x0200U) /* Bidirectional mode enabled */
/* PBDCn10 Enables/disables bidirectional mode of the corresponding pin (PBDCn10) */
#define _PORT_PBDCn10_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn10_MODE_ENABLE                 (0x0400U) /* Bidirectional mode enabled */
/* PBDCn11 Enables/disables bidirectional mode of the corresponding pin (PBDCn11) */
#define _PORT_PBDCn11_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn11_MODE_ENABLE                 (0x0800U) /* Bidirectional mode enabled */
/* PBDCn12 Enables/disables bidirectional mode of the corresponding pin (PBDCn12) */
#define _PORT_PBDCn12_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn12_MODE_ENABLE                 (0x1000U) /* Bidirectional mode enabled */
/* PBDCn13 Enables/disables bidirectional mode of the corresponding pin (PBDCn13) */
#define _PORT_PBDCn13_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn13_MODE_ENABLE                 (0x2000U) /* Bidirectional mode enabled */
/* PBDCn14 Enables/disables bidirectional mode of the corresponding pin (PBDCn14) */
#define _PORT_PBDCn14_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn14_MODE_ENABLE                 (0x4000U) /* Bidirectional mode enabled */
/* PBDCn15 Enables/disables bidirectional mode of the corresponding pin (PBDCn15) */
#define _PORT_PBDCn15_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn15_MODE_ENABLE                 (0x8000U) /* Bidirectional mode enabled */

/*
    Analog port bidirection control register (APBDCn)
*/
/* APBDCn0 Enables/disables bidirectional mode of the corresponding pin (APBDCn0) */
#define _PORT_APBDCn0_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn0_MODE_ENABLE                 (0x0001U) /* Bidirectional mode enabled */
/* APBDCn1 Enables/disables bidirectional mode of the corresponding pin (APBDCn1) */
#define _PORT_APBDCn1_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn1_MODE_ENABLE                 (0x0002U) /* Bidirectional mode enabled */
/* APBDCn2 Enables/disables bidirectional mode of the corresponding pin (APBDCn2) */
#define _PORT_APBDCn2_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn2_MODE_ENABLE                 (0x0004U) /* Bidirectional mode enabled */
/* APBDCn3 Enables/disables bidirectional mode of the corresponding pin (APBDCn3) */
#define _PORT_APBDCn3_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn3_MODE_ENABLE                 (0x0008U) /* Bidirectional mode enabled */
/* APBDCn4 Enables/disables bidirectional mode of the corresponding pin (APBDCn4) */
#define _PORT_APBDCn4_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn4_MODE_ENABLE                 (0x0010U) /* Bidirectional mode enabled */
/* APBDCn5 Enables/disables bidirectional mode of the corresponding pin (APBDCn5) */
#define _PORT_APBDCn5_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn5_MODE_ENABLE                 (0x0020U) /* Bidirectional mode enabled */
/* APBDCn6 Enables/disables bidirectional mode of the corresponding pin (APBDCn6) */
#define _PORT_APBDCn6_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn6_MODE_ENABLE                 (0x0040U) /* Bidirectional mode enabled */
/* APBDCn7 Enables/disables bidirectional mode of the corresponding pin (APBDCn7) */
#define _PORT_APBDCn7_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn7_MODE_ENABLE                 (0x0080U) /* Bidirectional mode enabled */
/* APBDCn8 Enables/disables bidirectional mode of the corresponding pin (APBDCn8) */
#define _PORT_APBDCn8_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn8_MODE_ENABLE                 (0x0100U) /* Bidirectional mode enabled */
/* APBDCn9 Enables/disables bidirectional mode of the corresponding pin (APBDCn9) */
#define _PORT_APBDCn9_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn9_MODE_ENABLE                 (0x0200U) /* Bidirectional mode enabled */
/* APBDCn10 Enables/disables bidirectional mode of the corresponding pin (APBDCn10) */
#define _PORT_APBDCn10_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn10_MODE_ENABLE                (0x0400U) /* Bidirectional mode enabled */
/* APBDCn11 Enables/disables bidirectional mode of the corresponding pin (APBDCn11) */
#define _PORT_APBDCn11_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn11_MODE_ENABLE                (0x0800U) /* Bidirectional mode enabled */
/* APBDCn12 Enables/disables bidirectional mode of the corresponding pin (APBDCn12) */
#define _PORT_APBDCn12_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn12_MODE_ENABLE                (0x1000U) /* Bidirectional mode enabled */
/* APBDCn13 Enables/disables bidirectional mode of the corresponding pin (APBDCn13) */
#define _PORT_APBDCn13_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn13_MODE_ENABLE                (0x2000U) /* Bidirectional mode enabled */
/* APBDCn14 Enables/disables bidirectional mode of the corresponding pin (APBDCn14) */
#define _PORT_APBDCn14_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn14_MODE_ENABLE                (0x4000U) /* Bidirectional mode enabled */
/* APBDCn15 Enables/disables bidirectional mode of the corresponding pin (APBDCn15) */
#define _PORT_APBDCn15_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn15_MODE_ENABLE                (0x8000U) /* Bidirectional mode enabled */

/*
    JTAG port bidirection control register (JPBDCn)
*/
/* JPBDCn0 Enables/disables bidirectional mode of the corresponding pin (JPBDCn0) */
#define _PORT_JPBDCn0_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn0_MODE_ENABLE                 (0x01U) /* Bidirectional mode enabled */
/* JPBDCn1 Enables/disables bidirectional mode of the corresponding pin (JPBDCn1) */
#define _PORT_JPBDCn1_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn1_MODE_ENABLE                 (0x02U) /* Bidirectional mode enabled */
/* JPBDCn2 Enables/disables bidirectional mode of the corresponding pin (JPBDCn2) */
#define _PORT_JPBDCn2_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn2_MODE_ENABLE                 (0x04U) /* Bidirectional mode enabled */
/* JPBDCn3 Enables/disables bidirectional mode of the corresponding pin (JPBDCn3) */
#define _PORT_JPBDCn3_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn3_MODE_ENABLE                 (0x08U) /* Bidirectional mode enabled */
/* JPBDCn4 Enables/disables bidirectional mode of the corresponding pin (JPBDCn4) */
#define _PORT_JPBDCn4_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn4_MODE_ENABLE                 (0x10U) /* Bidirectional mode enabled */
/* JPBDCn5 Enables/disables bidirectional mode of the corresponding pin (JPBDCn5) */
#define _PORT_JPBDCn5_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn5_MODE_ENABLE                 (0x20U) /* Bidirectional mode enabled */
/* JPBDCn6 Enables/disables bidirectional mode of the corresponding pin (JPBDCn6) */
#define _PORT_JPBDCn6_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn6_MODE_ENABLE                 (0x40U) /* Bidirectional mode enabled */
/* JPBDCn7 Enables/disables bidirectional mode of the corresponding pin (JPBDCn7) */
#define _PORT_JPBDCn7_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn7_MODE_ENABLE                 (0x80U) /* Bidirectional mode enabled */

/*
    Port register (Pn)
*/
/* Pn0 Sets the output level of pin Pn_m (Pn0) */
#define _PORT_Pn0_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn0_OUTPUT_HIGH                     (0x0001U) /* Outputs high level */
/* Pn1 Sets the output level of pin Pn_m (Pn1) */
#define _PORT_Pn1_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn1_OUTPUT_HIGH                     (0x0002U) /* Outputs high level */
/* Pn2 Sets the output level of pin Pn_m (Pn2) */
#define _PORT_Pn2_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn2_OUTPUT_HIGH                     (0x0004U) /* Outputs high level */
/* Pn3 Sets the output level of pin Pn_m (Pn3) */
#define _PORT_Pn3_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn3_OUTPUT_HIGH                     (0x0008U) /* Outputs high level */
/* Pn4 Sets the output level of pin Pn_m (Pn4) */
#define _PORT_Pn4_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn4_OUTPUT_HIGH                     (0x0010U) /* Outputs high level */
/* Pn5 Sets the output level of pin Pn_m (Pn5) */
#define _PORT_Pn5_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn5_OUTPUT_HIGH                     (0x0020U) /* Outputs high level */
/* Pn6 Sets the output level of pin Pn_m (Pn6) */
#define _PORT_Pn6_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn6_OUTPUT_HIGH                     (0x0040U) /* Outputs high level */
/* Pn7 Sets the output level of pin Pn_m (Pn7) */
#define _PORT_Pn7_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn7_OUTPUT_HIGH                     (0x0080U) /* Outputs high level */
/* Pn8 Sets the output level of pin Pn_m (Pn8) */
#define _PORT_Pn8_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn8_OUTPUT_HIGH                     (0x0100U) /* Outputs high level */
/* Pn9 Sets the output level of pin Pn_m (Pn9) */
#define _PORT_Pn9_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn9_OUTPUT_HIGH                     (0x0200U) /* Outputs high level */
/* Pn10 Sets the output level of pin Pn_m (Pn10) */
#define _PORT_Pn10_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn10_OUTPUT_HIGH                    (0x0400U) /* Outputs high level */
/* Pn11 Sets the output level of pin Pn_m (Pn11) */
#define _PORT_Pn11_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn11_OUTPUT_HIGH                    (0x0800U) /* Outputs high level */
/* Pn12 Sets the output level of pin Pn_m (Pn12) */
#define _PORT_Pn12_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn12_OUTPUT_HIGH                    (0x1000U) /* Outputs high level */
/* Pn13 Sets the output level of pin Pn_m (Pn13) */
#define _PORT_Pn13_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn13_OUTPUT_HIGH                    (0x2000U) /* Outputs high level */
/* Pn14 Sets the output level of pin Pn_m (Pn14) */
#define _PORT_Pn14_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn14_OUTPUT_HIGH                    (0x4000U) /* Outputs high level */
/* Pn15 Sets the output level of pin Pn_m (Pn15) */
#define _PORT_Pn15_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn15_OUTPUT_HIGH                    (0x8000U) /* Outputs high level */

/*
    Analog port register (APn)
*/
/* Pn0 Sets the output level of pin Pn_m (APn0) */
#define _PORT_APn0_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn0_OUTPUT_HIGH                    (0x0001U) /* Outputs high level */
/* Pn1 Sets the output level of pin Pn_m (APn1) */
#define _PORT_APn1_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn1_OUTPUT_HIGH                    (0x0002U) /* Outputs high level */
/* APn2 Sets the output level of pin Pn_m (APn2) */
#define _PORT_APn2_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn2_OUTPUT_HIGH                    (0x0004U) /* Outputs high level */
/* APn3 Sets the output level of pin Pn_m (APn3) */
#define _PORT_APn3_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn3_OUTPUT_HIGH                    (0x0008U) /* Outputs high level */
/* APn4 Sets the output level of pin Pn_m (APn4) */
#define _PORT_APn4_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn4_OUTPUT_HIGH                    (0x0010U) /* Outputs high level */
/* APn5 Sets the output level of pin Pn_m (APn5) */
#define _PORT_APn5_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn5_OUTPUT_HIGH                    (0x0020U) /* Outputs high level */
/* APn6 Sets the output level of pin Pn_m (APn6) */
#define _PORT_APn6_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn6_OUTPUT_HIGH                    (0x0040U) /* Outputs high level */
/* APn7 Sets the output level of pin Pn_m (APn7) */
#define _PORT_APn7_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn7_OUTPUT_HIGH                    (0x0080U) /* Outputs high level */
/* APn8 Sets the output level of pin Pn_m (APn8) */
#define _PORT_APn8_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn8_OUTPUT_HIGH                    (0x0100U) /* Outputs high level */
/* APn9 Sets the output level of pin Pn_m (APn9) */
#define _PORT_APn9_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn9_OUTPUT_HIGH                    (0x0200U) /* Outputs high level */
/* APn10 Sets the output level of pin Pn_m (APn10) */
#define _PORT_APn10_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn10_OUTPUT_HIGH                   (0x0400U) /* Outputs high level */
/* APn11 Sets the output level of pin Pn_m (APn11) */
#define _PORT_APn11_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn11_OUTPUT_HIGH                   (0x0800U) /* Outputs high level */
/* APn12 Sets the output level of pin Pn_m (APn12) */
#define _PORT_APn12_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn12_OUTPUT_HIGH                   (0x1000U) /* Outputs high level */
/* APn13 Sets the output level of pin Pn_m (APn13) */
#define _PORT_APn13_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn13_OUTPUT_HIGH                   (0x2000U) /* Outputs high level */
/* APn14 Sets the output level of pin Pn_m (APn14) */
#define _PORT_APn14_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn14_OUTPUT_HIGH                   (0x4000U) /* Outputs high level */
/* APn15 Sets the output level of pin Pn_m (APn15) */
#define _PORT_APn15_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn15_OUTPUT_HIGH                   (0x8000U) /* Outputs high level */

/*
    JTAG port register (JPn)
*/
/* Pn0 Sets the output level of pin Pn_m (JPn0) */
#define _PORT_JPn0_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn0_OUTPUT_HIGH                    (0x01U) /* Outputs high level */
/* Pn1 Sets the output level of pin Pn_m (JPn1) */
#define _PORT_JPn1_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn1_OUTPUT_HIGH                    (0x02U) /* Outputs high level */
/* JPn2 Sets the output level of pin Pn_m (JPn2) */
#define _PORT_JPn2_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn2_OUTPUT_HIGH                    (0x04U) /* Outputs high level */
/* JPn3 Sets the output level of pin Pn_m (JPn3) */
#define _PORT_JPn3_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn3_OUTPUT_HIGH                    (0x08U) /* Outputs high level */
/* JPn4 Sets the output level of pin Pn_m (JPn4) */
#define _PORT_JPn4_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn4_OUTPUT_HIGH                    (0x10U) /* Outputs high level */
/* JPn5 Sets the output level of pin Pn_m (JPn5) */
#define _PORT_JPn5_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn5_OUTPUT_HIGH                    (0x20U) /* Outputs high level */
/* JPn6 Sets the output level of pin Pn_m (JPn6) */
#define _PORT_JPn6_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn6_OUTPUT_HIGH                    (0x40U) /* Outputs high level */
/* JPn7 Sets the output level of pin Pn_m (JPn7) */
#define _PORT_JPn7_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn7_OUTPUT_HIGH                    (0x80U) /* Outputs high level */

/*
    Pull-up option register (PUn)
*/
/* PUn0 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn0) */
#define _PORT_PUn0_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn0_PULLUP_ON                      (0x0001U) /* An internal pull-up resistor connected */
/* PUn1 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn1) */
#define _PORT_PUn1_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn1_PULLUP_ON                      (0x0002U) /* An internal pull-up resistor connected */
/* PUn2 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn2) */
#define _PORT_PUn2_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn2_PULLUP_ON                      (0x0004U) /* An internal pull-up resistor connected */
/* PUn3 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn3) */
#define _PORT_PUn3_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn3_PULLUP_ON                      (0x0008U) /* An internal pull-up resistor connected */
/* PUn4 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn4) */
#define _PORT_PUn4_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn4_PULLUP_ON                      (0x0010U) /* An internal pull-up resistor connected */
/* PUn5 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn5) */
#define _PORT_PUn5_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn5_PULLUP_ON                      (0x0020U) /* An internal pull-up resistor connected */
/* PUn6 pin on-chip pull-up resistor selection (PUn6) */
#define _PORT_PUn6_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn6_PULLUP_ON                      (0x0040U) /* pull-up resistor connected */
/* PUn7 pin on-chip pull-up resistor selection (PUn7) */
#define _PORT_PUn7_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn7_PULLUP_ON                      (0x0080U) /* pull-up resistor connected */
/* PUn8 pin on-chip pull-up resistor selection (PUn8) */
#define _PORT_PUn8_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn8_PULLUP_ON                      (0x0100U) /* pull-up resistor connected */
/* PUn9 pin on-chip pull-up resistor selection (PUn9) */
#define _PORT_PUn9_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn9_PULLUP_ON                      (0x0200U) /* pull-up resistor connected */
/* PUn10 pin on-chip pull-up resistor selection (PUn10) */
#define _PORT_PUn10_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn10_PULLUP_ON                     (0x0400U) /* pull-up resistor connected */
/* PUn11 pin on-chip pull-up resistor selection (PUn11) */
#define _PORT_PUn11_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn11_PULLUP_ON                     (0x0800U) /* pull-up resistor connected */
/* PUn12 pin on-chip pull-up resistor selection (PUn12) */
#define _PORT_PUn12_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn12_PULLUP_ON                     (0x1000U) /* pull-up resistor connected */
/* PUn13 pin on-chip pull-up resistor selection (PUn13) */
#define _PORT_PUn13_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn13_PULLUP_ON                     (0x2000U) /* pull-up resistor connected */
/* PUn14 pin on-chip pull-up resistor selection (PUn14) */
#define _PORT_PUn14_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn14_PULLUP_ON                     (0x4000U) /* pull-up resistor connected */
/* PUn15 pin on-chip pull-up resistor selection (PUn15) */
#define _PORT_PUn15_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn15_PULLUP_ON                     (0x8000U) /* pull-up resistor connected */

/*
    Pull-up option register (JPUn)
*/
/* JPUn0 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn0) */
#define _PORT_JPUn0_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn0_PULLUP_ON                     (0x01U) /* An internal pull-up resistor connected */
/* JPUn1 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn1) */
#define _PORT_JPUn1_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn1_PULLUP_ON                     (0x02U) /* An internal pull-up resistor connected */
/* JPUn2 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn2) */
#define _PORT_JPUn2_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn2_PULLUP_ON                     (0x04U) /* An internal pull-up resistor connected */
/* JPUn3 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn3) */
#define _PORT_JPUn3_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn3_PULLUP_ON                     (0x08U) /* An internal pull-up resistor connected */
/* JPUn4 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn4) */
#define _PORT_JPUn4_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn4_PULLUP_ON                     (0x10U) /* An internal pull-up resistor connected */
/* JPUn5 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn5) */
#define _PORT_JPUn5_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn5_PULLUP_ON                     (0x20U) /* An internal pull-up resistor connected */
/* JPUn6 pin on-chip pull-up resistor selection (JPUn6) */
#define _PORT_JPUn6_PULLUP_OFF                    (0x00U) /* pull-up resistor not connected */
#define _PORT_JPUn6_PULLUP_ON                     (0x40U) /* pull-up resistor connected */
/* JPUn7 pin on-chip pull-up resistor selection (JPUn7) */
#define _PORT_JPUn7_PULLUP_OFF                    (0x00U) /* pull-up resistor not connected */
#define _PORT_JPUn7_PULLUP_ON                     (0x80U) /* pull-up resistor connected */

/*
    Pull-down option register (PDn)
*/
/* PDn0 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn0) */
#define _PORT_PDn0_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn0_PULLDOWN_ON                    (0x0001U) /* An internal pull-down resistor connected */
/* PDn1 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn1) */
#define _PORT_PDn1_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn1_PULLDOWN_ON                    (0x0002U) /* An internal pull-down resistor connected */
/* PDn2 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn2) */
#define _PORT_PDn2_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn2_PULLDOWN_ON                    (0x0004U) /* An internal pull-down resistor connected */
/* PDn3 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn3) */
#define _PORT_PDn3_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn3_PULLDOWN_ON                    (0x0008U) /* An internal pull-down resistor connected */
/* PDn4 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn4) */
#define _PORT_PDn4_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn4_PULLDOWN_ON                    (0x0010U) /* An internal pull-down resistor connected */
/* PDn5 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn5) */
#define _PORT_PDn5_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn5_PULLDOWN_ON                    (0x0020U) /* An internal pull-down resistor connected */
/* PDn6 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn6) */
#define _PORT_PDn6_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn6_PULLDOWN_ON                    (0x0040U) /* An internal pull-down resistor connected */
/* PDn7 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn7) */
#define _PORT_PDn7_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn7_PULLDOWN_ON                    (0x0080U) /* An internal pull-down resistor connected */
/* PDn8 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn8) */
#define _PORT_PDn8_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn8_PULLDOWN_ON                    (0x0100U) /* An internal pull-down resistor connected */
/* PDn9 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn9) */
#define _PORT_PDn9_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn9_PULLDOWN_ON                    (0x0200U) /* An internal pull-down resistor connected */
/* PDn10 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn10) */
#define _PORT_PDn10_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn10_PULLDOWN_ON                   (0x0400U) /* An internal pull-down resistor connected */
/* PDn11 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn11) */
#define _PORT_PDn11_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn11_PULLDOWN_ON                   (0x0800U) /* An internal pull-down resistor connected */
/* PDn12 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn12) */
#define _PORT_PDn12_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn12_PULLDOWN_ON                   (0x1000U) /* An internal pull-down resistor connected */
/* PDn13 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn13) */
#define _PORT_PDn13_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn13_PULLDOWN_ON                   (0x2000U) /* An internal pull-down resistor connected */
/* PDn14 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn14) */
#define _PORT_PDn14_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn14_PULLDOWN_ON                   (0x4000U) /* An internal pull-down resistor connected */
/* PDn15 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn15) */
#define _PORT_PDn15_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn15_PULLDOWN_ON                   (0x8000U) /* An internal pull-down resistor connected */

/*
    Pull-down option register (JPDn)
*/
/* JPDn0 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn0) */
#define _PORT_JPDn0_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn0_PULLDOWN_ON                   (0x01U) /* An internal pull-down resistor connected */
/* JPDn1 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn1) */
#define _PORT_JPDn1_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn1_PULLDOWN_ON                   (0x02U) /* An internal pull-down resistor connected */
/* JPDn2 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn2) */
#define _PORT_JPDn2_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn2_PULLDOWN_ON                   (0x04U) /* An internal pull-down resistor connected */
/* JPDn3 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn3) */
#define _PORT_JPDn3_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn3_PULLDOWN_ON                   (0x08U) /* An internal pull-down resistor connected */
/* JPDn4 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn4) */
#define _PORT_JPDn4_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn4_PULLDOWN_ON                   (0x10U) /* An internal pull-down resistor connected */
/* JPDn5 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn5) */
#define _PORT_JPDn5_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn5_PULLDOWN_ON                   (0x20U) /* An internal pull-down resistor connected */
/* JPDn6 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn6) */
#define _PORT_JPDn6_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn6_PULLDOWN_ON                   (0x40U) /* An internal pull-down resistor connected */
/* JPDn7 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn7) */
#define _PORT_JPDn7_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn7_PULLDOWN_ON                   (0x80U) /* An internal pull-down resistor connected */

/*
    Port drive strength control register (PDSCn)
*/
/* PDSCn0 Specifies the port drive strength of the output buffer of the port pin (PDSCn0) */
#define _PORT_PDSCn0_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn0_FAST_MODE_SELECT             (0x00000001UL) /* High drive strength */
/* PDSCn1 Specifies the port drive strength of the output buffer of the port pin (PDSCn1) */
#define _PORT_PDSCn1_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn1_FAST_MODE_SELECT             (0x00000002UL) /* High drive strength */
/* PDSCn2 Specifies the port drive strength of the output buffer of the port pin (PDSCn2) */
#define _PORT_PDSCn2_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn2_FAST_MODE_SELECT             (0x00000004UL) /* High drive strength */
/* PDSCn3 Specifies the port drive strength of the output buffer of the port pin (PDSCn3) */
#define _PORT_PDSCn3_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn3_FAST_MODE_SELECT             (0x00000008UL) /* High drive strength */
/* PDSCn4 Specifies the port drive strength of the output buffer of the port pin (PDSCn4) */
#define _PORT_PDSCn4_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn4_FAST_MODE_SELECT             (0x00000010UL) /* High drive strength */
/* PDSCn5 Specifies the port drive strength of the output buffer of the port pin (PDSCn5) */
#define _PORT_PDSCn5_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn5_FAST_MODE_SELECT             (0x00000020UL) /* High drive strength */
/* PDSCn6 Specifies the port drive strength of the output buffer of the port pin (PDSCn6) */
#define _PORT_PDSCn6_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn6_FAST_MODE_SELECT             (0x00000040UL) /* High drive strength */
/* PDSCn7 Specifies the port drive strength of the output buffer of the port pin (PDSCn7) */
#define _PORT_PDSCn7_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn7_FAST_MODE_SELECT             (0x00000080UL) /* High drive strength */
/* PDSCn8 Specifies the port drive strength of the output buffer of the port pin (PDSCn8) */
#define _PORT_PDSCn8_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn8_FAST_MODE_SELECT             (0x00000100UL) /* High drive strength */
/* PDSCn9 Specifies the port drive strength of the output buffer of the port pin (PDSCn9) */
#define _PORT_PDSCn9_SLOW_MODE_SELECT             (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn9_FAST_MODE_SELECT             (0x00000200UL) /* High drive strength */
/* PDSCn10 Specifies the port drive strength of the output buffer of the port pin (PDSCn10) */
#define _PORT_PDSCn10_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn10_FAST_MODE_SELECT            (0x00000400UL) /* High drive strength */
/* PDSCn11 Specifies the port drive strength of the output buffer of the port pin (PDSCn11) */
#define _PORT_PDSCn11_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn11_FAST_MODE_SELECT            (0x00000800UL) /* High drive strength */
/* PDSCn12 Specifies the port drive strength of the output buffer of the port pin (PDSCn12) */
#define _PORT_PDSCn12_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn12_FAST_MODE_SELECT            (0x00001000UL) /* High drive strength */
/* PDSCn13 Specifies the port drive strength of the output buffer of the port pin (PDSCn13) */
#define _PORT_PDSCn13_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn13_FAST_MODE_SELECT            (0x00002000UL) /* High drive strength */
/* PDSCn14 Specifies the port drive strength of the output buffer of the port pin (PDSCn14) */
#define _PORT_PDSCn14_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn14_FAST_MODE_SELECT            (0x00004000UL) /* High drive strength */
/* PDSCn15 Specifies the port drive strength of the output buffer of the port pin (PDSCn15) */
#define _PORT_PDSCn15_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_PDSCn15_FAST_MODE_SELECT            (0x00008000UL) /* High drive strength */

/*
    JTAG port drive strength control register (JPDSCn)
*/
/* JPDSCn0 Specifies the port drive strength of the output buffer of the port pin (JPDSCn0) */
#define _PORT_JPDSCn0_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn0_FAST_MODE_SELECT            (0x00000001UL) /* High drive strength */
/* JPDSCn1 Specifies the port drive strength of the output buffer of the port pin (JPDSCn1) */
#define _PORT_JPDSCn1_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn1_FAST_MODE_SELECT            (0x00000002UL) /* High drive strength */
/* JPDSCn2 Specifies the port drive strength of the output buffer of the port pin (JPDSCn2) */
#define _PORT_JPDSCn2_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn2_FAST_MODE_SELECT            (0x00000004UL) /* High drive strength */
/* JPDSCn3 Specifies the port drive strength of the output buffer of the port pin (JPDSCn3) */
#define _PORT_JPDSCn3_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn3_FAST_MODE_SELECT            (0x00000008UL) /* High drive strength */
/* JPDSCn4 Specifies the port drive strength of the output buffer of the port pin (JPDSCn4) */
#define _PORT_JPDSCn4_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn4_FAST_MODE_SELECT            (0x00000010UL) /* High drive strength */
/* JPDSCn5 Specifies the port drive strength of the output buffer of the port pin (JPDSCn5) */
#define _PORT_JPDSCn5_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn5_FAST_MODE_SELECT            (0x00000020UL) /* High drive strength */
/* JPDSCn6 Specifies the port drive strength of the output buffer of the port pin (JPDSCn6) */
#define _PORT_JPDSCn6_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn6_FAST_MODE_SELECT            (0x00000040UL) /* High drive strength */
/* JPDSCn7 Specifies the port drive strength of the output buffer of the port pin (JPDSCn7) */
#define _PORT_JPDSCn7_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn7_FAST_MODE_SELECT            (0x00000080UL) /* High drive strength */
/* JPDSCn8 Specifies the port drive strength of the output buffer of the port pin (JPDSCn8) */
#define _PORT_JPDSCn8_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn8_FAST_MODE_SELECT            (0x00000100UL) /* High drive strength */
/* JPDSCn9 Specifies the port drive strength of the output buffer of the port pin (JPDSCn9) */
#define _PORT_JPDSCn9_SLOW_MODE_SELECT            (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn9_FAST_MODE_SELECT            (0x00000200UL) /* High drive strength */
/* JPDSCn10 Specifies the port drive strength of the output buffer of the port pin (JPDSCn10) */
#define _PORT_JPDSCn10_SLOW_MODE_SELECT           (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn10_FAST_MODE_SELECT           (0x00000400UL) /* High drive strength */
/* JPDSCn11 Specifies the port drive strength of the output buffer of the port pin (JPDSCn11) */
#define _PORT_JPDSCn11_SLOW_MODE_SELECT           (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn11_FAST_MODE_SELECT           (0x00000800UL) /* High drive strength */
/* JPDSCn12 Specifies the port drive strength of the output buffer of the port pin (JPDSCn12) */
#define _PORT_JPDSCn12_SLOW_MODE_SELECT           (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn12_FAST_MODE_SELECT           (0x00001000UL) /* High drive strength */
/* JPDSCn13 Specifies the port drive strength of the output buffer of the port pin (JPDSCn13) */
#define _PORT_JPDSCn13_SLOW_MODE_SELECT           (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn13_FAST_MODE_SELECT           (0x00002000UL) /* High drive strength */
/* JPDSCn14 Specifies the port drive strength of the output buffer of the port pin (JPDSCn14) */
#define _PORT_JPDSCn14_SLOW_MODE_SELECT           (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn14_FAST_MODE_SELECT           (0x00004000UL) /* High drive strength */
/* JPDSCn15 Specifies the port drive strength of the output buffer of the port pin (JPDSCn15) */
#define _PORT_JPDSCn15_SLOW_MODE_SELECT           (0x00000000UL) /* Low drive strength */
#define _PORT_JPDSCn15_FAST_MODE_SELECT           (0x00008000UL) /* High drive strength */

/*
    Port open drain control register (PODCn)
*/
/* PODCn0 Specifies the output buffer function (PODCn0) */
#define _PORT_PODCn0_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn0_OPEN_DRAIN                   (0x00000001UL) /* Open-drain */
/* PODCn1 Specifies the output buffer function (PODCn1) */
#define _PORT_PODCn1_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn1_OPEN_DRAIN                   (0x00000002UL) /* Open-drain */
/* PODCn2 Specifies the output buffer function (PODCn2) */
#define _PORT_PODCn2_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn2_OPEN_DRAIN                   (0x00000004UL) /* Open-drain */
/* PODCn3 Specifies the output buffer function (PODCn3) */
#define _PORT_PODCn3_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn3_OPEN_DRAIN                   (0x00000008UL) /* Open-drain */
/* PODCn4 Specifies the output buffer function (PODCn4) */
#define _PORT_PODCn4_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn4_OPEN_DRAIN                   (0x00000010UL) /* Open-drain */
/* PODCn5 Specifies the output buffer function (PODCn5) */
#define _PORT_PODCn5_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn5_OPEN_DRAIN                   (0x00000020UL) /* Open-drain */
/* PODCn6 Specifies the output buffer function (PODCn6) */
#define _PORT_PODCn6_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn6_OPEN_DRAIN                   (0x00000040UL) /* Open-drain */
/* PODCn7 Specifies the output buffer function (PODCn7) */
#define _PORT_PODCn7_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn7_OPEN_DRAIN                   (0x00000080UL) /* Open-drain */
/* PODCn8 Specifies the output buffer function (PODCn8) */
#define _PORT_PODCn8_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn8_OPEN_DRAIN                   (0x00000100UL) /* Open-drain */
/* PODCn9 Specifies the output buffer function (PODCn9) */
#define _PORT_PODCn9_PUSH_PULL                    (0x00000000UL) /* Push-pull */
#define _PORT_PODCn9_OPEN_DRAIN                   (0x00000200UL) /* Open-drain */
/* PODCn10 Specifies the output buffer function (PODCn10) */
#define _PORT_PODCn10_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn10_OPEN_DRAIN                  (0x00000400UL) /* Open-drain */
/* PODCn11 Specifies the output buffer function (PODCn11) */
#define _PORT_PODCn11_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn11_OPEN_DRAIN                  (0x00000800UL) /* Open-drain */
/* PODCn12 Specifies the output buffer function (PODCn12) */
#define _PORT_PODCn12_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn12_OPEN_DRAIN                  (0x00001000UL) /* Open-drain */
/* PODCn13 Specifies the output buffer function (PODCn13) */
#define _PORT_PODCn13_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn13_OPEN_DRAIN                  (0x00002000UL) /* Open-drain */
/* PODCn14 Specifies the output buffer function (PODCn14) */
#define _PORT_PODCn14_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn14_OPEN_DRAIN                  (0x00004000UL) /* Open-drain */
/* PODCn15 Specifies the output buffer function (PODCn15) */
#define _PORT_PODCn15_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn15_OPEN_DRAIN                  (0x00008000UL) /* Open-drain */
/* PODCn16 Specifies the output buffer function (PODCn16) */
#define _PORT_PODCn16_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn16_OPEN_DRAIN                  (0x00010000UL) /* Open-drain */
/* PODCn17 Specifies the output buffer function (PODCn17) */
#define _PORT_PODCn17_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn17_OPEN_DRAIN                  (0x00020000UL) /* Open-drain */
/* PODCn18 Specifies the output buffer function (PODCn18) */
#define _PORT_PODCn18_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn18_OPEN_DRAIN                  (0x00040000UL) /* Open-drain */
/* PODCn19 Specifies the output buffer function (PODCn19) */
#define _PORT_PODCn19_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn19_OPEN_DRAIN                  (0x00080000UL) /* Open-drain */
/* PODCn20 Specifies the output buffer function (PODCn20) */
#define _PORT_PODCn20_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn20_OPEN_DRAIN                  (0x00100000UL) /* Open-drain */
/* PODCn21 Specifies the output buffer function (PODCn21) */
#define _PORT_PODCn21_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn21_OPEN_DRAIN                  (0x00200000UL) /* Open-drain */
/* PODCn22 Specifies the output buffer function (PODCn22) */
#define _PORT_PODCn22_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn22_OPEN_DRAIN                  (0x00400000UL) /* Open-drain */
/* PODCn23 Specifies the output buffer function (PODCn23) */
#define _PORT_PODCn23_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn23_OPEN_DRAIN                  (0x00800000UL) /* Open-drain */
/* PODCn24 Specifies the output buffer function (PODCn24) */
#define _PORT_PODCn24_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn24_OPEN_DRAIN                  (0x01000000UL) /* Open-drain */
/* PODCn25 Specifies the output buffer function (PODCn25) */
#define _PORT_PODCn25_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn25_OPEN_DRAIN                  (0x02000000UL) /* Open-drain */
/* PODCn26 Specifies the output buffer function (PODCn26) */
#define _PORT_PODCn26_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn26_OPEN_DRAIN                  (0x04000000UL) /* Open-drain */
/* PODCn27 Specifies the output buffer function (PODCn27) */
#define _PORT_PODCn27_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn27_OPEN_DRAIN                  (0x08000000UL) /* Open-drain */
/* PODCn28 Specifies the output buffer function (PODCn28) */
#define _PORT_PODCn28_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn28_OPEN_DRAIN                  (0x10000000UL) /* Open-drain */
/* PODCn29 Specifies the output buffer function (PODCn29) */
#define _PORT_PODCn29_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn29_OPEN_DRAIN                  (0x20000000UL) /* Open-drain */
/* PODCn30 Specifies the output buffer function (PODCn30) */
#define _PORT_PODCn30_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn30_OPEN_DRAIN                  (0x40000000UL) /* Open-drain */
/* PODCn31 Specifies the output buffer function (PODCn31) */
#define _PORT_PODCn31_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_PODCn31_OPEN_DRAIN                  (0x80000000UL) /* Open-drain */

/*
    JTAG port open drain control register (JPODCn)
*/
/* JPODCn0 Specifies the output buffer function (JPODCn0) */
#define _PORT_JPODCn0_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn0_OPEN_DRAIN                  (0x00000001UL) /* Open-drain */
/* JPODCn1 Specifies the output buffer function (JPODCn1) */
#define _PORT_JPODCn1_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn1_OPEN_DRAIN                  (0x00000002UL) /* Open-drain */
/* JPODCn2 Specifies the output buffer function (JPODCn2) */
#define _PORT_JPODCn2_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn2_OPEN_DRAIN                  (0x00000004UL) /* Open-drain */
/* JPODCn3 Specifies the output buffer function (JPODCn3) */
#define _PORT_JPODCn3_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn3_OPEN_DRAIN                  (0x00000008UL) /* Open-drain */
/* JPODCn4 Specifies the output buffer function (JPODCn4) */
#define _PORT_JPODCn4_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn4_OPEN_DRAIN                  (0x00000010UL) /* Open-drain */
/* JPODCn5 Specifies the output buffer function (JPODCn5) */
#define _PORT_JPODCn5_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn5_OPEN_DRAIN                  (0x00000020UL) /* Open-drain */
/* JPODCn6 Specifies the output buffer function (JPODCn6) */
#define _PORT_JPODCn6_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn6_OPEN_DRAIN                  (0x00000040UL) /* Open-drain */
/* JPODCn7 Specifies the output buffer function (JPODCn7) */
#define _PORT_JPODCn7_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn7_OPEN_DRAIN                  (0x00000080UL) /* Open-drain */
/* JPODCn8 Specifies the output buffer function (JPODCn8) */
#define _PORT_JPODCn8_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn8_OPEN_DRAIN                  (0x00000100UL) /* Open-drain */
/* JPODCn9 Specifies the output buffer function (JPODCn9) */
#define _PORT_JPODCn9_PUSH_PULL                   (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn9_OPEN_DRAIN                  (0x00000200UL) /* Open-drain */
/* JPODCn10 Specifies the output buffer function (JPODCn10) */
#define _PORT_JPODCn10_PUSH_PULL                  (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn10_OPEN_DRAIN                 (0x00000400UL) /* Open-drain */
/* JPODCn11 Specifies the output buffer function (JPODCn11) */
#define _PORT_JPODCn11_PUSH_PULL                  (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn11_OPEN_DRAIN                 (0x00000800UL) /* Open-drain */
/* JPODCn12 Specifies the output buffer function (JPODCn12) */
#define _PORT_JPODCn12_PUSH_PULL                  (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn12_OPEN_DRAIN                 (0x00001000UL) /* Open-drain */
/* JPODCn13 Specifies the output buffer function (JPODCn13) */
#define _PORT_JPODCn13_PUSH_PULL                  (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn13_OPEN_DRAIN                 (0x00002000UL) /* Open-drain */
/* JPODCn14 Specifies the output buffer function (JPODCn14) */
#define _PORT_JPODCn14_PUSH_PULL                  (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn14_OPEN_DRAIN                 (0x00004000UL) /* Open-drain */
/* JPODCn15 Specifies the output buffer function (JPODCn15) */
#define _PORT_JPODCn15_PUSH_PULL                  (0x00000000UL) /* Push-pull */
#define _PORT_JPODCn15_OPEN_DRAIN                 (0x00008000UL) /* Open-drain */

/*
    Port input buffer selection register (PISn)
*/
/* PISn0 Specifies the input buffer characteristic (PISn0) */
#define _PORT_PISn0_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn0_TYPE_SHMT4                    (0x0001U) /* Type 2 (SHMT4) */
/* PISn1 Specifies the input buffer characteristic (PISn1) */
#define _PORT_PISn1_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn1_TYPE_SHMT4                    (0x0002U) /* Type 2 (SHMT4) */
/* PISn2 Specifies the input buffer characteristic (PISn2) */
#define _PORT_PISn2_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn2_TYPE_SHMT4                    (0x0004U) /* Type 2 (SHMT4) */
/* PISn3 Specifies the input buffer characteristic (PISn3) */
#define _PORT_PISn3_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn3_TYPE_SHMT4                    (0x0008U) /* Type 2 (SHMT4) */
/* PISn4 Specifies the input buffer characteristic (PISn4) */
#define _PORT_PISn4_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn4_TYPE_SHMT4                    (0x0010U) /* Type 2 (SHMT4) */
/* PISn5 Specifies the input buffer characteristic (PISn5) */
#define _PORT_PISn5_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn5_TYPE_SHMT4                    (0x0020U) /* Type 2 (SHMT4) */
/* PISn6 Specifies the input buffer characteristic (PISn6) */
#define _PORT_PISn6_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn6_TYPE_SHMT4                    (0x0040U) /* Type 2 (SHMT4) */
/* PISn7 Specifies the input buffer characteristic (PISn7) */
#define _PORT_PISn7_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn7_TYPE_SHMT4                    (0x0080U) /* Type 2 (SHMT4) */
/* PISn8 Specifies the input buffer characteristic (PISn8) */
#define _PORT_PISn8_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn8_TYPE_SHMT4                    (0x0100U) /* Type 2 (SHMT4) */
/* PISn9 Specifies the input buffer characteristic (PISn9) */
#define _PORT_PISn9_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn9_TYPE_SHMT4                    (0x0200U) /* Type 2 (SHMT4) */
/* PISn10 Specifies the input buffer characteristic (PISn10) */
#define _PORT_PISn10_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn10_TYPE_SHMT4                   (0x0400U) /* Type 2 (SHMT4) */
/* PISn11 Specifies the input buffer characteristic (PISn11) */
#define _PORT_PISn11_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn11_TYPE_SHMT4                   (0x0800U) /* Type 2 (SHMT4) */
/* PISn12 Specifies the input buffer characteristic (PISn12) */
#define _PORT_PISn12_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn12_TYPE_SHMT4                   (0x1000U) /* Type 2 (SHMT4) */
/* PISn13 Specifies the input buffer characteristic (PISn13) */
#define _PORT_PISn13_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn13_TYPE_SHMT4                   (0x2000U) /* Type 2 (SHMT4) */
/* PISn14 Specifies the input buffer characteristic (PISn14) */
#define _PORT_PISn14_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn14_TYPE_SHMT4                   (0x4000U) /* Type 2 (SHMT4) */
/* PISn15 Specifies the input buffer characteristic (PISn15) */
#define _PORT_PISn15_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn15_TYPE_SHMT4                   (0x8000U) /* Type 2 (SHMT4) */

/*
    JTAG port input buffer selection register (JPISn)
*/
/* JPISn0 Specifies the input buffer characteristic (JPISn0) */
#define _PORT_JPISn0_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn0_TYPE_SHMT4                   (0x0001U) /* Type 2 (SHMT4) */
/* JPISn1 Specifies the input buffer characteristic (JPISn1) */
#define _PORT_JPISn1_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn1_TYPE_SHMT4                   (0x0002U) /* Type 2 (SHMT4) */
/* JPISn2 Specifies the input buffer characteristic (JPISn2) */
#define _PORT_JPISn2_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn2_TYPE_SHMT4                   (0x0004U) /* Type 2 (SHMT4) */
/* JPISn3 Specifies the input buffer characteristic (JPISn3) */
#define _PORT_JPISn3_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn3_TYPE_SHMT4                   (0x0008U) /* Type 2 (SHMT4) */
/* JPISn4 Specifies the input buffer characteristic (JPISn4) */
#define _PORT_JPISn4_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn4_TYPE_SHMT4                   (0x0010U) /* Type 2 (SHMT4) */
/* JPISn5 Specifies the input buffer characteristic (JPISn5) */
#define _PORT_JPISn5_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn5_TYPE_SHMT4                   (0x0020U) /* Type 2 (SHMT4) */
/* JPISn6 Specifies the input buffer characteristic (JPISn6) */
#define _PORT_JPISn6_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn6_TYPE_SHMT4                   (0x0040U) /* Type 2 (SHMT4) */
/* JPISn7 Specifies the input buffer characteristic (JPISn7) */
#define _PORT_JPISn7_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn7_TYPE_SHMT4                   (0x0080U) /* Type 2 (SHMT4) */
/* JPISn8 Specifies the input buffer characteristic (JPISn8) */
#define _PORT_JPISn8_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn8_TYPE_SHMT4                   (0x0100U) /* Type 2 (SHMT4) */
/* JPISn9 Specifies the input buffer characteristic (JPISn9) */
#define _PORT_JPISn9_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn9_TYPE_SHMT4                   (0x0200U) /* Type 2 (SHMT4) */
/* JPISn10 Specifies the input buffer characteristic (JPISn10) */
#define _PORT_JPISn10_TYPE_SHMT1                  (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn10_TYPE_SHMT4                  (0x0400U) /* Type 2 (SHMT4) */
/* JPISn11 Specifies the input buffer characteristic (JPISn11) */
#define _PORT_JPISn11_TYPE_SHMT1                  (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn11_TYPE_SHMT4                  (0x0800U) /* Type 2 (SHMT4) */
/* JPISn12 Specifies the input buffer characteristic (JPISn12) */
#define _PORT_JPISn12_TYPE_SHMT1                  (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn12_TYPE_SHMT4                  (0x1000U) /* Type 2 (SHMT4) */
/* JPISn13 Specifies the input buffer characteristic (JPISn13) */
#define _PORT_JPISn13_TYPE_SHMT1                  (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn13_TYPE_SHMT4                  (0x2000U) /* Type 2 (SHMT4) */
/* JPISn14 Specifies the input buffer characteristic (JPISn14) */
#define _PORT_JPISn14_TYPE_SHMT1                  (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn14_TYPE_SHMT4                  (0x4000U) /* Type 2 (SHMT4) */
/* JPISn15 Specifies the input buffer characteristic (JPISn15) */
#define _PORT_JPISn15_TYPE_SHMT1                  (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_JPISn15_TYPE_SHMT4                  (0x8000U) /* Type 2 (SHMT4) */

/*
    JTAG port input buffer selection advanced register (JPISAn)
*/
/* JPISAn0 Specifies the input buffer characteristic (JPISAn0) */
#define _PORT_JPISAn0_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn0_TYPE_TTL                    (0x01U) /* Type 5 (TTL) */
/* JPISAn1 Specifies the input buffer characteristic (JPISAn1) */
#define _PORT_JPISAn1_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn1_TYPE_TTL                    (0x02U) /* Type 5 (TTL) */
/* JPISAn2 Specifies the input buffer characteristic (JPISAn2) */
#define _PORT_JPISAn2_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn2_TYPE_TTL                    (0x04U) /* Type 5 (TTL) */
/* JPISAn3 Specifies the input buffer characteristic (JPISAn3) */
#define _PORT_JPISAn3_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn3_TYPE_TTL                    (0x08U) /* Type 5 (TTL) */
/* JPISAn4 Specifies the input buffer characteristic (JPISAn4) */
#define _PORT_JPISAn4_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn4_TYPE_TTL                    (0x10U) /* Type 5 (TTL) */
/* JPISAn5 Specifies the input buffer characteristic (JPISAn5) */
#define _PORT_JPISAn5_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn5_TYPE_TTL                    (0x20U) /* Type 5 (TTL) */
/* JPISAn6 Specifies the input buffer characteristic (JPISAn6) */
#define _PORT_JPISAn6_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn6_TYPE_TTL                    (0x40U) /* Type 5 (TTL) */
/* JPISAn7 Specifies the input buffer characteristic (JPISAn7) */
#define _PORT_JPISAn7_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn7_TYPE_TTL                    (0x80U) /* Type 5 (TTL) */

/*
    Port input buffer selection advanced register (PISAn)
*/
/* PISAn0 Specifies the input buffer characteristic (PISAn0) */
#define _PORT_PISAn0_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn0_TYPE_TTL                     (0x0001U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn1) */
#define _PORT_PISAn1_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn1_TYPE_TTL                     (0x0002U) /* Type 5 (TTL) */
/* PISAn2 Specifies the input buffer characteristic (PISAn2) */
#define _PORT_PISAn2_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn2_TYPE_TTL                     (0x0004U) /* Type 5 (TTL) */
/* PISAn3 Specifies the input buffer characteristic (PISAn3) */
#define _PORT_PISAn3_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn3_TYPE_TTL                     (0x0008U) /* Type 5 (TTL) */
/* PISAn4 Specifies the input buffer characteristic (PISAn4) */
#define _PORT_PISAn4_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn4_TYPE_TTL                     (0x0010U) /* Type 5 (TTL) */
/* PISAn5 Specifies the input buffer characteristic (PISAn5) */
#define _PORT_PISAn5_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn5_TYPE_TTL                     (0x0020U) /* Type 5 (TTL) */
/* PISAn6 Specifies the input buffer characteristic (PISAn6) */
#define _PORT_PISAn6_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn6_TYPE_TTL                     (0x0040U) /* Type 5 (TTL) */
/* PISAn7 Specifies the input buffer characteristic (PISAn7) */
#define _PORT_PISAn7_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn7_TYPE_TTL                     (0x0080U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn8) */
#define _PORT_PISAn8_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn8_TYPE_TTL                     (0x0100U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn9) */
#define _PORT_PISAn9_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn9_TYPE_TTL                     (0x0200U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn10) */
#define _PORT_PISAn10_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn10_TYPE_TTL                     (0x0400U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn11) */
#define _PORT_PISAn11_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn11_TYPE_TTL                     (0x0800U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn12) */
#define _PORT_PISAn12_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn12_TYPE_TTL                     (0x1000U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn13) */
#define _PORT_PISAn13_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn13_TYPE_TTL                     (0x2000U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn14) */
#define _PORT_PISAn14_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn14_TYPE_TTL                     (0x4000U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn15) */
#define _PORT_PISAn15_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn15_TYPE_TTL                     (0x8000U) /* Type 5 (TTL) */

#define _PORT_PM_INIT                             (0xFFFFU) /* Port mode init */
#define _PORT_JPM_INIT                            (0xFFU)   /* JTAG Port mode init */
#define _PORT_APM_INIT                            (0xFFFFU) /* Analog Port mode init */
#define _PORT_PMC_INIT                            (0x0000U) /* PMC init */
#define _PORT_JPMC_INIT                           (0x00U)   /* JTAG PMC init */
#define _PORT_PBDC_INIT                           (0x0000U) /* PBDC init */
#define _PORT_JPBDC_INIT                          (0x00U)   /* JTAG PBDC init */
#define _PORT_APBDC_INIT                          (0x0000U) /* Analog PBDC init */
#define _PORT_PIPC_INIT                           (0x0000U) /* PIPC init */
#define _PORT_PIBC_INIT                           (0x0000U) /* PIBC init */
#define _PORT_JPIBC_INIT                          (0x00U)   /* JTAG PIBC init */
#define _PORT_APIBC_INIT                          (0x0000U) /* Analog PIBC init */
#define _PORT_IPIBC_INIT                          (0x0000U) /* Input PIBC init */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
