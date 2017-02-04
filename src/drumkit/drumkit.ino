#include <Adafruit_NeoPixel.h>

#define SOUND_PIN 2 // Use Pin 10 as our Input
#define LED_PIN 13
#define LED_COUNT 60
#define STRIP_COUNT 1

Adafruit_NeoPixel strips[STRIP_COUNT] = {
  Adafruit_NeoPixel(LED_COUNT, 13, NEO_GRB + NEO_KHZ800)
};

boolean lights[LED_COUNT];

int soundValue    = HIGH;
boolean bSound    = false;
int soundTime     = 10; // Number of milli seconds to keep the sound alarm high
unsigned long lastSoundTime;
boolean animate   = false;

void setup () {
  Serial.begin(9600); 
  pinMode (SOUND_PIN, INPUT) ;
  for (int i = 0; i < STRIP_COUNT; i++)
  {
    strips[i].begin();
    strips[i].show();
  }
}

void loop ()
{
  soundValue = digitalRead (SOUND_PIN) ;
  if (soundValue == LOW)
  {
    lastSoundTime = millis(); // record the time of the sound alarm
    if (!bSound){
      pulse(); // Someone just hit the drum
      animate = false;
      bSound = true;
      return;
    }
  }
  else if( (millis()-lastSoundTime) > soundTime && bSound){
    Serial.println("quiet");
    //cylon(MEDIUMSPRINGGREEN, 1);
    animate = true;
    bSound = false;
  }

  tick();
}

/**
 * 
 * Continues the animation
 */
void tick()
{
  if (!animate) {
    return;
  }

  int r = 255;
  int g = 0;
  int b = 255;
  
  for (int i = 0; i < STRIP_COUNT; i++)
  { 
    for (int j = LED_COUNT -1; j > 0; j--)
    {
      if (lights[j - 1] == true) {
        lights[j] = true;
        lights[j - 1] = false;
      }
      if (lights[j]) {
        strips[i].setPixelColor(j, r, g, b);
      } else {
        strips[i].setPixelColor(j, 0, 0, 0); 
      }
    }
    strips[i].show();
  }
}

/**
 * 
 * Makes all the lights blink at the same time
 */
void pulse()
{
  for (int i = 0; i < STRIP_COUNT; i++)
  {
    for (int j = 0; j < LED_COUNT; j++)
    {
      strips[i].setPixelColor(j, 0, 0, 255);
    }
    strips[i].show();
  }

  lights[0] = true;
  lights[1] = true;
  lights[2] = true;
  lights[3] = true;
  lights[4] = true;
}
