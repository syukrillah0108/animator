#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: face id
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,240,0,0,15,248,0,0,127,240,0,0,15,254,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,127,240,0,0,15,254,0,0,31,240,0,0,15,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,248,0,0,31,252,0,0,127,248,0,0,31,254,0,0,240,0,0,0,0,15,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,128,1,0,0,192,3,0,1,224,7,128,0,192,3,0,0,252,63,0,0,192,3,0,0,127,254,0,0,192,3,0,0,31,248,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,0,240,0,0,0,0,15,0,0,127,248,0,0,31,254,0,0,63,248,0,0,31,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,240,0,0,15,192,0,0,63,252,0,0,63,252,0,0,127,248,0,0,31,254,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,0,0,0,0,0,0,128,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,1,128,3,128,0,128,1,0,1,192,3,128,1,224,7,128,1,192,3,128,0,252,63,0,1,192,3,128,0,127,254,0,1,192,3,128,0,31,248,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,192,0,0,0,0,3,128,1,224,0,0,0,0,7,128,0,240,0,0,0,0,15,0,0,127,248,0,0,31,254,0,0,63,252,0,0,63,252,0,0,3,240,0,0,15,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,252,0,0,63,248,0,0,63,252,0,0,63,252,0,0,120,0,0,0,0,30,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,1,128,1,128,0,128,1,0,1,128,1,128,1,224,7,128,1,128,1,128,0,252,63,0,1,128,1,128,0,127,254,0,1,128,1,128,0,31,248,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,248,0,0,0,0,31,0,0,63,252,0,0,63,252,0,0,31,252,0,0,63,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,3,240,0,0,255,240,0,0,15,255,0,1,255,224,0,0,7,255,128,3,192,0,0,0,0,3,192,7,128,0,0,0,0,1,224,7,0,0,0,0,0,0,224,6,0,0,0,0,0,0,96,6,0,0,0,0,0,0,96,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,4,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,1,0,0,0,6,0,1,224,7,128,0,96,14,0,0,252,63,0,0,112,14,0,0,127,254,0,0,112,14,0,0,31,248,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,6,0,0,0,0,0,0,96,6,0,0,0,0,0,0,96,7,0,0,0,0,0,0,224,7,128,0,0,0,0,1,224,3,192,0,0,0,0,3,192,1,255,224,0,0,7,255,128,0,255,240,0,0,15,255,0,0,15,192,0,0,3,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,126,0,0,0,0,126,0,7,255,128,0,0,1,255,224,15,255,0,0,0,0,255,240,30,0,0,0,0,0,0,120,60,0,0,0,0,0,0,60,56,0,0,0,0,0,0,28,48,0,0,0,0,0,0,12,48,0,0,0,0,0,0,12,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,32,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,1,0,0,0,0,0,1,224,7,128,0,0,0,0,0,252,63,0,0,0,0,0,0,127,254,0,0,0,48,0,0,31,248,0,0,12,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,48,0,0,0,0,0,0,12,48,0,0,0,0,0,0,12,56,0,0,0,0,0,0,28,60,0,0,0,0,0,0,60,30,0,0,0,0,0,0,120,15,255,0,0,0,0,255,240,7,255,128,0,0,1,255,224,0,126,0,0,0,0,126,0,0,0,0,0,0,0,0,0},
  {1,254,0,0,0,0,127,128,15,255,0,0,0,0,255,240,31,254,0,0,0,0,127,248,60,0,0,0,0,0,0,60,120,0,0,0,0,0,0,30,112,0,0,0,0,0,0,14,96,0,0,0,0,0,0,6,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,64,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,1,0,0,0,0,0,1,224,7,128,0,0,0,0,0,252,63,0,0,0,0,0,0,127,254,0,0,0,0,0,0,31,248,0,0,0,96,0,0,0,0,0,0,6,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,224,0,0,0,0,0,0,7,96,0,0,0,0,0,0,6,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,60,0,0,0,0,0,0,60,31,254,0,0,0,0,127,248,15,255,0,0,0,0,255,240,1,254,0,0,0,0,127,128},
  {0,0,0,0,0,0,0,0,3,255,0,0,0,0,255,192,15,255,0,0,0,0,255,240,31,254,0,0,0,0,127,248,60,0,0,0,0,0,0,60,56,0,0,0,0,0,0,28,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,1,0,0,0,0,0,1,224,7,128,0,0,0,0,0,252,63,0,0,0,0,0,0,127,254,0,0,0,32,0,0,31,248,0,0,4,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,112,0,0,0,0,0,0,14,56,0,0,0,0,0,0,28,28,0,0,0,0,0,0,56,31,254,0,0,0,0,127,248,15,255,0,0,0,0,255,240,3,255,0,0,0,0,255,192,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,192,0,0,3,252,0,1,255,192,0,0,3,255,128,3,255,192,0,0,3,255,192,7,128,0,0,0,0,1,224,14,0,0,0,0,0,0,112,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,24,0,0,0,0,0,0,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,56,0,0,0,0,0,0,28,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,14,0,0,0,0,0,0,112,7,128,0,0,0,0,1,224,3,255,192,0,0,3,255,192,1,255,192,0,0,3,255,128,0,63,128,0,0,1,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,252,0,0,63,224,0,0,31,252,0,0,63,248,0,0,63,248,0,0,31,252,0,0,248,0,0,0,0,31,0,1,240,0,0,0,0,7,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,1,224,7,0,0,0,0,0,0,224,6,0,0,0,0,0,0,96,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,6,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,1,192,3,128,0,0,0,0,3,192,1,192,0,0,0,0,7,128,1,224,0,0,0,0,15,0,0,248,0,0,0,0,30,0,0,63,248,0,0,31,252,0,0,31,252,0,0,63,248,0,0,3,252,0,0,63,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,3,240,0,0,0,0,63,224,3,254,0,0,0,0,255,192,3,255,128,0,0,3,240,0,0,15,192,0,0,7,192,0,0,3,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,56,0,0,56,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,240,0,0,0,0,7,0,0,224,0,0,0,0,3,0,1,192,0,0,0,0,3,128,1,128,0,0,0,0,1,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,0,192,3,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,14,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,7,128,0,0,0,0,0,0,3,128,0,0,0,0,0,0,1,192,0,0,0,0,0,0,0,224,0,0,0,64,7,0,0,240,0,0,0,224,7,0,0,112,0,0,0,224,7,0,0,32,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,192,3,0,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,128,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,14,0,0,112,0,0,0,0,30,0,0,56,0,0,0,0,60,0,0,60,0,0,0,0,120,0,0,30,0,0,0,0,240,0,0,15,128,0,0,3,224,0,0,3,224,0,0,15,192,0,0,1,255,192,3,255,0,0,0,0,127,224,7,254,0,0,0,0,15,192,3,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,1,128,0,0,0,0,3,128,3,128,0,0,0,0,1,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,1,192,7,0,0,0,0,0,0,192,7,0,0,0,0,0,0,192,7,0,8,0,6,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,56,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,8,7,0,1,192,0,0,0,28,3,128,1,128,0,0,0,56,3,128,3,128,0,0,0,120,1,128,3,128,0,0,0,112,1,192,3,128,0,0,0,224,1,192,3,0,0,0,1,192,1,192,7,0,0,0,3,128,0,192,7,0,0,0,7,128,0,192,7,0,8,0,7,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,60,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,8,7,0,1,192,0,0,0,28,3,128,1,128,0,0,0,56,3,128,3,128,0,0,0,120,1,128,3,128,0,0,0,112,1,192,3,128,0,0,0,224,1,192,3,0,0,0,1,192,1,192,7,0,0,0,3,128,0,192,7,0,0,0,7,128,0,192,7,0,8,0,7,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,60,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,8,7,0,1,192,0,0,0,28,3,128,1,128,0,0,0,56,3,128,3,128,0,0,0,120,1,128,3,128,0,0,0,112,1,192,3,128,0,0,0,224,1,192,3,0,0,0,1,192,1,192,7,0,0,0,3,128,0,192,7,0,0,0,7,128,0,192,7,0,8,0,7,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,60,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,8,7,0,1,192,0,0,0,28,3,128,1,128,0,0,0,56,3,128,3,128,0,0,0,120,1,128,3,128,0,0,0,112,1,192,3,128,0,0,0,224,1,192,3,0,0,0,1,192,1,192,7,0,0,0,3,128,0,192,7,0,0,0,7,128,0,192,7,0,8,0,7,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,60,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,8,7,0,1,192,0,0,0,28,3,128,1,128,0,0,0,56,3,128,3,128,0,0,0,120,1,128,3,128,0,0,0,112,1,192,3,128,0,0,0,224,1,192,3,0,0,0,1,192,1,192,7,0,0,0,3,128,0,192,7,0,0,0,7,128,0,192,7,0,8,0,7,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,60,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,8,7,0,1,192,0,0,0,28,3,128,1,128,0,0,0,56,3,128,3,128,0,0,0,120,1,128,3,128,0,0,0,112,1,192,3,128,0,0,0,224,1,192,3,0,0,0,1,192,1,192,7,0,0,0,3,128,0,192,7,0,0,0,7,128,0,192,7,0,8,0,7,0,0,192,7,0,28,0,14,0,0,224,7,0,14,0,28,0,0,224,7,0,7,0,60,0,0,224,7,0,7,0,56,0,0,224,7,0,3,128,112,0,0,192,7,0,1,192,224,0,0,192,7,0,0,225,192,0,0,192,3,0,0,243,192,0,1,192,3,128,0,115,128,0,1,192,3,128,0,63,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,30,0,0,3,128,1,192,0,12,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,255,255,0,0,0,0,0,7,255,255,224,0,0,0,0,31,192,3,248,0,0,0,0,126,0,0,124,0,0,0,0,248,0,0,31,0,0,0,1,224,0,0,7,128,0,0,7,128,0,0,3,192,0,0,15,0,0,0,1,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,60,0,0,112,0,0,0,0,28,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,1,192,0,0,0,8,3,128,1,128,0,0,0,24,3,128,3,128,0,0,0,48,1,128,3,128,0,0,0,96,1,192,3,128,0,0,0,64,1,192,3,0,0,0,0,128,1,192,7,0,0,0,1,128,0,192,7,0,0,0,3,0,0,192,7,0,0,0,6,0,0,192,7,0,8,0,4,0,0,224,7,0,4,0,12,0,0,224,7,0,6,0,24,0,0,224,7,0,3,0,48,0,0,224,7,0,1,0,32,0,0,192,7,0,0,128,64,0,0,192,7,0,0,192,192,0,0,192,3,0,0,97,128,0,1,192,3,128,0,35,0,0,1,192,3,128,0,18,0,0,1,192,3,128,0,30,0,0,1,128,1,128,0,12,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,60,0,0,28,0,0,0,0,56,0,0,14,0,0,0,0,112,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,128,0,0,0,248,0,0,31,0,0,0,0,126,0,0,124,0,0,0,0,31,192,3,248,0,0,0,0,7,255,255,224,0,0,0,0,0,255,255,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,252,31,128,0,0,0,0,7,252,31,240,0,0,0,0,31,224,7,248,0,0,0,0,62,0,0,126,0,0,0,0,248,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,1,224,0,0,7,0,0,0,0,224,0,0,14,0,0,0,0,112,0,0,28,0,0,0,0,56,0,0,56,0,0,0,0,28,0,0,56,0,0,0,0,12,0,0,112,0,0,0,0,14,0,0,96,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,224,0,0,0,0,3,0,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,128,0,0,0,0,1,128,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,192,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,224,0,0,0,0,6,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,28,0,0,56,0,0,0,0,28,0,0,56,0,0,0,0,56,0,0,28,0,0,0,0,120,0,0,14,0,0,0,0,240,0,0,15,0,0,0,1,224,0,0,7,128,0,0,3,192,0,0,3,192,0,0,7,128,0,0,1,240,0,0,31,0,0,0,0,124,0,0,60,0,0,0,0,63,192,1,248,0,0,0,0,15,252,63,224,0,0,0,0,3,252,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,128,1,254,0,0,0,1,255,128,1,255,128,0,0,7,255,0,0,127,224,0,0,15,0,0,0,0,240,0,0,60,0,0,0,0,60,0,0,56,0,0,0,0,30,0,0,112,0,0,0,0,14,0,0,224,0,0,0,0,7,0,1,224,0,0,0,0,3,128,1,192,0,0,0,0,3,128,1,128,0,0,0,0,1,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,128,0,0,0,0,1,128,1,192,0,0,0,0,3,128,1,192,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,120,0,0,0,0,28,0,0,60,0,0,0,0,56,0,0,31,0,0,0,0,240,0,0,7,255,0,0,127,224,0,0,3,255,128,1,255,192,0,0,0,127,128,1,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,240,0,0,15,252,0,0,255,240,0,0,15,255,0,1,255,240,0,0,15,255,128,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,192,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,28,0,224,56,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,128,1,0,0,64,7,0,1,224,7,128,0,224,7,0,0,252,63,0,0,224,7,0,0,127,254,0,0,224,7,0,0,31,248,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,255,240,0,0,15,255,128,0,255,240,0,0,15,255,0,0,63,240,0,0,15,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);
}

int frame = 0;
void loop() {
  display.clearDisplay();
  display.drawBitmap(32, 0, frames[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);
}