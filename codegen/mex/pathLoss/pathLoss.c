/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pathLoss.c
 *
 * Code generation for function 'pathLoss'
 *
 */

/* Include files */
#include "pathLoss.h"
#include "rt_nonfinite.h"
#include "terahertz.h"

/* Function Definitions */
real_T pathLoss(const emlrtStack *sp, real_T Freq_THz, real_T Comm_dist,
                real_T Skin_thickness, real_T Tissue_thickness,
                real_T Vessel_thickness)
{
  (void)sp;
  return signalAttenuation(Freq_THz, Comm_dist, Skin_thickness,
                           Tissue_thickness, Vessel_thickness);
}

/* End of code generation (pathLoss.c) */
