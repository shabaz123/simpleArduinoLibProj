# simpleArduinoLibProj

License: see the LICENSE file.

This repository contains the files needed to construct an example Arduino library called **Megatest**. 

The repository also contains files for testing the library on a Linux PC, prior to uploading it to an actual Arduino board.

To test the code, type:

```
cd simpleArduinoLibProj/src
mkdir -p build
cd build
rm -rf *
cmake ..
make
./megatest
```

To build the library zip file, execute the Python **make_arduino_library.py** code. Note that **zip** needs to be installed for the Python code to function. On Ununtu, that's done using the following command: **apt install zip**

