/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: doppler_interface.h
 *
 * MATLAB Coder version            : 5.5
 * C/C++ source code generated on  : 27-Jan-2023 13:20:36
 */

#ifndef DOPPLER_INTERFACE_H
#define DOPPLER_INTERFACE_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern double doppler_interface(double Freq_THz, double Comm_dist,
                                double Skin_thickness, double Tissue_thickness,
                                double Vessel_thickness, double blood_speed);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for doppler_interface.h
 *
 * [EOF]
 */
