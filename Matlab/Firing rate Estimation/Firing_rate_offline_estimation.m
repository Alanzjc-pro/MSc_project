close all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');

%% Read Data
load('indy_20160930_05.mat');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
[~,Channel] = size(stored_data.electrode_ID);
Channel = Channel/4;
index = find(stored_data.time(:) >= 2360 & stored_data.time(:) <= 2560); % Experiment Period Look at only
y = stored_data.neural_recordings(index,1); 
t_raw = stored_data.time(index);  
t_raw = t_raw - t_raw(1); % change to ms and set t = 0 for analysis

%% Band Pass filter
Fs = 24414.0625;
order = 4;
fcutlow = 500;
fcuthigh = 3000;
y_fil =  Band_Pass(y,4,Fs,fcutlow,fcuthigh);
%grpdelay(b,a,Fs)
subplot(2,1,1);plot(y)
subplot(2,1,2);plot(y_fil);

%% Threshold crossing
SD = std(y_fil);
threshold = -3.5*SD;
figure(2);
yline(threshold,'r--')
hold on
plot(t_raw,y_fil(:,1))

%% Thresholding to produce spike train
for j = 1:Channel
    for i= 1:num_steps
        if(Fil_y(i,j)<=threshold(j))
            spike(i,j) = 1;
        else
            spike(i,j) = 0;
        end
    end    
end
%subplot(2,1,1);  plot(t,Fil_y)
%subplot(2,1,2);
%ylim([0 1.5]);

%% Raster plot
figure('Units','normalized','Position',[0 0 .3 1]);
RP = subplot(4,1,1);hold on
for i = 1:Channel
    spks = t(find(spike(:,i)==1));
    Xspks = repmat(spks,3,1);
    Yspks = nan(size(Xspks));
    if ~isempty(Yspks)
        Yspks(1,:) = i - 1;
        Yspks(2,:) = i;
    end
    plot(Xspks,Yspks,'Color','k')
end
RP.XLabel.String  	= 'Time/s';
RP.YLabel.String  	= 'Channels';
title('Raster plot - 96 channels');

%% Histogram
%spike_all = [];
%spk = t(find(spike(:,i)==1));
%spike_all = [spike_all,spk];
%end
%nobin = 100; %Histogram bin 
%H = subplot(3,1,2);
%h = histogram(spike_all,bin);
%H.XLabel.String  	= 'Time/s';
%H.YLabel.String  	= 'Spikes/bins';
%title('Histogram'); 

%% Firing Rate Estimation (Moving Average Filter)
bin = 100; %100ms
Num = round((t(end)-t(1))/bin);
FR = size(spike);
for k = 1:Channel
    k_old = sum(spike(1:Num,k)==1);
    j_old = 1;
    %n = sum(spike(:,k)==1)-k_old;
    for i = 1:Num-1
        j = (num_steps/(Num-1))*i;
        k_new = sum(spike(1:j,k)==1)-k_old;
        FR(j_old:j,k) = k_new/(bin*0.001);
        k_old = sum(spike(1:j,k)==1);
        j_old = j;
    end
end

Rectkernel = ones(2000,1)/2000; % Rectangular Kernel
sdf = conv(FR(:,6),Rectkernel,'same');

S6 = subplot(4,1,2);
plot(t,spike(:,6))
S6.XLabel.String  	= 'Time/s';
title('Spike Train in channel 6');

psth = subplot(4,1,3);
plot(t,FR(:,6))
psth.XLabel.String  = 'Time/s';
psth.YLabel.String  = 'Firing rate/Hz';
title('PSTH');

MV = subplot(4,1,4);
plot(t,sdf)
MV.XLabel.String  	= 'Time/s';
MV.YLabel.String  	= 'Firing rate/Hz';
title('Moving average filter');