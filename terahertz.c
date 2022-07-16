#include "terahertz.h"


const double PI = 3.1415926535897932384626433;

const double m_skin_thickness = 0.1e-3;
const double m_fat_thickness = 1.25e-3;
const double m_blood_thickness = 2.7e-3;

const double full_thickness = 4.05e-3;

const double left_hand_gateway_x = 20;
const double right_hand_gateway_x = -30;
const double gateway_y = -42.73;
const double gateway_z = 0;

const double ALPHA_1_DERMIS = 0.92;
const double ALPHA_1_EPIDERMIS = 0.95;

const double ALPHA_2_DERMIS = 0.97;

const double BETA_1_DERMIS = 0.8;
const double BETA_1_EPIDERMIS = 0.96;

const double BETA_2_DERMIS = 0.99;

const double EPSILON_0 = 8.85E-12;

const double EPSILON_INF_BLOOD = 2.1;
const double EPSILON_INF_DERMIS = 4.0;
const double EPSILON_INF_EPIDERMIS = 3.0;

const double EPSILON_1_BLOOD = 130.0;
const double EPSILON_1_DERMIS = 5.96;
const double EPSILON_1_EPIDERMIS = 89.61;

const double EPSILON_2_BLOOD = 3.8;
const double EPSILON_2_DERMIS = 380.4;

const double TAU_1_BLOOD = 14.4E-12;
const double TAU_1_DERMIS = 1.6E-12;
const double TAU_1_EPIDERMIS = 15.9E-12;

const double TAU_2_BLOOD = 0.1E-12;
const double TAU_2_DERMIS = 159.0E-9;

const double SIGMA_DERMIS = 0.1;
const double SIGMA_EPIDERMIS = 0.01;

const double c_0 = 299792458.0; //speed of light in vacuum


/**
     * @brief main function to compute the channel gain
     * 
     * @param Comm_dist as the distance between the nanosensor and the Gateway 
     * @param Freq_THz as the carrier frequency in the units of Hertz 
     * @param Skin_thickness as the thickness of the Skin in the units of meters 
     * @return double 
     */
double signalAttenuation(const double Freq_THz, const double Comm_dist, const double Skin_thickness, const double Tissue_thickness, const double Vessel_thickness)
{   
    //spatial parameters
    //angle between the nanosensor and the gateway
    double sin_angle=(Skin_thickness+Tissue_thickness+Vessel_thickness)/Comm_dist;
    //communication distance in the vessel
    double comm_dist_Vessel=Vessel_thickness/sin_angle;
    //communication distance in the Tissue
    double comm_dist_Tissue=Tissue_thickness/sin_angle;
    //communication distance in the Skin
    double comm_dist_Skin=Skin_thickness/sin_angle;

    //signal parameters
    double carrier_lambda = c_0 / Freq_THz;


    //evaluating the path loss per segment in dB
    double Vessel_pathLoss = pathLossVessel(comm_dist_Vessel, Freq_THz, carrier_lambda);
    double Tissue_pathLoss = pathLossTissue(comm_dist_Tissue, Freq_THz, carrier_lambda);
    double Skin_pathLoss = pathLossSkin(comm_dist_Skin, Freq_THz, carrier_lambda);

    return Vessel_pathLoss;// Vessel_pathLoss+Tissue_pathLoss+Skin_pathLoss;
    
}

/**
     * @brief evaluates the path loss in the vessel in dB
     * 
     * @param Comm_dist_Vessel as the distance between the nanosensor and the Gateway
     * @param Freq_THz as the carrier frequency in the units of Hertz 
     * @param carrier_lambda as the thickness of the Skin in the units of meters 
     * @return double 
     */

double pathLossVessel(double comm_dist_Vessel, double Freq_THz, double carrier_lambda)
{    
    // refractiveindex
    double complex sum1 = (EPSILON_1_BLOOD - EPSILON_2_BLOOD) / (1.0 + I * (2*PI*Freq_THz) * TAU_1_BLOOD);
    double complex sum2 = (EPSILON_2_BLOOD - EPSILON_INF_BLOOD) / (1.0 + I * (2*PI*Freq_THz) * TAU_2_BLOOD);
    double complex epsilon_r = EPSILON_INF_BLOOD + sum1 + sum2;

    double complex n = csqrt(epsilon_r);
    double n_1 = creal(n);
    double n_2 = -cimag(n);

    //computing the effective Wavelength
    double lambda_g = carrier_lambda/n_1;
    //computing the molecular Absorption Coefficient
    double mu_abs = (4 * PI * n_2) / lambda_g;
    //computing the spreading Loss
    double L_spr = pow((4 * PI * comm_dist_Vessel) / lambda_g, 2);
    //computing the absorption Loss
    double L_abs = exp(mu_abs * comm_dist_Vessel);
   
    return convertTodB(L_abs * L_spr);

}

/**
     * @brief evaluates the path loss in the Tissue in dB
     * 
     * @param comm_dist_Tissue as the distance between the nanosensor and the Gateway
     * @param Freq_THz as the carrier frequency in the units of Hertz 
     * @param carrier_lambda as the thickness of the Skin in the units of meters 
     * @return double 
     */
double pathLossTissue(double comm_dist_Tissue, double Freq_THz, double carrier_lambda)
{
    // refractive index dermis
    double complex sum1 = EPSILON_1_DERMIS / pow(1.0 + pow(I * (2*PI*Freq_THz) * TAU_1_DERMIS, ALPHA_1_DERMIS), BETA_1_DERMIS);
    double complex sum2 = EPSILON_2_DERMIS / pow(1.0 + pow(I * (2*PI*Freq_THz) * TAU_2_DERMIS, ALPHA_2_DERMIS), BETA_2_DERMIS);
    double complex epsilon_r = EPSILON_INF_DERMIS + sum1 + sum2 - I * SIGMA_DERMIS / ((2*PI*Freq_THz) * EPSILON_0);

    double complex n = sqrt(epsilon_r);
    double n_1 = creal(n);
    double n_2 = -cimag(n);

    //computing the effective Wavelength
    double lambda_g = carrier_lambda/n_1;
    //computing the molecular Absorption Coefficient
    double mu_abs = (4 * PI * n_2) / lambda_g;
    //computing the spreading Loss
    double L_spr = pow((4 * PI * comm_dist_Tissue) / lambda_g, 2);
    //computing the absorption Loss
    double L_abs = exp(mu_abs * comm_dist_Tissue);

    return convertTodB(L_abs * L_spr);
}

/**
     * @brief evaluates the path loss in the Skin in dB
     * 
     * @param comm_dist_Tissue as the distance between the nanosensor and the Gateway
     * @param Freq_THz as the carrier frequency in the units of Hertz 
     * @param carrier_lambda as the thickness of the Skin in the units of meters 
     * @return double 
     */
double pathLossSkin(double comm_dist_Skin, double Freq_THz, double carrier_lambda)
{      
    // refractive index epidermis
    double complex sum1 = EPSILON_1_EPIDERMIS / pow(1.0 + pow(I * (2*PI*Freq_THz) * TAU_1_EPIDERMIS, ALPHA_1_EPIDERMIS), BETA_1_EPIDERMIS);
    double complex sum2 = I * SIGMA_EPIDERMIS / ((2*PI*Freq_THz) * EPSILON_0);
    double complex epsilon_r = EPSILON_INF_EPIDERMIS + sum1 - sum2;

    double complex n = sqrt(epsilon_r);
    double n_1 = creal(n);
    double n_2 = -cimag(n);

    //computing the effective Wavelength
    double lambda_g = carrier_lambda/n_1;
    //computing the molecular Absorption Coefficient
    double mu_abs = (4 * PI * n_2) / lambda_g;
    //computing the spreading Loss
    double L_spr = pow((4 * PI * comm_dist_Skin) / lambda_g, 2);
    //computing the absorption Loss
    double L_abs = exp(mu_abs * comm_dist_Skin);

    return convertTodB(L_abs * L_spr);
}

/**
     * @brief convert power in the units of Watts to decibels
     * 
     * @param x as an input in the units of Watts
     * @return double in decibels
     */
double convertTodB(double x)
{
    return 10 * log10(x);
}