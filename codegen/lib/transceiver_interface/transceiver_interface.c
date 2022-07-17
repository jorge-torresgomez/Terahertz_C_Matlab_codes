/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: transceiver_interface.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 17-Jul-2022 11:18:25
 */

/* Include Files */
#include "transceiver_interface.h"
#include "terahertz.h"

/* Function Definitions */
/*
 * Arguments    : double Freq_THz
 *                double Comm_dist_init
 *                double Skin_thickness
 *                double Tissue_thickness
 *                double Vessel_thickness
 *                double blood_speed
 *                double bits
 *                double *Const_Tx_real
 *                double *Const_Tx_imag
 *                double *Const_Rx_real
 *                double *Const_Rx_imag
 * Return Type  : void
 */
void transceiver_interface(double Freq_THz, double Comm_dist_init,
                           double Skin_thickness, double Tissue_thickness,
                           double Vessel_thickness, double blood_speed,
                           double bits, double *Const_Tx_real,
                           double *Const_Tx_imag, double *Const_Rx_real,
                           double *Const_Rx_imag)
{
  *Const_Tx_real = 0.0;
  *Const_Tx_imag = 0.0;
  /* default option is BPSK */
  transceiver(Freq_THz, Comm_dist_init, Skin_thickness, Tissue_thickness,
              Vessel_thickness, blood_speed, 2.0, &bits, 1.0, Const_Tx_real,
              Const_Tx_imag, Const_Rx_real, Const_Rx_imag);
}

/*
 * File trailer for transceiver_interface.c
 *
 * [EOF]
 */
