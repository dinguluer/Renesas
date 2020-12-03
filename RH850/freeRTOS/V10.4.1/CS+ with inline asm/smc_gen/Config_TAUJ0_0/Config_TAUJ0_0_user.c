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
* File Name    : Config_TAUJ0_0_user.c
* Version      : 1.1.0
* Device(s)    : R7F701690
* Description  : This file implements device driver for Config_TAUJ0_0.
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
#include "Config_TAUJ0_0.h"
/* Start user code for include. Do not edit comment generated here */
extern void portSAVE_CONTEXT(void);
extern void portRESTORE_CONTEXT(void);
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
unsigned int tauj_count = 0;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_TAUJ0_0_Create_UserInit
* Description  : This function adds user code after initializing the TAUJ00 channel
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAUJ0_0_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}
/***********************************************************************************************************************
* Function Name: r_Config_TAUJ0_0_interrupt
* Description  : This function is TAUJ00 interrupt service routine
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_TAUJ0_0_interrupt(enable=false, channel=80, fpu=true, callt=false)
//void r_Config_TAUJ0_0_interrupt_Handler(void)
void r_Config_TAUJ0_0_interrupt(void)
{
    /* Start user code for r_Config_TAUJ0_0_interrupt. Do not edit comment generated here */
    //portSAVE_CONTEXT();
    tauj_count++;
    NOP();
    //portRESTORE_CONTEXT();
    /* End user code. Do not edit comment generated here */
}

/*
#pragma inline_asm r_Config_TAUJ0_0_interrupt
//#pragma inline_asm MD_INTTM0EQ0
//void MD_INTTM0EQ0(void)
void r_Config_TAUJ0_0_interrupt(void)
{
    add     -0x0C,sp                          // prepare stack to save necessary values
    st.w    lp,8[sp]                        // store LP to stack
    stsr    0,r31
    st.w    lp,4[sp]                        // store EIPC to stack
    stsr    1,lp
    st.w    lp,0[sp]                        // store EIPSW to stack

    di

    jarl    _portSAVE_CONTEXT,lp                       // Save the context of the current task.
    jarl    _r_Config_TAUJ0_0_interrupt_Handler,lp           // Call the timer tick function.
    jarl    _portRESTORE_CONTEXT,lp                // Restore the context of whichever task the ...
                                    //... scheduler decided should run.
    ld.w    0[sp],lp                        // restore EIPSW from stack
    ldsr    lp,1


            // push R10 & R11 on stack
            push R10
            push R11
//            // push R10 & R11 on stack
////                add -0x04,sp
////                st.w r10,0x0[sp]
////                add -0x04,sp
////                st.w r11,0x0[sp]

                    stsr 1, r10, 0
                    mov  0x00010000, r11
                    or   r11, r10
                    ldsr r10, 1, 0
            // POP R10 & R11 from stack
            pop R11
            pop R10

    ld.w    4[sp],lp                        //restore EIPC from stack
    ldsr    lp,0
    ld.w    8[sp],lp                        // restore LP from stack
    add     0x0C,sp                         // set SP to right position

    ei

    EIRET

}*/
/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
