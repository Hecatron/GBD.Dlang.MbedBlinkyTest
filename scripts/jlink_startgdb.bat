arm-none-eabi-gdb.exe --eval-command="target remote localhost:2331" --eval-command="load ./mbed-build/BUILD/NUCLEO_F767ZI/GCC_ARM/mbed-build.elf" --eval-command="monitor semihosting enable"
