# Day 03 — Memory and Pointers (Conceptual)

## Memory Understanding
RAM is the working memory of the microcontroller where variables are stored during program execution. 
Each location in RAM has a unique address, and variables are just names given to these memory locations.

Flash memory stores the program code and initial values of variables. 
On power ON or reset, the program starts again and RAM is prepared by startup code.

## Variable Storage
- Global and static variables live in RAM for the entire program lifetime.
- Local variables live on the stack and exist only while the function runs.

## Pointer Understanding
A pointer is a variable that stores the address of another variable.
Using pointers, the microcontroller can access memory locations directly, which is required to control hardware.

Pointers are essential in embedded systems because hardware registers are accessed using memory addresses.
