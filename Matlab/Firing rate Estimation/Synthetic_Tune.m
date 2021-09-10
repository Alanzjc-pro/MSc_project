clear all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /BAKS-master/Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /BAKS-master');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
load('Testing1_1Trial.mat')

%% Effects of T
Tr = 0.1;
M = 100;
T = [4,8,16,32,64];
mise_T = zeros(3,length(T));
FR_isi = cell(length(T),1);

for k = 1:3
    wave = Spike(1,k).Functions;
    N =length(wave);
    t_w = ((0:N-1)/N)*2;
    wave = resample(wave(2:end),round(1/Tr),1000);
    for i = 1: M
        for j = 1:length(T)
            spksTime = Spike(1,k).Trains{i,1}; 
            spksC{1,1} = spksTime;
            [FR_isi{j,1}(:,i),~,~] = RTISI(spksC,t_w,Tr,T(j),0.0625);
            err(i,j) = immse(wave',FR_isi{j,1}(:,i));
        end
    end
    mise_T(k,:) = mean(err);
end

%% Effects of p 
Tr = 0.1;
M = 100;
p = [0.03125,0.0625,0.125,0.25,0.375];
mise_p = zeros(3,length(p));
FR_isi = cell(length(p),1);
spksC = cell(1,1);

for k = 1:3
    wave = Spike(1,k).Functions;
    N =length(wave);
    t_w = ((0:N-1)/N)*2;
    wave = resample(wave(2:end),round(1/Tr),1000);
    for i = 1: M
        for j = 1:length(p)
            spksTime = Spike(1,k).Trains{i,1}; 
            spksC{1,1} = spksTime;
            [FR_isi{j,1}(:,i),~,~] = RTISI(spksC,t_w,Tr,16,p(j));
            err(i,j) = immse(wave',FR_isi{j,1}(:,i));
        end
    end
    mise_p(k,:) = mean(err);
end

%% Plot 
fig = figure(1);
fig.Position = [250 250 850 330];

subplot(1,2,1); 
plot(p,mise_p(1,:),'Marker','+','Linewidth',2);
hold on 
plot(p,mise_p(2,:),'Marker','o','Linewidth',2);
plot(p,mise_p(3,:),'Marker','*','Linewidth',2);
grid on
grid minor
title('Set T = 16 to tune p','FontSize',15);
xlabel('p','FontSize',13);
ylabel('MISE','FontSize',13);
legend('Chirp','Sine','Sawtooth','Location','southoutside','NumColumns',3);

subplot(1,2,2);
plot(T,mise_T(1,:),'Marker','+','Linewidth',2);
hold on 
plot(T,mise_T(2,:),'Marker','o','Linewidth',2);
plot(T,mise_T(3,:),'Marker','*','Linewidth',2);
grid on
grid minor
title('Set p = 0.625 to tune T','FontSize',15);
xlabel('T','FontSize',13);
legend('Chirp','Sine','Sawtooth','Location','southoutside','NumColumns',3);


filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'SyntheticTune.eps'],'epsc');