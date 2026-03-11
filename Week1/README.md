Project Overview 
Transitioning from visual blocks to low-level C syntax to master memory management, data types, and control flow. This module focused on converting abstract logic into high-performance, compiled code.

Grade: 100%
Language: C

Environment: Linux (Ubuntu via VS Code)


Key Engineering Features

Greedy Algorithm Implementation (Cash): Developed a solution for the "Change-Making Problem" using a greedy approach. The algorithm prioritizes the largest coin denominations first to minimize the total count, ensuring O(1) efficiency for standard currency sets.

2D Coordinate Mapping (Mario): Engineered a double-pyramid structure using nested for loops. This required precise manipulation of spatial variables to calculate the relationship between row height (h) and the leading spaces (s = h - i - 1) vs. hashes (hashes = i + 1). 

Input Validation & Robustness: Implemented do-while loops to enforce strict user constraints, ensuring the program handles "edge case" inputs (like negative numbers or zero) without crashing.


Technical Hurdles & Solutions

Integer Overflow: Encountered limitations with the int data type when handling large credit card numbers. Solved by implementing long to ensure 64-bit precision.

Floating-Point Imprecision: Identified issues when using float for currency calculations (0.01 + 0.01 + 0.01 / 0.03). Resolved by converting all currency to integers (cents) before processing to maintain mathematical integrity. 

Abstraction via Functions: Refactored code to move complex logic out of main, improving readability and modularity — a core principle of clean software architecture.

Final Reflection

Week 1 bridged the gap between "thinking" and "executing." By building Mario and Cash, I moved from dragging blocks to managing CPU cycles and memory types. This week solidified my understanding of how low-level languages interact with hardware, a critical skill for my upcoming MSc in Computer Science.
