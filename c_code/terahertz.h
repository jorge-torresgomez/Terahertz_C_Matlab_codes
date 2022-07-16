	const double m_skin_thickness = 0.1e-3;
	const double m_fat_thickness = 1.25e-3;
	const double m_blood_thickness = 2.7e-3;

	const double full_thickness = 4.05e-3; 
	
	const double left_hand_gateway_x = 20;
	const double right_hand_gateway_x = -30;
	const double gateway_y = -42.73;
	const double gateway_z = 0;
	
	const double frequency = 0.5e12;
	
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

	const double c_0 = 299792458.0;



	double convertTodB(double x);
	double angularFrequency(double f);
	double dot(Vector3D vec1, Vector3D vec2);
	double mag(Vector3D vec);
	double angle(Vector3D nanobot, Vector3D gateway);
	double effectiveWavelength(double lambda, double n_1);
	double molecularAbsorptionCoefficient(double lambda_g, double n_2);
	double spreadingLoss(double lambda_g, double d);
	double absorptionLoss(double mu_abs, double d);
	double totalPathLoss(double lambda, double n_1, double n_2, double d);
	double pathLossBlood(double d, double omega, double lambda);
	double pathLossFat(double d, double omega, double lambda);
	double pathLossSkin(double d, double omega, double lambda);
	double totalPathLossTotal(double blood, double fat, double skin);

	double signalAttenuation(int BvID, Vector3D nanobot, Vector3D gateway, double phi);
	// modulation
	double dopplerTerm(double velocity, double phi);
	void terahertz_module(int BvID, double x, double y, double z, double velocity/*, int64x64_t time*/);