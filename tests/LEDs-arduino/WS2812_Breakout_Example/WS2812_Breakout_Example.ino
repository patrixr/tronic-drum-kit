/* SparkFun WS2812 Breakout Board Example
  SparkFun Electronics
  date: July 25, 2013
  license: GNU GENERAL PUBLIC LICENSE

  Requires the Adafruit NeoPixel library. It's awesome, go get it.
  https://github.com/adafruit/Adafruit_NeoPixel

  This simple example code runs three sets of animations on a group of WS2812
  breakout boards. The more boards you link up, the better these animations
  will look.

  For help linking WS2812 breakouts, checkout our hookup guide:
  https://learn.sparkfun.com/tutorials/ws2812-breakout-hookup-guide

  Before uploading the code, make sure you adjust the two defines at the
  top of this sketch: PIN and LED_COUNT. Pin should be the Arduino pin
  you've got connected to the first pixel's DIN pin. By default it's
  set to Arduino pin 4. LED_COUNT should be the number of breakout boards
  you have linked up.
*/
#include <Adafruit_NeoPixel.h>
#include "WS2812_Definitions.h"

#define PIN 4
#define LED_COUNT 60

// Create an instance of the Adafruit_NeoPixel class called "leds".
// That'll be what we refer to from here on...
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);


int incomingByte = 0;   // for incoming serial data

int state = 3;


void setup()
{
  Serial.begin(9600);
  leds.begin();  // Call this to start up the LED strip.
  clearLEDs();   // This function, defined below, turns all LEDs off...
  leds.show();   // ...but the LEDs don't actually update until you call this.
}

void loop()
{
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
        
      switch (incomingByte) {

        case 48://6 loop
          state = 0;
          break;
        
        case 49://1 play
          state = 1;
          break;
    
        case 50://2  quit
          state = 2;
          break;
    
        case 51://3 loop
          state = 3;
          break;
          
        case 52://4 loop
          state = 4;
          break;         
         
        case 53://5 loop
          state = 5;
          break;
          
        case 54://6 loop
          state = 6;
          break;

        case 55://7 loop
          state = 7;
          break;
          
        case 56://8 loop
          state = 8;
          break;         
         
        case 57://9 loop
          state = 9;
          break;
         
        default: 
          break;
      }
  }

  switch (state) {
    
    case 0:
      clearLEDs();
      leds.show();
      break;

    case 1:
      for (int i = 0; i < LED_COUNT * 1; i++)
      {
        rainbow(i);
        delay(2);  // Delay between rainbow slides
      }
      break;

    case 2:
      cylon(MEDIUMSPRINGGREEN, 1);  // Indigo cylon eye!
      break;
      
    case 3:
       cascade(MEDIUMSPRINGGREEN, TOP_DOWN, 1);
       break;
      
    case 4:
       cascade(INDIGO, TOP_DOWN, 1);    
      break;    
    
    case 5:
      cascade(LIME, TOP_DOWN, 1);
      break;
      
    case 6:
      cascade(TEAL, TOP_DOWN, 1);
      break;
      
    case 7:
      cascade(CORAL, TOP_DOWN, 1);
      break;
      
    case 8:
      cascade(AQUA, TOP_DOWN, 1);
      break;
      
    case 9:
      cascade(STEELBLUE, TOP_DOWN, 1);
      break;      
      
    default: 
      break;
      
    
  }
  
        // Ride the Rainbow Road
//      for (int i = 0; i < LED_COUNT * 10; i++)
//      {
//        rainbow(i);
//        delay(100);  // Delay between rainbow slides
//      }


}

void serialMsgRecieved(int _msg)
{
    int message = _msg;
    Serial.println("Recieved serial message:  "+message);
  //  cylon(MEDIUMSPRINGGREEN, 1);
  

}

// Implements a little larson "cylon" sanner.
// This'll run one full cycle, down one way and back the other
void cylon(unsigned long color, byte wait)
{
  // weight determines how much lighter the outer "eye" colors are
  const byte weight = 4;
  // It'll be easier to decrement each of these colors individually
  // so we'll split them out of the 24-bit color value
  byte red = (color & 0xFF0000) >> 16;
  byte green = (color & 0x00FF00) >> 8;
  byte blue = (color & 0x0000FF);

  // Start at closest LED, and move to the outside
  for (int i = 0; i <= LED_COUNT - 1; i++)
  {
    clearLEDs();
    leds.setPixelColor(i, red, green, blue);  // Set the bright middle eye
    // Now set two eyes to each side to get progressively dimmer
    for (int j = 1; j < 3; j++)
    {
      if (i - j >= 0)
        leds.setPixelColor(i - j, red / (weight * j), green / (weight * j), blue / (weight * j));
      if (i - j <= LED_COUNT)
        leds.setPixelColor(i + j, red / (weight * j), green / (weight * j), blue / (weight * j));
    }
    leds.show();  // Turn the LEDs on
    delay(wait);  // Delay for visibility
  }

  // Now we go back to where we came. Do the same thing.
  for (int i = LED_COUNT - 2; i >= 1; i--)
  {
    clearLEDs();
    leds.setPixelColor(i, red, green, blue);
    for (int j = 1; j < 3; j++)
    {
      if (i - j >= 0)
        leds.setPixelColor(i - j, red / (weight * j), green / (weight * j), blue / (weight * j));
      if (i - j <= LED_COUNT)
        leds.setPixelColor(i + j, red / (weight * j), green / (weight * j), blue / (weight * j));
    }

    leds.show();
    delay(wait);
  }
}

// Cascades a single direction. One time.
void cascade(unsigned long color, byte direction, byte wait)
{
  if (direction == TOP_DOWN)
  {
    for (int i = 0; i < LED_COUNT; i++)
    {
      clearLEDs();  // Turn off all LEDs
      leds.setPixelColor(i, color);  // Set just this one
      leds.show();
      delay(wait);
    }
  }
  else
  {
    for (int i = LED_COUNT - 1; i >= 0; i--)
    {
      clearLEDs();
      leds.setPixelColor(i, color);
      leds.show();
      delay(wait);
    }
  }
}

// Sets all LEDs to off, but DOES NOT update the display;
// call leds.show() to actually turn them off after this.
void clearLEDs()
{
  for (int i = 0; i < LED_COUNT; i++)
  {
    leds.setPixelColor(i, 0);
  }
}

// Prints a rainbow on the ENTIRE LED strip.
//  The rainbow begins at a specified position.
// ROY G BIV!
void rainbow(byte startPosition)
{
  // Need to scale our rainbow. We want a variety of colors, even if there
  // are just 10 or so pixels.
  int rainbowScale = 192 / LED_COUNT;

  // Next we setup each pixel with the right color
  for (int i = 0; i < LED_COUNT; i++)
  {
    // There are 192 total colors we can get out of the rainbowOrder function.
    // It'll return a color between red->orange->green->...->violet for 0-191.
    leds.setPixelColor(i, rainbowOrder((rainbowScale * (i + startPosition)) % 192));
  }
  // Finally, actually turn the LEDs on:
  leds.show();
}

// Input a value 0 to 191 to get a color value.
// The colors are a transition red->yellow->green->aqua->blue->fuchsia->red...
//  Adapted from Wheel function in the Adafruit_NeoPixel library example sketch
uint32_t rainbowOrder(byte position)
{
  // 6 total zones of color change:
  if (position < 31)  // Red -> Yellow (Red = FF, blue = 0, green goes 00-FF)
  {
    return leds.Color(0xFF, position * 8, 0);
  }
  else if (position < 63)  // Yellow -> Green (Green = FF, blue = 0, red goes FF->00)
  {
    position -= 31;
    return leds.Color(0xFF - position * 8, 0xFF, 0);
  }
  else if (position < 95)  // Green->Aqua (Green = FF, red = 0, blue goes 00->FF)
  {
    position -= 63;
    return leds.Color(0, 0xFF, position * 8);
  }
  else if (position < 127)  // Aqua->Blue (Blue = FF, red = 0, green goes FF->00)
  {
    position -= 95;
    return leds.Color(0, 0xFF - position * 8, 0xFF);
  }
  else if (position < 159)  // Blue->Fuchsia (Blue = FF, green = 0, red goes 00->FF)
  {
    position -= 127;
    return leds.Color(position * 8, 0, 0xFF);
  }
  else  //160 <position< 191   Fuchsia->Red (Red = FF, green = 0, blue goes FF->00)
  {
    position -= 159;
    return leds.Color(0xFF, 0x00, 0xFF - position * 8);
  }
}
