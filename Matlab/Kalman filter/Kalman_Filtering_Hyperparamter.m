
close all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Hardware Simulation');
load('Train_bin.mat');
%% load parameters
[A,W,H,Q] = Parameter_KF(X,FR,0,0);
filename = 'Kalman_Parameters.mat';
save(filename,'A','W','H','Q');

%% Hyperameter tuning (window_size)
fold = 5;
data_per_fold = M/5;
mse_max = 0;
cc_max = 0;
for w = 1:5
    mse_arr = [];
    cc_arr = [];
    for k = 1:fold
    if k==1
    X_val = X(:,1:data_per_fold);
    y_val = y(:,1:data_per_fold);
    X_train = X(:,data_per_fold+1:end);
    y_train = y(:,data_per_fold+1:end);
    else
    X_val = X(:,(k-1)*data_per_fold:k*data_per_fold);
    y_val = y(:,(k-1)*data_per_fold:k*data_per_fold);
    X1 = X(:,1:(k-1)*data_per_fold);
    X2 = X(:,k*data_per_fold:end);
    y1 = y(:,1:(k-1)*data_per_fold);
    y2 = y(:,k*data_per_fold:end);
    X_train = [X1,X2];
    y_train = [y1,y2];
    end
    y_train = moving_average(y_train,w);
    [A,W,H,Q] = Parameter_KF(X_train,y_train,0,0);
    %Test Validation sets
    X_pred = Kalman_val(X_val,y_val,A,W,H,Q);
    [cc,mse] = performance(X_val(1,:),X_pred(1,:));
    cc_arr = [cc_arr,cc];
    mse_arr = [mse_arr,mse];
    end
    mse_f = mean(mse_arr);
    cc_f = mean(cc_arr)
    if mse_f <= mse_max
        mse_max = mse_f;
        i = w;
    end
    if cc_f > cc_max
        cc_max = cc_f;
        j = w;
    end
end

%% Hyperparamter tuning (labmda A)
fold = 5;
data_per_fold = M/5;
mse_max = 0;
cc_max = 0;
w = 2;
for h = [1,0.1,0.01,0.001,0.0001,0.00001,0]
    mse_arr = [];
    cc_arr = [];
    for k = 1:fold
    if k==1
    X_val = X(:,1:data_per_fold);
    y_val = y(:,1:data_per_fold);
    X_train = X(:,data_per_fold+1:end);
    y_train = y(:,data_per_fold+1:end);
    else
    X_val = X(:,(k-1)*data_per_fold:k*data_per_fold-1);
    y_val = y(:,(k-1)*data_per_fold:k*data_per_fold-1);
    X1 = X(:,1:(k-1)*data_per_fold);
    X2 = X(:,k*data_per_fold:end);
    y1 = y(:,1:(k-1)*data_per_fold);
    y2 = y(:,k*data_per_fold:end);
    X_train = [X1,X2];
    y_train = [y1,y2];
    end
    y_train = moving_average(y_train,w);
    y_val = moving_average(y_val,w);
    [A,W,H,Q] = KF_Parameter(X_train,y_train,h,0);
    %Test Validation sets
    X_pred = Kalman(X_val,y_val,A,W,H,Q);
    [cc,mse] = performance(X_val(1,:),X_pred(1,:));
    cc_arr = [cc_arr,cc];
    mse_arr = [mse_arr,mse];
    end
    mse_f = mean(mse_arr);
    cc_f = mean(cc_arr)
    if cc_f > cc_max
        cc_max = cc_f;
        j = h;
    end
end

%% Hyperparamter tuning (labmda H)
fold = 5;
data_per_fold = M/5;
lambda_max = 0;
mse_max = 0;
cc_max = 0;
w= 2;
for a = [1,0.1,0.01,0.001,0.0001,0.00001,0]
    mse_arr = [];
    cc_arr = []; 
    for k = 1:fold
    if k==1
    X_val = X(:,1:data_per_fold);
    y_val = y(:,1:data_per_fold);
    X_train = X(:,data_per_fold+1:end);
    y_train = y(:,data_per_fold+1:end);
    else
    X_val = X(:,(k-1)*data_per_fold:k*data_per_fold);
    y_val = y(:,(k-1)*data_per_fold:k*data_per_fold);
    X1 = X(:,1:(k-1)*data_per_fold);
    X2 = X(:,k*data_per_fold:end);
    y1 = y(:,1:(k-1)*data_per_fold);
    y2 = y(:,k*data_per_fold:end);
    X_train = [X1,X2];
    y_train = [y1,y2];
    end
    y_train = moving_average(y_train,w);
    y_val = moving_average(y_val,w);
    [A,W,H,Q] = KF_Parameter(X_train,y_train,a,0);
    %Test Validation sets
    X_pred = Kalman(X_val,y_val,A,W,H,Q);
    [cc,mse] = performance(X_val(1,:),X_pred(1,:));
    cc_arr = [cc_arr,cc];
    mse_arr = [mse_arr,mse];
    end
    mse_f = mean(mse_arr);
    cc_f = mean(cc_arr)
    if mse_f <= mse_max
        mse_max = mse_f;
        i = a;
    end
    if cc_f > cc_max
        cc_max = cc_f;
        j = a;
    end
end

 %% Update parameters with optimal setting of parameter
 filename = 'Kalman_Parameters.mat';
 y = moving_average(y,1);
 [A,W,H,Q] = Parameter_KF(X,y,0,0);
 save(filename,'A','W','H','Q');