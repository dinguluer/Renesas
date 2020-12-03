# <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR7o6p4tZT_ORfBAOCJ0DD7CPSyOo3ZToXUVQ&usqp=CAU" width="64" height="64"> Porting freeRTOS on Renesas RH850

![](https://img.shields.io/badge/license-GPL_2-green.svg "License")

This sample project is porting for freeRTOS on RH850.

* RH850 : This folder contains the code
* Smart_configurator : This folder contains the smart configurator project for generating drivers for RH850/F1KM-S1, R7F701690, 64 pins. same drivers are used in folder RH850.

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
- [Youtube tutorial : How to port freeRTOS to Renesas RH850](https://github.com/dinguluer/Renesas)

# How to port freeRTOS to Renesas RH850 : Releases
* First release – release 1.0.0 (Jyot) : Date - 12-03-2020

# Licensing
This porting is released under commercial and [GNU GPL v.2](http://www.gnu.org/licenses/old-licenses/gpl-2.0.html) open source licenses.

