module dtest2.main;
import dtest2.mbed_testwrapper;

extern(C) int main(int argc, char** argv) {
    return d_main();
}


int d_main() {
    // Next problem seems to be the construction of a new c++ class under D
    // the symbol names match though, but we're missing the D runtimes needed
    // https://dlang.org/spec/cpp_interface.html#lifetime-management
    // https://stackoverflow.com/questions/20893471/calling-c-from-d
    // We need a class constructor on the C++ code side

    DigitalOut led1 = new DigitalOut(PinName.P0_22);
    DigitalOut led2 = new DigitalOut(PinName.P3_26);
    DigitalOut led3 = new DigitalOut(PinName.P3_25);

    // This turns LED's off
    led1.write(true);
    led2.write(true);
    led3.write(true);

    // Blink each RGB led
    while (true) {
        blink(led1);
        blink(led2);
        blink(led3);
    }

    return 0;
}

void blink(DigitalOut ledval)
{
    ledval.write(false);
    wait(1);
    ledval.write(true);
    wait(1);
}
