#include "stm32f4xx.h"

void delay(volatile uint32_t time)
{
    while(time--);
}

int main(void)
{
    RCC->AHB1ENR |= (1 << 0);

    GPIOA->MODER &= ~(3 << (2 * 5));
    GPIOA->MODER |=  (1 << (2 * 5));

    GPIOA->OTYPER &= ~(1 << 5);

    GPIOA->OSPEEDR &= ~(3 << (2 * 5));

    GPIOA->PUPDR &= ~(3 << (2 * 5));

    while(1)
    {
        GPIOA->ODR ^= (1 << 5);
        delay(500000);
    }
}

## Code Syntax Explanation

The program directly accesses STM32 memory-mapped registers to control a GPIO pin.

- `#include "stm32f4xx.h"`
  Includes device-specific register definitions, allowing direct access to RCC and GPIO registers.

- `RCC->AHB1ENR |= (1 << 0);`
  Enables the clock for GPIOA by setting the corresponding bit in the RCC AHB1 peripheral enable register.  
  Without this, GPIO registers remain inactive.

- `GPIOA->MODER`
  Controls the mode of each GPIO pin.  
  For pin PA5, two bits are used.  
  Clearing both bits first and then setting one bit configures PA5 as output.

- `GPIOA->OTYPER &= ~(1 << 5);`
  Configures PA5 as push-pull output by clearing its output type bit.

- `GPIOA->OSPEEDR`
  Sets the output speed of PA5.  
  Low speed is selected since LED control does not require fast switching.

- `GPIOA->PUPDR`
  Disables internal pull-up and pull-down resistors for PA5.

- `GPIOA->ODR ^= (1 << 5);`
  Toggles the output data register bit corresponding to PA5.  
  This directly changes the voltage level on the pin, turning the LED ON or OFF.

- `delay()` function
  A simple busy-wait loop used to create a visible delay between LED toggles.
