/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_transceiver_interface_mex.c
 *
 * MATLAB Coder version            : 5.5
 * C/C++ source code generated on  : 27-Jan-2023 13:20:41
 */

/* Include Files */
#include "_coder_transceiver_interface_mex.h"
#include "_coder_transceiver_interface_api.h"

/* Function Definitions */
/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&transceiver_interface_atexit);
  /* Module initialization. */
  transceiver_interface_initialize();
  /* Dispatch the entry-point. */
  unsafe_transceiver_interface_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  transceiver_interface_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[5]
 *                int32_T nrhs
 *                const mxArray *prhs[10]
 * Return Type  : void
 */
void unsafe_transceiver_interface_mexFunction(int32_T nlhs, mxArray *plhs[5],
                                              int32_T nrhs,
                                              const mxArray *prhs[10])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[5];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        21, "transceiver_interface");
  }
  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "transceiver_interface");
  }
  /* Call the function. */
  transceiver_interface_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/*
 * File trailer for _coder_transceiver_interface_mex.c
 *
 * [EOF]
 */
