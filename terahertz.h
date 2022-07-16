#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

//functions
//main function to compute the channel gain
double signalAttenuation(const double Freq_THz, const double Comm_dist, const double Skin_thickness, const double Tissue_thickness, const double Vessel_thickness);

//evaluates the path loss in the vessel in dB
double pathLossVessel(double comm_dist_Vessel, double Freq_THz, double carrier_lambda);
//evaluates the path loss in the Tissue in dB
double pathLossTissue(double comm_dist_Tissue, double Freq_THz, double carrier_lambda);
//evaluates the path loss in the Skin in dB
double pathLossSkin(double comm_dist_Skin, double Freq_THz, double carrier_lambda);

//Doppler effect
void doppler(const double Freq_THz, const double Comm_dist, const double Skin_thickness, const double Tissue_thickness, const double Vessel_thickness, double *doppler_real,double *doppler_imag);

//convert power in the units of Watts to the units of decibel
double convertTodB(double x);
