clear all; clear;

%% Read Raw Data (Sampled at 24414.0625 Hz)
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
load('indy_20160930_05.mat');
[~,Channel] = size(stored_data.electrode_ID);
idx = 1;
index = find(stored_data.time(:) >= 2560 & stored_data.time(:) <= 2580); % Experiment Period Look at only
y = stored_data.neural_recordings(index,1); 
t_raw = stored_data.time(index);  
t_raw = (t_raw - t_raw(1))'; % change to ms and set t = 0 for analysis


%% Process the data
fs = 24414.0625;
fcutlow = 500;
fcuthigh = 3000;
y_band = Band_Pass(y,4,fs,fcutlow,fcuthigh);

SD = std(y_band);
T = SD*3.6;
spks = spike_multiple(y_band,T);
spksTime = t_raw(spks==1);

%% BAKS
N = length(spksTime);
sumnum = 0;
sumdenum = 0;
b = N^(5/4);
a = 4;
for i=1:N
    numerator = (((t_raw-spksTime(i)).^2)./2 + 1./b).^(-a);
    denumerator = (((t_raw-spksTime(i)).^2)./2 + 1./b).^(-a-0.5);
    sumnum = sumnum + numerator;
    sumdenum = sumdenum + denumerator;
end

h = (gamma(a)/gamma(a+0.5)).*(sumnum./sumdenum);

FiringRate = zeros(length(t_raw),1);
for j=1:N
    K = (1./(sqrt(2.*pi).*h)).*exp(-((t_raw-spksTime(j)).^2)./(2.*h.^2)); % guassian
    %K = (1./(sqrt(2).*h)).*exp(-sqrt(2).*abs((t_raw-spksTime(j))./h)); % exponential kernel
    FiringRate = FiringRate + K;
end
subplot(3,1,1);
plot(spks)
subplot(3,1,2);
plot(h)
subplot(3,1,3);
plot(FiringRate)