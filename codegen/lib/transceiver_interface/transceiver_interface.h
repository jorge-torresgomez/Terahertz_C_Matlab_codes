/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: transceiver_interface.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 17-Jul-2022 12:22:44
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
    double Freq_THz, double Comm_dist_init, double Skin_thickness,
    double Tissue_thickness, double Vessel_thickness, double blood_speed,
    double mod_order_int, const double bits[220000], double A,
    double Const_Tx_real[220000], double Const_Tx_imag[220000],
    double Const_Rx_real[220000], double Const_Rx_imag[220000]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for transceiver_interface.h
 *
 * [EOF]
 */
