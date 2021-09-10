close all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Wiener filter');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Kalman filter');

%% WCF, WF
load('Train_all.mat');
y_train = cell(3,1);
y_train{1,1} = FR;
y_train{2,1} = ISI;
y_train{3,1} = ISIquan;
X_train = X;
load('Test_all.mat');
y_test = cell(3,1);
y_test{1,1} = FR;
y_test{2,1} = ISI;
y_test{3,1} = ISIquan;
X_test = X;
p = 5;
d = 2;
ccwf = zeros(3,6);
ccwcf = zeros(3,6);
rmsewf = zeros(3,6);
rmsewcf = zeros(3,6);

for i = 1:3
    [poly,L] = WF_parameter(X_train,y_train{i,1},p,d);
    [WF_pred,WCF_pred] = Wiener(X_test,y_test{i,1},L,p,poly);
    for j = 1:6
        [ccwf(i,j),rmsewf(i,j)] = performance(WF_pred(j,:),X_test(j,:));
        [ccwcf(i,j),rmsewcf(i,j)] = performance(WCF_pred(j,:),X_test(j,:));
    end
end

%% KF
cckf = zeros(3,6);
rmsekf = zeros(3,6);
for i = 1:3
    [A,W,H,Q] = Parameter_KF(X_train,y_train{i,1},0,0);
    KF_pred = Kalman(X_test,y_test{i,1},A,W,H,Q);
    for j = 1:6
        [cckf(i,j),rmsekf(i,j)] = performance(KF_pred(j,:),X_test(j,:));
    end
end

%% Plot bar chart
X = categorical({'WF','WCF','KF'});
X = reordercats(X,{'WF','WCF','KF'});
wf_cc = zeros(3,2);
wcf_cc = zeros(3,2);
kf_cc = zeros(3,2);
wf_mse = zeros(3,2);
wcf_mse = zeros(3,2);
kf_mse = zeros(3,2);

for i = 1:3
    wf_cc(i,1) = (ccwf(i,1)+ ccwf(i,2))/2;
    wf_cc(i,2) = (ccwf(i,3)+ ccwf(i,4))/2;
    wf_mse(i,1) = (rmsewf(i,1)+ rmsewf(i,2))/2;
    wf_mse(i,2) = (rmsewf(i,3)+ rmsewf(i,4))/2;
    wcf_cc(i,1) = (ccwcf(i,1)+ ccwcf(i,2))/2;
    wcf_cc(i,2) = (ccwcf(i,3)+ ccwcf(i,4))/2;
    wcf_mse(i,1) = (rmsewcf(i,1)+ rmsewcf(i,2))/2;
    wcf_mse(i,2) = (rmsewcf(i,3)+ rmsewcf(i,4))/2;
    kf_cc(i,1) = (cckf(i,1)+ cckf(i,2))/2;
    kf_cc(i,2) = (cckf(i,3)+ cckf(i,4))/2;
    kf_mse(i,1) = (rmsekf(i,1)+ rmsekf(i,2))/2;
    kf_mse(i,2) = (rmsekf(i,3)+ rmsekf(i,4))/2;
end

Y = [wf_cc(:,1),wcf_cc(:,1),kf_cc(:,1)];
Y1 = [wf_mse(:,1),wcf_mse(:,1),kf_mse(:,1)];
Y2 = [wf_cc(:,2),wcf_cc(:,2),kf_cc(:,2)];
Y3 = [wf_mse(:,2),wcf_mse(:,2),kf_mse(:,2)];
fig = figure(1);
fig.Position = [250 250 1000 600];
subplot(2,2,1);
h = bar(X,Y');
ylim([0 0.9])
ylabel('Average CC','FontSize',13)
set(h, {'DisplayName'}, {'Binning','PISI','Normalised PISI'}')
title('(a)','Fontsize',15)
subplot(2,2,2);
h = bar(X,Y2');
ylim([0 0.9])
set(h, {'DisplayName'}, {'Binning','PISI','Normalised PISI'}')
title('(c)','Fontsize',15)
subplot(2,2,3);
h = bar(X,Y1');
ylabel('Average RMSE','FontSize',13)
set(h, {'DisplayName'}, {'Binning','PISI','Normalised PISI'}')
legend('Location','southoutside','NumColumns',3)
title('(b)','Fontsize',15)
subplot(2,2,4);
h = bar(X,Y3');
set(h, {'DisplayName'}, {'Binning','PISI','Normalised PISI'}')
legend('Location','southoutside','NumColumns',3)
title('(d)','Fontsize',15)
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'DecodingPerformance.eps'],'epsc');