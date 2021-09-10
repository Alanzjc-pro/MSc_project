clear all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /BAKS-master/Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /BAKS-master');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');


%% Window Size
load('Testing1_1Trial.mat')
Tr = [0.05,0.1,0.2,0.25,0.35,0.5];
M = 100;
mise_pisi = zeros(3,length(Tr));
mise_bin = zeros(3,length(Tr));

for k = 1:3
    for j = 1:length(Tr)
        wave = Spike(2,k).Functions;
        N =length(wave);
        t_w = ((0:N-1)/N)*2;
        wave = resample(wave(2:end),round(1/Tr(j)),1000);
        for i = 1: M
            spksTime = Spike(1,k).Trains{i,1}; 
            spksC{1,1} = spksTime;
            [FR_isi,~,~] = RTISI(spksC,t_w,Tr(j),16,0.0625);
            [FR_hist,~] = PSTH(spksTime,t_w,Tr(j));
            err(i,j) = immse(wave,FR_isi);
            err1(i,j) = immse(wave,FR_hist);
        end
    end
    mise_pisi(k,:) = mean(err);
    mise_bin(k,:) = mean(err1);
end

fig = figure(1);
fig.Position = [250 250 850 330];
subplot(1,2,1);
plot(Tr,mise_pisi(1,:),'Marker','+','Linewidth',2);
hold on 
plot(Tr,mise_pisi(2,:),'Marker','o','Linewidth',2);
plot(Tr,mise_pisi(3,:),'Marker','*','Linewidth',2);
grid on
grid minor
title('Window Size Turning on PISI Method','FontSize',13);
xlabel('window (s)','FontSize',11);
ylabel('MISE','FontSize',11);
legend('Chirp','Sine','Sawtooth','Location','southoutside','NumColumns',3);

subplot(1,2,2);
plot(Tr,mise_bin(1,:),'Marker','+','Linewidth',2);
hold on 
plot(Tr,mise_bin(2,:),'Marker','o','Linewidth',2);
plot(Tr,mise_bin(3,:),'Marker','*','Linewidth',2);
grid on
grid minor
title('Window Size Turning on Binning Method','FontSize',13);
xlabel('window (s)','FontSize',11);
ylabel('MISE','FontSize',11);
legend('Chirp','Sine','Sawtooth','Location','southoutside','NumColumns',3);
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'SyntheticWindow.eps'],'epsc');

%% Low Intensity
load('Testing2_LowInten');
fig2 = figure(2);
fig2.Position = [250 250 700 500];
subplot(2,2,1);
M = 100;
mise_all = cell(4,4);
Tr = 0.1;
for k = 1:3
    wave = Spike(2,k).Functions;
    N =length(wave);
    t_w = ((0:N-1)/N)*2;
    wave1 = resample(wave(2:end),round(1/Tr),1000);
    for i = 1: M
       spksTime = Spike(1,k).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,Tr);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave1,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
    end
    mise_all{k,1} = err;
    mise_all{k,2} = err1;
    mise_all{k,3} = err2;
    mise_all{k,4} = err3;
end

load('Testing5_GaussianDampedSine.mat');
wave = Spike(1,1).Functions;
N =length(wave);
t_w = ((0:N-1)/N)*2;
wave1 = resample(wave(2:end),round(1/Tr),1000);
wave2 = resample(wave(2:end),round(1/0.1),1000); 
for i = 1: M
       spksTime = Spike(1,1).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.1);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
end
 mise_all{4,1} = err;
 mise_all{4,2} = err1;
 mise_all{4,3} = err2;
 mise_all{4,4} = err3;
 
WaveT = {'Chirp' 'Sine' 'Sawtooth','Guassian'};
delta = linspace(-.1,.3,4); %// define offsets to distinguish plots
width = .3; %// small width to avoid overlap
colors = {'r','g','b','c'};
for j = 1:4
   for k = 1:4
       GroupData(:,k) = mise_all{k,j};
   end
    boxplot(GroupData,'position',(1:numel(WaveT))+delta(j),'Color',colors{j},'boxstyle','filled','widths',width, 'labels',WaveT);
    hold on
end

ylim([0 100])
ylabel('MISE','FontSize',11);
title('Low Intensity','FontSize',13);

%% High Intensity
load('Testing2_HighInten');
subplot(2,2,2);
M = 100;
mise_all = cell(4,4);
Tr = 0.1;
for k = 1:3
    wave = Spike(2,k).Functions;
    N =length(wave);
    t_w = ((0:N-1)/N)*2;
    wave1 = resample(wave(2:end),round(1/Tr),1000);
    wave2 = resample(wave(2:end),round(1/0.25),1000);
    for i = 1: M
       spksTime = Spike(1,k).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.25);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
    end
    mise_all{k,1} = err;
    mise_all{k,2} = err1;
    mise_all{k,3} = err2;
    mise_all{k,4} = err3;
end

load('Testing5_GaussianDampedSine.mat');
wave = Spike(1,3).Functions;
N =length(wave);
t_w = ((0:N-1)/N)*2;
wave1 = resample(wave(2:end),round(1/Tr),1000);
wave2 = resample(wave(2:end),round(1/0.325),1000); 
for i = 1: M
       spksTime = Spike(1,3).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.325);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
end
 mise_all{4,1} = err;
 mise_all{4,2} = err1;
 mise_all{4,3} = err2;
 mise_all{4,4} = err3;
 
WaveT = {'Chirp' 'Sine' 'Sawtooth','Guassian'};
delta = linspace(-.1,.3,4); %// define offsets to distinguish plots
width = .3; %// small width to avoid overlap
colors = {'r','g','b','c'};
for j = 1:4
   for k = 1:4
       GroupData(:,k) = mise_all{k,j};
   end
    boxplot(GroupData,'position',(1:numel(WaveT))+delta(j),'Color',colors{j},'boxstyle','filled','widths',width, 'labels',WaveT);
    hold on
end

title('High Intensity','FontSize',13);
ylim([0 4000])

%% Low Frequency
load('Testing2_LowFreq');
subplot(2,2,3);
M = 100;
mise_all = cell(4,4);
Tr = 0.1;
for k = 1:3
    wave = Spike(2,k).Functions;
    N =length(wave);
    t_w = ((0:N-1)/N)*2;
    wave1 = resample(wave(2:end),round(1/Tr),1000);
    wave2 = resample(wave(2:end),round(1/0.5),1000);
    for i = 1: M
       spksTime = Spike(1,k).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.5);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
    end
    mise_all{k,1} = err;
    mise_all{k,2} = err1;
    mise_all{k,3} = err2;
    mise_all{k,4} = err3;
end


load('Testing5_GaussianDampedSine.mat');
wave = Spike(1,4).Functions;
N =length(wave);
t_w = ((0:N-1)/N)*2;
wave1 = resample(wave(2:end),round(1/Tr),1000);
wave2 = resample(wave(2:end),round(1/0.5),1000); 
for i = 1: M
       spksTime = Spike(1,4).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.5);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
end
 mise_all{4,1} = err;
 mise_all{4,2} = err1;
 mise_all{4,3} = err2;
 mise_all{4,4} = err3;
 
WaveT = {'Chirp' 'Sine' 'Sawtooth','Guassian'};
delta = linspace(-.1,.3,4); %// define offsets to distinguish plots
width = .3; %// small width to avoid overlap
colors = {'r','g','b','c'};
for j = 1:4
   for k = 1:4
       GroupData(:,k) = mise_all{k,j};
   end
    boxplot(GroupData,'position',(1:numel(WaveT))+delta(j),'Color',colors{j},'boxstyle','filled','widths',width, 'labels',WaveT);
    hold on
end

boxes = findobj(gca, 'Tag', 'Box');
legend(boxes([15 10 5 3]), {'PISI','Binning','GKS','BAKs'},'Location','southoutside','NumColumns',4);
ylabel('MISE','FontSize',11);
title('Low Frequency','FontSize',13);
ylim([0 1000])

%% High Frequency
load('Testing2_HighFreq');
subplot(2,2,4);
M = 100;
mise_all = cell(4,4);
Tr = 0.1;
for k = 1:3
    wave = Spike(2,k).Functions;
    N =length(wave);
    t_w = ((0:N-1)/N)*2;
    wave1 = resample(wave(2:end),round(1/Tr),1000);
    wave2 = resample(wave(2:end),round(1/0.2),1000);
    for i = 1: M
       spksTime = Spike(1,k).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.2);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
    end
    mise_all{k,1} = err;
    mise_all{k,2} = err1;
    mise_all{k,3} = err2;
    mise_all{k,4} = err3;
end

load('Testing5_GaussianDampedSine.mat');
wave = Spike(1,6).Functions;
N =length(wave);
t_w = ((0:N-1)/N)*2;
wave1 = resample(wave(2:end),round(1/Tr),1000);
wave2 = resample(wave(2:end),round(1/0.2),1000); 
for i = 1: M
       spksTime = Spike(1,6).Trains{i,1}; 
       spksC{1,1} = spksTime;
       [FR_isi,~,~] = RTISI(spksC,t_w,Tr,16,0.0625);
       [FR_hist,~] = PSTH(spksTime,t_w,0.2);
       FR_kernel = Kernel(spksTime,t_w',0.2); 
       [FR_baks,~] = BAKS(spksTime,t_w',4,length(spksTime)^(4/5));
       err(i,:) = immse(wave1,FR_isi);
       err1(i,:) = immse(wave2,FR_hist);
       err2(i,:) = immse(wave',FR_kernel);
       err3(i,:) = immse(wave',FR_baks);
end
 mise_all{4,1} = err;
 mise_all{4,2} = err1;
 mise_all{4,3} = err2;
 mise_all{4,4} = err3;
 
WaveT = {'Chirp' 'Sine' 'Sawtooth','Guassian'};
delta = linspace(-.1,.3,4); %// define offsets to distinguish plots
width = .3; %// small width to avoid overlap
colors = {'r','g','b','c'};
for j = 1:4
   for k = 1:4
       GroupData(:,k) = mise_all{k,j};
   end
    boxplot(GroupData,'position',(1:numel(WaveT))+delta(j),'Color',colors{j},'boxstyle','filled','widths',width, 'labels',WaveT);
    hold on
end

boxes = findobj(gca, 'Tag', 'Box');
legend(boxes([15 10 5 3]), {'PISI','Binning','GKS','BAKs'},'Location','southoutside','NumColumns',4);
title('High Frequency','FontSize',13);
ylim([0 1000])
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig2,[filename 'SyntheticCom.eps'],'epsc');
