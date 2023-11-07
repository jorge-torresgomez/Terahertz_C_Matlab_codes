# Terahertz_C_Matlab
This code evaluates channel models in terahertz bands for in-body to out-body communications and synchronization mechanisms. The calculation is made in C code, which is compiled and runned using the Matlab interface. Plots related to path loss, doppler effect, and communication performance are implemented in Matlab code.

## How to run this code:
There two main files for this code, one related to model the path loss with the Matlab file `terahertz_simulator.mlx`, the second file is `terahertz_synch.mlx` which implements a synchronization scheme. Besides the file `terahertz_CRLB.mlx` evaluates the Cramer-Rao lower bound for the synchronizer. From these files, the parameters are defined and the C code is compiled and run.
In Matlab, it is needed to install the [MinGW-w64 Compiler (free)](https://www.mathworks.com/help/matlab/matlab_external/install-mingw-support-package.html).

## Files and Folders
1. `terahertz_simulator.mlx`: Main Matlab file to run path loss model code.
2. `terahertz_synch.mlx`: Main Matlab file to run the synchronization scheme.
3. `terahertz_CRLB.mlx`: Main file to evaluate the Cramer-Rao lower bound.
4. `terahertz.c`: Implementation of functions in C code .
5. `terahertz.h`: Prototypes for the C code functions.
6. `channel_model.m`: Matlab code as the interface to compile the C code for the path loss.
7. `channel_model_mex.mexw64`: Precompiled C code in Matlab.
8. `codegen`: Folder with all the compiled C code in Matlab.
