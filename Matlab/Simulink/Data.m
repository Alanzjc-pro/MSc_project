clear all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function')
%% load datasets
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

y_band = y_band(500:end,:);
t_raw = t_raw(500:end);
SD = std(y_band);
T = -SD*3.6;
[spks,spksTime] = spike_multiple(y_band,t_raw,T);

%% get datasets
spksD = [0;spksTime{1,1}(1:end-1)];

spksOri = spksTime{1,1}(2:end);

t = ((0:length(spksOri)-1)/length(spksOri))*20;
spksOri = [t' spksOri];

save('Data.mat','spksDelay','spksOri','t');