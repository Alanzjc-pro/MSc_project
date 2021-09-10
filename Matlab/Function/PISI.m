function [FR,ISI,spksPre,ISIPre] = PISI(spksTime,spksPre,ISIpre,penalty,p)

% Interspike-inteval Measurement
spksTime = [spksPre,spksTime];
ISI = [ISIpre,diff(spksTime)];
N = length(ISI);

% Penality function
for i = 2:N
    if ISI(i-1) - ISI(i) >= penalty*ISI(i)*ISI(i-1)
       ISI(i) = ISI(i-1)*(1-p)-ISI(i)*p;
    end
end

% Firing rate estimation
FR = 1./ISI;
FR = FR(2:end);

% Store the results 
spksPre = spksTime(end);
ISIPre = ISI(end);