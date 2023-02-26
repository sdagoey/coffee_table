################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../sk9882/sk9822.c 

OBJS += \
./sk9882/sk9822.o 

C_DEPS += \
./sk9882/sk9822.d 


# Each subdirectory must supply rules for building sources it contributes
sk9882/sk9822.o: ../sk9882/sk9822.c sk9882/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -I"D:/workspace/Coffee_table/sk9882" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-sk9882

clean-sk9882:
	-$(RM) ./sk9882/sk9822.d ./sk9882/sk9822.o

.PHONY: clean-sk9882

