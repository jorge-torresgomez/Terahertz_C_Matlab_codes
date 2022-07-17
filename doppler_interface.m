function nu_doppler = doppler_interface(Freq_THz,Comm_dist,Skin_thickness,Tissue_thickness,Vessel_thickness,blood_speed)
    nu_doppler=0.0;
    coder.updateBuildInfo('addSourceFiles','terahertz.c');
    coder.cinclude('terahertz.h'); 
    nu_doppler=coder.ceval('doppler',Freq_THz,Comm_dist,Skin_thickness,Tissue_thickness,Vessel_thickness,blood_speed);

end

