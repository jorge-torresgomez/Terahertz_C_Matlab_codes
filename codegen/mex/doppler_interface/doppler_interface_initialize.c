/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * doppler_interface_initialize.c
 *
 * Code generation for function 'doppler_interface_initialize'
 *
 */

/* Include files */
#include "doppler_interface_initialize.h"
#include "_coder_doppler_interface_mex.h"
#include "doppler_interface_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void doppler_interface_once(void);

/* Function Definitions */
static void doppler_interface_once(void)
{
  mex_InitInfAndNan();
}

void doppler_interface_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    doppler_interface_once();
  }
}

/* End of code generation (doppler_interface_initialize.c) */
