## STM32 GPIO Registers (Conceptual)

- MODER: Selects pin mode (input/output/alternate/analog)
- OTYPER: Selects push-pull or open-drain output
- OSPEEDR: Controls output switching speed
- PUPDR: Enables internal pull-up or pull-down resistors
- IDR: Reads current logic level on the pin
- ODR: Sets output logic level

These registers directly control internal transistors connected to the GPIO pin.
