#include <FastLED.h>

// Pin definitions
#define SOUND_PIN 34
#define LED_PIN 5
#define NUM_LEDS 64  
#define LED_TYPE WS2812B   


CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);
  
  FastLED.addLeds<LED_TYPE, LED_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(50);  // lower brightness (0-255)
  
  pinMode(SOUND_PIN, INPUT);
  
  Serial.println("Sound-reactive LED matrix ready!");
}

void loop() {
  // blink
  leds[6] = CRGB::Yellow; FastLED.show(); delay(200);
  leds[6] = CRGB::Blue; FastLED.show(); delay(500);

  leds[4] = CRGB::Green; FastLED.show(); delay(500);
  leds[4] = CRGB::Blue; FastLED.show(); delay(600);
  
  // sound
  // bool soundDetected = digitalRead(SOUND_PIN);
  // if (soundDetected) {
  //   fill_solid(leds, NUM_LEDS, CRGB::Blue);
  //   Serial.println("Sound detected!");
  //
  // } else {
  //   fill_solid(leds, NUM_LEDS, CRGB::Black);
  // }
  
  FastLED.show(); 
  delay(50);
}
