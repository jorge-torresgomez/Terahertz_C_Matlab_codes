/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_pathLoss_api.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Jul-2022 17:29:29
 */

#ifndef _CODER_PATHLOSS_API_H
#define _CODER_PATHLOSS_API_H

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
real_T pathLoss(real_T Freq_THz, real_T Comm_dist, real_T Skin_thickness,
                real_T Tissue_thickness, real_T Vessel_thickness);

void pathLoss_api(const mxArray *const prhs[5], const mxArray **plhs);

void pathLoss_atexit(void);

void pathLoss_initialize(void);

void pathLoss_terminate(void);

void pathLoss_xil_shutdown(void);

void pathLoss_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_pathLoss_api.h
 *
 * [EOF]
 */
