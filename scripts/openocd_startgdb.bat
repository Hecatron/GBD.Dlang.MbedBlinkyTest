arm-none-eabi-gdb.exe --eval-command="target remote localhost:3333" --eval-command="load ./mbed-build/BuildOut/mbed-build.elf" --eval-command="monitor arm semihosting enable"
