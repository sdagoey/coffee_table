################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/SK9822/sk9822.c 

OBJS += \
./Drivers/SK9822/sk9822.o 

C_DEPS += \
./Drivers/SK9822/sk9822.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/SK9822/sk9822.o: ../Drivers/SK9822/sk9822.c Drivers/SK9822/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -I"D:/workspace/Coffee_table/Drivers/SK9822" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-SK9822

clean-Drivers-2f-SK9822:
	-$(RM) ./Drivers/SK9822/sk9822.d ./Drivers/SK9822/sk9822.o

.PHONY: clean-Drivers-2f-SK9822

