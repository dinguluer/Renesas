;-- Functions used by scheduler (CS+ does not need external definition)
;--------------------------------------------------------------------------------
;--    EXTERN    vTaskSwitchContext
;--    EXTERN    vTaskSwitchContext
;--    EXTERN    xTaskIncrementTick

;-- Variables used by scheduler (CS+ does not need external definition)
;--------------------------------------------------------------------------------
;--    EXTERN    pxCurrentTCB
;--    EXTERN    usCriticalNesting

;-- Functions implemented in this file (CS+ does not need public definition)
;------------------------------------------------------------------------------
;--    PUBLIC    vPortYield
;--    PUBLIC    vPortStart



; ---------- extern symbols ---------------
.extern _usCriticalNesting
.extern _pxCurrentTCB
.extern _vTaskSwitchContext
.extern _xTaskIncrementTick

;------------------------------------------------------------------------------
;--  portSAVE_CONTEXT MACRO
;--  Saves the context of the remaining general purpose registers
;--  and the usCriticalNesting Value of the active Task onto the task stack
;--  saves stack pointer to the TCB
;------------------------------------------------------------------------------
portSAVE_CONTEXT .macro
    prepare r20,r21,r22,r23,r24,r25,r26,r27,r28,r29,r30,68,sp           ;-- save general purpose registers
    sst.w   r19,64[ep]                                                  ;-- #if Using the Small/Large data model
    sst.w   r18,60[ep]
    sst.w   r17,56[ep]
    sst.w   r16,52[ep]
    sst.w   r15,48[ep]
    sst.w   r14,44[ep]
    sst.w   r13,40[ep]
    sst.w   r12,36[ep]
    sst.w   r11,32[ep]
    sst.w   r10,28[ep]
    sst.w   r9,24[ep]
    sst.w   r8,20[ep]
    sst.w   r7,16[ep]
    sst.w   r6,12[ep]
    sst.w   r2,8[ep]
    sst.w   r1,4[ep]
    movhi   HIGHW1(#_usCriticalNesting),r0,r1    ;-- save usCriticalNesting value to stack
    ld.w    LOWW(#_usCriticalNesting)[r1],r2
    sst.w   r2,0[ep]
    movhi   HIGHW1(#_pxCurrentTCB),r0,r1         ;-- save SP to top of current TCB
    ld.w    LOWW(#_pxCurrentTCB)[r1],r2
    st.w    sp,0[r2]
.endm

;------------------------------------------------------------------------------
;--   portRESTORE_CONTEXT MACRO
;--   Gets stack pointer from the current TCB
;--   Restores the context of the usCriticalNesting value and general purpose
;--   registers of the selected task from the task stack
;------------------------------------------------------------------------------
portRESTORE_CONTEXT .macro
    movhi   HIGHW1(#_pxCurrentTCB),r0,r1         ;-- get Stackpointer address
    ld.w    LOWW(#_pxCurrentTCB)[r1],sp
    MOV     sp,r1
    ld.w    0[r1],sp                        ;-- load stackpointer
    MOV     sp,ep                           ;-- set stack pointer to element pointer
    sld.w   0[ep],r1                        ;-- load usCriticalNesting value from stack
    movhi   HIGHW1(#_usCriticalNesting),r0,r2
    st.w    r1,LOWW(#_usCriticalNesting)[r2]
    sld.w   4[ep],r1                        ;-- restore general purpose registers
    sld.w   8[ep],r2
    sld.w   12[ep],r6
    sld.w   16[ep],r7
    sld.w   20[ep],r8
    sld.w   24[ep],r9
    sld.w   28[ep],r10
    sld.w   32[ep],r11
    sld.w   36[ep],r12
    sld.w   40[ep],r13
    sld.w   44[ep],r14
    sld.w   48[ep],r15
    sld.w   52[ep],r16
    sld.w   56[ep],r17
    sld.w   60[ep],r18
    sld.w   64[ep],r19
    dispose 68,r20,r21,r22,r23,r24,r25,r26,r27,r28,r29,r30
    .endm
;------------------------------------------------------------------------------

;--------------------------- _trap_set function -------------------------------
        .section	".text", text
        .align	2
        .public  _trap_set
_trap_set:
        trap    0x00


;--------------------------- _vPortStart function -------------------------------
;--   Restore the context of the first task that is going to run.
;--
;--  Input:  NONE
;--
;--  Call:   CALL    vPortStart
;--
;--  Output: NONE
;-------------------------------------------------------------------------------
        .section	".text", text
        .align	2
        .public  _vPortStart
_vPortStart:
    portRESTORE_CONTEXT                     ;-- restore the context of whichever task the ...
    ld.w    0[sp],lp
    ldsr    lp,5                            ;-- restore PSW
    DI
    ld.w    4[sp],lp                        ;-- restore LP
    ld.w    8[sp],lp                        ;-- restore LP
    ADD     0x0C,sp                         ;-- set SP to right position
    EI
    jmp     [lp]

;--------------------------- _vPortYield function -------------------------------
;--  Port Yield function to check for a Task switch in the cooperative and
;--  preemptive mode
;--
;--  Input:  NONE
;--
;--  Call:   CALL    vPortYield
;--
;--  Output: NONE
;------------------------------------------------------------------------------
    .section	".text", text
    .align	2
    .public  _vPortYield
 _vPortYield:
    add     -0x0C,sp                        ;-- prepare stack to save necessary values
    st.w    lp,8[sp]                        ;-- store LP to stack
    stsr    0,r31
    st.w    lp,4[sp]                        ;-- store EIPC to stack
    stsr    1,lp
    st.w    lp,0[sp]                        ;-- store EIPSW to stack
    portSAVE_CONTEXT                        ;-- save the context of the current task.
    jarl    _vTaskSwitchContext,lp          ;-- call the scheduler.
    portRESTORE_CONTEXT                     ;-- Restore the context of whichever task the ...
                                            ;-- ... scheduler decided should run.
    ld.w    0[sp],lp                        ;-- restore EIPSW from stack
    ldsr    lp,1
    ld.w    4[sp],lp                        ;-- restore EIPC from stack
    ldsr    lp,0
    ld.w    8[sp],lp                        ;-- restore LP from stack
    add     0x0C,sp                         ;-- set SP to right position
    EIRET

;------------------------ ISR - OSTMTINT : r_Config_OSTM0_interrupt ------------------------------------------------------
; -- use preemptive kernel mode

    .section	".text", text
    .align	2
    .public  _r_Config_OSTM0_interrupt
  _r_Config_OSTM0_interrupt:

    add     -0x0C,sp                        ;-- prepare stack to save necessary values
    st.w    lp,8[sp]                        ;-- store LP to stack
    stsr    0,r31
    st.w    lp,4[sp]                        ;-- store EIPC to stack (SR2,0)
    stsr    1,lp
    st.w    lp,0[sp]                        ;-- store EIPSW to stack (SR3,0)
    portSAVE_CONTEXT                        ;-- save the context of the current task.

    jarl    _xTaskIncrementTick,lp          ;-- call the timer tick function.
    jarl    _vTaskSwitchContext,lp          ;-- call the scheduler.

    portRESTORE_CONTEXT                     ;-- Restore the context of whichever task the ...
                                            ;-- ... scheduler decided should run.
    ld.w    0[sp],lp                        ;-- restore EIPSW from stack(SR3,0)
    ldsr    lp,1
    ld.w    4[sp],lp                        ;-- restore EIPC from stack(SR2,0)
    ldsr    lp,0
    ld.w    8[sp],lp                        ;-- restore LP from stack
    add     0x0C,sp                         ;-- set SP to right position

    EIRET

;------------------------------------------------------------------------------
