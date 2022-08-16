/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: transceiver_interface.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 16-Aug-2022 14:10:17
 */

#ifndef TRANSCEIVER_INTERFACE_H
#define TRANSCEIVER_INTERFACE_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void transceiver_interface(
    double Freq_THz, double dist_init_x, double Skin_thickness,
    double Tissue_thickness, double Vessel_thickness, double blood_speed,
    double mod_order_int, const double bits[32000], double bit_rate, double A,
    double Const_Tx_real[32000], double Const_Tx_imag[32000],
    double Const_Rx_real[32000], double Const_Rx_imag[32000],
    double nanosensor_pos_x[32000]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for transceiver_interface.h
 *
 * [EOF]
 */
