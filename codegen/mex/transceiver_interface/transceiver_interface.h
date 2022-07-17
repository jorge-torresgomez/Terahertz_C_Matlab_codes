/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceiver_interface.h
 *
 * Code generation for function 'transceiver_interface'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void transceiver_interface(const emlrtStack *sp, real_T Freq_THz,
                           real_T Comm_dist_init, real_T Skin_thickness,
                           real_T Tissue_thickness, real_T Vessel_thickness,
                           real_T blood_speed, real_T bits,
                           real_T *Const_Tx_real, real_T *Const_Tx_imag,
                           real_T *Const_Rx_real, real_T *Const_Rx_imag);

/* End of code generation (transceiver_interface.h) */
