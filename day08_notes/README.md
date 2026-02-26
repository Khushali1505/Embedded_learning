# Day 08 - GPIO Control Using Direct Register Manipulation

## Objective
Implement LED control on STM32 without using HAL, by directly accessing memory-mapped GPIO registers.

## What Was Implemented
- Enabled GPIOA clock using RCC register
- Configured PA5 as output via MODER register
- Set output type using OTYPER
- Cleared pull-up/pull-down using PUPDR
- Toggled LED using ODR register

## Key Register Understanding
- RCC->AHB1ENR enables peripheral clock
- GPIOx->MODER selects input/output mode
- GPIOx->OTYPER defines push-pull or open-drain
- GPIOx->PUPDR configures pull resistors
- GPIOx->ODR controls output voltage

## HAL vs Bare-Metal Comparison

| HAL | Bare-Metal Equivalent |
|------|-----------------------|
| HAL_GPIO_Init() | Direct MODER, OTYPER, OSPEEDR, PUPDR configuration |
| HAL_GPIO_WritePin() | ODR / BSRR bit manipulation |
| HAL_GPIO_TogglePin() | XOR operation on ODR |

HAL abstracts register access.  
Bare-metal directly manipulates memory-mapped registers.

## Conclusion

Implemented GPIO control using direct register manipulation without HAL abstraction.

This exercise reinforced understanding of:
- Peripheral clock control
- Bit-level configuration
- Hardware control through registers
- Relationship between software and physical voltage behavior
