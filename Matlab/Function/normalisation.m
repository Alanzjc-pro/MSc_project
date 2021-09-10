function [ISIquan] = normalisation(ISI)


[M,N] = size(ISI);
ISIquan = zeros(M,N);
steps = 8;

for i = 1:M
    for j = 1: N
        if ISI(i,j) == 1
           ISIquan(i,j) = 15;
        elseif 0.01<=ISI(i,j) && ISI(i,j) <=0.1
            ISIquan(i,j) = (round(ISI(i,j)*1000/steps));
            if ISIquan(i,j) == 13
               ISIquan(1,j) = 12;
            end
        elseif ISI(i,j) < 0.01
            ISIquan(i,j) = 13;
        else
            ISIquan(i,j) = 14;
        end
    end
end

end