# <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR7o6p4tZT_ORfBAOCJ0DD7CPSyOo3ZToXUVQ&usqp=CAU" width="64" height="64"> Porting freeRTOS on Renesas RH850

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
- [Youtube Video Tutorial : How to port freeRTOS to Renesas RH850](https://www.youtube.com/watch?v=Wvf05a59v3M)

# How to port freeRTOS to Renesas RH850 : Releases
* First release – release 1.0.0  : Date - 12-03-2020

# Licensing
This porting is released under [MIT](https://opensource.org/licenses/MIT) open source licenses.
MIT licence is free to use & doesn't require modifications be open sourced.

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRYQoSrP63RCORrRsqBdpHP8vywuqwxtKY1rw&usqp=CAU "License")