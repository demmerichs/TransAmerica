################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../userinterface/source/mainwindow.cpp \
../userinterface/source/spielbrett.cpp \
../userinterface/source/window.cpp 

OBJS += \
./userinterface/source/mainwindow.o \
./userinterface/source/spielbrett.o \
./userinterface/source/window.o 

CPP_DEPS += \
./userinterface/source/mainwindow.d \
./userinterface/source/spielbrett.d \
./userinterface/source/window.d 


# Each subdirectory must supply rules for building sources it contributes
userinterface/source/%.o: ../userinterface/source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/Library/Frameworks/QtGui.framework/Versions/4/Headers -I/Library/Frameworks/QtCore.framework/Versions/4/Headers -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


