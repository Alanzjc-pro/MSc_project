clear all;clear;
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
y_band_r = y_band(500:end,:);
t_raw = t_raw(500:end);
SD = std(y_band);
T = -SD*3.6;
[spks,spksTime] = spike_multiple(y_band,t_raw,T);
[M,N] = size(spks);

%% PISI
Tr = 0.2;
p = 0.03125;
penalty = 32;
ISIpre = 0;
spksPre = 0;
[FR_isi,ISI,~,~] = PISI(spksTime{1,1}',spksPre,ISIpre,penalty,p);
[FR_isiq,ISI_q] = normalisationISI(ISI);

fig = figure(1);
fig.Position = [250,250,800,300];
indx2 =  find(spksTime{1,1}<= 8.5& spksTime{1,1}>=7);
plot(spksTime{1,1}(indx2),FR_isi(indx2),'Marker','*','Linewidth',2)
hold on 
plot(spksTime{1,1}(indx2),FR_isiq(indx2),'Marker','o','Linewidth',2)
xlim([spksTime{1,1}(indx2(1)) spksTime{1,1}(indx2(end))])
legend('PISI','PISI_{normalised}');
xlabel('Time(s)','FontSize',11);
ylabel('\lambda(t)','FontSize',11);
title('Normalisation','FontSize',13)
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'Normalisation.eps'],'epsc');