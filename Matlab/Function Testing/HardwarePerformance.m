clear all; clear;

%% Latency
X = categorical({'UnOptimised','Unroll by 2','Unroll by 4','Unroll by 8','Unroll by 12'});
X = reordercats(X,{'UnOptimised','Unroll by 2','Unroll by 4','Unroll by 8','Unroll by 12'});
Laten_PISI = [400,106,58,34,26];
BRAM_PISI = [6,12,24,52,48];
FF_PISI = [436,864,1575,2939,4190];
LUT_PISI = [664,1830,2709,3969,5775];

Laten_bin = [600,222,81,45,35];
BRAM_bin = [7,16,28,56,84];
FF_bin = [429,707,1287,2440,3712];
LUT_bin = [699,1576,2053, 3807,8659];

fig = figure(1);
fig.Position = [250 250 1000 600];
subplot(2,2,1);
plot(X,BRAM_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,BRAM_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
ylabel('Number of BRAM','FontSize',11);
title('(a)','FontSize',13);

subplot(2,2,2);
plot(X,FF_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,FF_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
ylabel('Number of FF','FontSize',11);
title('(b)','FontSize',13);

subplot(2,2,3);
plot(X,LUT_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,LUT_bin,'Marker','o','Linewidth',2);
ylabel('Number of LUTs','FontSize',11);
grid on 
grid minor
legend('PISI','Binning','Location','southoutside','NumColumns',2);
title('(c)','FontSize',13);

subplot(2,2,4);
plot(X,Laten_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,Laten_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
legend('PISI','Binning','Location','southoutside','NumColumns',2);
ylabel('Latency','FontSize',11);
title('(d)','FontSize',13);

filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig,[filename 'ResourcePerfo.eps'],'epsc');

%% Power
X = categorical({'UnOptimised','Unroll by 2','Unroll by 4','Unroll by 8','Unroll by 12'});
X = reordercats(X,{'UnOptimised','Unroll by 2','Unroll by 4','Unroll by 8','Unroll by 12'});
Power_PISI = [21,31,61,113,119];
BRAM_PISI = [3,6,12,26,24];
FF_PISI = [359,655,1133,2531,3288];
LUT_PISI = [379,794,1318,2845,3304];

Power_bin = [23,40,67,119,182];
BRAM_bin = [3.5,8,14,28,42];
FF_bin = [335,461,859,1945,2328];
LUT_bin = [352,758,1198, 1570,3307];

fig2 = figure(2);
fig2.Position = [250 250 1000 600];
subplot(2,2,1);
plot(X,BRAM_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,BRAM_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
ylabel('Number of BRAM','FontSize',11);
title('(a)','FontSize',13);

subplot(2,2,2);
plot(X,FF_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,FF_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
ylabel('Number of FF','FontSize',11);
title('(b)','FontSize',13);

subplot(2,2,3);
plot(X,LUT_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,LUT_bin,'Marker','o','Linewidth',2);
ylabel('Number of LUTs','FontSize',11);
grid on 
grid minor
legend('PISI','Binning','Location','southoutside','NumColumns',2);
title('(c)','FontSize',13);

subplot(2,2,4);
plot(X,Power_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,Power_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
legend('PISI','Binning','Location','southoutside','NumColumns',2);
ylabel('Power (mW)','FontSize',11);
title('(d)','FontSize',13);

filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig2,[filename 'ResourcePower.eps'],'epsc');

%% Power and latency
fig3 = figure(3);
fig3.Position = [250 250 500 280];
subplot(1,2,1);
plot(X,Laten_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,Laten_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
legend('PISI','Binning','Location','southoutside','NumColumns',2);
ylabel('Latency (Number of clock cycles)','FontSize',11);

subplot(1,2,2);
plot(X,Power_PISI,'Marker','*','Linewidth',2);
hold on 
plot(X,Power_bin,'Marker','o','Linewidth',2);
grid on 
grid minor
legend('PISI','Binning','Location','southoutside','NumColumns',2);
ylabel('Power (mW)','FontSize',11);
filename = '/Users/alan/Documents/Master_Individual_Project/Figure/';
saveas(fig3,[filename 'LatencyPower.eps'],'epsc');