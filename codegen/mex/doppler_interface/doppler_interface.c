/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * doppler_interface.c
 *
 * Code generation for function 'doppler_interface'
 *
 */

/* Include files */
#include "doppler_interface.h"
#include "rt_nonfinite.h"
#include "terahertz.h"

/* Function Definitions */
real_T doppler_interface(const emlrtStack *sp, real_T Freq_THz,
                         real_T Comm_dist, real_T Skin_thickness,
                         real_T Tissue_thickness, real_T Vessel_thickness,
                         real_T blood_speed)
{
  real_T nu_doppler;
  (void)sp;
  doppler(Freq_THz, Comm_dist, Skin_thickness, Tissue_thickness,
          Vessel_thickness, blood_speed, &nu_doppler);
  return nu_doppler;
}

/* End of code generation (doppler_interface.c) */
