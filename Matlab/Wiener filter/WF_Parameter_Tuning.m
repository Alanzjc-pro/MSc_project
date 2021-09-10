clear all; clear;

%% load the datasets
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
load('spksTrain.mat');

%% Estimate the rate
Tr = [0.05,0.1,0.2,0.25,0.5];
FiringRate = cell(length(Tr),1);

for i = 1:length(Tr)
    FiringRate{i,1} = RTMy(spksTime,t,Tr(i));
end

% [Channel,~] = size(spksTime);
% for j = 1:length(Tr)
%     for i = 1 : Channel
%         [FiringRate{j,1}(i,:),~] = PSTH(spksTime{i,1},t',Tr(j));
%     end
% end

%% Output
 load('indy_20160930_05_Output.mat');
 idx_output = find(t >= 2360 & t <= 2660);
 t_output = t(idx_output);
 t_output = (t_output-t_output(1));
 
 X = cell(length(Tr),1);
 for i = 1:length(Tr)
     xcoor = cursor_pos(idx_output,1);
     ycoor = cursor_pos(idx_output,2);
     xcoor_s_train = resample(xcoor,1/Tr(i),250);
     ycoor_s_train = resample(ycoor,1/Tr(i),250);
     X_add = [xcoor_s_train'; ycoor_s_train'];
     X{i,1} = X_add(:,1:end-1);
 end
 
 %% Load test datasets
 load('spksTest.mat');
 Tr = [0.05,0.1,0.2,0.25,0.5];
[Channel,~] = size(spksTime);
FR_test = cell(length(Tr),1);

for i = 1:length(Tr)
    FR_test{i,1} = RTMy(spksTime,t,Tr(i));
end

% for j = 1:length(Tr)
%     for i = 1 : Channel
%         [FR_test{j,1}(i,:),Time] = PSTH(spksTime{i,1},t',Tr(j));
%     end
% end

 load('indy_20160930_05_Output.mat');
 idx_output = find(t >= 2660 & t <= 2750);
 t_output = t(idx_output);
 t_output = (t_output-t_output(1));
 
 X_test = cell(length(Tr),1);
 for i = 1:length(Tr)
     xcoor = cursor_pos(idx_output,1);
     ycoor = cursor_pos(idx_output,2);
     xcoor_s_train = resample(xcoor,1/Tr(i),250);
     ycoor_s_train = resample(ycoor,1/Tr(i),250);
     X_add = [xcoor_s_train'; ycoor_s_train'];
     X_test{i,1} = X_add(:,1:end-1);
 end
 
 %% Tuning
 p = 5;
 degree = 3;
 for i = 1: length(Tr)
     [~,L] = WF_parameter(X{i,1},FiringRate{i,1},p,degree); 
     X_pred = WF_test(X_test{i,1},FR_test{i,1},L,p);
     [cc(i),~] = performance(X_test{i,1}(1,:),X_pred(1,:));
 end
 
 