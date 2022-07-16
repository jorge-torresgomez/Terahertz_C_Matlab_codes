# Terahertz_C_Matlab
This code evaluates channel models in terahertz bands for in-body to out-body communications. The calculation is made in C code, which is compiled and runned using the Matlab interface. Plots related to path loss, doppler effect, and communication performance are implemented in Matlab code.

## How to run this code:
The main file for this code is the Matlab file `terahertz_simulator.mlx`. From this file, the parameters are defined and the C code is compiled and run.
In Matlab, it is needed to install the [MinGW-w64 Compiler (free)](https://www.mathworks.com/help/matlab/matlab_external/install-mingw-support-package.html).

## Files and Folders
1. `terahertz_simulator.mlx`: Main Matlab file to run the code.
2. `terahertz.c`: Implementation of functions in C code .
3. `terahertz.h`: Prototypes for the C code functions.
4. `channel_model.m`: Matlab code as the interface to compile the C code for the path loss.
5. `channel_model_mex.mexw64`: Precompiled C code in Matlab.
7. `codegen`: Folder with all the compiled C code in Matlab.
