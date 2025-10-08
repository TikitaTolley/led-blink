This project reads the level of sound from a sound sensor and displays light in a variation of patterns (based on sound level) on an LED matrix

## Hardware Components
| Component       | Example                     | Notes                                       |
| --------------- | --------------------------- | ------------------------------------------- |
| Microcontroller | ESP32-DevKitC               | 3.3 V logic                                 |
| LED Matrix      | WS2812B 8×8                 | 64 RGB LEDs, 5 V power                      |
| Sound Sensor    | KY-037 / LM393 / Analog mic | Outputs analog voltage based on sound level |



| Component        | Pin          | ESP32 Connection | Notes                           |
| ---------------- | ------------ | ---------------- | ------------------------------- |
| **LED Matrix**   | 5V           | 5V               | Power for LEDs                  |
|                  | GND          | GND              | Common ground                   |
|                  | DIN          | GPIO18           | Any PWM-capable pin works       |
| **Sound Sensor** | VCC          | 3V3              | Many sensors can take 3.3 V–5 V |
|                  | GND          | GND              | Common ground                   |
|                  | OUT (Analog) | GPIO34           | ADC input                       |

