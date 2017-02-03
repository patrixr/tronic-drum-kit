
/* 
  Bunches of definitions for the WS2812 Breakout Board example code
  
*/ 

// These are for the cascade function
#define TOP_DOWN 0
#define DOWN_TOP 1

/* A world of colors to set your LED to
  Standard HTML Color Codes sorted by Hex Value
    to see the colors in action, check out:
   http://www.w3schools.com/html/html_colorvalues.asp */
   
#define BLACK      0x000000
#define NAVY      0x000080
#define DARKBLUE    0x00008B
#define MEDIUMBLUE    0x0000CD
#define BLUE      0x0000FF
#define DARKGREEN   0x006400
#define GREEN     0x008000
#define TEAL      0x008080
#define DARKCYAN    0x008B8B
#define DEEPSKYBLUE   0x00BFFF
#define DARKTURQUOISE   0x00CED1
#define MEDIUMSPRINGGREEN 0x00FA9A
#define LIME      0x00FF00
#define SPRINGGREEN   0x00FF7F
#define AQUA      0x00FFFF
#define CYAN      0x00FFFF
#define MIDNIGHTBLUE    0x191970
#define DODGERBLUE    0x1E90FF
#define LIGHTSEAGREEN   0x20B2AA
#define FORESTGREEN   0x228B22
#define SEAGREEN    0x2E8B57
#define DARKSLATEGRAY   0x2F4F4F
#define LIMEGREEN   0x32CD32
#define MEDIUMSEAGREEN    0x3CB371
#define TURQUOISE   0x40E0D0
#define ROYALBLUE   0x4169E1
#define STEELBLUE   0x4682B4
#define DARKSLATEBLUE   0x483D8B
#define MEDIUMTURQUOISE   0x48D1CC
#define INDIGO      0x4B0082
#define DARKOLIVEGREEN    0x556B2F
#define CADETBLUE   0x5F9EA0
#define CORNFLOWERBLUE    0x6495ED
#define MEDIUMAQUAMARINE  0x66CDAA
#define DIMGRAY     0x696969
#define SLATEBLUE   0x6A5ACD
#define OLIVEDRAB   0x6B8E23
#define SLATEGRAY   0x708090
#define LIGHTSLATEGRAY    0x778899
#define MEDIUMSLATEBLUE   0x7B68EE
#define LAWNGREEN   0x7CFC00
#define CHARTREUSE    0x7FFF00
#define AQUAMARINE    0x7FFFD4
#define MAROON      0x800000
#define PURPLE      0x800080
#define OLIVE     0x808000
#define GRAY      0x808080
#define SKYBLUE     0x87CEEB
#define LIGHTSKYBLUE    0x87CEFA
#define BLUEVIOLET    0x8A2BE2
#define DARKRED     0x8B0000
#define DARKMAGENTA   0x8B008B
#define SADDLEBROWN   0x8B4513
#define DARKSEAGREEN    0x8FBC8F
#define LIGHTGREEN    0x90EE90
#define MEDIUMPURPLE    0x9370DB
#define DARKVIOLET    0x9400D3
#define PALEGREEN   0x98FB98
#define DARKORCHID    0x9932CC
#define YELLOWGREEN   0x9ACD32
#define SIENNA      0xA0522D
#define BROWN     0xA52A2A
#define DARKGRAY    0xA9A9A9
#define LIGHTBLUE   0xADD8E6
#define GREENYELLOW   0xADFF2F
#define PALETURQUOISE         0xAFEEEE
#define LIGHTSTEELBLUE    0xB0C4DE
#define POWDERBLUE    0xB0E0E6
#define FIREBRICK   0xB22222
#define DARKGOLDENROD   0xB8860B
#define MEDIUMORCHID    0xBA55D3
#define ROSYBROWN   0xBC8F8F
#define DARKKHAKI   0xBDB76B
#define SILVER      0xC0C0C0
#define MEDIUMVIOLETRED         0xC71585
#define INDIANRED     0xCD5C5C
#define PERU      0xCD853F
#define CHOCOLATE   0xD2691E
#define TAN     0xD2B48C
#define LIGHTGRAY   0xD3D3D3
#define THISTLE     0xD8BFD8
#define ORCHID      0xDA70D6
#define GOLDENROD   0xDAA520
#define PALEVIOLETRED   0xDB7093
#define CRIMSON     0xDC143C
#define GAINSBORO   0xDCDCDC
#define PLUM      0xDDA0DD
#define BURLYWOOD   0xDEB887
#define LIGHTCYAN   0xE0FFFF
#define LAVENDER    0xE6E6FA
#define DARKSALMON    0xE9967A
#define VIOLET      0xEE82EE
#define PALEGOLDENROD   0xEEE8AA
#define LIGHTCORAL    0xF08080
#define KHAKI     0xF0E68C
#define ALICEBLUE   0xF0F8FF
#define HONEYDEW    0xF0FFF0
#define AZURE     0xF0FFFF
#define SANDYBROWN    0xF4A460
#define WHEAT     0xF5DEB3
#define BEIGE     0xF5F5DC
#define WHITESMOKE    0xF5F5F5
#define MINTCREAM   0xF5FFFA
#define GHOSTWHITE    0xF8F8FF
#define SALMON      0xFA8072
#define ANTIQUEWHITE    0xFAEBD7
#define LINEN     0xFAF0E6
#define LIGHTGOLDENRODYELLOW  0xFAFAD2
#define OLDLACE     0xFDF5E6
#define RED     0xFF0000
#define FUCHSIA     0xFF00FF
#define MAGENTA     0xFF00FF
#define DEEPPINK    0xFF1493
#define ORANGERED   0xFF4500
#define TOMATO      0xFF6347
#define HOTPINK     0xFF69B4
#define CORAL     0xFF7F50
#define DARKORANGE    0xFF8C00
#define LIGHTSALMON   0xFFA07A
#define ORANGE      0xFFA500
#define LIGHTPINK   0xFFB6C1
#define PINK      0xFFC0CB
#define GOLD      0xFFD700
#define PEACHPUFF   0xFFDAB9
#define NAVAJOWHITE   0xFFDEAD
#define MOCCASIN    0xFFE4B5
#define BISQUE      0xFFE4C4
#define MISTYROSE   0xFFE4E1
#define BLANCHEDALMOND    0xFFEBCD
#define PAPAYAWHIP    0xFFEFD5
#define LAVENDERBLUSH   0xFFF0F5
#define SEASHELL    0xFFF5EE
#define CORNSILK    0xFFF8DC
#define LEMONCHIFFON    0xFFFACD
#define FLORALWHITE   0xFFFAF0
#define SNOW      0xFFFAFA
#define YELLOW      0xFFFF00
#define LIGHTYELLOW   0xFFFFE0
#define IVORY     0xFFFFF0
#define WHITE     0xFFFFFF

#include <Adafruit_NeoPixel.h>

#define PIN 13
#define LED_COUNT 60

// Create an instance of the Adafruit_NeoPixel class called "leds".
// That'll be what we refer to from here on...
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

/*
* Connect sound sensor to digital pin 2
* We will use the onboard lED to indicate sound detected and output to sr=erial monitor
*/
#define soundPin 2 // Use Pin 10 as our Input

int soundValue = HIGH; // This is where we record our Sound Measurement
boolean bSound = false;
unsigned long lastSoundTime; // Record the time that we measured a sound
int soundTime = 300; // Number of milli seconds to keep the sound alarm high

void setup () {
  Serial.begin(9600); 
  pinMode (soundPin, INPUT) ; // input from the Sound Detection Module
  //pinMode(led, OUTPUT);
  leds.begin();  // Call this to start up the LED strip.
  leds.show();   // turn leds off
}

void loop ()
{
  //clearLEDs();
  //digitalWrite(13, HIGH);
  soundValue = digitalRead (soundPin) ; // read the sound alarm time
  //Serial.println(soundValue);
  if (soundValue == LOW) // If we hear a sound
  {

    lastSoundTime = millis(); // record the time of the sound alarm
    // We don't want to fill up monitor
    if (!bSound){
      Serial.println("##########    #########       #########");
      Serial.println("    #         #       #       #       #");
      Serial.println("    #         #       #       #       #");
      Serial.println("    #         #########       #########");
      Serial.println("    #         #       #       #");
      Serial.println("    #         #       #       #");
      Serial.println("    #         #       #       #");
      Serial.println("\n\n\n");
      //digitalWrite(led, HIGH);
      lightOn(VIOLET);
      bSound = true;
    }
  }
  else
  {
    if( (millis()-lastSoundTime) > soundTime && bSound){
      Serial.println("quiet");
      //cylon(MEDIUMSPRINGGREEN, 1);
      lightOn(BLUE);
      bSound = false;
    }
  }
}

// Sets all LEDs to off, but DOES NOT update the display;
// call leds.show() to actually turn them off after this.
void lightOff()
{
  for (int i = 0; i < LED_COUNT; i++)
  {
    leds.setPixelColor(i, 0, 0, 0);
  }
  Serial.println("CLEARED");
  leds.show();
}


void lightOn(unsigned long color)
{
  byte red = (color & 0xFF0000) >> 16;
  byte green = (color & 0x00FF00) >> 8;
  byte blue = (color & 0x0000FF);
  
  // Start at closest LED, and move to the outside
  for (int i = 0; i <= LED_COUNT; i++)
  {
    leds.setPixelColor(i, 232, 134, 0);
  }
  leds.show();
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
    lightOff();
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
    lightOff();
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
