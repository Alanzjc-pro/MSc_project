function [symbols_quant]=quantization(y,b)

q=max(y)/(2^b-1);  
symbols_quant=round(y/q)*q;
