# Readme

This is an experiment to see if I can get Dlang to work with mbed for an embedded Cortex M Arm processor.
I'm using a Windows 10 environment with Visual Studio 2017 / Visual Studio Code installed
so all the docs reflect this.

The two area's I'm looking at include

  * Can I get single stepping / GDB debugging working within Visual Studio Code / D
  * Easy way to access the mbed class api from within D


## Basic run through

There's some documentation within the docs directory for setting everything up / notes I've made so far
To build the source for dtest1

First edit the .mbedignore file
mbed will try to automatically compile any cpp files it finds, and link in any .o files it finds unless told to ignore them
so comment out anything you want included, and uncomment anything to be ignored.


Next open a command line window
```
# Build the source
cd src\dtest1
build_dsource.bat
build_mbed.bat
```

Next open a second command line window
```
# From the root source directory
# Flash the generated image
scripts\scripts\openocd_flash.bat
```


## Board

The board I'm testing with is the LPC1769 Xpresso with CMSIS-DAP
This is the newer one that allows debugging by using openocd on the host via the CMSIS-DAP interface on the board
Although I've also been using a JLink Segger adapter as well.

  * https://www.embeddedartists.com/products/lpcxpresso/lpc1769_cmsis_xpr.php

## DLang Links

  * https://wiki.dlang.org/Compilers
  * https://wiki.dlang.org/Bare_Metal_ARM_Cortex-M_GDC_Cross_Compiler
  * https://wiki.dlang.org/Minimal_semihosted_ARM_Cortex-M_%22Hello_World%22
  * https://wiki.dlang.org/Runtime_internals
  * https://dlang.org/spec/cpp_interface.html#lifetime-management
  * https://stackoverflow.com/questions/20893471/calling-c-from-d
  * https://code.dlang.org/
  * http://derelictorg.github.io/
