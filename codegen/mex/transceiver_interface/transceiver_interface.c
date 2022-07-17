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

/* Function Definitions */
void transceiver_interface(const emlrtStack *sp, real_T Freq_THz,
                           real_T Comm_dist_init, real_T Skin_thickness,
                           real_T Tissue_thickness, real_T Vessel_thickness,
                           real_T blood_speed, real_T bits,
                           real_T *Const_Tx_real, real_T *Const_Tx_imag,
                           real_T *Const_Rx_real, real_T *Const_Rx_imag)
{
  (void)sp;
  *Const_Tx_real = 0.0;
  *Const_Tx_imag = 0.0;
  /* default option is BPSK */
  transceiver(Freq_THz, Comm_dist_init, Skin_thickness, Tissue_thickness,
              Vessel_thickness, blood_speed, 2.0, &bits, 1.0, Const_Tx_real,
              Const_Tx_imag, Const_Rx_real, Const_Rx_imag);
}

/* End of code generation (transceiver_interface.c) */
