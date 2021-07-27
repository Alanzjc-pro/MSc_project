################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/e2/Documents/Vivado_hls/Compiled_Code/ISI_MUL_FIX_v4.cpp 

OBJS += \
./source/ISI_MUL_FIX_v4.o 

CPP_DEPS += \
./source/ISI_MUL_FIX_v4.d 


# Each subdirectory must supply rules for building sources it contributes
source/ISI_MUL_FIX_v4.o: /home/e2/Documents/Vivado_hls/Compiled_Code/ISI_MUL_FIX_v4.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -I/tools/Xilinx/Vivado/2019.1/include/etc -I/tools/Xilinx/Vivado/2019.1/include/ap_sysc -I/tools/Xilinx/Vivado/2019.1/lnx64/tools/auto_cc/include -I/tools/Xilinx/Vivado/2019.1/include -I/tools/Xilinx/Vivado/2019.1/lnx64/tools/systemc/include -I/home/e2/Documents/Vivado_hls -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


