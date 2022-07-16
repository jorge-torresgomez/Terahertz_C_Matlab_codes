#include "Terahertz.h"
#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
namespace ns3 {

    /**
     * @brief Construct a new Terahertz:: Terahertz object
     * 
     */
	Terahertz::Terahertz()
	{
	}
	
    /**
     * @brief Destroy the Terahertz:: Terahertz object
     * 
     */
	Terahertz::~Terahertz(void){}

    /**
     * @brief Convert a given number to dB.
     * 
     * @param x 
     * @return double 
     */
    double 
    Terahertz::convertTodB(double x){
        return 10 * log10(x);
    }

    /**
     * @brief Converts a given frequency to its angualar frequency.
     * 
     * @param f 
     * @return double 
     */
    double 
    Terahertz::angularFrequency(double f){
        return 2 * M_PI * f;
    }

    /**
     * @brief Computes dot product of two given 3D vectors.
     * 
     * @param vec1 
     * @param vec2 
     * @return double 
     */
    double 
    Terahertz::dot(Vector3D vec1, Vector3D vec2) {
        return vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
    }

    /**
     * @brief Computes the magnitude of a given 3D vector.
     * 
     * @param vec 
     * @return double 
     */
    double 
    Terahertz::mag(Vector3D vec) {
        return sqrt(pow(vec.x, 2) + pow(vec.y, 2) + pow(vec.z, 2));
    }

    /**
     * @brief Computes the angle of two points using two vectors.
     * 
     * Vector 1: from \p nanobot to \p gateway
     * Vector 2: standart vector along the z axis
     * 
     * @param nanobot 
     * @param gateway 
     * @return double 
     */
    double 
    Terahertz::angle(Vector3D nanobot, Vector3D gateway) {
        Vector3D vec1 = gateway - nanobot;
        Vector3D vec2(0, 0, 1);
        if (nanobot.z > 0)
            vec2.z = -1;
        return acos(dot(vec1, vec2) / (mag(vec1) * mag(vec2)));
    }

    /**
     * @brief Computes the effective wavelength.
     * 
     * @param lambda 
     * @param n_1 
     * @return double 
     */
    double 
    Terahertz::effectiveWavelength(double lambda, double n_1){
        return lambda / n_1;
    }

    /**
     * @brief Computes the molecular absorption coefficient.
     * 
     * @param lambda_g 
     * @param n_2 
     * @return double 
     */
    double 
    Terahertz::molecularAbsorptionCoefficient(double lambda_g, double n_2){
        return (4 * M_PI * n_2) / lambda_g;
    }

    /**
     * @brief Computes the spreading loss.
     * 
     * @param lambda_g 
     * @param d 
     * @return double 
     */
    double 
    Terahertz::spreadingLoss(double lambda_g, double d){
        return pow((4 * M_PI * d) / lambda_g, 2);
    }

    /**
     * @brief Computes the absoption loss.
     * 
     * @param mu_abs 
     * @param d 
     * @return double 
     */
    double 
    Terahertz::absorptionLoss(double mu_abs, double d){
        return exp(mu_abs * d);
    }

    /**
     * @brief Computes the total path loss.
     * 
     * @param lambda 
     * @param n_1 
     * @param n_2 
     * @param d 
     * @return double 
     */
    double 
    Terahertz::totalPathLoss(double lambda, double n_1, double n_2, double d){
        double lambda_g = effectiveWavelength(lambda, n_1);

        double mu_abs = molecularAbsorptionCoefficient(lambda_g, n_2);

        double L_spr = spreadingLoss(lambda_g, d);

        double L_abs = absorptionLoss(mu_abs, d);

        return convertTodB(L_abs * L_spr);
    }
    
    /**
     * @brief Computes the total path loss for the blood layer.
     * 
     * @param d 
     * @param omega 
     * @param lambda 
     * @return double 
     */
    double 
    Terahertz::pathLossBlood(double d, double omega, double lambda){
        const complex<double> I(0.0, 1.0);
        // refractive index
        complex<double> sum1 = (EPSILON_1_BLOOD - EPSILON_2_BLOOD) / (1.0 + I * omega * TAU_1_BLOOD);
        complex<double> sum2 = (EPSILON_2_BLOOD - EPSILON_INF_BLOOD) / (1.0 + I * omega * TAU_2_BLOOD);
        complex<double> epsilon_r = EPSILON_INF_BLOOD + sum1 + sum2;

        complex<double> n = sqrt(epsilon_r);
        double n_1 = real(n);
        double n_2 = -imag(n);

        return totalPathLoss(lambda, n_1, n_2, d);
    }
    
    /**
     * @brief Computes the total path loss for the fat layer.
     * 
     * @param d 
     * @param omega 
     * @param lambda 
     * @return double 
     */
    double 
    Terahertz::pathLossFat(double d, double omega, double lambda){
        const complex<double> I(0.0, 1.0);
        // refractive index dermis
        complex<double>sum1 = EPSILON_1_DERMIS / pow(1.0 + pow(I * omega * TAU_1_DERMIS, ALPHA_1_DERMIS), BETA_1_DERMIS);
        complex<double>sum2 = EPSILON_2_DERMIS / pow(1.0 + pow(I * omega * TAU_2_DERMIS, ALPHA_2_DERMIS), BETA_2_DERMIS);
        complex<double> epsilon_r = EPSILON_INF_DERMIS + sum1 + sum2 - I * SIGMA_DERMIS / (omega * EPSILON_0);

        complex<double> n = sqrt(epsilon_r);
        double n_1 = real(n);
        double n_2 = -imag(n);

        return totalPathLoss(lambda, n_1, n_2, d);
    }
    
    /**
     * @brief Computes the total path loss for the skin layer.
     * 
     * @param d 
     * @param omega 
     * @param lambda 
     * @return double 
     */
    double 
    Terahertz::pathLossSkin(double d, double omega, double lambda){
        const complex<double> I(0.0, 1.0);
        // refractive index epidermis
        complex<double>sum1 = EPSILON_1_EPIDERMIS / pow(1.0 + pow(I * omega * TAU_1_EPIDERMIS, ALPHA_1_EPIDERMIS), BETA_1_EPIDERMIS);
        complex<double>sum2 = I * SIGMA_EPIDERMIS / (omega * EPSILON_0);
        complex<double> epsilon_r = EPSILON_INF_EPIDERMIS + sum1 - sum2;

        complex<double> n = sqrt(epsilon_r);
        double n_1 = real(n);
        double n_2 = -imag(n);

        return totalPathLoss(lambda, n_1, n_2, d);
    }

    /**
     * @brief Adds up all Path Losses.
     * 
     * @param blood 
     * @param fat 
     * @param skin 
     * @return double 
     */
    double 
    Terahertz::totalPathLossTotal(double blood, double fat, double skin){
        return blood + fat + skin;
    }

    /**
     * @brief Computes the signal attenuation.
     * 
     * @param BvID 
     * @param nanobot 
     * @param gateway 
     * @param phi 
     * @return double 
     */
    double
    Terahertz::signalAttenuation(int BvID, Vector3D nanobot, Vector3D gateway, double phi) {
        double distanceNanobotGateway = CalculateDistance(nanobot, gateway) / 100;

        double a = m_skin_thickness + m_fat_thickness;
        double b = a / tan(phi);
        double deltaDistance = sqrt(pow(a, 2) + pow(b, 2));

        double fat_thickness = deltaDistance * m_fat_thickness / a;
        double skin_thickness = deltaDistance * m_skin_thickness / a;
        double blood_thickness = distanceNanobotGateway - fat_thickness - skin_thickness;

        double omega = angularFrequency(frequency); 
        double lambda = c_0 / frequency;

        double blood = pathLossBlood(blood_thickness, omega, lambda);
        double fat = pathLossFat(fat_thickness, omega, lambda);
        double skin = pathLossSkin(skin_thickness, omega, lambda);

        double L_tot = totalPathLossTotal(blood, fat, skin);

        return L_tot / 2;
    }

    /**
     * @brief Computes the doppler effect term.
     * 
     * @param velocity 
     * @param phi 
     * @return double 
     */
    double
    Terahertz::dopplerTerm(double velocity, double phi) {
        return velocity * cos(phi) * frequency / c_0;
    }

    /**
     * @brief External Terahertz module to ns-3 / BVS.
     * 
     * Computes signal with attenuation based on the distance between nanobot ( \p x, \p y, \p z coordiantes received from BVS) 
     * and differentiates between left (ID: 33) and right (ID: 27) hand (using \p BvID ).
     * Computes signal modulation and doppler effect.
     * Simulates signal transeiver.
     * 
     * @param BvID
     * @param x
     * @param y
     * @param z
     * @param velocity
     * 
     */
    void 
    Terahertz::terahertz_module(int BvID, double x, double y, double z, double velocity/*, int64x64_t time*/){
        Vector3D nanobot(x, y, z);
        Vector3D gateway(right_hand_gateway_x, gateway_y, gateway_z);
        if (BvID == 33)
            gateway.x = left_hand_gateway_x;

        double phi = angle(nanobot, gateway);
        double attenuation = signalAttenuation(BvID, nanobot, gateway, phi);
        double doppler = dopplerTerm(velocity, phi);
        
        std::cout << "Power Loss: " << attenuation * 2 << std::endl;
        std::cout << "Signal Attenuation: " << attenuation << std::endl;
        std::cout << "Doppler Effect: " << doppler << std::endl;
    }
}