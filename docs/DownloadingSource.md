# Downloading the Source

There's a couple ways of downloading / setting up this source

## Using git

First we git clone the repo
```
git clone https://github.com/grbd/GBD.Dlang.MbedBlinkyTest.git
```

Next we then trigger a download of the needed libraries (mbed-os)
```
cd GBD.Dlang.MbedBlinkyTest\mbed-build
mbed deploy
mbed new .
```
