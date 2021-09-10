function [FR,ISI,spksNew] = RTISI(spksTime,t,Tr,T,p)

% Data organisation to receive data in a fixed window
[Channel,~] = size(spksTime);
c = round(t(end)/Tr);
spksNew = cell(Channel,c);
FiringRate = cell(Channel,c);
Interspike = cell(Channel,c);

for j = 1:c
    for i = 1:Channel
        % In the first iteration, previous outputs are set to zero
        if j == 1
           spksPre(i) = 0;
           ISIpre(i) = 0;
        end
        % Get the spikes in a fixed window Tr
        spksNew{i,j} = spksTime{i,1}(spksTime{i,1}<Tr*j & spksTime{i,1}>=Tr*(j-1));
        
        % No spike events
        if isempty(spksNew{i,j})
           FR(i,j) = 0;
           ISI(i,j) = 1;
           
        % Detect spike events
        else 
           [FiringRate{i,j},Interspike{i,j},spksPre(i),ISIpre(i)] = PISI(spksNew{i,j}',spksPre(i),ISIpre(i),T,p);
           FR(i,j) = FiringRate{i,j}(end);
           ISI(i,j) = Interspike{i,j}(end);
        end
    end
end