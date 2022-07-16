/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pathLoss_interface_mex.c
 *
 * Code generation for function '_coder_pathLoss_interface_mex'
 *
 */

/* Include files */
#include "_coder_pathLoss_interface_mex.h"
#include "_coder_pathLoss_interface_api.h"
#include "pathLoss_interface_data.h"
#include "pathLoss_interface_initialize.h"
#include "pathLoss_interface_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&pathLoss_interface_atexit);
  /* Module initialization. */
  pathLoss_interface_initialize();
  /* Dispatch the entry-point. */
  pathLoss_interface_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  pathLoss_interface_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void pathLoss_interface_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[5])
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
                        18, "pathLoss_interface");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "pathLoss_interface");
  }
  /* Call the function. */
  pathLoss_interface_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/* End of code generation (_coder_pathLoss_interface_mex.c) */
