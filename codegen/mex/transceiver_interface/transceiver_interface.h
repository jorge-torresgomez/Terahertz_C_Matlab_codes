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
void transceiver_interface(
    const emlrtStack *sp, real_T Freq_THz, real_T dist_init_x,
    real_T Skin_thickness, real_T Tissue_thickness, real_T Vessel_thickness,
    real_T blood_speed, real_T mod_order_int, const real_T bits[128000],
    real_T bit_rate, real_T A, real_T Const_Tx_real[128000],
    real_T Const_Tx_imag[128000], real_T Const_Rx_real[128000],
    real_T Const_Rx_imag[128000], real_T nanosensor_pos_x[128000]);

/* End of code generation (transceiver_interface.h) */
