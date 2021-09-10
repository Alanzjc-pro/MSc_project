function [X_pred_WF] = WF_test (X,FR,L,p)

Y_test = [];
[N,~] = size(X);

for i = 1:p
   Y_test = [Y_test;FR(:,p-i+1:end-i+1)];
end

X_pred_WF = [zeros(N,p-1),L'*Y_test];
