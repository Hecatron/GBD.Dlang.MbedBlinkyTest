#include "mbed.h"
#include "rtos.h"

void led1_write(bool val);
void led2_write(bool val);
void led3_write(bool val);

int main() {

    // turn led's off
    led1_write(false);
    led2_write(false);
    led3_write(false);
 
    while (true) {
		//toggle led1 led on / off
		led1_write(true);
		Thread::wait(1000);
		led1_write(false);
		Thread::wait(1000);

		//toggle led2 led on / off
		led2_write(true);
		Thread::wait(1000);
		led2_write(false);
		Thread::wait(1000);

		//toggle led3 led on / off
		led3_write(true);
		Thread::wait(1000);
		led3_write(false);
		Thread::wait(1000);
    }
}
