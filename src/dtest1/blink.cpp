#include "mbed.h"

// 3 different led outputs for RGB on the board

//LPC1769
//DigitalOut led1(P0_22);
//DigitalOut led2(P3_26);
//DigitalOut led3(P3_25);

//NUCLEO_F767ZI
DigitalOut led1(PB_0);  // Green
DigitalOut led2(PB_7);  // Blue
DigitalOut led3(PB_14); // Red

void led1_write(bool val) {
    led1 = val;
}

void led2_write(bool val) {
    led2 = val;
}

void led3_write(bool val) {
    led3 = val;
}
