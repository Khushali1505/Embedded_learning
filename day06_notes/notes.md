# Day 06 — Functions, Stack, and Parameter Passing

## Why Functions Exist
Functions help in code reuse, modularity, and readability.
In embedded systems, functions must be kept small because
each function call consumes stack memory.

Deep function nesting increases the risk of stack overflow.

## Function Call Flow (Stack View)
When a function is called:
1. Return address is pushed onto the stack
2. Space is allocated for local variables
3. Function executes
4. Stack is cleaned on return
5. Execution resumes at the return address

Each function call creates a stack frame.

## Stack Diagram (Conceptual)

Initial state:
| main local variables |

After calling func():
| func local variables |
| return address       |
| main local variables |

After func() returns:
| main local variables |

## Parameter Passing

### Pass by Value
- A copy of the variable is passed
- Uses more stack memory
- Changes do not affect the original variable

### Pass by Pointer
- Only the address is passed
- Uses less stack (4 bytes on 32-bit MCU)
- Allows modifying the original variable

## Embedded Takeaway
Passing pointers is preferred in embedded systems to
reduce stack usage, improve performance, and safely
handle large data structures.
