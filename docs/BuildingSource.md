# Building the source

Generally when calling the "mbed compile" command
mbed will look for any c / cpp files from the source root down and automatically try to compile them / include them into the final binary
For any .o built files, these will also be automatically linked in without specifying.

The build scripts here ares setup to copy files into mbed-build\src-bld
then run mbed compile from the mbed-build directory

.mbedignore can be used to ignore certain files to build if needed


## Disabling the mbed RTOS

By default mbed includes a Real Time OS for multiple threads etc.
To get the code size / compile time down
we can include the following into the .mbedignore file

  * https://os.mbed.com/blog/entry/Reducing-memory-usage-by-tuning-RTOS-con/

```
mbed-os/rtos/*
mbed-os/features/FEATURE_CLIENT/*
mbed-os/features/FEATURE_COMMON_PAL/*
mbed-os/features/FEATURE_UVISOR/*
mbed-os/features/FEATURE_LWIP/*
mbed-os/features/frameworks/*
mbed-os/features/net/*
mbed-os/features/netsocket/*
mbed-os/features/storage/*
mbed-os/events/*
```


## Issue with RTOS

There seems to be a bit of a bug at least for the LPC1769 associated with debugging and mbed_os
since I'm now using a STM32 device I'm ignoring this for now

  * https://github.com/ARMmbed/mbed-os/issues/6317

Current workaround is to make sure the below is excluded at bare minimum for LPC1769
```
mbed-os/rtos/*
mbed-os/features/FEATURE_LWIP/*
mbed-os/features/frameworks/*
mbed-os/features/netsocket/*
```


## Building the Source

There's a simple script to build the source

```
cd src\dtest1
build.py clean
build.py build
```

The end result should be within:
```
mbed-build\BuildOut\mbed-build.bin
mbed-build\BuildOut\mbed-build.elf
mbed-build\BuildOut\mbed-build.hex
```

elf files and hex files both contain memory address's for where the code should sit
bin files need an offset sometimes to say what address they start from
I've enabled hex output for easier use with JLink

The build script for Dlang is actually running
```
ldc2 -gc -mtriple=thumb-none-linux-eabi -mcpu=cortex-m3 --od=. -c -betterC main.d
```
The -gc option is important so that we can single step / debug the D code within Visual Studio Code

  * https://forum.dlang.org/thread/op.u9gqy1z5tuzx1w@cybershadow.mshome.net


### Compiler Flags

  * **-gc** - This causes the compiler to add in debugger info that's compatible with regular C tools
  * **-BetterC** - This results in the runtime being stripped from the resultant object file, but limits the feature set
  * **-c** - prevents linking

TODO can we try building without -BetterC to see what the size will be like?



## Flashing the source

This can be done within Visual Studio Code by using the "launch" mode of the GDB Cortex-M plugin
or by calling one of the scripts
```
scripts\jlink_flash.bat
scripts\openocd_flash.bat
```
