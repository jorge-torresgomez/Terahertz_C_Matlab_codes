# Terahertz_C_Matlab
Terahertz channel model after compiling C code in Matlab

## How to run this code:
The main file for this code is the Matlab file 'terahertz_simulator.mlx'. From this file the parameters are defined and the C code is compiled and runned.

 This code calls to functions implemented in C/C++ (see terahertz.c and terahertz.h). The functions defined in these two files simulate and evaluate the communication system. To re-build these functions, it is needed to install the MinGW-w64 Compiler (free) through matlab and to uncomment lines in the compiling block below.
