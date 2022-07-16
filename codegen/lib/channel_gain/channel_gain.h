/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: channel_gain.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Jul-2022 16:14:22
 */

#ifndef CHANNEL_GAIN_H
#define CHANNEL_GAIN_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern double channel_gain(double Freq_THz, double Comm_dist,
                           double Skin_thickness, double Tissue_thickness,
                           double Vessel_thickness);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for channel_gain.h
 *
 * [EOF]
 */
