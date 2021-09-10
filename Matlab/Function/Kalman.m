function [X_pred] = Kalman(X,y,A,W,H,Q)

[~,M] = size(X);

for k = 1:M
    % Time Update:
    if k == 1
      X_minus(:,k) = zeros(6,1);
      P_minus = W;
    else 
      X_minus(:,k) = A*X_pred(:,k-1);
      P_minus = A*P*A' + W;
    end
    % Measurement Update:
    K = P_minus*H'*pinv(H*P_minus*H'+Q);
    X_pred(:,k) = X_minus(:,k) + K*(y(:,k)-H*X_minus(:,k));
    P = (eye(6)-K*H)*P_minus;
end
