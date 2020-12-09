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
* File Name    : r_cg_tauj.h
* Version      : 1.0.1
* Device(s)    : R7F701690
* Description  : General header file for TAUJ peripheral.
* Creation Date: 2020-10-14
***********************************************************************************************************************/
#ifndef TAUJ_H
#define TAUJ_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    TAUJTTINm Input Signal Selection Register (SELB_TAUJ0I)
*/
/* Selection of  channel3 input signal (SELB_TAUJ0I1,SELB_TAUJ0I3) */
#define _TAUJ0_CHANNEL3_INPUT_TAUJ0I3                   (0x00U) /* Port TAUJ0I3 */
#define _TAUJ0_CHANNEL3_INPUT_RTCA0OUT                  (0x02U) /* Timer Input-RTCA0OUT */
#define _TAUJ0_CHANNEL3_INPUT_TAUJ1OUT0                 (0x0AU) /* Timer Input-TAUJ1 TAUJTTOUT0*/
#define _TAUJ0_CHANNEL3_INPUT_CLEAR                     (0xF5U) /* Channel3 input clear */
/* Selection of  channel2 input signal (SELB_TAUJ0I0,SELB_TAUJ0I2) */
#define _TAUJ0_CHANNEL2_INPUT_TAUJ0I2                   (0x00U) /* Port TAUJ0I2 */
#define _TAUJ0_CHANNEL2_INPUT_RTCA0OUT                  (0x01U) /* Timer Input-RTCA0OUT */
#define _TAUJ0_CHANNEL2_INPUT_TAUJ1OUT0                 (0x05U) /* Timer Input-TAUJ1 TAUJTTOUT0*/
#define _TAUJ0_CHANNEL2_INPUT_CLEAR                     (0xFAU) /* Channel2 input clear */
/*
    TAUJTTINm Input Signal Selection Register (SELB_TAUJ2I)
*/
/* Selection of  channel3 input signal (SELB_TAUJ2I1) */
#define _TAUJ2_CHANNEL3_INPUT_TAUJ2I3                   (0xFDU) /* Port TAUJ2I3 */
#define _TAUJ2_CHANNEL3_INPUT_TAUJ3OUT0                 (0x02U) /* TAUJ3 TAUJTTOUT0*/
/* Selection of  channel2 input signal (SELB_TAUJ2I0) */
#define _TAUJ2_CHANNEL2_INPUT_TAUJ2I2                   (0xFEU) /* Port TAUJ2I2 */
#define _TAUJ2_CHANNEL2_INPUT_TAUJ3OUT0                 (0x01U) /* TAUJ3 TAUJTTOUT0*/

/*
    TAUJn Prescaler Clock Select Register (TAUJnTPS)
*/
/* Operating mode selection (TAUJnPRS3[3-0]) */
#define _TAUJ_CK3_PRE_PCLK_0                            (0x0000U) /* CK3_PRE - PCLK/2^0 */
#define _TAUJ_CK3_PRE_PCLK_1                            (0x1000U) /* CK3_PRE - PCLK/2^1 */
#define _TAUJ_CK3_PRE_PCLK_2                            (0x2000U) /* CK3_PRE - PCLK/2^2 */
#define _TAUJ_CK3_PRE_PCLK_3                            (0x3000U) /* CK3_PRE - PCLK/2^3 */
#define _TAUJ_CK3_PRE_PCLK_4                            (0x4000U) /* CK3_PRE - PCLK/2^4 */
#define _TAUJ_CK3_PRE_PCLK_5                            (0x5000U) /* CK3_PRE - PCLK/2^5 */
#define _TAUJ_CK3_PRE_PCLK_6                            (0x6000U) /* CK3_PRE - PCLK/2^6 */
#define _TAUJ_CK3_PRE_PCLK_7                            (0x7000U) /* CK3_PRE - PCLK/2^7 */
#define _TAUJ_CK3_PRE_PCLK_8                            (0x8000U) /* CK3_PRE - PCLK/2^8 */
#define _TAUJ_CK3_PRE_PCLK_9                            (0x9000U) /* CK3_PRE - PCLK/2^9 */
#define _TAUJ_CK3_PRE_PCLK_10                           (0xA000U) /* CK3_PRE - PCLK/2^10 */
#define _TAUJ_CK3_PRE_PCLK_11                           (0xB000U) /* CK3_PRE - PCLK/2^11 */
#define _TAUJ_CK3_PRE_PCLK_12                           (0xC000U) /* CK3_PRE - PCLK/2^12 */
#define _TAUJ_CK3_PRE_PCLK_13                           (0xD000U) /* CK3_PRE - PCLK/2^13 */
#define _TAUJ_CK3_PRE_PCLK_14                           (0xE000U) /* CK3_PRE - PCLK/2^14 */
#define _TAUJ_CK3_PRE_PCLK_15                           (0xF000U) /* CK3_PRE - PCLK/2^15 */
#define _TAUJ_CK3_PRS_CLEAR                             (0x0FFFU) /* CK30_PRE - clear */
/* Operating mode selection (TAUJnPRS2[3-0]) */
#define _TAUJ_CK2_PRE_PCLK_0                            (0x0000U) /* CK2_PRE - PCLK/2^0 */
#define _TAUJ_CK2_PRE_PCLK_1                            (0x0100U) /* CK2_PRE - PCLK/2^1 */
#define _TAUJ_CK2_PRE_PCLK_2                            (0x0200U) /* CK2_PRE - PCLK/2^2 */
#define _TAUJ_CK2_PRE_PCLK_3                            (0x0300U) /* CK2_PRE - PCLK/2^3 */
#define _TAUJ_CK2_PRE_PCLK_4                            (0x0400U) /* CK2_PRE - PCLK/2^4 */
#define _TAUJ_CK2_PRE_PCLK_5                            (0x0500U) /* CK2_PRE - PCLK/2^5 */
#define _TAUJ_CK2_PRE_PCLK_6                            (0x0600U) /* CK2_PRE - PCLK/2^6 */
#define _TAUJ_CK2_PRE_PCLK_7                            (0x0700U) /* CK2_PRE - PCLK/2^7 */
#define _TAUJ_CK2_PRE_PCLK_8                            (0x0800U) /* CK2_PRE - PCLK/2^8 */
#define _TAUJ_CK2_PRE_PCLK_9                            (0x0900U) /* CK2_PRE - PCLK/2^9 */
#define _TAUJ_CK2_PRE_PCLK_10                           (0x0A00U) /* CK2_PRE - PCLK/2^10 */
#define _TAUJ_CK2_PRE_PCLK_11                           (0x0B00U) /* CK2_PRE - PCLK/2^11 */
#define _TAUJ_CK2_PRE_PCLK_12                           (0x0C00U) /* CK2_PRE - PCLK/2^12 */
#define _TAUJ_CK2_PRE_PCLK_13                           (0x0D00U) /* CK2_PRE - PCLK/2^13 */
#define _TAUJ_CK2_PRE_PCLK_14                           (0x0E00U) /* CK2_PRE - PCLK/2^14 */
#define _TAUJ_CK2_PRE_PCLK_15                           (0x0F00U) /* CK2_PRE - PCLK/2^15 */
#define _TAUJ_CK2_PRS_CLEAR                             (0xF0FFU) /* CK2_PRE - clear */
/* Operating mode selection (TAUJnPRS1[3-0]) */
#define _TAUJ_CK1_PRE_PCLK_0                            (0x0000U) /* CK1_PRE - PCLK/2^0 */
#define _TAUJ_CK1_PRE_PCLK_1                            (0x0010U) /* CK1_PRE - PCLK/2^1 */
#define _TAUJ_CK1_PRE_PCLK_2                            (0x0020U) /* CK1_PRE - PCLK/2^2 */
#define _TAUJ_CK1_PRE_PCLK_3                            (0x0030U) /* CK1_PRE - PCLK/2^3 */
#define _TAUJ_CK1_PRE_PCLK_4                            (0x0040U) /* CK1_PRE - PCLK/2^4 */
#define _TAUJ_CK1_PRE_PCLK_5                            (0x0050U) /* CK1_PRE - PCLK/2^5 */
#define _TAUJ_CK1_PRE_PCLK_6                            (0x0060U) /* CK1_PRE - PCLK/2^6 */
#define _TAUJ_CK1_PRE_PCLK_7                            (0x0070U) /* CK1_PRE - PCLK/2^7 */
#define _TAUJ_CK1_PRE_PCLK_8                            (0x0080U) /* CK1_PRE - PCLK/2^8 */
#define _TAUJ_CK1_PRE_PCLK_9                            (0x0090U) /* CK1_PRE - PCLK/2^9 */
#define _TAUJ_CK1_PRE_PCLK_10                           (0x00A0U) /* CK1_PRE - PCLK/2^10 */
#define _TAUJ_CK1_PRE_PCLK_11                           (0x00B0U) /* CK1_PRE - PCLK/2^11 */
#define _TAUJ_CK1_PRE_PCLK_12                           (0x00C0U) /* CK1_PRE - PCLK/2^12 */
#define _TAUJ_CK1_PRE_PCLK_13                           (0x00D0U) /* CK1_PRE - PCLK/2^13 */
#define _TAUJ_CK1_PRE_PCLK_14                           (0x00E0U) /* CK1_PRE - PCLK/2^14 */
#define _TAUJ_CK1_PRE_PCLK_15                           (0x00F0U) /* CK1_PRE - PCLK/2^15 */
#define _TAUJ_CK1_PRS_CLEAR                             (0xFF0FU) /* CK1_PRE - clear */
/* Operating mode selection (TAUJnPRS0[3-0]) */
#define _TAUJ_CK0_PRE_PCLK_0                            (0x0000U) /* CK0_PRE - PCLK/2^0 */
#define _TAUJ_CK0_PRE_PCLK_1                            (0x0001U) /* CK0_PRE - PCLK/2^1 */
#define _TAUJ_CK0_PRE_PCLK_2                            (0x0002U) /* CK0_PRE - PCLK/2^2 */
#define _TAUJ_CK0_PRE_PCLK_3                            (0x0003U) /* CK0_PRE - PCLK/2^3 */
#define _TAUJ_CK0_PRE_PCLK_4                            (0x0004U) /* CK0_PRE - PCLK/2^4 */
#define _TAUJ_CK0_PRE_PCLK_5                            (0x0005U) /* CK0_PRE - PCLK/2^5 */
#define _TAUJ_CK0_PRE_PCLK_6                            (0x0006U) /* CK0_PRE - PCLK/2^6 */
#define _TAUJ_CK0_PRE_PCLK_7                            (0x0007U) /* CK0_PRE - PCLK/2^7 */
#define _TAUJ_CK0_PRE_PCLK_8                            (0x0008U) /* CK0_PRE - PCLK/2^8 */
#define _TAUJ_CK0_PRE_PCLK_9                            (0x0009U) /* CK0_PRE - PCLK/2^9 */
#define _TAUJ_CK0_PRE_PCLK_10                           (0x000AU) /* CK0_PRE - PCLK/2^10 */
#define _TAUJ_CK0_PRE_PCLK_11                           (0x000BU) /* CK0_PRE - PCLK/2^11 */
#define _TAUJ_CK0_PRE_PCLK_12                           (0x000CU) /* CK0_PRE - PCLK/2^12 */
#define _TAUJ_CK0_PRE_PCLK_13                           (0x000DU) /* CK0_PRE - PCLK/2^13 */
#define _TAUJ_CK0_PRE_PCLK_14                           (0x000EU) /* CK0_PRE - PCLK/2^14 */
#define _TAUJ_CK0_PRE_PCLK_15                           (0x000FU) /* CK0_PRE - PCLK/2^15 */
#define _TAUJ_CK0_PRS_CLEAR                             (0xFFF0U) /* CK0_PRE - clear */

/*
    TAUJm Channel Mode OS Register (TAUJmCMORn)
*/
/* Selection of operation clock (TAUJmCKS[1-0]) */
#define _TAUJ_SELECTION_CK0                             (0x0000U) /* CK0 */
#define _TAUJ_SELECTION_CK1                             (0x4000U) /* CK1 */
#define _TAUJ_SELECTION_CK2                             (0x8000U) /* CK2 */
#define _TAUJ_SELECTION_CK3                             (0xC000U) /* CK3 */
/* Selects a count clock for TAUJmCNTn counter (TAUJmCCS[1-0]) */
#define _TAUJ_COUNT_CLOCK_PCLK                          (0x0000U) /* Operation clock specified by TAUJmCMORn.TAUJmCKS[1:0] */
/* A mster channel or slave channel (TAUJmMAS) */
#define _TAUJ_INDEPENDENT_CHANNEL                       (0x0000U) /* Slave */
#define _TAUJ_SLAVE_CHANNEL                             (0x0000U) /* Slave */
#define _TAUJ_MASTER_CHANNEL                            (0x0800U) /* Master */
/* Selects an external start trigger (TAUJmSTS[2-0]) */
#define _TAUJ_START_TRIGGER_SOFTWARE                    (0x0000U) /* Software trigger */
#define _TAUJ_START_TRIGGER_VALID_EDGE                  (0x0100U) /* Valid edge of TAUJTTINn input signal */
#define _TAUJ_START_STOP_TRIGGER_VALID_EDGE             (0x0200U) /* Valid edge of TAUJTTINn input signal is used as a start trigger */
#define _TAUJ_START_TRIGGER_MASTER_INT                  (0x0400U) /* INT of master channel */
/* Specifies the timing for updating capture register (TAUJmCOS[1-0]) */
#define _TAUJ_OVERFLOW_AUTO_CLEAR                       (0x0000U) /* TAUJmCDRn update upon detection of edge of TAUJTTINm and TAUJnOVF update */
#define _TAUJ_OVERFLOW_MANUAL_CLEAR                     (0x0040U) /* TAUJmCDRn update upon detection of edge of TAUJTTINm and TAUJnOVF is set */
#define _TAUJ_OVERFLOW_COUNT_STOP                       (0x0080U) /* TAUJmCDRn update upon detection of edge of TAUJTTINm and TAUJnOVF is not set */
#define _TAUJ_OVERFLOW_COUNT_STOP_MANUAL_CLEAR          (0x00C0U) /* TAUJmCDRn update upon detection of edge of TAUJTTINm and TAUJnOVF is set */
/* Specifies an operating mode (TAUJmMD[3-0]) */
#define _TAUJ_INTERVAL_TIMER_MODE                       (0x0000U) /* Interval timer mode */
#define _TAUJ_CAPTURE_MODE                              (0x0004U) /* Capture mode */
#define _TAUJ_ONE_COUNT_MODE                            (0x0008U) /* One-count mode */
#define _TAUJ_CAPTURE_ONE_COUNT_MODE                    (0x000CU) /* Capture and one-count mode */
#define _TAUJ_COUNT_CAPTURE_MODE                        (0x0016U) /* Count capture mode  */
#define _TAUJ_GATE_COUNT_MODE                           (0x0018U) /* Gate count mode */
#define _TAUJ_CAPTURE_AND_GATE_COUNT_MODE               (0x001AU) /* Capture and gate count mode  */
/* Role of TAUJ0MD0 Bit (TAUJmMD0) */
#define _TAUJ_START_INT_NOT_GENERATED                   (0x0000U) /* INTTAUJ0Im is not generated */
#define _TAUJ_START_TRIGGER_DISABLE                     (0x0000U) /* Disables detection. */
#define _TAUJ_START_INT_GENERATED                       (0x0001U) /* INTTAUJ0Im is generated */
#define _TAUJ_START_TRIGGER_ENABLE                      (0x0001U) /* Enables detection. */

/*
    TAUJm Channel Mode User Register (TAUJmCMURn)
*/
/* Specifies a valid edge of TAUJTTINn input signal (TAUJmTIS[1-0]) */
#define _TAUJ_INPUT_EDGE_FALLING                        (0x00U) /* Falling edge */
#define _TAUJ_INPUT_EDGE_UNUSED                         (0x00U) /* Unused Falling edge */
#define _TAUJ_INPUT_EDGE_RISING                         (0x01U) /* Rising edge */
#define _TAUJ_INPUT_EDGE_BOTH_MEASURE_LOW               (0x02U) /* Detection of rising and falling edges (selects low width measurement) */
#define _TAUJ_INPUT_EDGE_BOTH_MEASURE_HIGH              (0x03U) /* Detection of rising and falling edges (selects high width measurement) */

/*
    TAUJm Channel Start Trigger Register (TAUJmTS)
*/
/* Enables the counter operation of channel 3 (TAUJmTS3) */
#define _TAUJ_CHANNEL3_COUNTER_START                    (0x08U) /* Enables the counter operation */
/* Enables the counter operation of channel 2 (TAUJmTS2) */
#define _TAUJ_CHANNEL2_COUNTER_START                    (0x04U) /* Enables the counter operation */
/* Enables the counter operation of channel 1 (TAUJmTS1) */
#define _TAUJ_CHANNEL1_COUNTER_START                    (0x02U) /* Enables the counter operation */
/* Enables the counter operation of channel 0 (TAUJmTS0) */
#define _TAUJ_CHANNEL0_COUNTER_START                    (0x01U) /* Enables the counter operation */

/*
    TAUJm Channel Stop Trigger Register (TAUJmTT)
*/
/* Stops the counter operation of channel 3 (TAUJmTT3) */
#define _TAUJ_CHANNEL3_COUNTER_STOP                     (0x08U) /* Stops the counter operation and resets TAUJmTE.TAUJmTEm */
/* Stops the counter operation of channel 2 (TAUJmTT2) */
#define _TAUJ_CHANNEL2_COUNTER_STOP                     (0x04U) /* Stops the counter operation and resets TAUJmTE.TAUJmTEm */
/* Stops the counter operation of channel 1 (TAUJmTT1) */
#define _TAUJ_CHANNEL1_COUNTER_STOP                     (0x02U) /* Stops the counter operation and resets TAUJmTE.TAUJmTEm */
/* Stops the counter operation of channel 0 (TAUJmTT0) */
#define _TAUJ_CHANNEL0_COUNTER_STOP                     (0x01U) /* Stops the counter operation and resets TAUJmTE.TAUJmTEm */

/*
    TAUJm Channel Output Enable Register (TAUJmTOE)
*/
/* Enables/disables the independent channel output function (TAUJmTOE3) */
#define _TAUJ_CHANNEL3_DISABLES_OUTPUT_MODE             (0xF7U) /* Disables the independent timer output function (controlled by software) */
#define _TAUJ_CHANNEL3_ENABLES_OUTPUT_MODE              (0x08U) /* Enables the independent timer output function */
/* Enables/disables the independent channel output function (TAUJmTOE2) */
#define _TAUJ_CHANNEL2_DISABLES_OUTPUT_MODE             (0xFBU) /* Disables the independent timer output function (controlled by software) */
#define _TAUJ_CHANNEL2_ENABLES_OUTPUT_MODE              (0x04U) /* Enables the independent timer output function */
/* Enables/disables the independent channel output function (TAUJmTOE1) */
#define _TAUJ_CHANNEL1_DISABLES_OUTPUT_MODE             (0xFDU) /* Disables the independent timer output function (controlled by software) */
#define _TAUJ_CHANNEL1_ENABLES_OUTPUT_MODE              (0x02U) /* Enables the independent timer output function */
/* Enables/disables the independent channel output function (TAUJmTOE0) */
#define _TAUJ_CHANNEL0_DISABLES_OUTPUT_MODE             (0xFEU) /* Disables the independent timer output function (controlled by software) */
#define _TAUJ_CHANNEL0_ENABLES_OUTPUT_MODE              (0x01U) /* Enables the independent timer output function */

/*
    TAUJm Channel Output Mode Register (TAUJmTOM)
*/
/* Specifies an output mode (TAUJmTOM3) */
#define _TAUJ_CHANNEL3_INDEPENDENT_OPERATION            (0xF7U) /* Independent channel operation */
#define _TAUJ_CHANNEL3_SYNCHRONOUS_OPERATION            (0x08U) /* Synchronous channel operation */
/* Specifies an output mode (TAUJmTOM2) */
#define _TAUJ_CHANNEL2_INDEPENDENT_OPERATION            (0xFBU) /* Independent channel operation */
#define _TAUJ_CHANNEL2_SYNCHRONOUS_OPERATION            (0x04U) /* Synchronous channel operation */
/* Specifies an output mode (TAUJmTOM1) */
#define _TAUJ_CHANNEL1_INDEPENDENT_OPERATION            (0xFDU) /* Independent channel operation */
#define _TAUJ_CHANNEL1_SYNCHRONOUS_OPERATION            (0x02U) /* Synchronous channel operation */
/* Specifies an output mode (TAUJmTOM0) */
#define _TAUJ_CHANNEL0_INDEPENDENT_OPERATION            (0xFEU) /* Independent channel operation */
#define _TAUJ_CHANNEL0_SYNCHRONOUS_OPERATION            (0x01U) /* Synchronous channel operation */

/*
    TAUJn Channel Output Configuration Register (TAUJnTOC)
*/
/* Specifies the output mode (TAUJnTOC3) */
#define _TAUJ_CHANNEL3_OPERATION_MODE1                  (0xF7U) /* Operation mode 1 */
/* Specifies the output mode (TAUJnTOC2) */
#define _TAUJ_CHANNEL2_OPERATION_MODE1                  (0xFBU) /* Operation mode 1 */
/* Specifies the output mode (TAUJnTOC1) */
#define _TAUJ_CHANNEL1_OPERATION_MODE1                  (0xFDU) /* Operation mode 1 */
/* Specifies the output mode (TAUJnTOC0) */
#define _TAUJ_CHANNEL0_OPERATION_MODE1                  (0xFEU) /* Operation mode 1 */

/*
    TAUJm Channel Output Level Register (TAUJmTOL)
*/
/* Specifies the output logic of channel 3 output bit (TAUJmTOL3) */
#define _TAUJ_CHANNEL3_POSITIVE_LOGIC                   (0xF7U) /* Positive logic */
#define _TAUJ_CHANNEL3_NEGATIVE_LOGIC                   (0x08U) /* Negative logic */
/* Specifies the output logic of channel 2 output bit (TAUJmTOL2) */
#define _TAUJ_CHANNEL2_POSITIVE_LOGIC                   (0xFBU) /* Positive logic */
#define _TAUJ_CHANNEL2_NEGATIVE_LOGIC                   (0x04U) /* Negative logic */
/* Specifies the output logic of channel 1 output bit (TAUJmTOL1) */
#define _TAUJ_CHANNEL1_POSITIVE_LOGIC                   (0xFDU) /* Positive logic */
#define _TAUJ_CHANNEL1_NEGATIVE_LOGIC                   (0x02U) /* Negative logic */
/* Specifies the output logic of channel 0 output bit (TAUJmTOL0) */
#define _TAUJ_CHANNEL0_POSITIVE_LOGIC                   (0xFEU) /* Positive logic */
#define _TAUJ_CHANNEL0_NEGATIVE_LOGIC                   (0x01U) /* Negative logic */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _TAUJ_OVERFLOW_OCCURS                               (0x01U)         /* Overflow occurs */
#define _TAUJ_OVERFLOW_VALUE                                (0x100000000ULL) /* Overflow value */
#define _TAUJ_FILTER_ENABLED                                (0x01U)         /* Digital Noise Elimination Enable Control */

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
