/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_transceiver_interface_api.c
 *
 * Code generation for function '_coder_transceiver_interface_api'
 *
 */

/* Include files */
#include "_coder_transceiver_interface_api.h"
#include "rt_nonfinite.h"
#include "transceiver_interface.h"
#include "transceiver_interface_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bits,
                                   const char_T *identifier))[64000];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[64000];

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Freq_THz,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const real_T u[64000]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[64000];

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bits,
                                   const char_T *identifier))[64000]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[64000];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(bits), &thisId);
  emlrtDestroyArray(&bits);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[64000]
{
  real_T(*y)[64000];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Freq_THz,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(Freq_THz), &thisId);
  emlrtDestroyArray(&Freq_THz);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[64000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {1, 64000};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[64000]
{
  static const int32_T dims = 64000;
  real_T(*ret)[64000];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  ret = (real_T(*)[64000])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void transceiver_interface_api(const mxArray *const prhs[10], int32_T nlhs,
                               const mxArray *plhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*Const_Rx_imag)[64000];
  real_T(*Const_Rx_real)[64000];
  real_T(*Const_Tx_imag)[64000];
  real_T(*Const_Tx_real)[64000];
  real_T(*bits)[64000];
  real_T(*nanosensor_pos_x)[64000];
  real_T A;
  real_T Freq_THz;
  real_T Skin_thickness;
  real_T Tissue_thickness;
  real_T Vessel_thickness;
  real_T bit_rate;
  real_T blood_speed;
  real_T dist_init_x;
  real_T mod_order_int;
  st.tls = emlrtRootTLSGlobal;
  Const_Tx_real = (real_T(*)[64000])mxMalloc(sizeof(real_T[64000]));
  Const_Tx_imag = (real_T(*)[64000])mxMalloc(sizeof(real_T[64000]));
  Const_Rx_real = (real_T(*)[64000])mxMalloc(sizeof(real_T[64000]));
  Const_Rx_imag = (real_T(*)[64000])mxMalloc(sizeof(real_T[64000]));
  nanosensor_pos_x = (real_T(*)[64000])mxMalloc(sizeof(real_T[64000]));
  /* Marshall function inputs */
  Freq_THz = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Freq_THz");
  dist_init_x = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "dist_init_x");
  Skin_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Skin_thickness");
  Tissue_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Tissue_thickness");
  Vessel_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Vessel_thickness");
  blood_speed = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "blood_speed");
  mod_order_int = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "mod_order_int");
  bits = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "bits");
  bit_rate = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "bit_rate");
  A = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "A");
  /* Invoke the target function */
  transceiver_interface(&st, Freq_THz, dist_init_x, Skin_thickness,
                        Tissue_thickness, Vessel_thickness, blood_speed,
                        mod_order_int, *bits, bit_rate, A, *Const_Tx_real,
                        *Const_Tx_imag, *Const_Rx_real, *Const_Rx_imag,
                        *nanosensor_pos_x);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Const_Tx_real);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*Const_Tx_imag);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*Const_Rx_real);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*Const_Rx_imag);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(*nanosensor_pos_x);
  }
}

/* End of code generation (_coder_transceiver_interface_api.c) */
