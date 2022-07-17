/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: transceiver_interface.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 17-Jul-2022 12:22:44
 */

/* Include Files */
#include "transceiver_interface.h"
#include "terahertz.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double Freq_THz
 *                double Comm_dist_init
 *                double Skin_thickness
 *                double Tissue_thickness
 *                double Vessel_thickness
 *                double blood_speed
 *                double mod_order_int
 *                const double bits[220000]
 *                double A
 *                double Const_Tx_real[220000]
 *                double Const_Tx_imag[220000]
 *                double Const_Rx_real[220000]
 *                double Const_Rx_imag[220000]
 * Return Type  : void
 */
void transceiver_interface(double Freq_THz, double Comm_dist_init,
                           double Skin_thickness, double Tissue_thickness,
                           double Vessel_thickness, double blood_speed,
                           double mod_order_int, const double bits[220000],
                           double A, double Const_Tx_real[220000],
                           double Const_Tx_imag[220000],
                           double Const_Rx_real[220000],
                           double Const_Rx_imag[220000])
{
  memset(&Const_Tx_real[0], 0, 220000U * sizeof(double));
  memset(&Const_Tx_imag[0], 0, 220000U * sizeof(double));
  transceiver(Freq_THz, Comm_dist_init, Skin_thickness, Tissue_thickness,
              Vessel_thickness, blood_speed, mod_order_int, &bits[0], 220000.0,
              A, &Const_Tx_real[0], &Const_Tx_imag[0], &Const_Rx_real[0],
              &Const_Rx_imag[0]);
}

/*
 * File trailer for transceiver_interface.c
 *
 * [EOF]
 */
