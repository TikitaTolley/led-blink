# Agent Guidelines

## Project Type
Arduino/ESP32 embedded project using C++ for sound-reactive LED matrix control.

## Build/Upload Commands
- **Compile & Upload**: Use Arduino IDE or PlatformIO to compile and upload to ESP32
- **Serial Monitor**: 115200 baud rate for debugging output

## Hardware Context
- ESP32-DevKitC microcontroller (3.3V logic)
- WS2812B 8x8 LED matrix (64 LEDs, 5V power)
- Sound sensor (KY-037/LM393) on GPIO2 (digital) or GPIO34 (analog)
- LED data pin: GPIO4

## Code Style
- **Language**: C++ (Arduino framework)
- **Includes**: FastLED library required for LED control
- **Naming**: snake_case for functions/variables, UPPER_CASE for #define constants
- **Comments**: Use C++ style `//` for inline comments
- **Pin Definitions**: Always use #define for pin mappings at top of file
- **Serial Output**: 115200 baud, use Serial.println() for debugging
- **LED Control**: Use FastLED.show() to update LEDs, fill_solid() for uniform colors
- **Timing**: Use delay() for simple timing, avoid blocking operations in production

## Current Implementation
- Digital sound detection (HIGH/LOW) triggers all LEDs blue/off
- TODO: Implement analog sound reading for variable brightness/patterns
