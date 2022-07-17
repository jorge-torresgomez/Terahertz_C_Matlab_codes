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

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *mod_order,
                               const char_T *identifier);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Freq_THz,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const real_T u);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *mod_order,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(mod_order), &thisId);
  emlrtDestroyArray(&mod_order);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues;
  const char_T *propClasses = "coder.internal.string";
  const char_T *propNames = "Value";
  propValues = NULL;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, (const char_T *)"string");
  emlrtAssign(&u,
              emlrtConvertInstanceToRedirectTarget(
                  (emlrtCTX)sp, u, 0, (const char_T *)"coder.internal.string"));
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u,
                           (const char_T *)"coder.internal.string");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  thisId.fIdentifier = "Value";
  e_emlrt_marshallIn(sp, emlrtAlias(propValues), &thisId);
  emlrtDestroyArrays(1, &propValues);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = {1, 0};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtDestroyArray(&src);
}

void transceiver_interface_api(const mxArray *const prhs[8], int32_T nlhs,
                               const mxArray *plhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T Comm_dist_init;
  real_T Const_Rx_imag;
  real_T Const_Rx_real;
  real_T Const_Tx_imag;
  real_T Const_Tx_real;
  real_T Freq_THz;
  real_T Skin_thickness;
  real_T Tissue_thickness;
  real_T Vessel_thickness;
  real_T bits;
  real_T blood_speed;
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  Freq_THz = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Freq_THz");
  Comm_dist_init =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "Comm_dist_init");
  Skin_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Skin_thickness");
  Tissue_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Tissue_thickness");
  Vessel_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Vessel_thickness");
  blood_speed = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "blood_speed");
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "mod_order");
  bits = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "bits");
  /* Invoke the target function */
  transceiver_interface(&st, Freq_THz, Comm_dist_init, Skin_thickness,
                        Tissue_thickness, Vessel_thickness, blood_speed, bits,
                        &Const_Tx_real, &Const_Tx_imag, &Const_Rx_real,
                        &Const_Rx_imag);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(Const_Tx_real);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(Const_Tx_imag);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(Const_Rx_real);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(Const_Rx_imag);
  }
}

/* End of code generation (_coder_transceiver_interface_api.c) */
