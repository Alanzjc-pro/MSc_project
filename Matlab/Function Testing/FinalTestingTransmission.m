close all; clear;
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Datasets');
addpath('/Users/alan/Documents/Master_Individual_Project/Code/Matlab /Function');
load('spksTrain.mat');

%% Window Size (Synchronous vs Asynchronous)
w = 0.025:0.025:0.5; % Window size
rate_syn = zeros(length(w),1);
entropy_syn = zeros(length(w),1);
l_avg_syn = zeros(length(w),1);
rate_asyn = zeros(length(w),1);
entropy_asyn = zeros(length(w),1);
l_avg_asyn = zeros(length(w),1);
rate_bin = zeros(length(w),1);
entropy_bin = zeros(length(w),1);
l_avg_bin = zeros(length(w),1);
prob_act = zeros(length(w),1);

for k = 1:length(w)
    
    % Estimate ISIs
    [~,ISI,spksNew] = RTISI(spksTime,t',w(k),16,0.0625);
    ISI_nor = normalisation(ISI); % Actual outputs we get from hardware FPGA
    [M,N] = size(spksNew);
        
    % Synchronous Compression
    syn_symbol = 1:15;
    prob_syn = zeros(length(syn_symbol),1);
    occur_syn = zeros(M,1);
    % Find the probability of symbols in synchronous transmission
    for i = 1:length(syn_symbol)
        prob_syn(i) =  length(ISI_nor(ISI_nor == syn_symbol(i)))/(N*M);
    end
    % Create Synchronous Dictionary and Peformance
    [dict_syn,l_avg_syn(k)]= huffmandict(syn_symbol,prob_syn);
    prob_syn = prob_syn(prob_syn>0);
    entropy_syn(k) = - sum(prob_syn.*log2(prob_syn));
    rate_syn(k) = M*l_avg_syn(k)*(1/w(k));
    
    % Asynchronous Compression
    % Find channel IDs have spike events in a fixed window 
    chan_id = zeros(size(spksNew)); % zero for no spike event
    for i = 1: M
        for j = 1:N
            if ~isempty(spksNew{i,j})
                chan_id(i,j) = i;
            end
        end
    end
    % Probability on channel i has spike events
    prob_event  = zeros(M,1);
    for i = 1:M
        prob_event(i) = sum(chan_id(i,:)==i)/N;
    end
    prob_act(k) = mean(prob_event); 
    % Concatenate all windows in a row vector for dictionary training
    async_d = [];
    stop = M+1; % Total channel + 1 -> Special Value
    for i = 1:N
        temp = [];
        for j = 1:M
            
            if ~isempty(spksNew{j,i})
                temp = [temp chan_id(j,i) ISI_nor(j,i) stop];
            end
        end
        async_d = [async_d temp];
    end
    % Find the probability of each symbol
    occur_asyn = zeros(M+1,1);
    prob_asyn = zeros(M+1,1);
    for i = 1:M+1
        occur_asyn(i) = sum(async_d == i);
        prob_asyn(i) =  occur_asyn(i)/length(async_d);
    end
    % Create Dictionary and Peformance
    entropy_asyn(k) = sum(-log2(prob_asyn).* prob_asyn);
    [~,l_avg_asyn(k)] = huffmandict(1:M+1,prob_asyn);
    rate_asyn(k) = M*prob_act(k)*l_avg_asyn(k)*(1/w(k));
end

%% Plot
fig = figure(1);
fig.Position = [250 250 1000 600]; 

subplot(2,2,1);
plot(w,l_avg_syn,'Marker','+','LineWidth',2);
hold on 
plot(w,l_avg_asyn,'Marker','*','LineWidth',2);
grid on
grid minor
title('(a)','FontSize',15)
xlabel('w (s)','FontSize',13)
ylabel('l_{avg}','FontSize',13)
legend('Synchronous','Asynchrounous','Location','east')


subplot(2,2,2);
plot(w,entropy_syn,'Marker','+','LineWidth',2);
hold on 
plot(w,entropy_asyn,'Marker','*','LineWidth',2);
grid on
grid minor
legend('Synchronous','Asynchrounous','Location','south')
title('(b)','FontSize',15)
xlabel('w (s)','FontSize',13)
ylabel('H','FontSize',13)

subplot(2,2,3);
plot(w,prob_act,'k','Marker','+','LineWidth',2);
grid on
grid minor
title('(c)','FontSize',15)
xlabel('w (s)','FontSize',13);
ylabel('Probability','FontSize',13)

subplot(2,2,4);
plot(w,rate_syn,'Marker','+','LineWidth',2);
hold on 
plot(w,rate_asyn,'Marker','*','LineWidth',2);
grid on
grid minor
legend('Synchronous','Asynchrounous')
title('(d)','FontSize',15)
xlabel('w (s)','FontSize',13);
ylabel('Rate (bps)','FontSize',13)

filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'OrganWindow.eps'],'epsc');
