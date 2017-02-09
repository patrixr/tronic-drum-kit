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

#define SOUND_PIN 2
#define LED_PIN 13
#define LED_COUNT 60 * 5
#define STRIP_COUNT 1
#define START_FROM_MIDDLE 1
#define ANIMATION_STRIP_LEN 20

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
    if (!bSound) {
      pulse(GOLD); // Someone just hit the drum
      animate = false;
      bSound = true;
      return;
    }
  }
  else if ( (millis() - lastSoundTime) > soundTime && bSound) {
    Serial.println("quiet");
    //cylon(MEDIUMSPRINGGREEN, 1);
    animate = true;
    bSound = false;
  }

  tick(FUCHSIA);
}

/**

   Continues the animation
*/
void tick(unsigned long color)
{
  if (!animate) {
    return;
  }

  byte r = (color & 0xFF0000) >> 16;
  byte g = (color & 0x00FF00) >> 8;
  byte b = (color & 0x0000FF);

  int middle = LED_COUNT / 2;
  int step = 2;

  //
  // TODO : refactor
  //
  for (int i = 0; i < STRIP_COUNT; i++)
  {
    if (START_FROM_MIDDLE) {
      for (int j = LED_COUNT - 1; j >= middle; j--)
      {
        if (lights[j - step] == true) {
          lights[j] = true;
          lights[j - step] = false;
        }
        if (lights[j]) {
          strips[i].setPixelColor(j, r, g, b);
        } else {
          strips[i].setPixelColor(j, 0, 0, 0);
        }
      }

      for (int j = 0; j < middle; j++)
      {
        if (lights[j + step] == true) {
          lights[j] = true;
          lights[j + step] = false;
        }
        if (lights[j]) {
          strips[i].setPixelColor(j, r, g, b);
        } else {
          strips[i].setPixelColor(j, 0, 0, 0);
        }
      }
    } else {
      for (int j = LED_COUNT - 1; j > 0; j--)
      {
        if (lights[j - step] == true) {
          lights[j] = true;
          lights[j - step] = false;
        }
        if (lights[j]) {
          strips[i].setPixelColor(j, r, g, b);
        } else {
          strips[i].setPixelColor(j, 0, 0, 0);
        }
      }
    }
    strips[i].show();
  }
}

/**

   Makes all the lights blink at the same time
*/
void pulse(unsigned long color)
{
  byte red = (color & 0xFF0000) >> 16;
  byte green = (color & 0x00FF00) >> 8;
  byte blue = (color & 0x0000FF);
  
  for (int i = 0; i < STRIP_COUNT; i++)
  {
    for (int j = 0; j < LED_COUNT; j++)
    {
      strips[i].setPixelColor(j, red, green, blue);
    }
    strips[i].show();
  }

  int start = 0;
  if (START_FROM_MIDDLE) {
    start = LED_COUNT / 2 - ANIMATION_STRIP_LEN / 2;
  }

  for (int i = 0; i < ANIMATION_STRIP_LEN; i++) {
    lights[start + i] = true;
  }
}

