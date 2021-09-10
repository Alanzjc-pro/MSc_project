clear all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
load('spksTrain.mat')

%% Train the binary tree using training datasets (original)
Tr = 0.2;
[~,ISI,~] = RTISI(spksTime,t',Tr,16,0.0625);
[FR,ISI_quan] = normalisationISI(ISI);
ISI_d = diff(ISI);
fig = figure(1);
fig.Position = [250 250 800 280];
subplot(1,2,1);
h1 = histogram(ISI,'Normalization','probability');
h1.BinWidth = 0.0001;
hv1 = h1.Values;
hv1 = hv1(hv1>0);
ylabel('Probability','FontSize',11);
title('PISI Estimates','FontSize',13);
xlabel('Symbol','FontSize',11)
entro_ori = - sum(hv1.*log(hv1));

subplot(1,2,2);
h2 = histogram(ISI_d,'Normalization','probability');
h2.BinWidth = 0.0001;
hv2 = h2.Values;
hv2 = hv2(hv2>0);
xlabel('Symbol','FontSize',11)
title('Delta of PISI Estimates','FontSize',13)
entro_diff = - sum(hv2.*log(hv2));

fig2 = figure(2);
fig2.Position = [250 250 800 280];
h = histogram(ISI_quan,'Normalization','probability');
h.BinWidth = 0.0001;
hv = h.Values;
hv = hv(hv>0);
title('Normalised PISI Estimates','FontSize',13);
ylabel('Probability','FontSize',11);
xlabel('Symbol','FontSize',11)

entro_quan = - sum(hv.*log(hv));
symbol = [0.008,0.01,0.016,0.024,0.032,0.040,0.048,0.056,0.064,0.072,0.08,0.088,0.096,0.2,0.5];
for i = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
    temp = ISI_quan;
    frequency(i) = length(temp(ISI_quan==symbol(i)));
end
[dict,l_avg]= huffmandict(symbol,hv);
data_rate = 96*l_avg*(1/Tr);
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'DeltaProb.eps'],'epsc');
saveas(figure(2),[filename 'NormalProb.eps'],'epsc');
%% Create Dictionary
symbol_ori = unique(round(ISI*10000)/10000);
symbol_d = unique(round(ISI_d*10000)/10000);
symbol_d = symbol_d(31:end);
symbol_ori = symbol_ori(11:end);
[~,l_avg1] = huffmandict(symbol_ori,hv1);
[~,l_avg2]= huffmandict(symbol_d,hv2);


%% Huffman encoding
load('spksTest.mat')
[FR_pisi,ISI,spksNew] = RTISI(spksTime,t',Tr,32,0.03125);
ISI_i = round(ISI*1000);
[~,ISI_quanTest] = nonlinear_quanNor(ISI_i);
ISI_enc = cell(size(ISI_quanTest));
M = 1;
for i = 1: M
    for j = 1:96
        ISI_enc{j,i} = huffmanenco(ISI_quanTest(j,i),dict);
    end
end

%% Huffman decoding
for i = 1: M
    for j = 1:96
        ISI_dec(j,i) = huffmandeco(ISI_enc{j,i},dict); 
    end
end
isequal(ISI_dec,ISI_quanTest(:,1:M))