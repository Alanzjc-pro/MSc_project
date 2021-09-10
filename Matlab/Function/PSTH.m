function [FR Time] = PSTH(spks,t,bin)

% If the input is the spkTrain 
% bin = 0.1; %100ms 
% sample = 1/bin;
% Num = round(t_raw(end)/bin);
% 
% for k = 1:length(idx)
%   for i = 1:Num
%         idx = find(t_raw >= (bin*(i-1))& t_raw <= (bin*i));
%         k_new(i,k) = sum(spks(idx,k)==1);
%         FR(i,k) = k_new(i,k)/bin;
%   end
% end  


% If the input is spksTime
Num = round(t(end)/bin);

for i = 1:Num
    idx = find(spks >= (bin*(i-1))& spks <= (bin*i));
    if isempty(idx)
        FR(i) = 0;
    else
        k_new = idx(end)-idx(1)+1;
        FR(i) = k_new/bin;
    end
    Time(i) = bin*i;
end

