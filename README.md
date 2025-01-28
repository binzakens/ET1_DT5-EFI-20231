PREREQUISITES:

I. Hardware: 

Using (Zybo Z7-10): ZYNQ-7000 ARM/FPGA Development Board

* Programmable System-on-Chip (AP SoC) architecture, which tightly integrates a dual-core ARM Cortex-A9 processor with Xilinx 7-series Field Programmable Gate Array (FPGA) logic.

Using small-scale Electronic Pump (depend on which kind of scenarios), an SD card 16GB or above (plug on-board)

II. Software

1. SystemC and reference resources

a) SystemC-2.3.3, download at https://www.accellera.org/downloads/standards/systemc

b) GTK wave
If you're using any Debian based distro (such as Ubuntu), follow these command lines to install.
```
$ sudo apt-get update && sudo apt upgrade
```
```
$ sudo apt-get -y install gtkwave 
```
If you're using any Arch based distro, follow these command lines instead.
```
$ sudo pacman -Syu
```
```
$ sudo pacman -S gtkwave
```
or you can using the latest version on the AUR repository by:
```
$ sudo yay -Syy
```
```
$ sudo yay -S gtkwave-gtk3
```
2. Xilinx SDK, download at https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools.html

Imply C++ source code to the board via UART protocol. Using such lib like <stdio.h> <stdlib.h> and include in "platform.h" "xil_printf.h" "xgpio.h" "xtime_l.h"

3. FreeRTOS for utilize real-time concepts

4. Model Sim to stimulate hardware in Verilog/HDL and transforms signal in RTL
