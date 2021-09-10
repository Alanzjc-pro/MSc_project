function [poly,L] = WF_parameter(X,y,p,degree) 
    
    Y=[];
    [N,~] = size(X);
    for i = 1:p
        Y = [Y;y(:,p-i+1:end-i+1)];
    end
    X_lagged = X(:,p:end);
    L = pinv(Y*Y')*Y*X_lagged';
    x_pred = [zeros(N,p-1),L'* Y];
    poly = polyfit(x_pred,X,degree);
    
end