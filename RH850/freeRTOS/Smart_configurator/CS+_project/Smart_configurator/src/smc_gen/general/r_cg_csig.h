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
* File Name    : r_cg_csig.h
* Version      : 1.0.1
* Device(s)    : R7F701690
* Description  : General header file for CSIG peripheral.
* Creation Date: 2020-10-14
***********************************************************************************************************************/
#ifndef CSIG_H
#define CSIG_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    CSIG Control Register 0 (CSIGnCTL0)
*/
/* Controls the operation clock (CSIGnPWR) */
#define _CSIG_OPERATION_CLOCK_STOP                (0x00U) /* Stops operation clock */
#define _CSIG_OPERATION_CLOCK_PROVIDE             (0x80U) /* Provides operation clock */
/* Permits or prohibits transmission (CSIGnTXE) */
#define _CSIG_TRANSMISSION_PROHIBIT               (0x00U) /* Prohibits transmission */
#define _CSIG_TRANSMISSION_PERMIT                 (0x40U) /* Permits transmission */
/* Permits or prohibits reception (CSIGnRXE) */
#define _CSIG_RECEPTION_PROHIBIT                  (0x00U) /* Prohibits reception */
#define _CSIG_RECEPTION_PERMIT                    (0x20U) /* Permits reception */
/* Enables direct access mode (CSIGnMBS) */
#define _CSIG_DIRECTACCESS                        (0x01U) /* Direct access mode */

/*
    CSIG Control Register 1 (CSIGnCTL1)
*/
/* CSIGnTSCK Clock Inverting Function (CSIGnCKR) */
#define _CSIG_CLOCK_INVERTING_HIGH                (0x00000000UL) /* Default of CSIGnTSCK is high level */
#define _CSIG_CLOCK_INVERTING_LOW                 (0x00020000UL) /* Default of CSIGnTSCK is low level */
/* Selects the timing of interrupt INT_CSIGTIC (CSIGnSLIT) */
#define _CSIG_INTERRUPT_TIMING_NORMAL             (0x00000000UL) /* Normal interrupt timing */
#define _CSIG_INTERRUPT_TIMING_TRANSFERRED        (0x00010000UL) /* an interrupt is generated when transfer */
/* Enables/disables data consistency check (CSIGnDCS) */
#define _CSIG_DATA_CONSISTENCY_CHECK_DISABLE      (0x00000000UL) /* Disables data consistency check */
#define _CSIG_DATA_CONSISTENCY_CHECK_ENABLE       (0x00000020UL) /* Enables data consistency check */
/* Controls loop-back mode (CSIGnLBM) */
#define _CSIG_LOOP_BACK_DEACTIVE                  (0x00000000UL) /* Deactivates loop-back mode */
#define _CSIG_LOOP_BACK_ACTIVE                    (0x00000008UL) /* Activates loop-back mode */
/* Selects interrupt delay mode (CSIGnSIT) */
#define _CSIG_NO_DELAY                            (0x00000000UL) /* No delay is generated */
#define _CSIG_HALF_CLOCK_DELAY                    (0x00000004UL) /* Half clock delay is generated for all interrupts */
/* Enables/disables handshake mode (CSIGnHSE) */
#define _CSIG_HANDSHAKE_DISABLE                   (0x00000000UL) /* Disables the handshake function */
#define _CSIG_HANDSHAKE_ENABLE                    (0x00000002UL) /* Enables the handshake function */
/* Enables/disables the slave select function (CSIGnSSE) */
#define _CSIG_SLAVE_SELECT_DISABLE                (0x00000000UL) /* Input signal CSIGnTSSI is ignored */
#define _CSIG_SLAVE_SELECT_ENABLE                 (0x00000001UL) /* Input signal CSIGnTSSI is recognized */

/*
    CSIG Status Register 0 (CSIGnSTR0)
*/
/* Data Consistency Check Error Flag (CSIGnDCE) */
#define _CSIG_CONSISTENCY_ERROR_UNDETECTED        (0x00000000UL) /* No data consistency check error detected */
#define _CSIG_CONSISTENCY_ERROR_DETECTED          (0x00000008UL) /* Data consistency check error detected */
/* Parity error flag (CSIGnPE) */
#define _CSIG_PARITY_ERROR_UNDETECTED             (0x00000000UL) /* No parity error is detected */
#define _CSIG_PARITY_ERROR_DETECTED               (0x00000002UL) /* Parity error is detected */
/* Overrun error flag (CSIGnOVE) */
#define _CSIG_OVERRUN_ERROR_UNDETECTED            (0x00000000UL) /* No overrun error is detected */
#define _CSIG_OVERRUN_ERROR_DETECTED              (0x00000001UL) /* Overrun error is detected */

/*
    CSIG Status Clear Register 0 (CSIGnSTCR0)
*/
/* Controls the data consistency error flag clear command (CSIGnDCEC) */
#define _CSIG_CONSISTENCY_ERROR_CLEAR             (0x0008U) /* Clears the data consistency error flag */
/* Controls the parity error flag clear command (CSIGnPEC) */
#define _CSIG_PARITY_ERROR_CLEAR                  (0x0002U) /* Clears the parity error flag */
/* Controls the overrun error flag clear command (CSIGnOVEC) */
#define _CSIG_OVERRUN_ERROR_CLEAR                 (0x0001U) /* Clears the overrun error flag */

/*
    CSIGn Rx-Only Mode Control Register 0 (CSIGnBCTL0)
*/
/* Disables/enables the start of the next data reception by reading CSIGnRX0 (CSIGnSCE) */
#define _CSIG_NEXT_RECEPTION_DISABLE              (0x0U) /* Next reception disabled */

/*
    CSIG Configuration Register 0 (CSIGnCFG0)
*/
/* Selects the parity for sending or receiving chip select signal m (CSIGnPS1,CSIGnPS0) */
#define _CSIG_PARITY_NO                           (0x00000000UL) /* No parity is expected */
#define _CSIG_PARITY_ZERO                         (0x10000000UL) /* Set parity is zero */
#define _CSIG_PARITY_ODD                          (0x20000000UL) /* Set parity is odd */
#define _CSIG_PARITY_EVEN                         (0x30000000UL) /* Set parity is even */
/* Selects the data length (CSIGnDLS3,CSIGnDLS2,CSIGnDLS1,CSIGnDLS0) */
#define _CSIG_DATA_LENGTH_16                      (0x00000000UL) /* Selects the data length 16 */
#define _CSIG_DATA_LENGTH_1                       (0x01000000UL) /* Selects the data length 1 */
#define _CSIG_DATA_LENGTH_2                       (0x02000000UL) /* Selects the data length 2 */
#define _CSIG_DATA_LENGTH_3                       (0x03000000UL) /* Selects the data length 3 */
#define _CSIG_DATA_LENGTH_4                       (0x04000000UL) /* Selects the data length 4 */
#define _CSIG_DATA_LENGTH_5                       (0x05000000UL) /* Selects the data length 5 */
#define _CSIG_DATA_LENGTH_6                       (0x06000000UL) /* Selects the data length 6 */
#define _CSIG_DATA_LENGTH_7                       (0x07000000UL) /* Selects the data length 7 */
#define _CSIG_DATA_LENGTH_8                       (0x08000000UL) /* Selects the data length 8 */
#define _CSIG_DATA_LENGTH_9                       (0x09000000UL) /* Selects the data length 9 */
#define _CSIG_DATA_LENGTH_10                      (0x0A000000UL) /* Selects the data length 10 */
#define _CSIG_DATA_LENGTH_11                      (0x0B000000UL) /* Selects the data length 11 */
#define _CSIG_DATA_LENGTH_12                      (0x0C000000UL) /* Selects the data length 12 */
#define _CSIG_DATA_LENGTH_13                      (0x0D000000UL) /* Selects the data length 13 */
#define _CSIG_DATA_LENGTH_14                      (0x0E000000UL) /* Selects the data length 14 */
#define _CSIG_DATA_LENGTH_15                      (0x0F000000UL) /* Selects the data length 15 */
/* Selects the serial data direction (CSIGnDIR) */
#define _CSIG_DATA_DIRECTION_MSB                  (0x00000000UL) /* Data is sent/received with MSB first */
#define _CSIG_DATA_DIRECTION_LSB                  (0x00040000UL) /* Data is sent/received with LSB first */
/* Clock and Data Phase Selection (CSIGnDAP) */
#define _CSIG_PHASE_SELECTION_TYPE1               (0x00000000UL) /* type1 */
#define _CSIG_PHASE_SELECTION_TYPE3               (0x00010000UL) /* type3 */
#define _CSIG_PHASE_SELECTION_TYPE2               (0x00000000UL) /* type2 */
#define _CSIG_PHASE_SELECTION_TYPE4               (0x00010000UL) /* type4 */

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
