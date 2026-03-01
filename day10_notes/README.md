# Day 10 – External Interrupt (Button Handling)

## Objective

Implement an external interrupt on STM32 to detect a button press and toggle an LED using the EXTI interrupt system and NVIC controller.

---

## Hardware Configuration

- Button connected to **PA0**
- Internal **pull-up enabled**
- LED connected to **PA5**
- Interrupt trigger: **Falling Edge**

Button logic:

Not pressed → HIGH  
Pressed → LOW

---

## Interrupt System Overview

Instead of continuously checking the button (polling), the MCU reacts automatically when the hardware event occurs.

Interrupt flow:

Button Press  
↓  
EXTI line triggered  
↓  
NVIC receives interrupt  
↓  
ISR executes  
↓  
HAL_GPIO_EXTI_Callback() runs  
↓  
LED toggles

---

## Code Explanation

The main program loop remains empty because the button is handled using an interrupt.

The interrupt handler is implemented through the HAL callback function:
