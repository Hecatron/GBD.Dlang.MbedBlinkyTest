# Cpp Classes

I need to figure out the best way to access mbed's C++ API from D
One of the limitation when defining C++ class's within D

  * Can the generation of the class wrappers be automated?
  * I think D doesn't support Class constructors / they need to be re-implemented on the D side.


## Links

  * http://rainers.github.io/visuald/visuald/CppConversion.html
  * https://github.com/adamdruppe/tools/blob/7d077b26d991dd5705e834900f66bea737a233b2/dtoh.d


## Options

  * The first option would be to manually write the wrappers needed, then re-implement the class constructor within D
    The class constructor part might make things difficult.
    Also the class would need to be created on the D side which means we may need memory allocation code / Garbage Collector (no BetterC)
 
  * The next approach might be to look into Calypso
    https://github.com/Syniurge/Calypso
    I'm not sure if this eliminates the class constructor problem

  * Another approach might be to look into using CppSharp to analyse the C++ code then use the results to generate D code


### D Runtime versions

The latest version of DMD 2.079.0 I think eliminates the need for -BetterC which completley disables the runtime
instead, with this version you can just use the features needed without the need to link in the whole runtime

  * https://dlang.org/changelog/2.079.0.html#minimal_runtime

However LDC is needed for ARM CPU support, and at the time of writing is only at 2.078.0
so has BetterC support but not the above.

I think Calypso is further behind than LDC as it's a fork



### Tools

I think these only manage C not C++

  * DStep - not managed to get this to work yet under windows
  * HTOD - https://dlang.org/htod.html - not open source
