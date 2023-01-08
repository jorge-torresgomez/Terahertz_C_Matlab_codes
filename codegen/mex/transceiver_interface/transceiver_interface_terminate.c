/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceiver_interface_terminate.c
 *
 * Code generation for function 'transceiver_interface_terminate'
 *
 */

/* Include files */
#include "transceiver_interface_terminate.h"
#include "_coder_transceiver_interface_mex.h"
#include "rt_nonfinite.h"
#include "transceiver_interface_data.h"

/* Function Definitions */
void transceiver_interface_atexit(void)
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

void transceiver_interface_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (transceiver_interface_terminate.c) */
