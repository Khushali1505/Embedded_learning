# Day 11 – Timer-Based LED Control

## Objective

Implement LED blinking using an STM32 hardware timer instead of a software delay.

This demonstrates how timers generate precise time events without blocking CPU execution.

---

## Timer Concept

A timer is a hardware counter driven by a clock source.

Clock ticks increment the counter register automatically.

When the counter reaches the **auto-reload value (ARR)**, an **overflow event** occurs.

This event can be used to trigger actions such as toggling an LED.

Basic timer flow:

Clock → Prescaler → Counter → Auto Reload → Update Event

---

## Timer Calculation Example

Example configuration:

Timer Clock = 72 MHz  
Prescaler = 7199  
Auto Reload (ARR) = 9999  

Step 1 – Timer frequency

Timer Frequency = Clock / (Prescaler + 1)

Timer Frequency = 72,000,000 / 7200 = 10,000 Hz

Step 2 – Timer tick period

Timer tick = 1 / 10,000 = 0.0001 s

Timer tick = 0.1 ms

Step 3 – Overflow time

Overflow time = (ARR + 1) × tick

Overflow time = 10,000 × 0.1 ms

Overflow time = 1 second

So the timer generates an event every **1 second**.

---

## Code Explanation

The timer is started using:

HAL_TIM_Base_Start()

Inside the main loop the program checks the timer update flag.

When the overflow occurs:

- Timer update flag becomes set
- Program clears the flag
- LED is toggled

This allows precise LED blinking without using blocking delay functions.

---

## Delay vs Timer

| Delay | Timer |
|------|------|
| CPU blocked | CPU remains free |
| Software timing | Hardware timing |
| Difficult to scale | Supports multitasking |
| Less precise | Highly precise |

---

## Key Learning Points

- Understanding timer counter operation
- Using prescaler to scale clock frequency
- Calculating timer overflow period
- Generating periodic events using hardware timers
- Implementing non-blocking timing control

---

## Conclusion

Implemented STM32 timer-based LED control using hardware timer instead of software delay.

This demonstrates how hardware timers provide precise and scalable timing in embedded systems.
