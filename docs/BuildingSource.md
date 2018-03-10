# Building the source

## .mbedignore file

Generally when calling the "mbed compile" command
mbed will look for any c / cpp files from the source root down and automatically try to compile them / include them into the final binary
For any .o built files, these will also be automatically linked in without specifying.

To control what we want built we can use a file called .mbedignore
This operates similar to .gitignore, in that we can just exclude anything we don't want compiled or included into the built firmware.

For example to use the code under dtest1, but ignore dtest2
```
# D Test 1 - simple blinky
#src/dtest1/

# D Test 1 - creation of a class
src/dtest2/
```

### Disabling the mbed RTOS

By default mbed includes a Real Time OS for multiple threads etc.
In this case to keep things simple from a debugging point of view we can turn that off by including the following into the .mbedignore file

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

## Building the Source

There's a couple of simple scripts to build the source
make sure to build D first, so that the mbed build can pick up on the generates object files

```
cd src\dtest1
build_dsource.bat
build_mbed.bat
```

The end result should be within:
```
.\BUILD\LPC1768\GCC_ARM\GBD.Dlang.MbedBlinkyTest.bin
.\BUILD\LPC1768\GCC_ARM\GBD.Dlang.MbedBlinkyTest.elf
```

## Flashing the source

This can be done within Visual Studio Code by using the "launch" mode of the GDB Cortex-M plugin
or by calling the script
```
scripts\openocd_startserver.bat
```
