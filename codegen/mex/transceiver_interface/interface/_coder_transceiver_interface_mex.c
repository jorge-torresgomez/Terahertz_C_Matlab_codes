/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_transceiver_interface_mex.c
 *
 * Code generation for function '_coder_transceiver_interface_mex'
 *
 */

/* Include files */
#include "_coder_transceiver_interface_mex.h"
#include "_coder_transceiver_interface_api.h"
#include "rt_nonfinite.h"
#include "transceiver_interface_data.h"
#include "transceiver_interface_initialize.h"
#include "transceiver_interface_terminate.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&transceiver_interface_atexit);
  /* Module initialization. */
  transceiver_interface_initialize();
  /* Dispatch the entry-point. */
  transceiver_interface_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  transceiver_interface_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void transceiver_interface_mexFunction(int32_T nlhs, mxArray *plhs[4],
                                       int32_T nrhs, const mxArray *prhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[4];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        21, "transceiver_interface");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "transceiver_interface");
  }
  /* Call the function. */
  transceiver_interface_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_transceiver_interface_mex.c) */
