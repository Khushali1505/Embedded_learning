# Day 04 — Bitwise Operations and Registers

## Bitwise Thinking (Embedded View)
Microcontrollers control hardware using individual bits.
Each bit usually represents one hardware feature such as enabling a pin,
starting a timer, or checking a status flag.

Bitwise operators allow safe control of individual bits without affecting others.

## Common Bitwise Operations
- OR (|) is used to set a bit
- AND (&) with NOT (~) is used to clear a bit
- XOR (^) is used to toggle a bit
- AND (&) is used to check a bit

## What is a Register?
A register is a special memory-mapped location that is directly connected
to hardware. Writing to a register changes hardware behavior, and reading
a register gives hardware status.

Registers live at fixed addresses decided by the microcontroller design.

## Core Embedded Idea
Writing to a register using a pointer is equivalent to controlling hardware.
Each bit in a register controls a specific hardware feature.
