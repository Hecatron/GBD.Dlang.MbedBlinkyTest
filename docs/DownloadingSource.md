# Downloading the Source

There's a couple ways of downloading / setting up this source

## Using git

First we git clone the repo
```
git clone https://github.com/grbd/GBD.Dlang.MbedBlinkyTest.git
```

Next we then trigger a download of the needed libraries (mbed-os)
```
cd GBD.Dlang.MbedBlinkyTest
mbed deploy
mbed new .
```

## Using the mbed-os tool

A shortcut to the above is to use the mbed import command
This assumes you've already installed python and the mbed-os tools
```
mbed import https://github.com/grbd/GBD.Dlang.MbedBlinkyTest.git
```


## Configuring Mbed

```
mbed config target LPC1768
mbed toolchain GCC_ARM
mbed config GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\7 2017-q4-major\bin"
```
