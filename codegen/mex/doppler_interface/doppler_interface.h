/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * doppler_interface.h
 *
 * Code generation for function 'doppler_interface'
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
real_T doppler_interface(const emlrtStack *sp, real_T Freq_THz,
                         real_T Comm_dist, real_T Skin_thickness,
                         real_T Tissue_thickness, real_T Vessel_thickness,
                         real_T blood_speed);

/* End of code generation (doppler_interface.h) */
