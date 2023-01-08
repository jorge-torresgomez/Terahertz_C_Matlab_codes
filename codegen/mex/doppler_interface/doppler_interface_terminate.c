/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * doppler_interface_terminate.c
 *
 * Code generation for function 'doppler_interface_terminate'
 *
 */

/* Include files */
#include "doppler_interface_terminate.h"
#include "_coder_doppler_interface_mex.h"
#include "doppler_interface_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void doppler_interface_atexit(void)
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

void doppler_interface_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (doppler_interface_terminate.c) */
