function nu_doppler = doppler(Freq_THz,Comm_dist,Skin_thickness,Tissue_thickness,Vessel_thickness)
    nu_doppler=0.0;
    coder.updateBuildInfo('addSourceFiles','terahertz.c');
    coder.cinclude('terahertz.h'); 
    coder.ceval('',Freq_THz,Comm_dist,Skin_thickness,Tissue_thickness,Vessel_thickness);

end

