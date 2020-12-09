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
* File Name    : r_cg_macrodriver.h
* Version      : 1.0.1
* Device(s)    : R7F701690
* Description  : Macro header file for code generation.
* Creation Date: 2020-10-14
***********************************************************************************************************************/
#ifndef MODULEID_H
#define MODULEID_H

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "iodefine.h"

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#ifndef __TYPEDEF__
#define DI()      __DI()
#define EI()      __EI()
#define HALT()    __halt()
#define NOP()     __nop()
#endif
/* Status list definition */
#define MD_STATUSBASE        (0x00U)
#define MD_OK                (MD_STATUSBASE + 0x00U) /* register setting OK */
#define MD_SPT               (MD_STATUSBASE + 0x01U) /* IIC stop */
#define MD_NACK              (MD_STATUSBASE + 0x02U) /* IIC no ACK */
#define MD_BUSY1             (MD_STATUSBASE + 0x03U) /* busy 1 */
#define MD_BUSY2             (MD_STATUSBASE + 0x04U) /* busy 2 */
#define MD_OVERRUN           (MD_STATUSBASE + 0x05U) /* IIC OVERRUN occur */
/* Error list definition */
#define MD_ERRORBASE         (0x80U)
#define MD_ERROR             (MD_ERRORBASE + 0x00U)  /* error */
#define MD_ARGERROR          (MD_ERRORBASE + 0x01U)  /* error argument input error */
#define MD_ERROR1            (MD_ERRORBASE + 0x02U)  /* error 1 */
#define MD_ERROR2            (MD_ERRORBASE + 0x03U)  /* error 2 */
#define MD_ERROR3            (MD_ERRORBASE + 0x04U)  /* error 3 */
#define MD_ERROR4            (MD_ERRORBASE + 0x05U)  /* error 4 */
#define MD_ERROR5            (MD_ERRORBASE + 0x06U)  /* error 5 */
/* Write protected macro definition */
#define _WRITE_PROTECT_COMMAND              (0x000000A5UL)  /* Write protected */
/* Interrupt request flag (RFxxx) */
#define _INT_REQUEST_NOT_OCCUR              (0x0U)  /* No interrupt request is made */
/* Interrupt mask (MKxxx) */   
#define _INT_PROCESSING_ENABLED             (0x0U)  /* Enables interrupt processing */
#define _INT_PROCESSING_DISABLED            (0x1U)  /* Disables interrupt processing */
/* Interrupt vector method select (TBxxx) */
#define _INT_DIRECT_VECTOR                  (0x0U)  /* Direct jumping to an address by the level of priority */
#define _INT_TABLE_VECTOR                   (0x1U)  /* Table reference */
/* Specify 16 interrupt priority levels (P3xxx,P2xxx,P1xxx,P0xxx) */
#define _INT_PRIORITY_HIGHEST               (0x00C0U)  /* Level 0 (highest) */
#define _INT_PRIORITY_LEVEL1                (0x00C1U)  /* Level 1 */
#define _INT_PRIORITY_LEVEL2                (0x00C2U)  /* Level 2 */
#define _INT_PRIORITY_LEVEL3                (0x00C3U)  /* Level 3 */
#define _INT_PRIORITY_LEVEL4                (0x00C4U)  /* Level 4 */
#define _INT_PRIORITY_LEVEL5                (0x00C5U)  /* Level 5 */
#define _INT_PRIORITY_LEVEL6                (0x00C6U)  /* Level 6 */
#define _INT_PRIORITY_LEVEL7                (0x00C7U)  /* Level 7 */
#define _INT_PRIORITY_LEVEL8                (0x00C8U)  /* Level 8 */
#define _INT_PRIORITY_LEVEL9                (0x00C9U)  /* Level 9 */
#define _INT_PRIORITY_LEVEL10               (0x00CAU)  /* Level 10 */
#define _INT_PRIORITY_LEVEL11               (0x00CBU)  /* Level 11 */
#define _INT_PRIORITY_LEVEL12               (0x00CCU)  /* Level 12 */
#define _INT_PRIORITY_LEVEL13               (0x00CDU)  /* Level 13 */
#define _INT_PRIORITY_LEVEL14               (0x00CEU)  /* Level 14 */
#define _INT_PRIORITY_LOWEST                (0x00CFU)  /* Level 15 (lowest) */
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
/* Specify PODCn register clear bits */
#define _PODC_CLEAR_BIT0                    (0xFFFFFFFEUL)  /* clear bit 0 */
#define _PODC_CLEAR_BIT1                    (0xFFFFFFFDUL)  /* clear bit 1 */
#define _PODC_CLEAR_BIT2                    (0xFFFFFFFBUL)  /* clear bit 2 */
#define _PODC_CLEAR_BIT3                    (0xFFFFFFF7UL)  /* clear bit 3 */
#define _PODC_CLEAR_BIT4                    (0xFFFFFFEFUL)  /* clear bit 4 */
#define _PODC_CLEAR_BIT5                    (0xFFFFFFDFUL)  /* clear bit 5 */
#define _PODC_CLEAR_BIT6                    (0xFFFFFFBFUL)  /* clear bit 6 */
#define _PODC_CLEAR_BIT7                    (0xFFFFFF7FUL)  /* clear bit 7 */
#define _PODC_CLEAR_BIT8                    (0xFFFFFEFFUL)  /* clear bit 8 */
#define _PODC_CLEAR_BIT9                    (0xFFFFFDFFUL)  /* clear bit 9 */
#define _PODC_CLEAR_BIT10                   (0xFFFFFBFFUL)  /* clear bit 10 */
#define _PODC_CLEAR_BIT11                   (0xFFFFF7FFUL)  /* clear bit 11 */
#define _PODC_CLEAR_BIT12                   (0xFFFFEFFFUL)  /* clear bit 12 */
#define _PODC_CLEAR_BIT13                   (0xFFFFDFFFUL)  /* clear bit 13 */
#define _PODC_CLEAR_BIT14                   (0xFFFFBFFFUL)  /* clear bit 14 */
#define _PODC_CLEAR_BIT15                   (0xFFFF7FFFUL)  /* clear bit 15 */
#define _PODC_CLEAR_BIT16                   (0xFFFEFFFFUL)  /* clear bit 16 */
#define _PODC_CLEAR_BIT17                   (0xFFFDFFFFUL)  /* clear bit 17 */
#define _PODC_CLEAR_BIT18                   (0xFFFBFFFFUL)  /* clear bit 18 */
#define _PODC_CLEAR_BIT19                   (0xFFF7FFFFUL)  /* clear bit 19 */
#define _PODC_CLEAR_BIT20                   (0xFFEFFFFFUL)  /* clear bit 20 */
#define _PODC_CLEAR_BIT21                   (0xFFDFFFFFUL)  /* clear bit 21 */
#define _PODC_CLEAR_BIT22                   (0xFFBFFFFFUL)  /* clear bit 22 */
#define _PODC_CLEAR_BIT23                   (0xFF7FFFFFUL)  /* clear bit 23 */
#define _PODC_CLEAR_BIT24                   (0xFEFFFFFFUL)  /* clear bit 24 */
#define _PODC_CLEAR_BIT25                   (0xFDFFFFFFUL)  /* clear bit 25 */
#define _PODC_CLEAR_BIT26                   (0xFBFFFFFFUL)  /* clear bit 26 */
#define _PODC_CLEAR_BIT27                   (0xF7FFFFFFUL)  /* clear bit 27 */
#define _PODC_CLEAR_BIT28                   (0xEFFFFFFFUL)  /* clear bit 28 */
#define _PODC_CLEAR_BIT29                   (0xDFFFFFFFUL)  /* clear bit 29 */
#define _PODC_CLEAR_BIT30                   (0xBFFFFFFFUL)  /* clear bit 30 */
#define _PODC_CLEAR_BIT31                   (0x7FFFFFFFUL)  /* clear bit 31 */
/* Specify PODCn register set bits */
#define _PODC_SET_BIT0                      (0x00000001UL)  /* set bit 0 */
#define _PODC_SET_BIT1                      (0x00000002UL)  /* set bit 1 */
#define _PODC_SET_BIT2                      (0x00000004UL)  /* set bit 2 */
#define _PODC_SET_BIT3                      (0x00000008UL)  /* set bit 3 */
#define _PODC_SET_BIT4                      (0x00000010UL)  /* set bit 4 */
#define _PODC_SET_BIT5                      (0x00000020UL)  /* set bit 5 */
#define _PODC_SET_BIT6                      (0x00000040UL)  /* set bit 6 */
#define _PODC_SET_BIT7                      (0x00000080UL)  /* set bit 7 */
#define _PODC_SET_BIT8                      (0x00000100UL)  /* set bit 8 */
#define _PODC_SET_BIT9                      (0x00000200UL)  /* set bit 9 */
#define _PODC_SET_BIT10                     (0x00000400UL)  /* set bit 10 */
#define _PODC_SET_BIT11                     (0x00000800UL)  /* set bit 11 */
#define _PODC_SET_BIT12                     (0x00001000UL)  /* set bit 12 */
#define _PODC_SET_BIT13                     (0x00002000UL)  /* set bit 13 */
#define _PODC_SET_BIT14                     (0x00004000UL)  /* set bit 14 */
#define _PODC_SET_BIT15                     (0x00008000UL)  /* set bit 15 */
#define _PODC_SET_BIT16                     (0x00010000UL)  /* set bit 16 */
#define _PODC_SET_BIT17                     (0x00020000UL)  /* set bit 17 */
#define _PODC_SET_BIT18                     (0x00040000UL)  /* set bit 18 */
#define _PODC_SET_BIT19                     (0x00080000UL)  /* set bit 19 */
#define _PODC_SET_BIT20                     (0x00100000UL)  /* set bit 20 */
#define _PODC_SET_BIT21                     (0x00200000UL)  /* set bit 21 */
#define _PODC_SET_BIT22                     (0x00400000UL)  /* set bit 22 */
#define _PODC_SET_BIT23                     (0x00800000UL)  /* set bit 23 */
#define _PODC_SET_BIT24                     (0x01000000UL)  /* set bit 24 */
#define _PODC_SET_BIT25                     (0x02000000UL)  /* set bit 25 */
#define _PODC_SET_BIT26                     (0x04000000UL)  /* set bit 26 */
#define _PODC_SET_BIT27                     (0x08000000UL)  /* set bit 27 */
#define _PODC_SET_BIT28                     (0x10000000UL)  /* set bit 28 */
#define _PODC_SET_BIT29                     (0x20000000UL)  /* set bit 29 */
#define _PODC_SET_BIT30                     (0x40000000UL)  /* set bit 30 */
#define _PODC_SET_BIT31                     (0x80000000UL)  /* set bit 31 */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/
#ifndef __TYPEDEF__
    typedef signed char           int8_t;
    typedef unsigned char         uint8_t;
    typedef signed short          int16_t;
    typedef unsigned short        uint16_t;
    typedef signed long           int32_t;
    typedef unsigned long         uint32_t;
    typedef signed long long      int64_t;
    typedef unsigned long long    uint64_t;
    typedef unsigned short        MD_STATUS;
    #define __TYPEDEF__
#endif

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Systeminit(void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
