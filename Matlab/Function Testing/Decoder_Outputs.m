close all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Kalman filter');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Wiener filter');

%% Train Parameters 
load('Train_all.mat');
p = 5;
degree = 2;
type = 1:6;
%ISI= FR;
[poly,L] = WF_parameter(X(type,:),ISI,p,degree);
[A,W,H,Q] = Parameter_KF(X(type,:),ISI,0,0);

%% Test
load('Test_all.mat')
Y_test = [];
X_test = X(type,:);
[N,M] = size(X_test);
%ISI = FR;
for i = 1:p
   Y_test = [Y_test;ISI(:,p-i+1:end-i+1)];
end
X_pred_WF = [zeros(N,p-1),L'*Y_test];
X_pred_WCF = polyval(poly,X_pred_WF);

X_pred_KF = Kalman(X_test,ISI,A,W,H,Q);

%% Plot 
fig = figure(1);
fig.Position = [250 250 750 380];
type = 2;
start = 1;
End = 450;
range = start:End;
plot(t(range)-t(start),X_test(type,range),'k','Linewidth',2.5)
hold on 
h1=plot(t(range)-t(start),X_pred_KF(type,range),'r','Linewidth',2);
h2=plot(t(range)-t(start),X_pred_WF(type,range),'color',[0 0.4470 0.7410],'Linewidth',2);
h3=plot(t(range)-t(start),X_pred_WCF(type,range),'color',[0 0.4470 0.7410],'LineStyle','--','Linewidth',1);
xlim([0 t(End)-t(start)]);
grid on
grid minor
legend([h1,h2,h3],'KF','WF','WCF')
title("Neural Decoding on y-axis Position",'FontSize',15);
xlabel('Time (s)','FontSize',13);
ylabel("Position (m)",'FontSize',13);
[cc_wf,~] = performance(X_test(type,:),X_pred_WF(type,:));
[cc_wcf,~] = performance (X_test(type,:),X_pred_WCF(type,:));
[cc_kf,~] = performance (X_test(type,:),X_pred_KF(type,:));
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'Decoder.eps'],'epsc');