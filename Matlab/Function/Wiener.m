function [X_pred_WF,X_pred_WCF] = Wiener(X,y,L,p,poly)

if nargin < 5 || isempty(poly), poly = 1; end 

[N,~] = size(X);
Y_test = [];

for i = 1:p
   Y_test = [Y_test;y(:,p-i+1:end-i+1)];
end

X_pred_WF = [zeros(N,p-1),L'*Y_test];
X_pred_WCF = polyval(poly,X_pred_WF);

