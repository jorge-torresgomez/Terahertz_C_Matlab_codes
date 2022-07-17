function [Const_Tx_real, Const_Tx_imag, Const_Rx_real, Const_Rx_imag] = transceiver_interface(Freq_THz,Comm_dist_init,Skin_thickness,Tissue_thickness,Vessel_thickness,blood_speed,mod_order_int,bits,A)
    Const_Tx_real = zeros(1,length(bits));
    Const_Tx_imag = zeros(1,length(bits));
    Const_Rx_real = zeros(1,length(bits));
    Const_Rx_imag = zeros(1,length(bits));

    coder.updateBuildInfo('addSourceFiles','terahertz.c');
    coder.cinclude('terahertz.h'); 
    coder.ceval('transceiver',Freq_THz,Comm_dist_init,Skin_thickness,Tissue_thickness,Vessel_thickness,blood_speed,mod_order_int,coder.rref(bits),length(bits),A,coder.rref(Const_Tx_real),coder.rref(Const_Tx_imag),coder.wref(Const_Rx_real),coder.wref(Const_Rx_imag));
end

