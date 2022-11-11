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
    const emlrtStack *sp, real_T Freq_THz, real_T dist_init_x,
    real_T Skin_thickness, real_T Tissue_thickness, real_T Vessel_thickness,
    real_T blood_speed, real_T mod_order_int, const real_T bits[64000],
    real_T bit_rate, real_T A, real_T Const_Tx_real[64000],
    real_T Const_Tx_imag[64000], real_T Const_Rx_real[64000],
    real_T Const_Rx_imag[64000], real_T nanosensor_pos_x[64000])
{
  (void)sp;
  memset(&Const_Tx_real[0], 0, 64000U * sizeof(real_T));
  memset(&Const_Tx_imag[0], 0, 64000U * sizeof(real_T));
  transceiver(Freq_THz, dist_init_x, Skin_thickness, Tissue_thickness,
              Vessel_thickness, blood_speed, mod_order_int, &bits[0], 64000.0,
              bit_rate, A, &Const_Tx_real[0], &Const_Tx_imag[0],
              &Const_Rx_real[0], &Const_Rx_imag[0], &nanosensor_pos_x[0]);
}

/* End of code generation (transceiver_interface.c) */
