################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS_Kernel/croutine.c \
../FreeRTOS_Kernel/list.c \
../FreeRTOS_Kernel/queue.c \
../FreeRTOS_Kernel/tasks.c 

OBJS += \
./FreeRTOS_Kernel/croutine.o \
./FreeRTOS_Kernel/list.o \
./FreeRTOS_Kernel/queue.o \
./FreeRTOS_Kernel/tasks.o 

C_DEPS += \
./FreeRTOS_Kernel/croutine.d \
./FreeRTOS_Kernel/list.d \
./FreeRTOS_Kernel/queue.d \
./FreeRTOS_Kernel/tasks.d 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS_Kernel/%.o: ../FreeRTOS_Kernel/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1 -I../Common_Demo/include -I.. -I../FreeRTOS_Kernel/include -I../FreeRTOS_Kernel/portable/GCC/Posix -O3 -g3 -Wall -c -fmessage-length=0 -pthread -lrt -Wno-pointer-sign -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


