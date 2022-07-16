/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_channel_gain_mex.c
 *
 * Code generation for function '_coder_channel_gain_mex'
 *
 */

/* Include files */
#include "_coder_channel_gain_mex.h"
#include "_coder_channel_gain_api.h"
#include "channel_gain_data.h"
#include "channel_gain_initialize.h"
#include "channel_gain_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void channel_gain_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        12, "channel_gain");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "channel_gain");
  }
  /* Call the function. */
  channel_gain_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&channel_gain_atexit);
  /* Module initialization. */
  channel_gain_initialize();
  /* Dispatch the entry-point. */
  channel_gain_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  channel_gain_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_channel_gain_mex.c) */
