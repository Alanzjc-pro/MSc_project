################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/e2/Documents/Vivado_hls/Compiled_Code/ISI_MUL_FIX_v4_test.cpp 

OBJS += \
./testbench/ISI_MUL_FIX_v4_test.o 

CPP_DEPS += \
./testbench/ISI_MUL_FIX_v4_test.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/ISI_MUL_FIX_v4_test.o: /home/e2/Documents/Vivado_hls/Compiled_Code/ISI_MUL_FIX_v4_test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -I/tools/Xilinx/Vivado/2019.1/include/etc -I/tools/Xilinx/Vivado/2019.1/include/ap_sysc -I/tools/Xilinx/Vivado/2019.1/lnx64/tools/auto_cc/include -I/tools/Xilinx/Vivado/2019.1/include -I/tools/Xilinx/Vivado/2019.1/lnx64/tools/systemc/include -I/home/e2/Documents/Vivado_hls -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


