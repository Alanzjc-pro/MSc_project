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

y_band = y_band(500:end,:);
t_raw = t_raw(500:end);
SD = std(y_band);
T = -SD*3.6;
[spks,spksTime] = spike_multiple(y_band,t_raw,T);

%% Compute the ISI
N = length(spksTime{1,1});
spksTimes = [0;spksTime{1,1}];
ISI = diff(spksTimes);
Firingrate = 1./ISI;
p = 0.03125;
penalty = 32;
ISIpre = 0;
spksPre = 0;

[FR,~,~,~] = PISI(spksTime{1,1},spksPre,ISIpre,penalty,p);


fig = figure(1);
fig.Position= [250 250 800 300];
indx = find(t_raw<=8.4& t_raw>=7.4);
indx2 =  find(spksTime{1,1}<=8.4& spksTime{1,1}>=7.4);

plot(t_raw(indx),50*spks(indx,1),'k','Linewidth',1.5);
hold on
h1 = plot(spksTime{1,1}(indx2),Firingrate(indx2)+50,'k--o','Linewidth',2);
h2 = plot(spksTime{1,1}(indx2),FR(indx2)+50,'r--*','Linewidth',2);
xlabel('Time (s)','FontSize',13)
ylabel('\lambda(t)','FontSize',13)
xlim([spksTime{1,1}(indx2(1)) spksTime{1,1}(indx2(end))]);
title('FrequencyGram vs PISI','FontSize',13)
legend([h1,h2],'FrequencyGram', 'PISI','Location','southoutside','NumColumns',2)

filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'PISI.eps'],'epsc');