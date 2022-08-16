/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_transceiver_interface_api.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 10-Aug-2022 15:27:32
 */

#ifndef _CODER_TRANSCEIVER_INTERFACE_API_H
#define _CODER_TRANSCEIVER_INTERFACE_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void transceiver_interface(
    real_T Freq_THz, real_T dist_init_x, real_T Skin_thickness,
    real_T Tissue_thickness, real_T Vessel_thickness, real_T blood_speed,
    real_T mod_order_int, real_T bits[8000], real_T bit_rate, real_T A,
    real_T Const_Tx_real[8000], real_T Const_Tx_imag[8000],
    real_T Const_Rx_real[8000], real_T Const_Rx_imag[8000],
    real_T nanosensor_pos_x[8000]);

void transceiver_interface_api(const mxArray *const prhs[10], int32_T nlhs,
                               const mxArray *plhs[5]);

void transceiver_interface_atexit(void);

void transceiver_interface_initialize(void);

void transceiver_interface_terminate(void);

void transceiver_interface_xil_shutdown(void);

void transceiver_interface_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_transceiver_interface_api.h
 *
 * [EOF]
 */
