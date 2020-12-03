# This sample project is porting for freeRTOS on RH850.

* CS+ with asm file : This folder contains the porting using CCRH compiler with portable assembly routines, in assembly language PORT_ASM.asm
* CS+ with inline asm : This folder contains the porting using CCRH compiler with portable assembly routines, in inline assembly port.c
* GHS : This folder contains the porting using GHS compiler.

# Development enviroment used for porting freeRTOS on RH850.
* Author  : Dinesh Guleria
* Author Email : din.gulu.er@gmail.com
* MCU : RH850/F1KM-S1
* Part Number : R7F701690, 64 pins
* Main Clock crystal : 8 MHZ
* IDE used = CS+ (GHS Multi)
* Compiler = CCRH (GHS compiler)
* OSTM0 = used as RTOS timer = 1 msec interval timer
* TAUJ0 = 1 msec interval timer (this timer do not have any thing to do with RTOS)
* freeRTOS = V10.4.1

# Tutorial:  How to port freeRTOS to Renesas RH850
- [Youtube Video Tutorial : How to port freeRTOS to Renesas RH850](https://www.youtube.com/watch?v=Wvf05a59v3M)

# How to port freeRTOS to Renesas RH850 : Releases
* First release – release (1.0.0) : Date - 12-03-2020

# Licensing
This porting is released under commercial and [GNU GPL v.2](http://www.gnu.org/licenses/old-licenses/gpl-2.0.html) open source licenses.

