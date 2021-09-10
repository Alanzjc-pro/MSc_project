function [cc,rmse] = performance(X,X_pred)

% Decoding Performance (CC,RMSE)
    [~,N] = size(X);
    m_real = mean(X,2);
    m_pred = mean(X_pred,2);
    cc = sum((X-m_real).*(X_pred-m_pred))...
    /(sqrt(sum((X-m_real).^2))*sqrt(sum((X_pred-m_pred).^2)));
    rmse = sqrt(sum((X-X_pred).^2)/N);
end