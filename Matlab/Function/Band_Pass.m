function[output] =  Band_Pass(input,ord,Fsample,Fcutlow,FcutHigh)

Fs = Fsample;
Fn = Fs/2;
order = ord;
[b,a] = butter(order,[Fcutlow FcutHigh]/Fn,'bandpass');
output= filter(b,a,input);