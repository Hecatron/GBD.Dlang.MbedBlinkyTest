# Debugging Arm MCU's under VSCode


## Overview

There's a few different ways to setup VSCode for debugging an ARM MCU

The first thing to remember is that when compiling a C / Cpp file with debugging information
the path to the file is included within the file. This means if the cpp file is copied from one directory to another then built
you need to make sure to add breakpoints in the place where it's been copied to before it's compiled.

Typically with debugging it works as follows.

**Hardware** -> **PC** -> **OpenOCD / JLink Server** -> **GDB Client**

OpenOCD can connect to a JLink interface, but under windows it may require forcing the USB driver to something other than the default JLink one.


## Updating STLink to use JLink firmware

One feature a lot of the new ST32 based boards have, is the ability to use JLink firmware on the STLink side of the board.
which makes debugging a lot easier / faster.

  * https://www.segger.com/products/debug-probes/j-link/models/other-j-links/st-link-on-board/
  * https://www.youtube.com/watch?v=ezPou8W_Ntc

Another approach is to attach a external Segger JLink to the STLink pins

  * https://mcuoneclipse.com/2015/08/22/debugging-stm32f103rb-nucleo-board-with-with-segger-j-link/


## SVD Files

SVD Files are a way of describing the microcontroller hardware, to spy on registers etc
There seems to be a good list here

  * https://github.com/posborne/cmsis-svd

The Cortex GDB plugin can use these to list the registers and states
It's recently been fixed for LPC based boards svd files

  * https://github.com/Marus/cortex-debug/issues/28



## GDB Debugging


### GDB Debugging via Command Line

The first step is to run the debug server
Based on which interface is in use

  * https://stackoverflow.com/questions/38033130/how-to-use-the-gdb-gnu-debugger-and-openocd-for-microcontroller-debugging-fr

This could ether be openocd or Jlink
```
# For OpenOCD / STLink
scripts\openocd_startserver.bat
# This just runs the following to read in a config file
# openocd -f scripts\openocd_configs\usb_boardconf_stlink.cfg
```

```
# For JLink / JLink firmware interface
scripts\jlink_startserver.bat
# This runs the following
# JLinkGDBServer.exe -device STM32F767ZI -endian little -if SWD -speed auto -noir -LocalhostOnly
```

For openOCD we can connect to it via telnet at this stage via 4444
for JLink there's JLink commander we can use instead but is similar


Next we need to fire up an instance of GDB to connect to the server
The difference between the two is the default port number, and the command to enable semihosting mode

```
# For OpenOCD / STLink
scripts\openocd_startgdb.bat
# This runs the following
# arm-none-eabi-gdb.exe --eval-command="target remote localhost:3333" --eval-command="load ./mbed-build/BuildOut/mbed-build.elf" --eval-command="monitor arm semihosting enable"
```

```
# For JLink / JLink firmware interface
scripts\jlink_startgdb.bat
 # This runs the following
# arm-none-eabi-gdb.exe --eval-command="target remote localhost:2331" --eval-command="load ./mbed-build/BuildOut/mbed-build.elf" --eval-command="monitor semihosting enable"
```

At this point we now have a gdb cli we can use


### JLink


  * https://hackaday.io/project/21045-stm32-bluepill-frameworks-evaluation/log/57272-vscode-configuring-and-debugging

We can specify a debug profile wthin launch.json, which can then be used within Visual Studio code
The "attach" option launches it's own JLink GDB server instance and attaches to the board without programming
the "launch" option I believe also flashes / updates the code on the device
with JLink it'll only flash if it detects a difference with the firmware against the current memory

This is for the Cortex Arm specific GDB plugin for VSCode:
```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug (JLink Segger) - Cortex GDB",
            "type": "cortex-debug",
            "request": "launch",
            "servertype": "jlink",
            "cwd": "${workspaceRoot}",
	        "svdFile": "${workspaceFolder}/scripts/svd/STM32F7x7.svd",
            "executable": "./mbed-build/BuildOut/mbed-build.elf",
            "device": "STM32F767ZI",
            "interface": "swd",
        },
    ]
}
```


For Vanilla GDB within Visual Studio Code we can use the following
however this requires the manual starting of the JLink GDB Server before hand (scripts\jlink_startserver.bat)
```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug (JLink Segger) - Attach to GDB",
            "type": "gdb",
            "request": "attach",
            "executable": "${workspaceRoot}/mbed-build/BuildOut/mbed-build.elf",
            "target": ":2331",
            "remote": true,
            "cwd": "${workspaceRoot}",
            "gdbpath": "arm-none-eabi-gdb.exe",
            "autorun": [
                "load ./mbed-build/BuildOut/mbed-build.elf",
                "monitor semihosting enable",
                "monitor reset"
             ]
        },
    ]
}

```

### OpenOCD

If we're using OpenOCD / STLink or some other non JLink interface
then this can be used for the Cortex Arm specific GDB
```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug (OpenOCD USB) - Cortex GDB",
            "type": "cortex-debug",
            "request": "launch",
            "device": "STM32F767ZI",
            "servertype": "openocd",
            "cwd": "${workspaceRoot}",
            "svdFile": "${workspaceFolder}/scripts/svd/STM32F7x7.svd",
            "executable": "./mbed-build/BuildOut/mbed-build.elf",
            "configFiles": [
                "${workspaceRoot}/scripts/openocd_configs/usb_boardconf_stlink.cfg"
            ]
        },
    ]
}
```

For vanilla GDB we can use the following
but we first need to start the openocd server separately (scripts\openocd_startserver.bat)
also this doesn't have the svd feature for viewing registers
```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug (OpenOCD USB) - Attach to GDB",
            "type": "gdb",
            "request": "attach",
            "executable": "${workspaceRoot}/mbed-build/BuildOut/mbed-build.elf",
            "target": ":3333",
            "remote": true,
            "cwd": "${workspaceRoot}",
            "gdbpath": "arm-none-eabi-gdb.exe",
            "autorun": [
                "load ./mbed-build/BuildOut/mbed-build.elf",
                "monitor arm semihosting enable"
             ]
        },
    ]
}
```


TODO https://os.mbed.com/docs/latest/tutorials/visual-studio-code.html
