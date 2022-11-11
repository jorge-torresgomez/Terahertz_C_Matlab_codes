/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_pathLoss_interface_mex.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 28-Oct-2022 16:07:45
 */

#ifndef _CODER_PATHLOSS_INTERFACE_MEX_H
#define _CODER_PATHLOSS_INTERFACE_MEX_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_pathLoss_interface_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                           int32_T nrhs,
                                           const mxArray *prhs[5]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_pathLoss_interface_mex.h
 *
 * [EOF]
 */
