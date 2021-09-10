clear all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /BAKS-master/Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /BAKS-master');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
%% Load Datasets
load('Testing1_1Trial.mat');

%% Test Sine rate
Sinwave = Spike(1,2).Functions;
spksSine = Spike(1,2).Trains{7,1}; 
spksSine = round(spksSine,3);
N_sine =length(Sinwave);
t_sine = ((0:N_sine-1)/N_sine)*2;
spks = spksTtospks(spksSine,t_sine);
spksSinecell = cell(1,1);
spksSinecell{1,1} = spksSine;
[FR_isi,~,~] = RTISI(spksSinecell,t_sine,0.1,16,0.0625);
[FR_hist,t] = PSTH(spksSine,t_sine',0.1);
[FR_kernel] = Kernel(spksSine,t_sine',0.1);
[FR,~] = BAKS(spksSine,t_sine',4,length(spksSine)^(4/5));
fig=figure(1);
fig.Position=[250 250 1250 850];
subplot(2,2,1);
plot(t_sine,5*spks,'k','Linewidth',1.5)
hold on
plot(t_sine,Sinwave,'k','Linewidth',2.4)
plot(t_sine,FR,'b','Linewidth',1.5)
plot(t_sine,FR_kernel,'g','Linewidth',1.5)
plot(t,FR_hist,'Color','#7E2F8E','Linewidth',1.5)
plot(t,FR_isi,'Marker','*','Color','r','Linewidth',1.5)

xlim([0 2])
%ylabel('\lambda(t)','FontSize',13);
%xlabel('Time/s','FontSize',13);
title('Sine Rate Testing','FontSize',15);

%% Test chirp rate
Chirp = Spike(1,1).Functions;
spksChirp = Spike(1,1).Trains{18,1}; 
N_chirp =length(Chirp);
t_Chirp = ((0:N_chirp-1)/N_chirp)*2;
spks = spksTtospks(spksChirp,t_Chirp);
[FR,~] = BAKS(spksChirp,t_Chirp',4,length(spksChirp)^(4/5));
[FR_kernel] = Kernel(spksChirp,t_Chirp',0.1);
[FR_hist,t] = PSTH(spksChirp,t_Chirp',0.1);
spksChirpcell = cell(1,1);
spksChirpcell{1,1} = spksChirp;
[FR_isi,~,~] = RTISI(spksChirpcell,t_Chirp,0.1,16,0.0625);
subplot(2,2,2);
plot(t_Chirp,5*spks,'k','Linewidth',1.5)
hold on
plot(t_Chirp,Chirp,'k','Linewidth',2.4)
plot(t_Chirp,FR,'b','Linewidth',1.2)
plot(t_Chirp,FR_kernel,'g','Linewidth',1.2)
plot(t,FR_hist,'Color','#7E2F8E','Linewidth',1.2)
plot(t,FR_isi,'Marker','*','Color','r','Linewidth',1.5)
xlim([0 2])
title('Chirp rate Testing','FontSize',15);

%% Test Sawtooth Rate
Saw = Spike(1,3).Functions;
spksSaw = Spike(1,3).Trains{19,1}; %9,17,19!,20!
N_Saw =length(Saw);
t_Saw = ((0:N_Saw-1)/N_Saw)*2;
spks = spksTtospks(spksSaw,t_Saw);
[FR,~] = BAKS(spksSaw,t_Saw',4,length(spksSaw)^(4/5));
spksSawcell = cell(1,1);
spksSawcell{1,1} = spksSaw;
[FR_isi,~,~] = RTISI(spksSawcell,t_Saw,0.1,16,0.0625);
[FR_kernel] = Kernel(spksSaw,t_Saw',0.1);
[FR_hist,t] = PSTH(spksSaw,t_Saw',0.1);
subplot(2,2,3);
plot(t_Saw,5*spks,'k','Linewidth',1.5)
hold on
h1=plot(t_Saw,Saw,'k','Linewidth',2.4);
h2=plot(t_Saw,FR,'b','Linewidth',1.2);
h3=plot(t_Saw,FR_kernel,'g','Linewidth',1.2);
h4=plot(t,FR_hist,'Color','#7E2F8E','Linewidth',1.2);
h5=plot(t,FR_isi,'Marker','*','Color','r','Linewidth',1.8);
xlim([0 2])
legend([h1,h2,h3,h4,h5],{'Underlying','BAKs','GKS','Binning','PISI'},'Location','southoutside','NumColumns',6);
title('Sawtooth rate Testing','FontSize',15);

%% Guassian Damped Sine
load('Testing5_GaussianDampedSine.mat')
GSine = Spike(1,1).Functions;
spksGSine = Spike(1,1).Trains{18,1}; 
N_GSine =length(GSine);
t_GSine = ((0:N_GSine-1)/N_GSine)*2;
spks = spksTtospks(spksGSine,t_GSine);
[FR,~] = BAKS(spksGSine,t_GSine',4,length(spksGSine)^(4/5));
spksGSinecell = cell(1,1);
spksGSinecell{1,1} = spksGSine;
[FR_isi,~,~] = RTISI(spksGSinecell,t_GSine,0.15,16,0.0625);
[FR_kernel] = Kernel(spksGSine,t_GSine',0.1);
[FR_hist,t] = PSTH(spksGSine,t_GSine',0.15);
%fig=figure(4);
subplot(2,2,4);
plot(t_GSine,2*spks,'k','Linewidth',1.5)
hold on
h1=plot(t_GSine,GSine,'k','Linewidth',2.4);
h2=plot(t_GSine,FR,'b','Linewidth',1.5);
h3=plot(t_GSine,FR_kernel,'g','Linewidth',1.5);
h4=plot(t,FR_hist,'Color','#7E2F8E','Linewidth',1.5);
h5=plot(t,FR_isi,'Marker','*','Color','r','Linewidth',1.8);
xlim([0 2])
legend([h1,h2,h3,h4,h5],{'Underlying','BAKs','GKS','Binning','PISI'},'Location','southoutside','NumColumns',5);
title('Guassian Damped Sine Rate Testing','FontSize',15);
han=axes(fig,'visible','off'); 
han.Title.Visible='on';
han.XLabel.Visible='on';
han.YLabel.Visible='on';
ylabel(han,'\lambda(t)','FontSize',16);
xlabel(han,'Time (s)','FontSize',16);

filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'SyntheticSingle.eps'],'epsc');