Dinosaur Runner | CS50 Week 0

A procedurally generated infinite runner built for Harvard's Introduction to Computer
Science.

Project Overview
This project goes beyond basic "block coding" to implement a custom game engine within
the Scratch environment. It features a physics-based movement system, dynamic difficulty
scaling, and mathematically synced environmental effects.

Grade: 100% (8/8)
Engine: Scratch 3.0
Development Time: ~15 Hours

How to Run

1. Download the Dinosaur
Runner.sb3 file.
2. Press the Green Flag to start.

Controls
Arrow keys to move left and right
Space to Jump

Key Engineering Features

Kinetic Physics Engine: Bypassed default movements for a custom y-velocity
variable system to simulate realistic gravity and parabolic jump arcs.
Global State Management: Implemented a playing flag that acts as a "single point
of failure" to synchronize game-over states across all parallel scripts.
Procedural Difficulty: Obstacle speed and spawn rates scale dynamically,
increasing the challenge as the player's score rises.
Audio-Visual Synchronization: Used the formula $T = \frac{B \times 60}{BPM}$ to
trigger lightning and thunder effects exactly at the 17.45s mark of the background
track.

Technical Hurdles & Solutions

Race Conditions: Solved an "Invisible Dino" bug by implementing a Hard Reset
Initialization at the start of the execution thread.
Boundary Clamping: Engineered a Pre-emptive Reset Threshold at $x = -220$ to
bypass Scratch's stage-edge buffer, ensuring a seamless parallax background loop.
Memory Management: Optimized the project for cloud-saving by auditing assets
and compressing a 40MB audio track down to 4.3MB to fit server constraints.

Final Reflection

This project served as my introduction to Abstraction, Concurrency, and Boolean Logic.
While built in a visual language, the underlying architecture is a direct precursor to the
C-based programming I am pursuing in Week 1 of CS50.
