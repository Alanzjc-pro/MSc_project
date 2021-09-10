function FR = Kernel(spksTime,t,w)

FR = zeros(length(t),1);

for i = 1:length(spksTime)
    K = (1./(sqrt(2.*pi).*w)).*exp(-((t-spksTime(i)).^2)./(2.*w.^2)); % gaussian kernel
    %K = (1./(sqrt(2).*w)).*exp(-sqrt(2).*abs((t-spksTime(i))./w)); % exponential kernel
    FR = FR + K;
end
