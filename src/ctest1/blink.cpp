#include "mbed.h"

// 3 different led outputs for RGB on the board
DigitalOut led1(P0_22);
DigitalOut led2(P3_26);
DigitalOut led3(P3_25);

void led1_write(bool val) {
    led1 = val;
}

void led2_write(bool val) {
    led2 = val;
}

void led3_write(bool val) {
    led3 = val;
}
