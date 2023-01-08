/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pathLoss_interface_terminate.c
 *
 * Code generation for function 'pathLoss_interface_terminate'
 *
 */

/* Include files */
#include "pathLoss_interface_terminate.h"
#include "_coder_pathLoss_interface_mex.h"
#include "pathLoss_interface_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void pathLoss_interface_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void pathLoss_interface_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (pathLoss_interface_terminate.c) */
