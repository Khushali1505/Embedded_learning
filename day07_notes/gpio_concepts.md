# Day 07 – GPIO using HAL (STM32)

## Overview
This exercise focuses on understanding and implementing GPIO control on STM32 using HAL, with emphasis on how high-level HAL functions map to low-level hardware registers.

## What I Learned
- Concept of GPIO as a physical pin controlled by register bits
- Difference between input and output modes
- Role of pull-up / pull-down resistors
- Push-pull vs open-drain output types
- Importance of output speed selection
- How STM32 HAL configures GPIO registers internally

## Implementation
- Configured an LED pin as output using STM32CubeMX
- Generated initialization code using HAL
- Controlled LED state using `HAL_GPIO_WritePin()`
- Implemented LED blinking with configurable delay

## Key Insight
Initialization configures the hardware once, while runtime HAL GPIO write functions directly control the physical pin.

## GPIO Concept
GPIO (General Purpose Input Output) pins allow a microcontroller to interact with external hardware by reading or driving voltage levels.

## Mental Model
GPIO pin = physical wire controlled by a register bit.

## Important Points
- MODER selects input/output mode
- ODR drives output voltage
- IDR reads actual pin voltage
- PUPDR prevents floating inputs
- Output speed affects signal integrity and EMI
