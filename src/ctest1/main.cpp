#include "mbed.h"

void led1_write(bool val);
void led2_write(bool val);
void led3_write(bool val);

int main() {

    // turn led's off
    led1_write(true);
    led2_write(true);
    led3_write(true);
 
    while (true) {
		//toggle led1 led on / off
		led1_write(false);
		wait(1);
		led1_write(true);
		wait(1);

		//toggle led2 led on / off
		led2_write(false);
		wait(1);
		led2_write(true);
		wait(1);

		//toggle led3 led on / off
		led3_write(false);
		wait(1);
		led3_write(true);
		wait(1);
    }
}
