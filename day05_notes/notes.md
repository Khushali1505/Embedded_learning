# Day 05 — Arrays, Pointers, and Memory Layout

## Arrays (Memory View)
An array is a continuous block of memory storing elements of the same type.
The array name represents the base address (address of the first element).

Indexing is simply address calculation:
Address = base + (index × size_of_type)

Out-of-bounds access leads to undefined behavior and can corrupt memory.

## Array and Pointer Relationship
The array name acts as a pointer to the first element.

arr[i] is equivalent to *(arr + i)

Pointers allow flexible traversal of array memory without copying data.

## Memory Layout in Embedded Systems
Flash:
- Stores program code
- Stores constants

RAM:
- Global and static variables
- Stack (local variables and function calls)
- Heap (generally avoided in embedded systems)

On reset:
- Global/static variables are reinitialized
- Stack is cleared
- Program starts from main()

## Embedded Takeaway
Understanding memory layout is critical because array misuse
or pointer errors can silently corrupt RAM and crash the system.
