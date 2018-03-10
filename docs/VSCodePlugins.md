# Visual Studio Code Plugins


## C Plugins

For writing c++ code within VSCode we can use

  * https://github.com/Microsoft/vscode-cpptools
  * https://github.com/austin-----/code-gnu-global
  * C/C++ Clang Command Adapter                          -- ****


## GDB Plugins

For debugging a Cortex-M proccessor with GDB / via a cable attached to the device.

  * https://marcelball.ca/projects/cortex-debug/cortex-debug-launch-configurations/
  * https://github.com/Marus/cortex-debug

This might come in useful, it's another GDB related plugin, but more related to native GDB debugging

  * https://github.com/WebFreak001/code-debug


## D Plugins

This seems to be the more popular plugin for writing DLang

  * https://github.com/Pure-D/code-d                     -- *****
  * dlang-bundle - additional tools for supporting the D Tools

Note with the above it's important to make sure the dmd compiler is in the path for the needed tools to build

In order to get DCD to compile I had to do the following in a seperate directory

```
git clone --recursive --depth=1 https://github.com/Hackerpilot/DCD.git DCD
git submodule update --init --recursive
build.bat
```

Then copy the contents of the bin directory across to
C:\Users\USERNAME\.vscode\extensions\webfreak.code-d-0.16.3\bin\DCD

Then add the following to the configuration settings for the D plugin
```
    "d.dcdClientPath": "C:\\Users\\USERNAME\\.vscode\\extensions\\webfreak.code-d-0.16.3\\bin\\DCD\\bin\\dcd-client.exe",
    "d.dcdServerPath": "C:\\Users\\USERNAME\\.vscode\\extensions\\webfreak.code-d-0.16.3\\bin\\DCD\\bin\\dcd-server.exe",
```
