/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_channel_gain_api.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Jul-2022 16:14:22
 */

#ifndef _CODER_CHANNEL_GAIN_API_H
#define _CODER_CHANNEL_GAIN_API_H

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
real_T channel_gain(real_T Freq_THz, real_T Comm_dist, real_T Skin_thickness,
                    real_T Tissue_thickness, real_T Vessel_thickness);

void channel_gain_api(const mxArray *const prhs[5], const mxArray **plhs);

void channel_gain_atexit(void);

void channel_gain_initialize(void);

void channel_gain_terminate(void);

void channel_gain_xil_shutdown(void);

void channel_gain_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_channel_gain_api.h
 *
 * [EOF]
 */
