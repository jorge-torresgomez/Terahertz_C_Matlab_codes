/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: pathLoss.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Jul-2022 21:24:08
 */

/* Include Files */
#include "pathLoss.h"
#include "terahertz.h"

/* Function Definitions */
/*
 * Arguments    : double Freq_THz
 *                double Comm_dist
 *                double Skin_thickness
 *                double Tissue_thickness
 *                double Vessel_thickness
 * Return Type  : double
 */
double pathLoss(double Freq_THz, double Comm_dist, double Skin_thickness,
                double Tissue_thickness, double Vessel_thickness)
{
  return signalAttenuation(Freq_THz, Comm_dist, Skin_thickness,
                           Tissue_thickness, Vessel_thickness);
}

/*
 * File trailer for pathLoss.c
 *
 * [EOF]
 */
