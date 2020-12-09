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
* File Name    : r_cg_intvector.c
* Version      : 1.0.1
* Device(s)    : R7F701690
* Description  : None
* Creation Date: 2020-10-14
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
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/


/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
/***********************************************************************************************************************
Private global variables and functions
***********************************************************************************************************************/
/* Reserved; */
extern void eiint0(void);
/* Reserved; */
extern void eiint1(void);
/* Reserved; */
extern void eiint2(void);
/* Reserved; */
extern void eiint3(void);
/* Reserved; */
extern void eiint4(void);
/* Reserved; */
extern void eiint5(void);
/* Reserved; */
extern void eiint6(void);
/* Reserved; */
extern void eiint7(void);
/* Interrupt for CH0 of TAUD0; */
extern void eiint8(void);
/* Interrupt for CH2 of TAUD0; */
extern void eiint9(void);
/* Interrupt for CH4 of TAUD0; */
extern void eiint10(void);
/* Interrupt for CH6 of TAUD0; */
extern void eiint11(void);
/* Interrupt for CH8 of TAUD0; */
extern void eiint12(void);
/* Interrupt for CH10 of TAUD0; */
extern void eiint13(void);
/* Interrupt for CH12 of TAUD0; */
extern void eiint14(void);
/* Interrupt for CH14 of TAUD0; */
extern void eiint15(void);
/* TAPA0 peak interrupt 0; */
extern void eiint16(void);
/* TAPA0 valley interrupt 0; */
extern void eiint17(void);
/* ADCA0 SG1 end interrupt; */
extern void eiint18(void);
/* ADCA0 SG2 end interrupt; */
extern void eiint19(void);
/* ADCA0 SG3 end interrupt; */
extern void eiint20(void);
/* Dedicated interrupt for on-chip debug function; */
extern void eiint21(void);
/* CAN global error interrupt; */
extern void eiint22(void);
/* CAN receive FIFO interrupt; */
extern void eiint23(void);
/* CAN0 error interrupt; */
extern void eiint24(void);
/* CAN0 transmit/receive FIFO receive complete interrupt; */
extern void eiint25(void);
/* CAN0 transmit interrupt; */
extern void eiint26(void);
/* CSIG0 communication status interrupt; */
extern void r_Config_CSIG0_interrupt_send(void);
/* CSIG0 receive status interrupt; */
extern void r_Config_CSIG0_interrupt_receive(void);
/* CSIH0 communication status interrupt; */
extern void eiint29(void);
/* CSIH0 receive status interrupt; */
extern void eiint30(void);
/* CSIH0 communication error interrupt; */
extern void eiint31(void);
/* CSIH0 job completion interrupt; */
extern void eiint32(void);
/* RLIN30 interrupt; */
extern void eiint33(void);
/* RLIN30 transmit interrupt; */
extern void eiint34(void);
/* RLIN30 receive complete interrupt; */
extern void eiint35(void);
/* RLIN30 status interrupt; */
extern void eiint36(void);
/* External interrupt; */
extern void eiint37(void);
/* External interrupt; */
extern void eiint38(void);
/* External interrupt; */
extern void eiint39(void);
/* WDTA0 75% interrupt; */
extern void eiint40(void);
/* WDTA1 75% interrupt; */
extern void eiint41(void);
/* Reserved; */
extern void eiint42(void);
/* External interrupt; */
extern void eiint43(void);
/* External interrupt; */
extern void eiint44(void);
/* External interrupt; */
extern void eiint45(void);
/* External interrupt; */
extern void eiint46(void);
/* External interrupt; */
extern void eiint47(void);
/* Interrupt for TAUD0 channel 1; */
extern void eiint48(void);
/* Interrupt for TAUD0 channel 3; */
extern void eiint49(void);
/* Interrupt for TAUD0 channel 5; */
extern void eiint50(void);
/* Interrupt for TAUD0 channel 7; */
extern void eiint51(void);
/* Interrupt for TAUD0 channel 9; */
extern void eiint52(void);
/* Interrupt for TAUD0 channel 11; */
extern void eiint53(void);
/* Interrupt for TAUD0 channel 13; */
extern void eiint54(void);
/* Interrupt for TAUD0 channel 15; */
extern void eiint55(void);
/* ADCA0 error interrupt; */
extern void eiint56(void);
/* CSIG0 communication error interrupt; */
extern void r_Config_CSIG0_interrupt_error(void);
/* RLIN20 interrupt; */
extern void eiint58(void);
/* RLIN21 interrupt; */
extern void eiint59(void);
/* DMA00 transfer completion; */
extern void eiint60(void);
/* DMA01 transfer completion; */
extern void eiint61(void);
/* DMA02 transfer completion; */
extern void eiint62(void);
/* DMA03 transfer completion; */
extern void eiint63(void);
/* DMA04 transfer completion; */
extern void eiint64(void);
/* DMA05 transfer completion; */
extern void eiint65(void);
/* DMA06 transfer completion; */
extern void eiint66(void);
/* DMA07 transfer completion; */
extern void eiint67(void);
/* DMA10 transfer completion; */
extern void eiint68(void);
/* DMA11 transfer completion; */
extern void eiint69(void);
/* DMA12 transfer completion; */
extern void eiint70(void);
/* DMA13 transfer completion; */
extern void eiint71(void);
/* DMA14 transfer completion; */
extern void eiint72(void);
/* DMA15 transfer completion; */
extern void eiint73(void);
/* DMA16 transfer completion; */
extern void eiint74(void);
/* DMA17 transfer completion; */
extern void eiint75(void);
/* RIIC0 transmit data empty interrupt; */
extern void eiint76(void);
/* RIIC0 receive error/event interrupt; */
extern void eiint77(void);
/* RIIC0 receive complete interrupt; */
extern void eiint78(void);
/* RIIC0 transmit complete interrupt; */
extern void eiint79(void);
/* Interrupt for TAUJ0 channel 0; */
extern void r_Config_TAUJ0_0_interrupt(void);
/* Interrupt for TAUJ0 channel 1; */
extern void eiint81(void);
/* Interrupt for TAUJ0 channel 2; */
extern void eiint82(void);
/* Interrupt for TAUJ0 channel 3; */
extern void eiint83(void);
/* OSTM0 interrupt; */
extern void r_Config_OSTM0_interrupt(void);
/* ENCA0 overflow interrupt; */
extern void eiint85(void);
/* ENCA0 underflow interrupt; */
extern void eiint86(void);
/* ENCA0 match/capture interrupt 0; */
extern void eiint87(void);
/* ENCA0 match/capture interrupt 1; */
extern void eiint88(void);
/* ENCA0 encoder clear interrupt; */
extern void eiint89(void);
/* KR0 key interrupt; */
extern void eiint90(void);
/* PWSA0 queue full interrupt; */
extern void eiint91(void);
/* PWGA interrupt group 00 (PWGA0 to PWGA31); */
extern void eiint92(void);
/* Reserved; */
extern void eiint93(void);
/* Reserved; */
extern void eiint94(void);
/* Reserved; */
extern void eiint95(void);
/* Reserved; */
extern void eiint96(void);
/* Reserved; */
extern void eiint97(void);
/* Reserved; */
extern void eiint98(void);
/* Reserved; */
extern void eiint99(void);
/* Reserved; */
extern void eiint100(void);
/* Reserved; */
extern void eiint101(void);
/* Reserved; */
extern void eiint102(void);
/* Reserved; */
extern void eiint103(void);
/* Reserved; */
extern void eiint104(void);
/* Reserved; */
extern void eiint105(void);
/* Reserved; */
extern void eiint106(void);
/* Reserved; */
extern void eiint107(void);
/* Reserved; */
extern void eiint108(void);
/* Reserved; */
extern void eiint109(void);
/* Flash sequencer end error interrupt; */
extern void eiint110(void);
/* Flash sequencer end interrupt; */
extern void eiint111(void);
/* LPS0 port polling end interrupt; */
extern void eiint112(void);
/* CAN1 error interrupt; */
extern void eiint113(void);
/* CAN1 transmit/receive FIFO receive complete interrupt; */
extern void eiint114(void);
/* CAN1 transmit interrupt; */
extern void eiint115(void);
/* TAPA0 peak interrupt 0; */
extern void eiint116(void);
/* TAPA0 valley interrupt 0; */
extern void eiint117(void);
/* CSIG0 communication status interrupt; */
extern void eiint118(void);
/* CSIG0 receive status interrupt; */
extern void eiint119(void);
/* RLIN31 interrupt; */
extern void eiint120(void);
/* RLIN31 transmit interrupt; */
extern void eiint121(void);
/* RLIN31 receive complete interrupt; */
extern void eiint122(void);
/* RLIN31 status interrupt; */
extern void eiint123(void);
/* Reserved; */
extern void eiint124(void);
/* Reserved; */
extern void eiint125(void);
/* Reserved; */
extern void eiint126(void);
/* Reserved; */
extern void eiint127(void);
/* Reserved; */
extern void eiint128(void);
/* Reserved; */
extern void eiint129(void);
/* Reserved; */
extern void eiint130(void);
/* Reserved; */
extern void eiint131(void);
/* Interrupt for TAUD0 channel 0; */
extern void eiint132(void);
/* Interrupt for TAUD0 channel 4; */
extern void eiint133(void);
/* Interrupt for TAUD0 channel 6; */
extern void eiint134(void);
/* Interrupt for TAUD0 channel 8; */
extern void eiint135(void);
/* Reserved; */
extern void eiint136(void);
/* Reserved; */
extern void eiint137(void);
/* Reserved; */
extern void eiint138(void);
/* Reserved; */
extern void eiint139(void);
/* Reserved; */
extern void eiint140(void);
/* Reserved; */
extern void eiint141(void);
/* Reserved; */
extern void eiint142(void);
/* Reserved; */
extern void eiint143(void);
/* Reserved; */
extern void eiint144(void);
/* Reserved; */
extern void eiint145(void);
/* Reserved; */
extern void eiint146(void);
/* Reserved; */
extern void eiint147(void);
/* Reserved; */
extern void eiint148(void);
/* Reserved; */
extern void eiint149(void);
/* Reserved; */
extern void eiint150(void);
/* Reserved; */
extern void eiint151(void);
/* Reserved; */
extern void eiint152(void);
/* Reserved; */
extern void eiint153(void);
/* Reserved; */
extern void eiint154(void);
/* Reserved; */
extern void eiint155(void);
/* Reserved; */
extern void eiint156(void);
/* Reserved; */
extern void eiint157(void);
/* Interrupt for TAUD0 channel 2; */
extern void eiint158(void);
/* Interrupt for TAUD0 channel 10; */
extern void eiint159(void);
/* Interrupt for TAUD0 channel 12; */
extern void eiint160(void);
/* Interrupt for TAUD0 channel 14; */
extern void eiint161(void);
/* Reserved; */
extern void eiint162(void);
/* Reserved; */
extern void eiint163(void);
/* Reserved; */
extern void eiint164(void);
/* Reserved; */
extern void eiint165(void);
/* Reserved; */
extern void eiint166(void);
/* Reserved; */
extern void eiint167(void);
/* Interrupt for TAUJ1 channel 0; */
extern void eiint168(void);
/* Interrupt for TAUJ1 channel 1; */
extern void eiint169(void);
/* Interrupt for TAUJ1 channel 2; */
extern void eiint170(void);
/* Interrupt for TAUJ1 channel 3; */
extern void eiint171(void);
/* Reserved; */
extern void eiint172(void);
/* Reserved; */
extern void eiint173(void);
/* Reserved; */
extern void eiint174(void);
/* Reserved; */
extern void eiint175(void);
/* Reserved; */
extern void eiint176(void);
/* Reserved; */
extern void eiint177(void);
/* Reserved; */
extern void eiint178(void);
/* Reserved; */
extern void eiint179(void);
/* Reserved; */
extern void eiint180(void);
/* Reserved; */
extern void eiint181(void);
/* Reserved; */
extern void eiint182(void);
/* Reserved; */
extern void eiint183(void);
/* Reserved; */
extern void eiint184(void);
/* Reserved; */
extern void eiint185(void);
/* Reserved; */
extern void eiint186(void);
/* Reserved; */
extern void eiint187(void);
/* Reserved; */
extern void eiint188(void);
/* Reserved; */
extern void eiint189(void);
/* Reserved; */
extern void eiint190(void);
/* Reserved; */
extern void eiint191(void);
/* Reserved; */
extern void eiint192(void);
/* Reserved; */
extern void eiint193(void);
/* Reserved; */
extern void eiint194(void);
/* Reserved; */
extern void eiint195(void);
/* Reserved; */
extern void eiint196(void);
/* Reserved; */
extern void eiint197(void);
/* Reserved; */
extern void eiint198(void);
/* Reserved; */
extern void eiint199(void);
/* Reserved; */
extern void eiint200(void);
/* Reserved; */
extern void eiint201(void);
/* Reserved; */
extern void eiint202(void);
/* Reserved; */
extern void eiint203(void);
/* Reserved; */
extern void eiint204(void);
/* Reserved; */
extern void eiint205(void);
/* Reserved; */
extern void eiint206(void);
/* Reserved; */
extern void eiint207(void);
/* Reserved; */
extern void eiint208(void);
/* RTCA0 1-second interval interrupt; */
extern void eiint209(void);
/* RTCA0 alarm interrupt; */
extern void eiint210(void);
/* RTCA0 fixed interval interrupt; */
extern void eiint211(void);
/* Reserved; */
extern void eiint212(void);
/* Reserved; */
extern void eiint213(void);
/* Reserved; */
extern void eiint214(void);
/* Reserved; */
extern void eiint215(void);
/* Reserved; */
extern void eiint216(void);
/* CAN2 error interrupt; */
extern void eiint217(void);
/* CAN2 transmit/receive FIFO receive complete interrupt; */
extern void eiint218(void);
/* CAN2 transmit interrupt; */
extern void eiint219(void);
/* Reserved; */
extern void eiint220(void);
/* Reserved; */
extern void eiint221(void);
/* Reserved; */
extern void eiint222(void);
/* Reserved; */
extern void eiint223(void);
/* Reserved; */
extern void eiint224(void);
/* Reserved; */
extern void eiint225(void);
/* Reserved; */
extern void eiint226(void);
/* Reserved; */
extern void eiint227(void);
/* Reserved; */
extern void eiint228(void);
/* Reserved; */
extern void eiint229(void);
/* Reserved; */
extern void eiint230(void);
/* Reserved; */
extern void eiint231(void);
/* Reserved; */
extern void eiint232(void);
/* Reserved; */
extern void eiint233(void);
/* Reserved; */
extern void eiint234(void);
/* Reserved; */
extern void eiint235(void);
/* Reserved; */
extern void eiint236(void);
/* Reserved; */
extern void eiint237(void);
/* Reserved; */
extern void eiint238(void);
/* Reserved; */
extern void eiint239(void);
/* RIIC1 transmit data empty interrupt; */
extern void eiint240(void);
/* RIIC1 receive error/event interrupt; */
extern void eiint241(void);
/* RIIC1 receive complete interrupt; */
extern void eiint242(void);
/* RIIC1 transmit complete interrupt; */
extern void eiint243(void);
/* Reserved; */
extern void eiint244(void);
/* Reserved; */
extern void eiint245(void);
/* Reserved; */
extern void eiint246(void);
/* Reserved; */
extern void eiint247(void);
/* Reserved; */
extern void eiint248(void);
/* Reserved; */
extern void eiint249(void);
/* Reserved; */
extern void eiint250(void);
/* Reserved; */
extern void eiint251(void);
/* Reserved; */
extern void eiint252(void);
/* Reserved; */
extern void eiint253(void);
/* Reserved; */
extern void eiint254(void);
/* Reserved; */
extern void eiint255(void);
/* Reserved; */
extern void eiint256(void);
/* Reserved; */
extern void eiint257(void);
/* Reserved; */
extern void eiint258(void);
/* Reserved; */
extern void eiint259(void);
/* Reserved; */
extern void eiint260(void);
/* Reserved; */
extern void eiint261(void);
/* Reserved; */
extern void eiint262(void);
/* Reserved; */
extern void eiint263(void);
/* Reserved; */
extern void eiint264(void);
/* Reserved; */
extern void eiint265(void);
/* Reserved; */
extern void eiint266(void);
/* Reserved; */
extern void eiint267(void);
/* Reserved; */
extern void eiint268(void);
/* Reserved; */
extern void eiint269(void);
/* Reserved; */
extern void eiint270(void);
/* Reserved; */
extern void eiint271(void);
/* Reserved; */
extern void eiint272(void);
/* Reserved; */
extern void eiint273(void);
/* Reserved; */
extern void eiint274(void);
/* Reserved; */
extern void eiint275(void);
/* Reserved; */
extern void eiint276(void);
/* Interrupt for TAUJ2 channel 0; */
extern void eiint277(void);
/* Interrupt for TAUJ2 channel 1; */
extern void eiint278(void);
/* Interrupt for TAUJ2 channel 2; */
extern void eiint279(void);
/* Interrupt for TAUJ2 channel 3; */
extern void eiint280(void);
/* Interrupt for TAUJ3 channel 0; */
extern void eiint281(void);
/* Interrupt for TAUJ3 channel 1; */
extern void eiint282(void);
/* Interrupt for TAUJ3 channel 2; */
extern void eiint283(void);
/* Interrupt for TAUJ3 channel 3; */
extern void eiint284(void);
/* Reserved; */
extern void eiint285(void);
/* Reserved; */
extern void eiint286(void);
/* Reserved; */
extern void eiint287(void);
/* Reserved; */
extern void eiint288(void);
/* Reserved; */
extern void eiint289(void);
/* Reserved; */
extern void eiint290(void);
/* Reserved; */
extern void eiint291(void);
/* Reserved; */
extern void eiint292(void);
/* Reserved; */
extern void eiint293(void);
/* Reserved; */
extern void eiint294(void);
/* Reserved; */
extern void eiint295(void);
/* Reserved; */
extern void eiint296(void);
/* Reserved; */
extern void eiint297(void);
/* Reserved; */
extern void eiint298(void);
/* Reserved; */
extern void eiint299(void);
/* Reserved; */
extern void eiint300(void);
/* Reserved; */
extern void eiint301(void);
/* Reserved; */
extern void eiint302(void);
/* Reserved; */
extern void eiint303(void);
/* Reserved; */
extern void eiint304(void);
/* Reserved; */
extern void eiint305(void);
/* Reserved; */
extern void eiint306(void);
/* Reserved; */
extern void eiint307(void);
/* Reserved; */
extern void eiint308(void);
/* Reserved; */
extern void eiint309(void);
/* Reserved; */
extern void eiint310(void);
/* Reserved; */
extern void eiint311(void);
/* Reserved; */
extern void eiint312(void);
/* Reserved; */
extern void eiint313(void);
/* Reserved; */
extern void eiint314(void);
/* Reserved; */
extern void eiint315(void);
/* Reserved; */
extern void eiint316(void);
/* Reserved; */
extern void eiint317(void);
/* Reserved; */
extern void eiint318(void);
/* Reserved; */
extern void eiint319(void);
/* Reserved; */
extern void eiint320(void);
/* Reserved; */
extern void eiint321(void);
/* Reserved; */
extern void eiint322(void);
/* Reserved; */
extern void eiint323(void);
/* Reserved; */
extern void eiint324(void);
/* Reserved; */
extern void eiint325(void);
/* Reserved; */
extern void eiint326(void);
/* Reserved; */
extern void eiint327(void);
/* Reserved; */
extern void eiint328(void);
/* Reserved; */
extern void eiint329(void);
/* Reserved; */
extern void eiint330(void);
/* Reserved; */
extern void eiint331(void);
/* Reserved; */
extern void eiint332(void);
/* Reserved; */
extern void eiint333(void);
/* Reserved; */
extern void eiint334(void);
/* Reserved; */
extern void eiint335(void);
/* Reserved; */
extern void eiint336(void);
/* Reserved; */
extern void eiint337(void);
/* Reserved; */
extern void eiint338(void);
/* Reserved; */
extern void eiint339(void);
/* Reserved; */
extern void eiint340(void);
/* Reserved; */
extern void eiint341(void);
/* Reserved; */
extern void eiint342(void);
/* Reserved; */
extern void eiint343(void);
/* Reserved; */
extern void eiint344(void);
/* Reserved; */
extern void eiint345(void);
/* Reserved; */
extern void eiint346(void);
/* Status interrupt for RSENT0; */
extern void eiint347(void);
/* Receive interrupt for RSENT0; */
extern void eiint348(void);
/* Status interrupt for RSENT1; */
extern void eiint349(void);
/* Receive interrupt for RSENT1; */
extern void eiint350(void);
/* Reserved; */
extern void eiint351(void);
/* Reserved; */
extern void eiint352(void);
/* Reserved; */
extern void eiint353(void);
/* Reserved; */
extern void eiint354(void);
/* Reserved; */
extern void eiint355(void);
/* LPS0 digital port error interrupt; */
extern void eiint356(void);
/* LPS0 analog port error interrupt; */
extern void eiint357(void);

#pragma section const "EIINTTBL"
void * const INT_Vectors[] = {
	/* Reserved; */
	(void *)eiint0,
	/* Reserved; */
	(void *)eiint1,
	/* Reserved; */
	(void *)eiint2,
	/* Reserved; */
	(void *)eiint3,
	/* Reserved; */
	(void *)eiint4,
	/* Reserved; */
	(void *)eiint5,
	/* Reserved; */
	(void *)eiint6,
	/* Reserved; */
	(void *)eiint7,
	/* Interrupt for CH0 of TAUD0; */
	(void *)eiint8,
	/* Interrupt for CH2 of TAUD0; */
	(void *)eiint9,
	/* Interrupt for CH4 of TAUD0; */
	(void *)eiint10,
	/* Interrupt for CH6 of TAUD0; */
	(void *)eiint11,
	/* Interrupt for CH8 of TAUD0; */
	(void *)eiint12,
	/* Interrupt for CH10 of TAUD0; */
	(void *)eiint13,
	/* Interrupt for CH12 of TAUD0; */
	(void *)eiint14,
	/* Interrupt for CH14 of TAUD0; */
	(void *)eiint15,
	/* TAPA0 peak interrupt 0; */
	(void *)eiint16,
	/* TAPA0 valley interrupt 0; */
	(void *)eiint17,
	/* ADCA0 SG1 end interrupt; */
	(void *)eiint18,
	/* ADCA0 SG2 end interrupt; */
	(void *)eiint19,
	/* ADCA0 SG3 end interrupt; */
	(void *)eiint20,
	/* Dedicated interrupt for on-chip debug function; */
	(void *)eiint21,
	/* CAN global error interrupt; */
	(void *)eiint22,
	/* CAN receive FIFO interrupt; */
	(void *)eiint23,
	/* CAN0 error interrupt; */
	(void *)eiint24,
	/* CAN0 transmit/receive FIFO receive complete interrupt; */
	(void *)eiint25,
	/* CAN0 transmit interrupt; */
	(void *)eiint26,
	/* CSIG0 communication status interrupt; */
	(void *)r_Config_CSIG0_interrupt_send,
	/* CSIG0 receive status interrupt; */
	(void *)r_Config_CSIG0_interrupt_receive,
	/* CSIH0 communication status interrupt; */
	(void *)eiint29,
	/* CSIH0 receive status interrupt; */
	(void *)eiint30,
	/* CSIH0 communication error interrupt; */
	(void *)eiint31,
	/* CSIH0 job completion interrupt; */
	(void *)eiint32,
	/* RLIN30 interrupt; */
	(void *)eiint33,
	/* RLIN30 transmit interrupt; */
	(void *)eiint34,
	/* RLIN30 receive complete interrupt; */
	(void *)eiint35,
	/* RLIN30 status interrupt; */
	(void *)eiint36,
	/* External interrupt; */
	(void *)eiint37,
	/* External interrupt; */
	(void *)eiint38,
	/* External interrupt; */
	(void *)eiint39,
	/* WDTA0 75% interrupt; */
	(void *)eiint40,
	/* WDTA1 75% interrupt; */
	(void *)eiint41,
	/* Reserved; */
	(void *)eiint42,
	/* External interrupt; */
	(void *)eiint43,
	/* External interrupt; */
	(void *)eiint44,
	/* External interrupt; */
	(void *)eiint45,
	/* External interrupt; */
	(void *)eiint46,
	/* External interrupt; */
	(void *)eiint47,
	/* Interrupt for TAUD0 channel 1; */
	(void *)eiint48,
	/* Interrupt for TAUD0 channel 3; */
	(void *)eiint49,
	/* Interrupt for TAUD0 channel 5; */
	(void *)eiint50,
	/* Interrupt for TAUD0 channel 7; */
	(void *)eiint51,
	/* Interrupt for TAUD0 channel 9; */
	(void *)eiint52,
	/* Interrupt for TAUD0 channel 11; */
	(void *)eiint53,
	/* Interrupt for TAUD0 channel 13; */
	(void *)eiint54,
	/* Interrupt for TAUD0 channel 15; */
	(void *)eiint55,
	/* ADCA0 error interrupt; */
	(void *)eiint56,
	/* CSIG0 communication error interrupt; */
	(void *)r_Config_CSIG0_interrupt_error,
	/* RLIN20 interrupt; */
	(void *)eiint58,
	/* RLIN21 interrupt; */
	(void *)eiint59,
	/* DMA00 transfer completion; */
	(void *)eiint60,
	/* DMA01 transfer completion; */
	(void *)eiint61,
	/* DMA02 transfer completion; */
	(void *)eiint62,
	/* DMA03 transfer completion; */
	(void *)eiint63,
	/* DMA04 transfer completion; */
	(void *)eiint64,
	/* DMA05 transfer completion; */
	(void *)eiint65,
	/* DMA06 transfer completion; */
	(void *)eiint66,
	/* DMA07 transfer completion; */
	(void *)eiint67,
	/* DMA10 transfer completion; */
	(void *)eiint68,
	/* DMA11 transfer completion; */
	(void *)eiint69,
	/* DMA12 transfer completion; */
	(void *)eiint70,
	/* DMA13 transfer completion; */
	(void *)eiint71,
	/* DMA14 transfer completion; */
	(void *)eiint72,
	/* DMA15 transfer completion; */
	(void *)eiint73,
	/* DMA16 transfer completion; */
	(void *)eiint74,
	/* DMA17 transfer completion; */
	(void *)eiint75,
	/* RIIC0 transmit data empty interrupt; */
	(void *)eiint76,
	/* RIIC0 receive error/event interrupt; */
	(void *)eiint77,
	/* RIIC0 receive complete interrupt; */
	(void *)eiint78,
	/* RIIC0 transmit complete interrupt; */
	(void *)eiint79,
	/* Interrupt for TAUJ0 channel 0; */
	(void *)r_Config_TAUJ0_0_interrupt,
	/* Interrupt for TAUJ0 channel 1; */
	(void *)eiint81,
	/* Interrupt for TAUJ0 channel 2; */
	(void *)eiint82,
	/* Interrupt for TAUJ0 channel 3; */
	(void *)eiint83,
	/* OSTM0 interrupt; */
	(void *)r_Config_OSTM0_interrupt,
	/* ENCA0 overflow interrupt; */
	(void *)eiint85,
	/* ENCA0 underflow interrupt; */
	(void *)eiint86,
	/* ENCA0 match/capture interrupt 0; */
	(void *)eiint87,
	/* ENCA0 match/capture interrupt 1; */
	(void *)eiint88,
	/* ENCA0 encoder clear interrupt; */
	(void *)eiint89,
	/* KR0 key interrupt; */
	(void *)eiint90,
	/* PWSA0 queue full interrupt; */
	(void *)eiint91,
	/* PWGA interrupt group 00 (PWGA0 to PWGA31); */
	(void *)eiint92,
	/* Reserved; */
	(void *)eiint93,
	/* Reserved; */
	(void *)eiint94,
	/* Reserved; */
	(void *)eiint95,
	/* Reserved; */
	(void *)eiint96,
	/* Reserved; */
	(void *)eiint97,
	/* Reserved; */
	(void *)eiint98,
	/* Reserved; */
	(void *)eiint99,
	/* Reserved; */
	(void *)eiint100,
	/* Reserved; */
	(void *)eiint101,
	/* Reserved; */
	(void *)eiint102,
	/* Reserved; */
	(void *)eiint103,
	/* Reserved; */
	(void *)eiint104,
	/* Reserved; */
	(void *)eiint105,
	/* Reserved; */
	(void *)eiint106,
	/* Reserved; */
	(void *)eiint107,
	/* Reserved; */
	(void *)eiint108,
	/* Reserved; */
	(void *)eiint109,
	/* Flash sequencer end error interrupt; */
	(void *)eiint110,
	/* Flash sequencer end interrupt; */
	(void *)eiint111,
	/* LPS0 port polling end interrupt; */
	(void *)eiint112,
	/* CAN1 error interrupt; */
	(void *)eiint113,
	/* CAN1 transmit/receive FIFO receive complete interrupt; */
	(void *)eiint114,
	/* CAN1 transmit interrupt; */
	(void *)eiint115,
	/* TAPA0 peak interrupt 0; */
	(void *)eiint116,
	/* TAPA0 valley interrupt 0; */
	(void *)eiint117,
	/* CSIG0 communication status interrupt; */
	(void *)eiint118,
	/* CSIG0 receive status interrupt; */
	(void *)eiint119,
	/* RLIN31 interrupt; */
	(void *)eiint120,
	/* RLIN31 transmit interrupt; */
	(void *)eiint121,
	/* RLIN31 receive complete interrupt; */
	(void *)eiint122,
	/* RLIN31 status interrupt; */
	(void *)eiint123,
	/* Reserved; */
	(void *)eiint124,
	/* Reserved; */
	(void *)eiint125,
	/* Reserved; */
	(void *)eiint126,
	/* Reserved; */
	(void *)eiint127,
	/* Reserved; */
	(void *)eiint128,
	/* Reserved; */
	(void *)eiint129,
	/* Reserved; */
	(void *)eiint130,
	/* Reserved; */
	(void *)eiint131,
	/* Interrupt for TAUD0 channel 0; */
	(void *)eiint132,
	/* Interrupt for TAUD0 channel 4; */
	(void *)eiint133,
	/* Interrupt for TAUD0 channel 6; */
	(void *)eiint134,
	/* Interrupt for TAUD0 channel 8; */
	(void *)eiint135,
	/* Reserved; */
	(void *)eiint136,
	/* Reserved; */
	(void *)eiint137,
	/* Reserved; */
	(void *)eiint138,
	/* Reserved; */
	(void *)eiint139,
	/* Reserved; */
	(void *)eiint140,
	/* Reserved; */
	(void *)eiint141,
	/* Reserved; */
	(void *)eiint142,
	/* Reserved; */
	(void *)eiint143,
	/* Reserved; */
	(void *)eiint144,
	/* Reserved; */
	(void *)eiint145,
	/* Reserved; */
	(void *)eiint146,
	/* Reserved; */
	(void *)eiint147,
	/* Reserved; */
	(void *)eiint148,
	/* Reserved; */
	(void *)eiint149,
	/* Reserved; */
	(void *)eiint150,
	/* Reserved; */
	(void *)eiint151,
	/* Reserved; */
	(void *)eiint152,
	/* Reserved; */
	(void *)eiint153,
	/* Reserved; */
	(void *)eiint154,
	/* Reserved; */
	(void *)eiint155,
	/* Reserved; */
	(void *)eiint156,
	/* Reserved; */
	(void *)eiint157,
	/* Interrupt for TAUD0 channel 2; */
	(void *)eiint158,
	/* Interrupt for TAUD0 channel 10; */
	(void *)eiint159,
	/* Interrupt for TAUD0 channel 12; */
	(void *)eiint160,
	/* Interrupt for TAUD0 channel 14; */
	(void *)eiint161,
	/* Reserved; */
	(void *)eiint162,
	/* Reserved; */
	(void *)eiint163,
	/* Reserved; */
	(void *)eiint164,
	/* Reserved; */
	(void *)eiint165,
	/* Reserved; */
	(void *)eiint166,
	/* Reserved; */
	(void *)eiint167,
	/* Interrupt for TAUJ1 channel 0; */
	(void *)eiint168,
	/* Interrupt for TAUJ1 channel 1; */
	(void *)eiint169,
	/* Interrupt for TAUJ1 channel 2; */
	(void *)eiint170,
	/* Interrupt for TAUJ1 channel 3; */
	(void *)eiint171,
	/* Reserved; */
	(void *)eiint172,
	/* Reserved; */
	(void *)eiint173,
	/* Reserved; */
	(void *)eiint174,
	/* Reserved; */
	(void *)eiint175,
	/* Reserved; */
	(void *)eiint176,
	/* Reserved; */
	(void *)eiint177,
	/* Reserved; */
	(void *)eiint178,
	/* Reserved; */
	(void *)eiint179,
	/* Reserved; */
	(void *)eiint180,
	/* Reserved; */
	(void *)eiint181,
	/* Reserved; */
	(void *)eiint182,
	/* Reserved; */
	(void *)eiint183,
	/* Reserved; */
	(void *)eiint184,
	/* Reserved; */
	(void *)eiint185,
	/* Reserved; */
	(void *)eiint186,
	/* Reserved; */
	(void *)eiint187,
	/* Reserved; */
	(void *)eiint188,
	/* Reserved; */
	(void *)eiint189,
	/* Reserved; */
	(void *)eiint190,
	/* Reserved; */
	(void *)eiint191,
	/* Reserved; */
	(void *)eiint192,
	/* Reserved; */
	(void *)eiint193,
	/* Reserved; */
	(void *)eiint194,
	/* Reserved; */
	(void *)eiint195,
	/* Reserved; */
	(void *)eiint196,
	/* Reserved; */
	(void *)eiint197,
	/* Reserved; */
	(void *)eiint198,
	/* Reserved; */
	(void *)eiint199,
	/* Reserved; */
	(void *)eiint200,
	/* Reserved; */
	(void *)eiint201,
	/* Reserved; */
	(void *)eiint202,
	/* Reserved; */
	(void *)eiint203,
	/* Reserved; */
	(void *)eiint204,
	/* Reserved; */
	(void *)eiint205,
	/* Reserved; */
	(void *)eiint206,
	/* Reserved; */
	(void *)eiint207,
	/* Reserved; */
	(void *)eiint208,
	/* RTCA0 1-second interval interrupt; */
	(void *)eiint209,
	/* RTCA0 alarm interrupt; */
	(void *)eiint210,
	/* RTCA0 fixed interval interrupt; */
	(void *)eiint211,
	/* Reserved; */
	(void *)eiint212,
	/* Reserved; */
	(void *)eiint213,
	/* Reserved; */
	(void *)eiint214,
	/* Reserved; */
	(void *)eiint215,
	/* Reserved; */
	(void *)eiint216,
	/* CAN2 error interrupt; */
	(void *)eiint217,
	/* CAN2 transmit/receive FIFO receive complete interrupt; */
	(void *)eiint218,
	/* CAN2 transmit interrupt; */
	(void *)eiint219,
	/* Reserved; */
	(void *)eiint220,
	/* Reserved; */
	(void *)eiint221,
	/* Reserved; */
	(void *)eiint222,
	/* Reserved; */
	(void *)eiint223,
	/* Reserved; */
	(void *)eiint224,
	/* Reserved; */
	(void *)eiint225,
	/* Reserved; */
	(void *)eiint226,
	/* Reserved; */
	(void *)eiint227,
	/* Reserved; */
	(void *)eiint228,
	/* Reserved; */
	(void *)eiint229,
	/* Reserved; */
	(void *)eiint230,
	/* Reserved; */
	(void *)eiint231,
	/* Reserved; */
	(void *)eiint232,
	/* Reserved; */
	(void *)eiint233,
	/* Reserved; */
	(void *)eiint234,
	/* Reserved; */
	(void *)eiint235,
	/* Reserved; */
	(void *)eiint236,
	/* Reserved; */
	(void *)eiint237,
	/* Reserved; */
	(void *)eiint238,
	/* Reserved; */
	(void *)eiint239,
	/* RIIC1 transmit data empty interrupt; */
	(void *)eiint240,
	/* RIIC1 receive error/event interrupt; */
	(void *)eiint241,
	/* RIIC1 receive complete interrupt; */
	(void *)eiint242,
	/* RIIC1 transmit complete interrupt; */
	(void *)eiint243,
	/* Reserved; */
	(void *)eiint244,
	/* Reserved; */
	(void *)eiint245,
	/* Reserved; */
	(void *)eiint246,
	/* Reserved; */
	(void *)eiint247,
	/* Reserved; */
	(void *)eiint248,
	/* Reserved; */
	(void *)eiint249,
	/* Reserved; */
	(void *)eiint250,
	/* Reserved; */
	(void *)eiint251,
	/* Reserved; */
	(void *)eiint252,
	/* Reserved; */
	(void *)eiint253,
	/* Reserved; */
	(void *)eiint254,
	/* Reserved; */
	(void *)eiint255,
	/* Reserved; */
	(void *)eiint256,
	/* Reserved; */
	(void *)eiint257,
	/* Reserved; */
	(void *)eiint258,
	/* Reserved; */
	(void *)eiint259,
	/* Reserved; */
	(void *)eiint260,
	/* Reserved; */
	(void *)eiint261,
	/* Reserved; */
	(void *)eiint262,
	/* Reserved; */
	(void *)eiint263,
	/* Reserved; */
	(void *)eiint264,
	/* Reserved; */
	(void *)eiint265,
	/* Reserved; */
	(void *)eiint266,
	/* Reserved; */
	(void *)eiint267,
	/* Reserved; */
	(void *)eiint268,
	/* Reserved; */
	(void *)eiint269,
	/* Reserved; */
	(void *)eiint270,
	/* Reserved; */
	(void *)eiint271,
	/* Reserved; */
	(void *)eiint272,
	/* Reserved; */
	(void *)eiint273,
	/* Reserved; */
	(void *)eiint274,
	/* Reserved; */
	(void *)eiint275,
	/* Reserved; */
	(void *)eiint276,
	/* Interrupt for TAUJ2 channel 0; */
	(void *)eiint277,
	/* Interrupt for TAUJ2 channel 1; */
	(void *)eiint278,
	/* Interrupt for TAUJ2 channel 2; */
	(void *)eiint279,
	/* Interrupt for TAUJ2 channel 3; */
	(void *)eiint280,
	/* Interrupt for TAUJ3 channel 0; */
	(void *)eiint281,
	/* Interrupt for TAUJ3 channel 1; */
	(void *)eiint282,
	/* Interrupt for TAUJ3 channel 2; */
	(void *)eiint283,
	/* Interrupt for TAUJ3 channel 3; */
	(void *)eiint284,
	/* Reserved; */
	(void *)eiint285,
	/* Reserved; */
	(void *)eiint286,
	/* Reserved; */
	(void *)eiint287,
	/* Reserved; */
	(void *)eiint288,
	/* Reserved; */
	(void *)eiint289,
	/* Reserved; */
	(void *)eiint290,
	/* Reserved; */
	(void *)eiint291,
	/* Reserved; */
	(void *)eiint292,
	/* Reserved; */
	(void *)eiint293,
	/* Reserved; */
	(void *)eiint294,
	/* Reserved; */
	(void *)eiint295,
	/* Reserved; */
	(void *)eiint296,
	/* Reserved; */
	(void *)eiint297,
	/* Reserved; */
	(void *)eiint298,
	/* Reserved; */
	(void *)eiint299,
	/* Reserved; */
	(void *)eiint300,
	/* Reserved; */
	(void *)eiint301,
	/* Reserved; */
	(void *)eiint302,
	/* Reserved; */
	(void *)eiint303,
	/* Reserved; */
	(void *)eiint304,
	/* Reserved; */
	(void *)eiint305,
	/* Reserved; */
	(void *)eiint306,
	/* Reserved; */
	(void *)eiint307,
	/* Reserved; */
	(void *)eiint308,
	/* Reserved; */
	(void *)eiint309,
	/* Reserved; */
	(void *)eiint310,
	/* Reserved; */
	(void *)eiint311,
	/* Reserved; */
	(void *)eiint312,
	/* Reserved; */
	(void *)eiint313,
	/* Reserved; */
	(void *)eiint314,
	/* Reserved; */
	(void *)eiint315,
	/* Reserved; */
	(void *)eiint316,
	/* Reserved; */
	(void *)eiint317,
	/* Reserved; */
	(void *)eiint318,
	/* Reserved; */
	(void *)eiint319,
	/* Reserved; */
	(void *)eiint320,
	/* Reserved; */
	(void *)eiint321,
	/* Reserved; */
	(void *)eiint322,
	/* Reserved; */
	(void *)eiint323,
	/* Reserved; */
	(void *)eiint324,
	/* Reserved; */
	(void *)eiint325,
	/* Reserved; */
	(void *)eiint326,
	/* Reserved; */
	(void *)eiint327,
	/* Reserved; */
	(void *)eiint328,
	/* Reserved; */
	(void *)eiint329,
	/* Reserved; */
	(void *)eiint330,
	/* Reserved; */
	(void *)eiint331,
	/* Reserved; */
	(void *)eiint332,
	/* Reserved; */
	(void *)eiint333,
	/* Reserved; */
	(void *)eiint334,
	/* Reserved; */
	(void *)eiint335,
	/* Reserved; */
	(void *)eiint336,
	/* Reserved; */
	(void *)eiint337,
	/* Reserved; */
	(void *)eiint338,
	/* Reserved; */
	(void *)eiint339,
	/* Reserved; */
	(void *)eiint340,
	/* Reserved; */
	(void *)eiint341,
	/* Reserved; */
	(void *)eiint342,
	/* Reserved; */
	(void *)eiint343,
	/* Reserved; */
	(void *)eiint344,
	/* Reserved; */
	(void *)eiint345,
	/* Reserved; */
	(void *)eiint346,
	/* Status interrupt for RSENT0; */
	(void *)eiint347,
	/* Receive interrupt for RSENT0; */
	(void *)eiint348,
	/* Status interrupt for RSENT1; */
	(void *)eiint349,
	/* Receive interrupt for RSENT1; */
	(void *)eiint350,
	/* Reserved; */
	(void *)eiint351,
	/* Reserved; */
	(void *)eiint352,
	/* Reserved; */
	(void *)eiint353,
	/* Reserved; */
	(void *)eiint354,
	/* Reserved; */
	(void *)eiint355,
	/* LPS0 digital port error interrupt; */
	(void *)eiint356,
	/* LPS0 analog port error interrupt; */
	(void *)eiint357,
};

#pragma section
