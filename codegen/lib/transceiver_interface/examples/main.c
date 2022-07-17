/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 17-Jul-2022 11:18:25
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "transceiver_interface.h"
#include "transceiver_interface_terminate.h"

/* Function Declarations */
static double argInit_real_T(void);

static void main_transceiver_interface(void);

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_transceiver_interface(void)
{
  double Const_Rx_imag;
  double Const_Rx_real;
  double Const_Tx_imag;
  double Const_Tx_real;
  double Freq_THz_tmp;
  /* Initialize function 'transceiver_interface' input arguments. */
  Freq_THz_tmp = argInit_real_T();
  /* Initialize function input argument 'mod_order'. */
  /* Call the entry-point 'transceiver_interface'. */
  transceiver_interface(Freq_THz_tmp, Freq_THz_tmp, Freq_THz_tmp, Freq_THz_tmp,
                        Freq_THz_tmp, Freq_THz_tmp, Freq_THz_tmp,
                        &Const_Tx_real, &Const_Tx_imag, &Const_Rx_real,
                        &Const_Rx_imag);
}

/*
 * Arguments    : int argc
 *                char **argv
 * Return Type  : int
 */
int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_transceiver_interface();
  /* Terminate the application.
You do not need to do this more than one time. */
  transceiver_interface_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
