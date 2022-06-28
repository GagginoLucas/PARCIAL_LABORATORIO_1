################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Computer.c \
../src/Controller.c \
../src/LinkedList.c \
../src/Parser.c \
../src/main.c \
../src/utn.c 

C_DEPS += \
./src/Computer.d \
./src/Controller.d \
./src/LinkedList.d \
./src/Parser.d \
./src/main.d \
./src/utn.d 

OBJS += \
./src/Computer.o \
./src/Controller.o \
./src/LinkedList.o \
./src/Parser.o \
./src/main.o \
./src/utn.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Computer.d ./src/Computer.o ./src/Controller.d ./src/Controller.o ./src/LinkedList.d ./src/LinkedList.o ./src/Parser.d ./src/Parser.o ./src/main.d ./src/main.o ./src/utn.d ./src/utn.o

.PHONY: clean-src

