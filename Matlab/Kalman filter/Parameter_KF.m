function [A,W,H,Q] = Parameter_KF(X,y,lambda_A,lambda_H)
    [~,M] = size(X);
    f1 =  1/(M-1);
    f2 = 1/M;
    [a1,a2,w1,w2,h1,h2,q1,q2] = deal(0);
    for k = 2:M
     a1 = a1 + (X(:,k)*X(:,k-1)');
     a2 = a2 + X(:,k-1)*X(:,k-1)';
     w1 = w1 + X(:,k)*X(:,k)';
     w2 = w2 + X(:,k-1)*X(:,k)';
    end
    for k = 1:M
     h1 = h1+ y(:,k)*X(:,k)';
     h2 = h2+ X(:,k)*X(:,k)';
     q1 = q1 +y(:,k)*y(:,k)';
     q2 = q2 + X(:,k)*y(:,k)';
    end
    A = a1*pinv(a2+lambda_A*eye(size(a2)));
    W = f1*(w1-A*w2);
    H = h1*pinv(h2+lambda_H*eye(size(h2)));
    Q = f2*(q1-H*q2);
end