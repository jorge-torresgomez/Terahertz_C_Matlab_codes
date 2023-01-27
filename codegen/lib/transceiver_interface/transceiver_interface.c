/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: transceiver_interface.c
 *
 * MATLAB Coder version            : 5.5
 * C/C++ source code generated on  : 27-Jan-2023 13:20:41
 */

/* Include Files */
#include "transceiver_interface.h"
#include "terahertz.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double Freq_THz
 *                double dist_init_x
 *                double Skin_thickness
 *                double Tissue_thickness
 *                double Vessel_thickness
 *                double blood_speed
 *                double mod_order_int
 *                const double bits[64000]
 *                double bit_rate
 *                double A
 *                double Const_Tx_real[64000]
 *                double Const_Tx_imag[64000]
 *                double Const_Rx_real[64000]
 *                double Const_Rx_imag[64000]
 *                double nanosensor_pos_x[64000]
 * Return Type  : void
 */
void transceiver_interface(
    double Freq_THz, double dist_init_x, double Skin_thickness,
    double Tissue_thickness, double Vessel_thickness, double blood_speed,
    double mod_order_int, const double bits[64000], double bit_rate, double A,
    double Const_Tx_real[64000], double Const_Tx_imag[64000],
    double Const_Rx_real[64000], double Const_Rx_imag[64000],
    double nanosensor_pos_x[64000])
{
  memset(&Const_Tx_real[0], 0, 64000U * sizeof(double));
  memset(&Const_Tx_imag[0], 0, 64000U * sizeof(double));
  transceiver(Freq_THz, dist_init_x, Skin_thickness, Tissue_thickness,
              Vessel_thickness, blood_speed, mod_order_int, &bits[0], 64000.0,
              bit_rate, A, &Const_Tx_real[0], &Const_Tx_imag[0],
              &Const_Rx_real[0], &Const_Rx_imag[0], &nanosensor_pos_x[0]);
}

/*
 * File trailer for transceiver_interface.c
 *
 * [EOF]
 */
