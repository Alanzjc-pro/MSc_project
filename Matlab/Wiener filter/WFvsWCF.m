close all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');

%% Load training datasets
load('Train_quant.mat');

[N,M] = size(X);
p = 6;
degree = 2;
[poly,L] = WF_parameter(X,ISI,p,degree);

%% WF vs WCF
load('Test_quant.mat')
Y_test = [];
X_test = X;
for i = 1:p
   Y_test = [Y_test;ISI(:,p-i+1:end-i+1)];
end
X_pred_WF = [zeros(N,p-1),L'*Y_test];
X_pred_WCF = polyval(poly,X_pred_WF);
[cc_wf,mse_wf] = performance(X_test(2,:),X_pred_WF(2,:));
[cc_wcf,mse_wcf] = performance (X_test(2,:),X_pred_WCF(2,:));
plot(t,X_test(2,:),'k','Linewidth',2)
hold on
plot(t,X_pred_WF(2,:),'r','Linewidth',2);
title('Position_X in Wiener filter','FontSize',13)
xlabel('Time')
ylabel ('Position')
legend('Targeted','Predicted')