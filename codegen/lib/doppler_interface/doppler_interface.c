/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: doppler_interface.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Jul-2022 21:54:18
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
  double nu_doppler;
  doppler(Freq_THz, Comm_dist, Skin_thickness, Tissue_thickness,
          Vessel_thickness, blood_speed, &nu_doppler);
  return nu_doppler;
}

/*
 * File trailer for doppler_interface.c
 *
 * [EOF]
 */
