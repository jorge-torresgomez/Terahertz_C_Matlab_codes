/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_doppler_interface_mex.c
 *
 * Code generation for function '_coder_doppler_interface_mex'
 *
 */

/* Include files */
#include "_coder_doppler_interface_mex.h"
#include "_coder_doppler_interface_api.h"
#include "doppler_interface_data.h"
#include "doppler_interface_initialize.h"
#include "doppler_interface_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void doppler_interface_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                   const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        17, "doppler_interface");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "doppler_interface");
  }
  /* Call the function. */
  doppler_interface_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&doppler_interface_atexit);
  /* Module initialization. */
  doppler_interface_initialize();
  /* Dispatch the entry-point. */
  doppler_interface_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  doppler_interface_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_doppler_interface_mex.c) */
