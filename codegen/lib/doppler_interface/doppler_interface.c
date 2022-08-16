/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: doppler_interface.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Aug-2022 14:05:12
 */

/* Include Files */
#include "doppler_interface.h"
#include "terahertz.h"

/* Function Definitions */
/*
 * Arguments    : double Freq_THz
 *                double Comm_dist
 *                double Skin_thickness
 *                double Tissue_thickness
 *                double Vessel_thickness
 *                double blood_speed
 * Return Type  : double
 */
double doppler_interface(double Freq_THz, double Comm_dist,
                         double Skin_thickness, double Tissue_thickness,
                         double Vessel_thickness, double blood_speed)
{
  return doppler(Freq_THz, Comm_dist, Skin_thickness, Tissue_thickness,
                 Vessel_thickness, blood_speed);
}

/*
 * File trailer for doppler_interface.c
 *
 * [EOF]
 */
