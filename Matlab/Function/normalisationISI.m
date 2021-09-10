function [FR,ISIquan] = normalisationISI(ISI)


[M,N] = size(ISI);
ISIquan = zeros(M,N);
FR = zeros(M,N);
steps = 8;

for i = 1:M
    for j = 1: N
        if ISI(i,j) == 1
           ISIquan(i,j) = 1;
        elseif 0.01<=ISI(i,j) && ISI(i,j) <=0.1
            ISIquan(i,j) = (round(ISI(i,j)*1000/steps)/1000)*steps;
        elseif ISI(i,j) < 0.01
            ISIquan(i,j) = 0.01;
        else
            ISIquan(i,j) = 0.2;
        end
        FR(i,j) = 1/ISIquan(i,j);
    end
end

end