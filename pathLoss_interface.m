function g_d = pathLoss_interface(Freq_THz,Comm_dist,Skin_thickness,Tissue_thickness,Vessel_thickness)
    g_d=0.0;
    coder.updateBuildInfo('addSourceFiles','terahertz.c');
    coder.cinclude('terahertz.h'); 
    g_d=coder.ceval('pathLoss',Freq_THz,Comm_dist,Skin_thickness,Tissue_thickness,Vessel_thickness);

end

