module dtest1;

extern(C)
{
    void wait(float s);
    void wait_ms(int ms);
    void wait_us(int us);
}

extern(C++)
{
    void led1_write(bool val);
    void led2_write(bool val);
    void led3_write(bool val);
}


extern(C) int main(int argc, char** argv) {
    return d_main();
}


int d_main() {
    // This needs to be called from above

    // turn led's off
    led1_write(false);
    led2_write(false);
    led3_write(false);
 
    while (true) {
	//toggle led1 led on / off
	led1_write(true);
	wait(1);
	led1_write(false);
	wait(1);

	//toggle led2 led on / off
	led2_write(true);
	wait(1);
	led2_write(false);
	wait(1);

	//toggle led3 led on / off
	led3_write(true);
	wait(1);
	led3_write(false);
	wait(1);
    }
    return 0;
}
