function [X_pred] = Kalman(X,y,A,W,H,Q)

[N,M] = size(X);

for k = 1:M
    % Time Update:
    if k == 1
      X_minus(:,k) = zeros(N,1);
      P_minus = W;
    else 
      X_minus(:,k) = A*X_pred(:,k-1);
      P_minus = A*P*A' + W;
    end
    % Measurement Update:
    K = P_minus*H'*pinv(H*P_minus*H'+Q);
    X_pred(:,k) = X_minus(:,k) + K*(y(:,k)-H*X_minus(:,k));
    P = (eye(N)-K*H)*P_minus;
end
