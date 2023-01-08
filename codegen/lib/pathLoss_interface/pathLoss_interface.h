/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: pathLoss_interface.h
 *
 * MATLAB Coder version            : 5.5
 * C/C++ source code generated on  : 06-Jan-2023 23:11:29
 */

#ifndef PATHLOSS_INTERFACE_H
#define PATHLOSS_INTERFACE_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern double pathLoss_interface(double Freq_THz, double Comm_dist,
                                 double Skin_thickness, double Tissue_thickness,
                                 double Vessel_thickness);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for pathLoss_interface.h
 *
 * [EOF]
 */
