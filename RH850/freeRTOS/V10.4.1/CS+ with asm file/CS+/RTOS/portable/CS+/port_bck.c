/*
 * FreeRTOS Kernel V10.4.1
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * https://www.FreeRTOS.org
 * https://github.com/FreeRTOS
 *
 * 1 tab == 4 spaces!
 */

/* Standard includes. */
#include <stdlib.h>

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "Config_OSTM0.h"

//#define configDATA_MODE 1


extern void vPortStart(void);
void portSAVE_CONTEXT(void);
void portRESTORE_CONTEXT(void);
void trap_set(void);

/* Critical nesting should be initialised to a non zero value so interrupts don't
accidentally get enabled before the scheduler is started. */
#define portINITIAL_CRITICAL_NESTING  (( StackType_t ) 10)

/* The PSW value assigned to tasks when they start to run for the first time. */
#define portPSW		  (( StackType_t ) 0x00000000)

/* We require the address of the pxCurrentTCB variable, but don't want to know
any details of its type. */
typedef void TCB_t;
extern volatile TCB_t * volatile pxCurrentTCB;

/* Keeps track of the nesting level of critical sections. */
volatile StackType_t usCriticalNesting = portINITIAL_CRITICAL_NESTING;
/*-----------------------------------------------------------*/

/* Sets up the timer to generate the tick interrupt. */
static void prvSetupTimerInterrupt( void );

//BMS
///*-----------------------------------------------------------*/
//StackType_t * pxPortInitialiseStack(StackType_t * pxTopOfStack, TaskFunction_t pxCode, void * pvParameters)
//{
//    *pxTopOfStack = ( StackType_t )pxCode;               /* Task function start address */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )pxCode;               /* Task function start address */
//    pxTopOfStack--;
//    *pxTopOfStack = portPSW;                                /* Initial PSW value */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x20202020;           /* Initial Value of R20 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x21212121;           /* Initial Value of R21 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x22222222;           /* Initial Value of R22 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x23232323;           /* Initial Value of R23 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x24242424;           /* Initial Value of R24 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x25252525;           /* Initial Value of R25 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x26262626;           /* Initial Value of R26 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x27272727;           /* Initial Value of R27 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x28282828;           /* Initial Value of R28 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x29292929;           /* Initial Value of R29 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x30303030;           /* Initial Value of R30 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x19191919;           /* Initial Value of R19 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x18181818;           /* Initial Value of R18 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x17171717;           /* Initial Value of R17 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x16161616;           /* Initial Value of R16 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x15151515;           /* Initial Value of R15 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x14141414;           /* Initial Value of R14 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x13131313;           /* Initial Value of R13 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x12121212;           /* Initial Value of R12 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x11111111;           /* Initial Value of R11 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x10101010;           /* Initial Value of R10 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x99999999;           /* Initial Value of R09 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x88888888;           /* Initial Value of R08 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x77777777;           /* Initial Value of R07 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )pvParameters;           /* R6 is expected to hold the function parameter*/
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x22222222;           /* Initial Value of R02 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )0x11111111;          /* Initial Value of R01 */
//    pxTopOfStack--;
//    *pxTopOfStack = ( StackType_t )portNO_CRITICAL_SECTION_NESTING;

//    /*
//     * Return a pointer to the top of the stack we have generated so this can
//     * be stored in the task control block for the task.
//     */
//    return pxTopOfStack;
//}
///*-----------------------------------------------------------*/

/*-----------------------------------------------------------*/
StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters )
{
    *pxTopOfStack = ( StackType_t ) pxCode;          /* Task function start address */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) pxCode;          /* Task function start address */
    pxTopOfStack--;
    *pxTopOfStack = portPSW;                            /* Initial PSW value */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x20202020;      /* Initial Value of R20 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x21212121;      /* Initial Value of R21 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x22222222;      /* Initial Value of R22 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x23232323;      /* Initial Value of R23 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x24242424;      /* Initial Value of R24 */
    pxTopOfStack--;
//#if (__DATA_MODEL__ == 0) || (__DATA_MODEL__ == 1)
#if (configDATA_MODE == 1)
    *pxTopOfStack = ( StackType_t ) 0x25252525;      /* Initial Value of R25 */
    pxTopOfStack--;
#endif /* configDATA_MODE */
    *pxTopOfStack = ( StackType_t ) 0x26262626;      /* Initial Value of R26 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x27272727;      /* Initial Value of R27 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x28282828;      /* Initial Value of R28 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x29292929;      /* Initial Value of R29 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x30303030;      /* Initial Value of R30 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x19191919;      /* Initial Value of R19 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x18181818;      /* Initial Value of R18 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x17171717;      /* Initial Value of R17 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x16161616;      /* Initial Value of R16 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x15151515;      /* Initial Value of R15 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x14141414;      /* Initial Value of R14 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x13131313;      /* Initial Value of R13 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x12121212;      /* Initial Value of R12 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x11111111;      /* Initial Value of R11 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x10101010;      /* Initial Value of R10 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x99999999;      /* Initial Value of R09 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x88888888;      /* Initial Value of R08 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x77777777;      /* Initial Value of R07 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x66666666;      /* Initial Value of R06 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) 0x55555555;      /* Initial Value of R05 */
    pxTopOfStack--;
#if __DATA_MODEL__ == 0 || __DATA_MODEL__ == 1
    *pxTopOfStack = ( StackType_t ) 0x44444444;      /* Initial Value of R04 */
    pxTopOfStack--;
#endif /* configDATA_MODE */
    *pxTopOfStack = ( StackType_t ) 0x22222222;      /* Initial Value of R02 */
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) pvParameters;    /* R1 is expected to hold the function parameter*/
    pxTopOfStack--;
    *pxTopOfStack = ( StackType_t ) portNO_CRITICAL_SECTION_NESTING;

    /*
     * Return a pointer to the top of the stack we have generated so this can
     * be stored in the task control block for the task.
     */
    return pxTopOfStack;
}
///*-----------------------------------------------------------*/

BaseType_t xPortStartScheduler( void )
{
	/* Setup the hardware to generate the tick.  Interrupts are disabled when
	this function is called. */
	prvSetupTimerInterrupt();

	/* Restore the context of the first task that is going to run. */
	vPortStart();

	/* Should not get here as the tasks are now running! */
	return pdTRUE;
}
/*-----------------------------------------------------------*/

void vPortEndScheduler( void )
{
	/* It is unlikely that the V850ES/Fx3 port will get stopped.  If required simply
	disable the tick interrupt here. */
}
/*-----------------------------------------------------------*/

/*
 * Hardware initialisation to generate the RTOS tick.  This uses
 */
static void prvSetupTimerInterrupt( void )
{
#if 0	
	TM0CE     = 0;	/* TMM0 operation disable */
	TM0EQMK0  = 1;	/* INTTM0EQ0 interrupt disable */
	TM0EQIF0  = 0;	/* clear INTTM0EQ0 interrupt flag */

	#ifdef __IAR_V850ES_Fx3__
	{
		TM0CMP0   = (((configCPU_CLOCK_HZ / configTICK_RATE_HZ) / 2)-1);    /* divided by 2 because peripherals only run at CPU_CLOCK/2 */
	}
	#else
	{
		TM0CMP0   = (configCPU_CLOCK_HZ / configTICK_RATE_HZ);	
	}
	#endif

	TM0EQIC0 &= 0xF8;
	TM0CTL0   = 0x00;
	TM0EQIF0 =  0;	/* clear INTTM0EQ0 interrupt flag */
	TM0EQMK0 =  0;	/* INTTM0EQ0 interrupt enable */
	TM0CE =     1;	/* TMM0 operation enable */
#endif
//OSTM0.CMP = 0x1f40;// 1 ms
//OSTM0.CTL =0x01;// interval timer mode
//OSTM0.TS = 1;// start 
//INTC2.ICOSTM0.BIT.TBOSTM0 = 1;// direct vector method call based on interrupt priority 
//INTC2.ICOSTM0.UINT16 = 0x00C0U;// highest priority 
R_Config_OSTM0_Start();


}
/*-----------------------------------------------------------*/

//=========================================================


#pragma inline_asm trap_set
void trap_set(void)
{
    trap 0x00
}
#pragma inline_asm portSAVE_CONTEXT
void portSAVE_CONTEXT(void)
{
    //add     -0x0C,sp            //prepare stack to save necessary values
    //st.w    lp,8[sp]            //store LP to stack
   // stsr    0,r31,0
    //st.w    lp,4[sp]            //store EIPC to stack
    //stsr    1,lp,0
    //st.w    lp,0[sp]            //store EIPSW to stack
#if configDATA_MODE == 1                                        // Using the Tiny data model
    prepare r20,r21,r22,r23,r24,r25,r26,r27,r28,r29,r30,76,sp // save general purpose registers
    sst.w   r19,72[ep]
    sst.w   r18,68[ep]
    sst.w   r17,64[ep]
    sst.w   r16,60[ep]
    sst.w   r15,56[ep]
    sst.w   r14,52[ep]
    sst.w   r13,48[ep]
    sst.w   r12,44[ep]
    sst.w   r11,40[ep]
    sst.w   r10,36[ep]
    sst.w   r9,32[ep]
    sst.w   r8,28[ep]
    sst.w   r7,24[ep]
    sst.w   r6,20[ep]
    sst.w   r5,16[ep]
    sst.w   r4,12[ep]
#else                                                          // Using the Small/Large data model
    prepare r20,r21,r22,r23,r24,r26,r27,r28,r29,r30,72,sp     //save general purpose registers
    sst.w   r19,68[ep]
    sst.w   r18,64[ep]
    sst.w   r17,60[ep]
    sst.w   r16,56[ep]
    sst.w   r15,52[ep]
    sst.w   r14,48[ep]
    sst.w   r13,44[ep]
    sst.w   r12,40[ep]
    sst.w   r11,36[ep]
    sst.w   r10,32[ep]
    sst.w   r9,28[ep]
    sst.w   r8,24[ep]
    sst.w   r7,20[ep]
    sst.w   r6,16[ep]
    sst.w   r5,12[ep]
#endif /* configDATA_MODE */
    sst.w   r2,8[ep]
    sst.w   r1,4[ep]
    MOVHI   highw1(#_usCriticalNesting),r0,r1    //save usCriticalNesting value to stack
    ld.w    loww(#_usCriticalNesting)[r1],r2
    sst.w   r2,0[ep]
    MOVHI   highw1(#_pxCurrentTCB),r0,r1            // save SP to top of current TCB
    ld.w    loww(#_pxCurrentTCB)[r1],r2
    st.w    sp,0[r2]
}
/*-----------------------------------------------------------*/
#pragma inline_asm portRESTORE_CONTEXT
void portRESTORE_CONTEXT(void)
{
    MOVHI   highw1(#_pxCurrentTCB),r0,r1            // get Stackpointer address
    ld.w    loww(#_pxCurrentTCB)[r1],sp
    MOV     sp,r1
    ld.w    0[r1],sp                        // load stackpointer
    MOV     sp,ep                            // set stack pointer to element pointer
    sld.w   0[ep],r1                        // load usCriticalNesting value from stack
    MOVHI   highw1(#_usCriticalNesting),r0,r2
    st.w    r1,loww(#_usCriticalNesting)[r2]
    sld.w   4[ep],r1                        // restore general purpose registers
    sld.w   8[ep],r2
#if configDATA_MODE == 1                    //Using Tiny data model
    sld.w   12[ep],r4
    sld.w   16[ep],r5
    sld.w   20[ep],r6
    sld.w   24[ep],r7
    sld.w   28[ep],r8
    sld.w   32[ep],r9
    sld.w   36[ep],r10
    sld.w   40[ep],r11
    sld.w   44[ep],r12
    sld.w   48[ep],r13
    sld.w   52[ep],r14
    sld.w   56[ep],r15
    sld.w   60[ep],r16
    sld.w   64[ep],r17
    sld.w   68[ep],r18
    sld.w   72[ep],r19
    dispose 76,r20,r21,r22,r23,r24,r25,r26,r27,r28,r29,r30
#else                                        //Using Small/Large data model
    sld.w   12[ep],r5
    sld.w   16[ep],r6
    sld.w   20[ep],r7
    sld.w   24[ep],r8
    sld.w   28[ep],r9
    sld.w   32[ep],r10
    sld.w   36[ep],r11
    sld.w   40[ep],r12
    sld.w   44[ep],r13
    sld.w   48[ep],r14
    sld.w   52[ep],r15
    sld.w   56[ep],r16
    sld.w   60[ep],r17
    sld.w   64[ep],r18
    sld.w   68[ep],r19
    dispose 72,r20,r21,r22,r23,r24,r26,r27,r28,r29,r30
#endif /* configDATA_MODE */
    //ld.w    0[sp],lp                        //restore EIPSW from stack
    //ldsr    lp,1,0
    //ld.w    4[sp],lp                        //restore EIPC from stack
   // ldsr    lp,0,0
    //ld.w    8[sp],lp                        //restore LP from stack
    //add     0x0C,sp                        //set SP to right position
    //EIRET
}



#pragma inline_asm vPortStart
void vPortStart(void)
{
    jarl    _portRESTORE_CONTEXT,lp                        // Restore the context of whichever task the ...
    ld.w    0[sp],lp
    ldsr    lp,5                            //restore PSW
    DI
    ld.w    4[sp],lp                        //restore LP
    ld.w    8[sp],lp                        //restore LP
    ADD     0x0C,sp                        //set SP to right position
    EI
    jmp     [lp]
}


#pragma inline_asm vPortYield
void vPortYield(void)
{
    add     -0x0C,sp                          // prepare stack to save necessary values
    st.w    lp,8[sp]                        // store LP to stack
    stsr    0,r31
    st.w    lp,4[sp]                        // store EIPC to stack
    stsr    1,lp
    st.w    lp,0[sp]                        // store EIPSW to stack
    jarl    _portSAVE_CONTEXT,lp                    // Save the context of the current task.
    jarl    _vTaskSwitchContext,lp           // Call the scheduler.
    jarl    _portRESTORE_CONTEXT,lp                   //Restore the context of whichever task the ...
                                    // ... scheduler decided should run.
    ld.w    0[sp],lp                        // restore EIPSW from stack
    ldsr    lp,1
    ld.w    4[sp],lp                        // restore EIPC from stack
    ldsr    lp,0
    ld.w    8[sp],lp                        //restore LP from stack
    add     0x0C,sp                         // set SP to right position
    EIRET
}



//#pragma interrupt r_Config_OSTM0_interrupt(enable=false, channel=84, fpu=true, callt=false)
#pragma inline_asm r_Config_OSTM0_interrupt
//#pragma inline_asm MD_INTTM0EQ0
//void MD_INTTM0EQ0(void)
void r_Config_OSTM0_interrupt(void)
{
    add     -0x0C,sp                          // prepare stack to save necessary values
    st.w    lp,8[sp]                        // store LP to stack
    stsr    0,r31
    st.w    lp,4[sp]                        // store EIPC to stack
    stsr    1,lp
    st.w    lp,0[sp]                        // store EIPSW to stack
    jarl    _portSAVE_CONTEXT,lp                       // Save the context of the current task.
    jarl    _xTaskIncrementTick,lp           // Call the timer tick function.
    jarl    _vTaskSwitchContext,lp           // Call the scheduler.
    jarl    _portRESTORE_CONTEXT,lp                // Restore the context of whichever task the ...
                                    //... scheduler decided should run.
    ld.w    0[sp],lp                        // restore EIPSW from stack
    ldsr    lp,1
    ld.w    4[sp],lp                        //restore EIPC from stack
    ldsr    lp,0
    ld.w    8[sp],lp                        // restore LP from stack
    add     0x0C,sp                         // set SP to right position

    EIRET

}

//===============================================================


