# Day 09 - Button Input with Software Debouncing

## Objective
Implement stable button input handling using software debouncing to prevent false triggering caused by mechanical switch bounce.

---

## Hardware Configuration

- Button connected to GPIOA PIN 0
- Internal pull-up enabled
- LED connected to GPIOA PIN 5
- Button logic is active-low (pressed = LOW)

---

## Problem Without Debounce

Mechanical switches do not transition cleanly.  
When pressed, they produce multiple rapid HIGH–LOW transitions within a few milliseconds.

Observed behavior without debounce:
- LED toggled multiple times per press
- Unstable and unpredictable response
- False triggering

---

## Implemented Solution

Software debounce using delay-based confirmation:

1. Detect button press (LOW state)
2. Wait 20 ms for signal stabilization
3. Read again to confirm valid press
4. Toggle LED
5. Wait until button release

This ensures only one action per physical press.

---

## Before vs After Debounce

| Without Debounce | With Debounce |
|------------------|--------------|
| Multiple toggles | Single stable toggle |
| Glitchy behavior | Predictable response |
| False triggering | Reliable operation |

---

## Key Learning Points

- Mechanical switches produce bounce
- MCU reads electrical transitions, not human intention
- Debouncing stabilizes input behavior
- Pull-up configuration prevents floating state
- Delay-based debounce is simple but blocks CPU

---

## Conclusion

Implemented button input handling with software debouncing to avoid false triggering.

This exercise improved understanding of:
- GPIO input configuration
- Internal pull-up usage
- Signal stabilization techniques
- Practical hardware reliability considerations
