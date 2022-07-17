function [Const_Tx_real, Const_Tx_imag, Const_Rx_real, Const_Rx_imag, nanosensor_pos_x] = transceiver_interface(Freq_THz,dist_init_x,Skin_thickness,Tissue_thickness,Vessel_thickness,blood_speed,mod_order_int,bits,bit_rate,A)
    Const_Tx_real = zeros(1,length(bits));
    Const_Tx_imag = zeros(1,length(bits));
    Const_Rx_real = zeros(1,length(bits));
    Const_Rx_imag = zeros(1,length(bits));
    nanosensor_pos_x = zeros(1,length(bits));
    coder.updateBuildInfo('addSourceFiles','terahertz.c');
    coder.cinclude('terahertz.h'); 
    coder.ceval('transceiver',Freq_THz,dist_init_x,Skin_thickness,Tissue_thickness,Vessel_thickness,blood_speed,mod_order_int,coder.rref(bits),length(bits),bit_rate,A,coder.rref(Const_Tx_real),coder.rref(Const_Tx_imag),coder.wref(Const_Rx_real),coder.wref(Const_Rx_imag), coder.wref(nanosensor_pos_x));
end

