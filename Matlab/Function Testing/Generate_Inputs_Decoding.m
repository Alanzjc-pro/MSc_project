clear all;clear;

%% load the datasets
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
load('spksTest.mat');
% Set the window size
Tr = 0.1;

%% Estimate Firing Rate using Binning
[~,~,spksNew] = RTISI(spksTime,t',Tr,16,0.0625);
for j = 1: round(t(end)/Tr)
    for i = 1:96
        if isempty(spksNew{i,j})
           FR(i,j) = 0; 
        else
           FR(i,j) = numel(spksNew{i,j})/Tr;
        end
        
    end
end

%% Estimate FR using PISI
[~,ISI,~] = RTISI(spksTime,t,Tr,16,0.0625);
[~,ISIquan] = normalisationISI(ISI);

%% Behaviour Output (position, velocity and acceleration)
 load('indy_20160930_05_Output.mat');
 idx_output = find(t >= 2660 & t <= 2750);
 t_output = t(idx_output);
 t_output = (t_output-t_output(1));
 
 xcoor = cursor_pos(idx_output,1);
 ycoor = cursor_pos(idx_output,2);
 
 for i = 1:length(t_output)-1
    x_v(i) = (xcoor(i+1)-xcoor(i))/(t_output(i+1)-t_output(i));
    y_v(i) = (ycoor(i+1)-ycoor(i))/(t_output(i+1)-t_output(i));
 end

 for i = 1:length(x_v)-1
    x_a(i) = (x_v(i+1)-x_v(i))/(t_output(i+1)-t_output(i));
    y_a(i) = (y_v(i+1)-y_v(i))/(t_output(i+1)-t_output(i));
 end
 
 xcoor_s_train = resample(xcoor,round(1/Tr),250);
 ycoor_s_train = resample(ycoor,round(1/Tr),250);
 x_v_s_train = resample(x_v,round(1/Tr),250);
 x_v_s_train = [ x_v_s_train,0];
 y_v_s_train = resample(y_v,round(1/Tr),250);
 y_v_s_train = [ y_v_s_train,0];
 x_a_s_train = resample(x_a,round(1/Tr),250);
 x_a_s_train = [ x_a_s_train,0];
 y_a_s_train = resample(y_a,round(1/Tr),250);
 y_a_s_train = [ y_a_s_train,0];
 X_train = [xcoor_s_train';ycoor_s_train';x_v_s_train;y_v_s_train;x_a_s_train;y_a_s_train];
 X = X_train(:,1:end-1);
 [~,N] = size(X);
 t = ((0:N-1)/N)*t_output(end);
 
%% Save 
filename ='Test_all.mat';
FR = inputs;
save(filename,'ISI','ISIquan','FR','X','t');