// Example 1: Set bit 3
reg = reg | (1 << 3);

// Example 2: Clear bit 5
reg = reg & ~(1 << 5);

// Example 3: Check if bit 7 is set
if (reg & (1 << 7))
{
    // bit 7 is ON
}
