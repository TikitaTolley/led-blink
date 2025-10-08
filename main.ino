#include <FastLED.h>

// Pin definitions
#define SOUND_PIN 2
#define LED_PIN 4
#define NUM_LEDS 64        // 8x8 = 64 LEDs
#define LED_TYPE WS2812B   // Most common addressable LED type

// LED array
CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);

  // Initialize LEDs
  FastLED.addLeds<LED_TYPE, LED_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(50);  // Start with lower brightness (0-255)

  // Set up sound sensor pin
  pinMode(SOUND_PIN, INPUT);

  Serial.println("Sound-reactive LED matrix ready!");
}

void loop() {
  // Read sound sensor
  bool soundDetected = digitalRead(SOUND_PIN);

  if (soundDetected) {
    // Light up all LEDs when sound detected
    fill_solid(leds, NUM_LEDS, CRGB::Blue);
    Serial.println("Sound detected!");
  } else {
    // Turn off all LEDs when no sound
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }

  FastLED.show();  // Actually display the changes
  delay(50);       // Small delay for stability
}
