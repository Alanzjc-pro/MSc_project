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
[spks,spksTime] = spike_multiple(y_band,t_raw,T);

%% Kernel smoothing
window = 0.05; % second
FR = zeros(length(t_raw),1);
for i = 1:length(spksTime{1,1})
    K = (1./(sqrt(2.*pi).*window)).*exp(-((t_raw-spksTime{1,1}(i)).^2)./(2.*window.^2)); % gaussian kernel
    %K = (1./(sqrt(2).*window)).*exp(-sqrt(2).*abs((t_raw-spksTime(i))./window)); % exponential kernel
    FR = FR + K;
end

%% 
subplot(2,1,1);
plot(spks)
subplot(2,1,2);
plot(FR)
