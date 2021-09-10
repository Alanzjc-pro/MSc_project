clear all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');

%% Load test and parameter Matrix
load('Test_bin.mat')
load('Kalman_Parameters')
X_test = X;
y_test = FR;

%% Get the prediction result
P = 0;
[~,M] = size(X_test);
Num = 2;
for k = 1:M
    % Time Update:
    if k == 1
      X_minus(:,k) = zeros(Num,1);
      P_minus = W;
    else 
      X_minus(:,k) = A*X_pred(:,k-1);
      P_minus = A*P*A' + W;
    end
    % Measurement Update:
    K = P_minus*H'*pinv(H*P_minus*H'+Q);
    X_pred(:,k) = X_minus(:,k) + K*(y_test(:,k)-H*X_minus(:,k));
    P = (eye(Num)-K*H)*P_minus;
end

%% Visualize

plot(t,X_test(2,:),'k','Linewidth',2)
hold on
plot(t,X_pred(2,:),'r','Linewidth',2)
title('Position_x in Kalman filter','FontSize',13)
xlabel('Time');
ylabel('Position')
legend('Target','Predicted')
[cc,mse] = performance(X_test(2,:),X_pred(2,:));
