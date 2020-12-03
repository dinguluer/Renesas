;   Copyright(c) 2013, 2016 Renesas Electronics Corporation
;   RENESAS ELECTRONICS CONFIDENTIAL AND PROPRIETARY.
;   This program must be used solely for the purpose for which
;   it was furnished by Renesas Electronics Corporation. No part of this
;   program may be reproduced or disclosed to others, in any
;   form, without the prior written permission of Renesas Electronics
;   Corporation.

;   NOTE       : THIS IS A TYPICAL EXAMPLE.
;   DATE       : Mon, Oct 24, 2016

        ; if using eiint as table reference method,
        ; enable next line's macro.

        USE_TABLE_REFERENCE_METHOD .set 1


;-----------------------------------------------------------------------------
;	exception vector table
;-----------------------------------------------------------------------------
        .section "RESET", text
        .align	512
        jr32	__start ; RESET

        .align	16
        syncp
        jr32	_Dummy ; SYSERR

        .align	16
        jr32	_Dummy

        .align	16
        jr32	_Dummy ; FETRAP

        .align	16
        jr32	_vPortYield ; TRAP0

        .align	16
        jr32	_Dummy_EI ; TRAP1

        .align	16
        jr32	_Dummy ; RIE

        .align	16
        syncp
        jr32	_Dummy_EI ; FPP/FPI

        .align	16
        jr32	_Dummy ; UCPOP

        .align	16
        jr32	_Dummy ; MIP/MDP

        .align	16
        jr32	_Dummy ; PIE

        .align	16
        jr32	_Dummy

        .align	16
        jr32	_Dummy ; MAE

        .align	16
        jr32	_Dummy

        .align	16
        syncp
        jr32	_Dummy ; FENMI

        .align	16
        syncp
        jr32	_Dummy ; FEINT

        .align	16
        syncp
        jr32	_r_Config_OSTM0_interrupt ;jr32	_MD_INTTM0EQ0 ; INTn(priority0)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority1)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority2)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority3)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority4)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority5)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority6)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority7)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority8)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority9)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority10)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority11)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority12)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority13)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority14)

        .align	16
        syncp
        jr32	_Dummy_EI ; INTn(priority15)


        .section "EIINTTBL", const
        .align	512
        .dw	#_Dummy_EI ; INT0
        .dw	#_Dummy_EI ; INT1
        .dw	#_Dummy_EI ; INT2
        .dw	#_Dummy_EI	;3
        .dw	#_Dummy_EI	;4
        .dw	#_Dummy_EI	;5
        .dw	#_Dummy_EI	;6
        .dw	#_Dummy_EI	;7
        .dw	#_Dummy_EI	;8
        .dw	#_Dummy_EI	;9
        .dw	#_Dummy_EI	;10
        .dw	#_Dummy_EI	;11
        .dw	#_Dummy_EI	;12
        .dw	#_Dummy_EI	;13
        .dw	#_Dummy_EI	;14
        .dw	#_Dummy_EI	;15
        .dw	#_Dummy_EI	;16
        .dw	#_Dummy_EI	;17
        .dw	#_Dummy_EI	;18
        ;.dw	#_r_Config_ADCA0_scan_group1_end_interrupt	;18
        .dw	#_Dummy_EI	;19
        .dw	#_Dummy_EI	;20
        .dw	#_Dummy_EI	;21
        .dw	#_Dummy_EI	;22
        .dw	#_Dummy_EI	;23
        .dw	#_Dummy_EI	;24
        .dw	#_Dummy_EI	;25
        .dw	#_Dummy_EI	;26
        .dw	#_Dummy_EI	;27
        .dw	#_Dummy_EI	;28
        ;.dw	#_r_Config_CSIG0_interrupt_send	;27
        ;.dw	#_r_Config_CSIG0_interrupt_receive	;28
        .dw	#_Dummy_EI	;29
        .dw	#_Dummy_EI	;30
        .dw	#_Dummy_EI	;31
        .dw	#_Dummy_EI	;32
        .dw	#_Dummy_EI	;33
        .dw	#_Dummy_EI	;34
        .dw	#_Dummy_EI	;35
        .dw	#_Dummy_EI	;36
        ;.dw	#_r_Config_UART0_interrupt_send	;34
        ;.dw	#_r_Config_UART0_interrupt_receive	;35
        ;.dw	#_r_Config_UART0_interrupt_error	;36
        .dw	#_Dummy_EI	;37
        .dw	#_Dummy_EI	;38
        .dw	#_Dummy_EI	;39
        .dw	#_Dummy_EI	;40
        ;.dw	#_r_Config_INTC_intp2_interrupt	;39
        ;.dw	#_r_Config_WDT0_interrupt	;40
        .dw	#_Dummy_EI	;41
        .dw	#_Dummy_EI	;42
        .dw	#_Dummy_EI	;43
        .dw	#_Dummy_EI	;44
        .dw	#_Dummy_EI	;45
        ;.dw	#_r_Config_INTC_intp4_interrupt	;44
        ;.dw	#_r_Config_INTC_intp5_interrupt	;45
        .dw	#_Dummy_EI	;46
        .dw	#_Dummy_EI	;47
        .dw	#_Dummy_EI	;48
        .dw	#_Dummy_EI	;49
        .dw	#_Dummy_EI	;50
        .dw	#_Dummy_EI 	;51
        .dw	#_Dummy_EI 	;52
        .dw	#_Dummy_EI 	;53
        .dw	#_Dummy_EI	;54
        .dw	#_Dummy_EI	;55
        .dw	#_Dummy_EI	;56
        .dw	#_Dummy_EI	;57
        ;.dw	#_r_Config_ADCA0_error_interrupt	;56
        ;.dw	#_r_Config_CSIG0_interrupt_error	;57
        .dw	#_Dummy_EI	;58
        .dw	#_Dummy_EI	;59
        .dw	#_Dummy_EI	;60
        .dw	#_Dummy_EI	;61
        .dw	#_Dummy_EI	;62
        .dw	#_Dummy_EI	;63
        .dw	#_Dummy_EI	;64
        .dw	#_Dummy_EI	;65
        .dw	#_Dummy_EI	;66
        .dw	#_Dummy_EI	;67
        .dw	#_Dummy_EI	;68
        .dw	#_Dummy_EI	;69
        .dw	#_Dummy_EI	;70
        .dw	#_Dummy_EI	;71
        .dw	#_Dummy_EI	;72
        .dw	#_Dummy_EI	;73
        .dw	#_Dummy_EI	;74
        .dw	#_Dummy_EI	;75
        .dw	#_Dummy_EI	;76
        .dw	#_Dummy_EI	;77
        .dw	#_Dummy_EI	;78
        .dw	#_Dummy_EI	;79
        ;.dw	#_Dummy_EI	;80
        ;.dw	#_r_Config_RIIC0_transmit_interrupt	;76
        ;.dw	#_r_Config_RIIC0_error_interrupt	;77
        ;.dw	#_r_Config_RIIC0_receive_interrupt	;78
        ;.dw	#_r_Config_RIIC0_transmitend_interrupt	;79
        .dw	#_r_Config_TAUJ0_0_interrupt	;80
        .dw	#_Dummy_EI	;81
        .dw	#_Dummy_EI	;82
        .dw	#_Dummy_EI	;83
        .dw	#_r_Config_OSTM0_interrupt	;84
        .dw	#_Dummy_EI	;85
        .dw	#_Dummy_EI	;86
        .dw	#_Dummy_EI	;87
        .dw	#_Dummy_EI	;88
        .dw	#_Dummy_EI	;89
        .dw	#_Dummy_EI	;90
        .dw	#_Dummy_EI	;91
        .dw	#_Dummy_EI	;92
        .dw	#_Dummy_EI	;93
        .dw	#_Dummy_EI	;94
        .dw	#_Dummy_EI	;95
        .dw	#_Dummy_EI	;96
        .dw	#_Dummy_EI	;97
        .dw	#_Dummy_EI	;98
        .dw	#_Dummy_EI	;99
        .dw	#_Dummy_EI	;100
        .dw	#_Dummy_EI	;101
        .dw	#_Dummy_EI	;102
        .dw	#_Dummy_EI	;103
        .dw	#_Dummy_EI	;104
        .dw	#_Dummy_EI	;105
        .dw	#_Dummy_EI	;106
        .dw	#_Dummy_EI	;107
        .dw	#_Dummy_EI	;108
        .dw	#_Dummy_EI	;109
        .dw	#_Dummy_EI	;110
        .dw	#_Dummy_EI	;111
        .dw	#_Dummy_EI	;112
        .dw	#_Dummy_EI	;113
        .dw	#_Dummy_EI	;114
        .dw	#_Dummy_EI	;115
        .dw	#_Dummy_EI	;116
        .dw	#_Dummy_EI	;117
        .dw	#_Dummy_EI	;118
        .dw	#_Dummy_EI	;119
        .dw	#_Dummy_EI	;120
        .dw	#_Dummy_EI	;121
        .dw	#_Dummy_EI	;122
        .dw	#_Dummy_EI	;123
        ;.dw	#_r_Config_UART1_interrupt_send	;121
        ;.dw	#_r_Config_UART1_interrupt_receive	;122
        ;.dw	#_r_Config_UART1_interrupt_error	;123
        .dw	#_Dummy_EI	;124
        .dw	#_Dummy_EI	;125
        .dw	#_Dummy_EI	;126
        .dw	#_Dummy_EI	;127
        .dw	#_Dummy_EI	;128
        .dw	#_Dummy_EI	;129
        .dw	#_Dummy_EI	;130
        .dw	#_Dummy_EI	;131
        .dw	#_Dummy_EI	;132
        .dw	#_Dummy_EI	;133
        .dw	#_Dummy_EI	;134
        .dw	#_Dummy_EI	;135
        .dw	#_Dummy_EI	;136
        .dw	#_Dummy_EI	;137
        .dw	#_Dummy_EI	;138
        .dw	#_Dummy_EI	;139
        .dw	#_Dummy_EI	;140
        .dw	#_Dummy_EI 	;141
        .dw	#_Dummy_EI 	;142
        .dw	#_Dummy_EI 	;143
        .dw	#_Dummy_EI	;144
        .dw	#_Dummy_EI	;145
        .dw	#_Dummy_EI	;146
        .dw	#_Dummy_EI	;147
        .dw	#_Dummy_EI	;148
        .dw	#_Dummy_EI	;149
        .dw	#_Dummy_EI	;150
        .dw	#_Dummy_EI	;151
        .dw	#_Dummy_EI	;152
        .dw	#_Dummy_EI	;153
        .dw	#_Dummy_EI	;154
        .dw	#_Dummy_EI	;155
        .dw	#_Dummy_EI	;156
        .dw	#_Dummy_EI	;157
        .dw	#_Dummy_EI	;158
        .dw	#_Dummy_EI	;159
        .dw	#_Dummy_EI	;160
        .dw	#_Dummy_EI	;161
        .dw	#_Dummy_EI	;162
        .dw	#_Dummy_EI	;163
        .dw	#_Dummy_EI	;164
        .dw	#_Dummy_EI	;165
        .dw	#_Dummy_EI	;166
        .dw	#_Dummy_EI	;167
        .dw	#_Dummy_EI	;168
        .dw	#_Dummy_EI	;169
        .dw	#_Dummy_EI	;170
        ;.dw	#_r_Config_TAUJ1_3_interrupt	;170
        .dw	#_Dummy_EI	;171
        .dw	#_Dummy_EI	;172
        .dw	#_Dummy_EI	;173
        .dw	#_Dummy_EI	;174
        .dw	#_Dummy_EI	;175
        .dw	#_Dummy_EI	;176
        .dw	#_Dummy_EI	;177
        .dw	#_Dummy_EI	;178
        .dw	#_Dummy_EI	;179
        .dw	#_Dummy_EI	;180
        .dw	#_Dummy_EI	;181
        .dw	#_Dummy_EI	;182
        .dw	#_Dummy_EI	;183
        .dw	#_Dummy_EI	;184
        .dw	#_Dummy_EI	;185
        .dw	#_Dummy_EI	;186
        .dw	#_Dummy_EI	;187
        .dw	#_Dummy_EI	;188
        .dw	#_Dummy_EI	;189
        .dw	#_Dummy_EI	;190
        .dw	#_Dummy_EI	;191
        .dw	#_Dummy_EI 	;192
        .dw	#_Dummy_EI 	;193
        .dw	#_Dummy_EI 	;194
        .dw	#_Dummy_EI	;195
        .dw	#_Dummy_EI	;196
        .dw	#_Dummy_EI	;197
        .dw	#_Dummy_EI	;198
        .dw	#_Dummy_EI	;199
        .dw	#_Dummy_EI	;200
        .dw	#_Dummy_EI	;201
        .dw	#_Dummy_EI	;202
        .dw	#_Dummy_EI	;203
        .dw	#_Dummy_EI	;204
        .dw	#_Dummy_EI	;205
        .dw	#_Dummy_EI	;206
        .dw	#_Dummy_EI	;207
        .dw	#_Dummy_EI	;208
        .dw	#_Dummy_EI	;209
        .dw	#_Dummy_EI	;210
        .dw	#_Dummy_EI	;211
        .dw	#_Dummy_EI	;212
        .dw	#_Dummy_EI	;213
        .dw	#_Dummy_EI	;214
        .dw	#_Dummy_EI	;215
        .dw	#_Dummy_EI	;216
        .dw	#_Dummy_EI	;217
        .dw	#_Dummy_EI	;218
        .dw	#_Dummy_EI	;219
        .dw	#_Dummy_EI	;220
        .dw	#_Dummy_EI	;221
        .dw	#_Dummy_EI	;222
        .dw	#_Dummy_EI	;223
        .dw	#_Dummy_EI	;224
        .dw	#_Dummy_EI	;225
        .dw	#_Dummy_EI	;226
        .dw	#_Dummy_EI	;227
        .dw	#_Dummy_EI	;228
        .dw	#_Dummy_EI	;229
        .dw	#_Dummy_EI	;230
        .dw	#_Dummy_EI	;231
        .dw	#_Dummy_EI	;232
        .dw	#_Dummy_EI	;233
        .dw	#_Dummy_EI	;234
        .dw	#_Dummy_EI	;235
        .dw	#_Dummy_EI	;236
        .dw	#_Dummy_EI	;237
        .dw	#_Dummy_EI	;238
        .dw	#_Dummy_EI	;239
        .dw	#_Dummy_EI	;240
        .dw	#_Dummy_EI	;241
        .dw	#_Dummy_EI	;242
        .dw	#_Dummy_EI	;243
        .dw	#_Dummy_EI	;244
        .dw	#_Dummy_EI	;245
        .dw	#_Dummy_EI	;246
        .dw	#_Dummy_EI	;247
        .dw	#_Dummy_EI	;248
        .dw	#_Dummy_EI	;249
        .dw	#_Dummy_EI	;250
        .dw	#_Dummy_EI	;251
        .dw	#_Dummy_EI	;252
        .dw	#_Dummy_EI	;253
        .dw	#_Dummy_EI	;254
        .dw	#_Dummy_EI	;255
        .dw	#_Dummy_EI	;256
        .dw	#_Dummy_EI	;257
        .dw	#_Dummy_EI	;258
        .dw	#_Dummy_EI	;259
        .dw	#_Dummy_EI	;260
        .dw	#_Dummy_EI	;261
        .dw	#_Dummy_EI	;262
        .dw	#_Dummy_EI	;263
        .dw	#_Dummy_EI	;264
        .dw	#_Dummy_EI	;265
        .dw	#_Dummy_EI	;266
        .dw	#_Dummy_EI	;267
        .dw	#_Dummy_EI	;268
        .dw	#_Dummy_EI	;269
        .dw	#_Dummy_EI	;270
        .dw	#_Dummy_EI	;271
        .dw	#_Dummy_EI	;272
        .dw	#_Dummy_EI	;273
        .dw	#_Dummy_EI	;274
        .dw	#_Dummy_EI	;275
        .dw	#_Dummy_EI	;276
        .dw	#_Dummy_EI	;277
        .dw	#_Dummy_EI	;278
        .dw	#_Dummy_EI	;279
        .dw	#_Dummy_EI	;280
        .dw	#_Dummy_EI	;281
        .dw	#_Dummy_EI	;282
        .dw	#_Dummy_EI	;283
        .dw	#_Dummy_EI	;284
        .dw	#_Dummy_EI	;285
        .dw	#_Dummy_EI	;286
        .dw	#_Dummy_EI	;287
        .dw	#_Dummy_EI	;288
        .dw	#_Dummy_EI	;289
        .dw	#_Dummy_EI	;290
        .dw	#_Dummy_EI	;291
        .dw	#_Dummy_EI	;292
        .dw	#_Dummy_EI	;293
        .dw	#_Dummy_EI	;294
        .dw	#_Dummy_EI	;295
        .dw	#_Dummy_EI	;296
        .dw	#_Dummy_EI	;297
        .dw	#_Dummy_EI	;298
        .dw	#_Dummy_EI	;299
        .dw	#_Dummy_EI	;300
        .dw	#_Dummy_EI	;301
        .dw	#_Dummy_EI	;302
        .dw	#_Dummy_EI	;303
        .dw	#_Dummy_EI	;304
        .dw	#_Dummy_EI	;305
        .dw	#_Dummy_EI	;306
        .dw	#_Dummy_EI	;307
        .dw	#_Dummy_EI	;308
        .dw	#_Dummy_EI	;309
        .dw	#_Dummy_EI	;310
        .dw	#_Dummy_EI	;311
        .dw	#_Dummy_EI	;312
        .dw	#_Dummy_EI	;313
        .dw	#_Dummy_EI	;314
        .dw	#_Dummy_EI	;315
        .dw	#_Dummy_EI	;316
        .dw	#_Dummy_EI	;317
        .dw	#_Dummy_EI	;318
        .dw	#_Dummy_EI	;319
        .dw	#_Dummy_EI	;320
        .dw	#_Dummy_EI	;321
        .dw	#_Dummy_EI	;322
        .dw	#_Dummy_EI	;323
        .dw	#_Dummy_EI	;324
        .dw	#_Dummy_EI	;325
        .dw	#_Dummy_EI	;326
        .dw	#_Dummy_EI	;327
        .dw	#_Dummy_EI	;328
        .dw	#_Dummy_EI	;329
        .dw	#_Dummy_EI	;330
        .dw	#_Dummy_EI	;331
        .dw	#_Dummy_EI	;332
        .dw	#_Dummy_EI	;333
        .dw	#_Dummy_EI	;334
        .dw	#_Dummy_EI	;335
        .dw	#_Dummy_EI	;336
        .dw	#_Dummy_EI	;337
        .dw	#_Dummy_EI	;338
        .dw	#_Dummy_EI	;339
        .dw	#_Dummy_EI	;340
        .dw	#_Dummy_EI	;341
        .dw	#_Dummy_EI	;342
        .dw	#_Dummy_EI	;343
        .dw	#_Dummy_EI	;344
        .dw	#_Dummy_EI	;345
        .dw	#_Dummy_EI	;346
        .dw	#_Dummy_EI	;347
        .dw	#_Dummy_EI	;348
        .dw	#_Dummy_EI	;349
        .dw	#_Dummy_EI	;350
        .dw	#_Dummy_EI	;351
        .dw	#_Dummy_EI	;352
        .dw	#_Dummy_EI	;353
        .dw	#_Dummy_EI	;354
        .dw	#_Dummy_EI	;355
        .dw	#_Dummy_EI	;356
        .dw	#_Dummy_EI	;357
;	.rept	512 - 3
;	.dw	#_Dummy_EI ; INTn
;	.endm

        .section ".text", text
        .align	2
_Dummy:
        br	_Dummy

_Dummy_EI:
        br	_Dummy_EI

;-----------------------------------------------------------------------------
;	startup
;-----------------------------------------------------------------------------
        .section	".text", text
        .align	2
__start:
$if 1	; initialize register
        $nowarning
        mov	r0, r1
        $warning
        mov	r0, r2
        mov	r0, r3
        mov	r0, r4
        mov	r0, r5
        mov	r0, r6
        mov	r0, r7
        mov	r0, r8
        mov	r0, r9
        mov	r0, r10
        mov	r0, r11
        mov	r0, r12
        mov	r0, r13
        mov	r0, r14
        mov	r0, r15
        mov	r0, r16
        mov	r0, r17
        mov	r0, r18
        mov	r0, r19
        mov	r0, r20
        mov	r0, r21
        mov	r0, r22
        mov	r0, r23
        mov	r0, r24
        mov	r0, r25
        mov	r0, r26
        mov	r0, r27
        mov	r0, r28
        mov	r0, r29
        mov	r0, r30
        mov	r0, r31
        ;---------------------------------------------------------- Dinesh ----------------------------------------------
        ldsr	r0, 0, 0		;  EIPC
        ldsr    r0, 2, 0     ;FEPC
        ldsr	r0, 16, 0		;  CTPC
        ldsr    r0, 20, 0     ;CTBP
        ldsr    r0, 28, 0     ;EIWR
        ldsr    r0, 29, 0     ;FEWR
        ldsr    r0, 3, 1      ;EBASE
        ldsr    r0, 4, 1      ;INTBP
        ldsr    r0, 11, 1     ;SCCFG
        ldsr    r0, 12, 1     ;SCBP
        ldsr    r0, 6, 2      ;MEA
        ldsr    r0, 7, 2      ;ASID
        ldsr    r0, 8, 2      ;MEI
        ;PSW set -- CU0=1
        ;CU0 bit 16: FPU : These bits indicate the coprocessor use permissions. When the bit
                           ;corresponding to the coprocessor is 0, a coprocessor unusable exception
                           ;occurs if an instruction for the coprocessor is executed or a coprocessor
                           ;resource (system register) is accessed.
        ;PSW : (regID, selID) : 5,0 :SR5, 0
        stsr 5, r10, 0
        mov  0x00010000, r11
        or   r11, r10
        ldsr r10, 5, 0
        ;.set BOOT_MASK_FPSR             0x00020000        -- FS=1
        ;FPU : CU : related register
        mov  0x00020000, r11
        ldsr    r11, 6, 0    ;FPSR
        ldsr    r0,  7, 0    ;FPEPC
        ldsr    r0,  8, 0    ;FPST
        ldsr    r0,  9, 0    ;FPCC
        ldsr    r0,  10, 0   ;FPCFG
        ldsr    r0,  11,0    ;FPEC
            ;   -- First set EBASE register address
            mov #__sRESET, r10
            ;-- set 0x0 or 0x1 to EBASE.RINT for reduced interrupt
            ;-- ori  1, r10
            ldsr r10, 3, 1   ;EBASE = 3,1
            ;-- then set 1 to PSW.EBV -> RBASE!=EBASE
            stsr 5, r10, 0  ; PSW = 5,0
            mov  0x8000, r11    ; .set   EBV,  0x8000
            or   r11, r10
            ldsr r10, 5, 0  ; PSW = 5,0
        ; clear r10 & r11 register
        mov	r0, r10
        mov	r0, r11
        ;-- MPU Function registers
        ;ldsr    r0,     MCA, 5
        ;---------------------------------------------------------- Dinesh ----------------------------------------------

$endif

        jarl	_hdwinit, lp	; initialize hardware
$ifdef USE_TABLE_REFERENCE_METHOD
        mov	#__sEIINTTBL, r6
        jarl	_set_table_reference_method, lp ; set table reference method
$endif
        jr32	__cstart

;-----------------------------------------------------------------------------
;	hdwinit
; Specify RAM addresses suitable to your system if needed.
;-----------------------------------------------------------------------------
        GLOBAL_RAM_ADDR	.set	0
        GLOBAL_RAM_END	.set	0
        ;LOCAL_RAM_ADDR	.set	0
        ;LOCAL_RAM_END	.set    0
        ;------------------------------- Dinesh -----------------------------------------
        LOCAL_RAM_ADDR	.set	0xFEBE0000  ; for MCU : R7f701690 ; 0xFEBE0000
        LOCAL_RAM_END	.set	0xFEBF7FFF  ; for MCU : R7f701690 ; 0xFEBF7FFF
        RETENTION_RAM_ADDR	.set	0xFEBF8000  ; for MCU : R7f701690 ; 0xFEBE0000
        RETENTION_RAM_END	.set	0xFEBFFFFF  ; for MCU : R7f701690 ; 0xFEBF7FFF

        .align	2
_hdwinit:
        mov	lp, r14			; save return address

        ; clear Global RAM
        mov	GLOBAL_RAM_ADDR, r6
        mov	GLOBAL_RAM_END, r7
        jarl	_zeroclr4, lp

        ; clear Local RAM
        mov	LOCAL_RAM_ADDR, r6
        mov	LOCAL_RAM_END, r7
        jarl	_zeroclr4, lp

        ;------------------------------- Dinesh -----------------------------------------
        ;  -- Check if deep stop mode Reset occured or not
        mov   0xFFF80760,r6               ;.set   RESF, 0xFFF80760
        ld.w  0[r6],r7
        andi  0x400,r7,r8
        cmp   0x400,r8                ;-- Check if deep stop mode Reset occured or not, RESF-bit-10
        be    EXIT_R_RAM_CLEAN                    ;-- skip initialization of R-RAM
        ; clear Retention RAM
        mov	RETENTION_RAM_ADDR, r6
        mov	RETENTION_RAM_END, r7
        jarl	_zeroclr4, lp

EXIT_R_RAM_CLEAN:
        mov	r14, lp
        jmp	[lp]

;-----------------------------------------------------------------------------
;	zeroclr4
;-----------------------------------------------------------------------------
        .align	2
_zeroclr4:
        br	.L.zeroclr4.2
.L.zeroclr4.1:
        st.w	r0, [r6]
        add	4, r6
.L.zeroclr4.2:
        cmp	r6, r7
        bh	.L.zeroclr4.1
        jmp	[lp]

$ifdef USE_TABLE_REFERENCE_METHOD
;-----------------------------------------------------------------------------
;	set table reference method
;-----------------------------------------------------------------------------
        ; interrupt control register address
        ICBASE	.set	0xfffeea00

        .align	2
_set_table_reference_method:
        ldsr	r6, 4, 1		; set INTBP

        ; Some interrupt channels use the table reference method.
        mov	ICBASE, r10		; get interrupt control register address
        set1	6, 0[r10]		; set INT0 as table reference
        set1	6, 2[r10]		; set INT1 as table reference
        set1	6, 4[r10]		; set INT2 as table reference

        jmp	[lp]
$endif
;-------------------- end of start up module -------------------;
