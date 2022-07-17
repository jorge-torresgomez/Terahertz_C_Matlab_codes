/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceiver_interface.c
 *
 * Code generation for function 'transceiver_interface'
 *
 */

/* Include files */
#include "transceiver_interface.h"
#include "rt_nonfinite.h"
#include "terahertz.h"
#include <string.h>

/* Function Definitions */
void transceiver_interface(
    const emlrtStack *sp, real_T Freq_THz, real_T Comm_dist_init,
    real_T Skin_thickness, real_T Tissue_thickness, real_T Vessel_thickness,
    real_T blood_speed, real_T mod_order_int, const real_T bits[220000],
    real_T A, real_T Const_Tx_real[220000], real_T Const_Tx_imag[220000],
    real_T Const_Rx_real[220000], real_T Const_Rx_imag[220000])
{
  (void)sp;
  memset(&Const_Tx_real[0], 0, 220000U * sizeof(real_T));
  memset(&Const_Tx_imag[0], 0, 220000U * sizeof(real_T));
  transceiver(Freq_THz, Comm_dist_init, Skin_thickness, Tissue_thickness,
              Vessel_thickness, blood_speed, mod_order_int, &bits[0], 220000.0,
              A, &Const_Tx_real[0], &Const_Tx_imag[0], &Const_Rx_real[0],
              &Const_Rx_imag[0]);
}

/* End of code generation (transceiver_interface.c) */
