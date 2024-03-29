/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_doppler_interface_api.c
 *
 * Code generation for function '_coder_doppler_interface_api'
 *
 */

/* Include files */
#include "_coder_doppler_interface_api.h"
#include "doppler_interface.h"
#include "doppler_interface_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Freq_THz,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

void doppler_interface_api(const mxArray *const prhs[6], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T Comm_dist;
  real_T Freq_THz;
  real_T Skin_thickness;
  real_T Tissue_thickness;
  real_T Vessel_thickness;
  real_T blood_speed;
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  Freq_THz = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Freq_THz");
  Comm_dist = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "Comm_dist");
  Skin_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Skin_thickness");
  Tissue_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Tissue_thickness");
  Vessel_thickness =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Vessel_thickness");
  blood_speed = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "blood_speed");
  /* Invoke the target function */
  Freq_THz = doppler_interface(&st, Freq_THz, Comm_dist, Skin_thickness,
                               Tissue_thickness, Vessel_thickness, blood_speed);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(Freq_THz);
}

/* End of code generation (_coder_doppler_interface_api.c) */
