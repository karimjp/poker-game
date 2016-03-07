################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Card.cpp \
../src/HeadsUpDrive.cpp \
../src/PokerHand.cpp \
../src/Rank.cpp \
../src/main.cpp 

OBJS += \
./src/Card.o \
./src/HeadsUpDrive.o \
./src/PokerHand.o \
./src/Rank.o \
./src/main.o 

CPP_DEPS += \
./src/Card.d \
./src/HeadsUpDrive.d \
./src/PokerHand.d \
./src/Rank.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


