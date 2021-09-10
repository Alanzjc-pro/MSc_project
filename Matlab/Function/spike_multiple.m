function [spksTrain,spksTime] =  spike_multiple(input,t,T)

[no_input,Channel] = size(input);
down_trigger = false;
spksTrain = zeros(size(input));
spksTime = cell(Channel,1);
for j = 1:Channel
    for i = 1 :no_input
         if ((input(i,j) >= T(j)) && ~down_trigger)
          spksTrain(i,j) = 1;
          down_trigger = true;
         elseif ((input(i,j) >= T(j)) && down_trigger)
          spksTrain(i,j) = 0;   
          else
          spksTrain(i,j) = 0;
          down_trigger = false; 
         end
    end
    spksTime{j,1} = t(spksTrain(:,j)==1); 
end
