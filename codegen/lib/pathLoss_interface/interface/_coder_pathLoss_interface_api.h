/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_pathLoss_interface_api.h
 *
 * MATLAB Coder version            : 5.5
 * C/C++ source code generated on  : 27-Jan-2023 13:20:22
 */

#ifndef _CODER_PATHLOSS_INTERFACE_API_H
#define _CODER_PATHLOSS_INTERFACE_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T pathLoss_interface(real_T Freq_THz, real_T Comm_dist,
                          real_T Skin_thickness, real_T Tissue_thickness,
                          real_T Vessel_thickness);

void pathLoss_interface_api(const mxArray *const prhs[5], const mxArray **plhs);

void pathLoss_interface_atexit(void);

void pathLoss_interface_initialize(void);

void pathLoss_interface_terminate(void);

void pathLoss_interface_xil_shutdown(void);

void pathLoss_interface_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_pathLoss_interface_api.h
 *
 * [EOF]
 */
