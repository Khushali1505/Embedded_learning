#include "stm32f4xx.h"

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    while (1)
    {
    }
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if(GPIO_Pin == GPIO_PIN_0)
    {
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    }
}


When the button connected to PA0 generates an interrupt, the callback checks which pin triggered the interrupt and toggles the LED.

This demonstrates event-driven behavior where hardware signals the CPU when an event occurs.

---

## Polling vs Interrupt

| Polling | Interrupt |
|-------|-------|
| MCU repeatedly checks input | Hardware notifies MCU |
| Wastes CPU cycles | Efficient CPU usage |
| Response depends on loop speed | Immediate response |
| Not scalable | Used in real embedded systems |

---

## Key Learning Points

- Understanding of EXTI (External Interrupt) lines
- Role of NVIC (Nested Vectored Interrupt Controller)
- Writing interrupt-driven code using HAL callbacks
- Difference between polling and event-driven design
- Importance of keeping ISR short and fast

---

## Conclusion

Implemented external interrupt on STM32 to handle button press using NVIC and EXTI.

This project demonstrates event-driven embedded system design where the MCU responds to hardware events instead of continuously polling inputs.
