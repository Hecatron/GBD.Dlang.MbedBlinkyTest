# Installing Tools

This is just a list of tools / install locations I'm using at the moment
Generally what I do is add all these path entries to a seperate environmental variable called PATHDEVEL
Then add %PATHDEVEL% to the PATH variable in windows


## GCC for Cortex ARM

First we'll need a CPP / C compiler for Cortex-M Arm processors
This is needed to compile the mbed library and link the code.
For windows platforms we can just download install from here:

  * https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads
    gcc-arm-none-eabi-7-2017-q4-major-sha2.exe - For windows 7 and later

This will likley install the tools under a directory such as
"C:\Program Files (x86)\GNU Tools ARM Embedded\7 2017-q4-major\"

Ideally you'll want to add the bin directory to your path after install
"C:\Program Files (x86)\GNU Tools ARM Embedded\7 2017-q4-major\bin"


## Mbed OS

For mbed OS we need to install some dependencies
Make sure all of the below is also added into the path

  * Install the latest 2.x python version
  * Install git
  * Install mercurial

Next we can install the python mbed-cli / mbed-os scripts by using
```
pip install mbed-cli
```
The "mbed" command should now be available from a Windows Command line prompt


## LDC

The reference DMD compiler only supportsi386 / x64 at the time of wrting.
For Arm we can ether use GDC or LDC, I've picked LDC here as it seems to have better interop with C / C++
And has support for the -BetterC command line option to remove dependencies on the D Runtime.

  * https://github.com/ldc-developers/ldc
  * https://dlang.org/blog/2018/03/06/ldc-1-8-0-released/

I'd recommend extracting the latest release into somewhere like
C:\Apps\ldc2-1.8.0-windows-x64

Then adding the bin directory to your path
C:\Apps\ldc2-1.8.0-windows-x64\bin


## OpenOCD

For flashing the firmware to the board and debugging, we can ether use JLink (with a JLink adapter)
or OpenOCD if the board has a CMSIS-DAP adapter

  * http://gnutoolchains.com/arm-eabi/openocd/

Extract it to somewhere like
C:\Apps\OpenOCD-20170821

Then add the bin directory to the path
C:\Apps\OpenOCD-20170821\bin


## Clang / LLVM

Another bit of software we may want, for compiling DStep / Calypso
is LLVM / clang

  * http://releases.llvm.org/download.html

This will likley install itself into 
C:\Program Files\LLVM

so again make sure the bin directory is in the path
C:\Program Files\LLVM\bin


## Visual Studio Code

You can grab Visual Studio code from
https://code.visualstudio.com/

I've listed the plugins in a seperate file
