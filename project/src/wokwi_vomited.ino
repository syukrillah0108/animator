#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: vomited
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,14,0,0,112,0,112,12,0,31,128,1,248,0,48,28,0,63,128,1,252,0,56,28,0,63,192,3,252,0,56,28,0,63,192,3,252,0,56,28,0,63,128,1,252,0,56,24,0,31,0,1,248,0,24,24,0,6,0,0,96,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,1,128,0,0,112,14,0,0,15,240,0,0,112,7,0,0,31,248,0,0,224,7,0,0,60,60,0,0,224,3,128,0,112,14,0,1,192,3,128,0,112,14,0,1,192,1,192,0,112,6,0,3,128,0,224,0,112,30,0,7,0,0,240,0,63,252,0,15,0,0,120,0,31,248,0,30,0,0,60,0,3,192,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,14,0,0,112,0,112,12,0,31,128,1,248,0,48,28,0,63,128,1,252,0,56,28,0,63,192,3,252,0,56,28,0,63,192,3,252,0,56,28,0,63,128,1,252,0,56,24,0,31,0,1,248,0,24,24,0,6,0,0,96,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,1,128,0,0,112,14,0,0,15,240,0,0,112,7,0,0,31,248,0,0,224,7,0,0,60,60,0,0,224,3,128,0,112,14,0,1,192,3,128,0,112,14,0,1,192,1,192,0,112,6,0,3,128,0,224,0,112,30,0,7,0,0,240,0,63,252,0,15,0,0,120,0,31,248,0,30,0,0,60,0,3,192,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,14,0,0,112,0,112,12,0,31,128,1,248,0,48,28,0,63,128,1,252,0,56,28,0,63,192,3,252,0,56,28,0,63,192,3,252,0,56,28,0,63,128,1,252,0,56,24,0,31,0,1,248,0,24,24,0,6,0,0,96,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,1,128,0,0,112,14,0,0,15,240,0,0,112,7,0,0,31,248,0,0,224,7,0,0,60,60,0,0,224,3,128,0,112,14,0,1,192,3,128,0,112,14,0,1,192,1,192,0,112,6,0,3,128,0,224,0,112,30,0,7,0,0,240,0,63,252,0,15,0,0,120,0,31,248,0,30,0,0,60,0,3,192,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,14,0,0,112,0,112,14,0,31,128,1,248,0,112,12,0,63,128,1,252,0,48,28,0,63,192,3,252,0,56,28,0,63,192,3,252,0,56,28,0,63,128,1,252,0,56,28,0,31,128,1,248,0,56,24,0,6,0,0,96,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,15,240,0,0,112,14,0,0,31,248,0,0,112,7,0,0,60,60,0,0,224,7,0,0,112,14,0,0,224,3,128,0,112,14,0,1,192,3,128,0,112,6,0,1,192,1,192,0,112,14,0,3,128,0,224,0,63,252,0,7,0,0,240,0,31,248,0,15,0,0,120,0,7,224,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,15,0,0,240,0,224,14,0,31,128,1,248,0,112,14,0,63,128,1,252,0,112,14,0,63,192,3,252,0,112,12,0,63,128,1,252,0,48,28,0,63,128,1,252,0,56,28,0,31,0,0,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,7,224,0,0,56,12,0,0,31,248,0,0,48,14,0,0,63,252,0,0,112,14,0,0,56,28,0,0,112,14,0,0,112,14,0,0,112,7,0,0,112,14,0,0,224,7,0,0,112,14,0,0,224,3,128,0,120,30,0,1,192,3,128,0,63,252,0,1,192,1,192,0,31,240,0,3,128,0,224,0,1,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,15,0,0,240,1,192,3,128,31,128,1,248,1,192,7,0,63,128,1,252,0,224,7,0,63,192,3,252,0,224,14,0,63,128,1,252,0,112,14,0,63,128,1,252,0,112,14,0,31,0,0,248,0,112,12,0,4,0,0,32,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,3,192,0,0,56,28,0,0,15,240,0,0,56,28,0,0,31,248,0,0,56,28,0,0,56,28,0,0,56,12,0,0,112,14,0,0,48,14,0,0,112,14,0,0,112,14,0,0,112,6,0,0,112,14,0,0,120,30,0,0,112,7,0,0,63,252,0,0,224,7,0,0,31,248,0,0,224,3,128,0,3,128,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,6,0,0,96,15,0,0,224,31,128,1,248,7,0,1,192,63,128,1,252,3,128,3,128,63,192,3,252,1,192,3,128,63,192,3,252,1,192,7,0,63,128,1,252,0,224,7,0,31,128,1,248,0,224,14,0,15,0,0,240,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,15,240,0,0,24,24,0,0,31,248,0,0,24,28,0,0,60,60,0,0,56,28,0,0,120,30,0,0,56,28,0,0,112,14,0,0,56,28,0,0,112,6,0,0,56,12,0,0,112,14,0,0,48,14,0,0,63,254,0,0,112,14,0,0,63,248,0,0,112,14,0,0,7,224,0,0,112,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,63,128,3,252,15,0,0,224,255,224,7,255,7,0,1,192,255,240,15,255,3,128,3,128,255,224,7,255,1,192,3,128,127,192,3,254,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,15,240,0,0,24,24,0,0,63,252,0,0,24,24,0,0,124,62,0,0,24,24,0,0,112,14,0,0,24,28,0,0,224,7,0,0,56,28,0,0,224,7,0,0,56,28,0,0,192,3,0,0,56,28,0,0,224,7,0,0,56,12,0,0,124,126,0,0,48,14,0,0,63,252,0,0,112,14,0,0,15,240,0,0,112,14,0,0,0,0,0,0,112,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,3,255,248,31,255,192,224,14,3,255,248,31,255,192,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,3,192,0,0,24,24,0,0,31,248,0,0,24,28,0,0,127,254,0,0,56,28,0,0,248,31,0,0,56,28,0,1,224,7,128,0,56,28,0,1,192,3,128,0,56,12,0,3,128,1,192,0,48,14,0,3,128,0,192,0,112,14,0,7,0,0,224,0,112,14,0,3,0,0,224,0,112,7,0,3,128,1,192,0,224,7,0,1,224,7,192,0,224,3,128,1,255,255,128,1,192,3,128,0,127,254,0,1,192,1,192,0,15,240,0,3,128,0,224,0,0,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,3,192,124,62,3,192,56,28,3,255,252,63,255,192,56,24,0,255,224,15,255,0,24,24,0,15,0,0,248,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,7,224,0,0,48,14,0,0,63,252,0,0,112,14,0,0,255,255,0,0,112,14,0,1,240,15,128,0,112,7,0,3,192,3,192,0,224,7,0,7,128,1,224,0,224,3,128,7,0,0,240,1,192,3,128,14,0,0,112,1,192,1,192,12,0,0,56,3,128,0,224,28,0,0,56,7,0,0,240,28,0,0,56,15,0,0,120,28,0,0,56,30,0,0,60,14,0,0,120,60,0,0,30,15,0,0,240,120,0,0,15,7,224,7,224,240,0,0,7,129,255,255,193,224,0,0,3,224,127,254,7,192,0,0,0,248,7,224,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,15,248,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,240,15,192,1,192,3,128,7,192,3,224,1,192,1,192,15,128,0,240,3,128,0,224,14,0,0,112,7,0,0,240,30,0,0,120,15,0,0,120,28,0,0,56,30,0,0,60,56,0,0,28,60,0,0,30,56,0,0,28,120,0,0,15,56,0,0,28,240,0,0,7,184,0,0,29,224,0,0,3,252,0,0,63,192,0,0,0,254,0,0,127,0,0,0,0,127,128,1,254,0,0,0,0,31,255,255,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,15,192,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,254,15,192,1,192,3,128,7,199,15,224,1,192,1,192,15,135,254,240,3,128,0,224,14,3,252,112,7,0,0,240,30,0,240,120,15,0,0,120,28,0,0,56,30,0,0,60,56,0,0,28,60,0,0,30,56,0,0,28,120,0,0,15,56,0,0,28,240,0,0,7,184,0,0,29,224,0,0,3,252,0,0,63,192,0,0,0,254,0,0,127,0,0,0,0,127,128,1,254,0,0,0,0,31,255,255,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,15,192,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,247,15,192,1,192,3,128,7,199,3,224,1,192,1,192,15,135,3,240,3,128,0,224,14,7,3,240,7,0,0,240,30,7,3,248,15,0,0,120,28,7,3,184,30,0,0,60,56,7,3,156,60,0,0,30,56,3,135,28,120,0,0,15,56,3,255,28,240,0,0,7,184,1,252,29,224,0,0,3,252,0,112,63,192,0,0,0,254,0,0,127,0,0,0,0,127,128,1,254,0,0,0,0,31,255,255,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,3,192,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,240,15,192,1,192,3,128,7,240,7,224,1,192,1,192,15,240,7,240,3,128,0,224,14,48,7,112,7,0,0,240,30,62,3,120,15,0,0,120,28,31,3,184,30,0,0,60,56,15,3,156,60,0,0,30,56,3,131,156,120,0,0,15,56,3,129,156,240,0,0,7,184,3,129,221,224,0,0,3,252,3,129,255,192,0,0,0,254,3,129,255,0,0,0,0,127,131,129,254,0,0,0,0,31,255,195,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,255,0,0,0,0,0,0,0,124,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,3,192,0,0,112,7,0,0,127,252,0,0,224,7,0,1,255,255,0,0,224,3,128,3,240,15,192,1,192,3,128,7,224,3,224,1,192,1,192,15,224,7,240,3,128,0,224,14,224,15,240,7,0,0,240,30,224,14,120,15,0,0,120,28,224,14,56,30,0,0,60,56,224,14,28,60,0,0,30,56,224,14,28,120,0,0,15,56,224,6,28,240,0,0,7,184,224,7,29,224,0,0,3,252,118,7,63,192,0,0,0,254,127,3,255,0,0,0,0,127,191,131,254,0,0,0,0,31,255,129,248,0,0,0,0,7,255,129,224,0,0,0,0,0,127,129,192,0,0,0,0,0,3,129,192,0,0,0,0,0,1,128,192,0,0,0,0,0,1,128,192,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,3,192,0,0,112,7,0,0,63,252,0,0,224,7,0,0,255,255,0,0,224,3,128,3,240,15,128,1,192,3,128,7,192,3,224,1,192,1,192,15,128,0,240,3,128,0,224,15,128,0,112,7,0,0,240,31,128,0,120,15,0,0,120,29,192,0,120,30,0,0,60,56,192,0,124,60,0,0,30,56,192,0,252,120,0,0,15,56,224,1,252,240,0,0,7,184,224,7,221,224,0,0,3,252,224,15,63,192,0,0,0,254,224,14,127,0,0,0,0,127,224,13,254,0,0,0,0,31,224,15,248,0,0,0,0,7,224,15,224,0,0,0,0,0,224,15,0,0,0,0,0,0,96,7,0,0,0,0,0,0,112,7,0,0,0,0,0,0,127,3,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,15,240,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,240,15,192,1,192,3,128,7,192,3,224,1,192,1,192,15,0,0,240,3,128,0,224,14,0,0,240,7,0,0,240,30,0,0,120,15,0,0,120,30,0,0,120,30,0,0,60,62,0,0,124,60,0,0,30,63,0,0,124,120,0,0,15,63,0,0,124,240,0,0,7,187,128,0,125,224,0,0,3,255,128,0,127,192,0,0,0,255,128,0,127,0,0,0,0,127,192,0,126,0,0,0,0,31,192,0,120,0,0,0,0,7,192,0,224,0,0,0,0,1,192,0,224,0,0,0,0,0,192,1,192,0,0,0,0,0,192,7,192,0,0,0,0,0,224,15,128,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,15,240,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,240,15,192,1,192,3,128,7,192,3,224,1,192,1,192,15,128,0,240,3,128,0,224,14,15,248,112,7,0,0,240,30,127,254,120,15,0,0,120,28,255,255,56,30,0,0,60,57,224,7,156,60,0,0,30,59,192,3,220,120,0,0,15,59,128,1,220,240,0,0,7,187,128,0,221,224,0,0,3,255,0,0,255,192,0,0,0,255,0,0,255,0,0,0,0,127,128,0,254,0,0,0,0,31,128,0,248,0,0,0,0,7,128,0,224,0,0,0,0,3,128,0,224,0,0,0,0,1,128,0,224,0,0,0,0,1,128,0,224,0,0,0,0,1,192,0,224,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,15,240,0,0,112,7,0,0,127,254,0,0,224,7,0,1,255,255,128,0,224,3,128,3,240,15,192,1,192,3,128,7,192,3,224,1,192,1,192,15,128,0,240,3,128,0,224,14,0,0,112,7,0,0,240,30,0,0,120,15,0,0,120,28,0,0,56,30,0,0,60,56,0,0,28,60,0,0,30,56,0,0,28,120,0,0,15,56,0,0,28,240,0,0,7,184,7,240,29,224,0,0,3,252,63,252,63,192,0,0,0,254,127,255,127,0,0,0,0,127,240,7,254,0,0,0,0,31,224,3,248,0,0,0,0,7,192,3,224,0,0,0,0,1,192,1,192,0,0,0,0,1,192,1,192,0,0,0,0,1,192,1,192,0,0,0,0,1,192,1,192,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,3,0,12,48,0,192,24,24,7,0,28,56,1,224,24,24,3,192,124,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,255,0,24,28,0,31,128,1,248,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,3,192,0,0,112,7,0,0,63,252,0,0,224,7,0,0,255,255,0,0,224,3,128,1,240,15,128,1,192,3,128,3,192,3,192,1,192,1,192,7,0,0,224,3,128,0,224,14,0,0,112,7,0,0,240,28,0,0,56,15,0,0,120,28,0,0,56,30,0,0,60,56,0,0,28,60,0,0,30,56,0,0,28,120,0,0,15,56,0,0,28,240,0,0,7,184,0,0,29,224,0,0,3,252,0,0,63,192,0,0,0,254,0,0,127,0,0,0,0,127,128,1,254,0,0,0,0,31,255,255,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,31,252,0,0,0,0,0,0,127,254,0,0,0,0,0,0,112,15,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,7,0,12,48,0,192,24,24,7,128,28,56,1,224,24,24,3,192,120,60,3,192,24,24,1,255,240,31,255,128,24,24,0,255,224,7,254,0,24,24,0,31,0,1,248,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,7,224,0,0,112,14,0,0,63,252,0,0,112,7,0,0,255,255,0,0,224,7,0,1,240,15,128,0,224,3,128,7,128,1,224,1,192,3,128,7,0,0,224,1,192,1,192,14,0,0,112,3,128,0,224,28,0,0,56,7,0,0,240,28,0,0,56,15,0,0,120,56,0,0,28,30,0,0,60,56,0,0,28,60,0,0,30,56,0,0,28,120,0,0,15,56,0,0,28,240,0,0,7,156,0,0,61,224,0,0,3,254,0,0,127,192,0,0,0,255,128,1,255,0,0,0,0,127,252,63,254,0,0,0,0,31,255,255,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,0,0,0,0,0,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,3,128,60,60,1,192,56,28,3,255,252,63,255,192,56,24,1,255,240,15,255,128,24,24,0,31,128,1,252,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,7,224,0,0,112,14,0,0,63,252,0,0,112,14,0,0,255,255,0,0,112,7,0,1,240,15,128,0,224,7,0,3,192,3,192,0,224,3,128,3,128,1,192,1,192,3,128,7,0,0,224,1,192,1,192,7,0,0,224,3,128,0,224,14,0,0,112,7,0,0,240,14,0,0,112,15,0,0,120,14,0,0,112,30,0,0,60,7,0,0,224,60,0,0,30,3,192,3,224,120,0,0,15,3,252,63,192,240,0,0,7,128,255,255,1,224,0,0,3,224,31,248,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,12,1,255,248,31,255,128,48,28,3,255,248,31,255,192,56,28,1,255,240,15,255,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,31,248,0,0,48,14,0,0,63,252,0,0,112,14,0,0,120,30,0,0,112,14,0,0,224,7,0,0,112,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,3,128,1,128,1,128,1,192,3,128,1,128,1,192,1,192,1,192,1,192,3,128,3,128,0,224,1,240,15,128,7,0,0,240,0,255,255,0,15,0,0,120,0,63,252,0,30,0,0,60,0,7,224,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,255,224,7,255,0,112,14,1,255,240,15,255,128,112,14,1,255,240,15,255,128,112,12,0,127,224,7,254,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,1,128,0,0,56,28,0,0,15,240,0,0,56,12,0,0,31,248,0,0,48,14,0,0,60,60,0,0,112,14,0,0,112,14,0,0,112,14,0,0,112,14,0,0,112,7,0,0,112,6,0,0,224,7,0,0,120,30,0,0,224,3,128,0,63,252,0,1,192,3,128,0,31,248,0,1,192,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,63,128,1,252,0,224,7,0,127,192,3,254,0,224,14,0,127,224,7,254,0,112,14,0,127,192,3,254,0,112,14,0,63,192,3,252,0,112,12,0,31,128,0,248,0,48,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,3,192,0,0,56,28,0,0,15,240,0,0,56,28,0,0,31,248,0,0,56,12,0,0,56,28,0,0,48,14,0,0,112,14,0,0,112,14,0,0,112,14,0,0,112,14,0,0,112,6,0,0,112,7,0,0,120,30,0,0,224,7,0,0,63,252,0,0,224,3,128,0,31,248,0,1,192,3,128,0,3,128,0,1,192,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,31,0,0,248,0,112,14,0,63,128,1,252,0,112,14,0,63,128,1,252,0,112,12,0,63,192,3,252,0,48,28,0,63,128,1,252,0,56,28,0,31,128,1,248,0,56,28,0,15,0,0,240,0,56,28,0,0,0,0,0,0,56,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,7,224,0,0,48,14,0,0,31,248,0,0,112,14,0,0,62,124,0,0,112,14,0,0,56,28,0,0,112,7,0,0,112,14,0,0,224,7,0,0,112,6,0,0,224,3,128,0,112,14,0,1,192,3,128,0,124,62,0,1,192,1,192,0,63,252,0,3,128,0,224,0,15,240,0,7,0,0,240,0,0,0,0,15,0,0,120,0,0,0,0,30,0,0,60,0,0,0,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,14,0,0,112,0,112,12,0,31,128,1,248,0,48,28,0,63,128,1,252,0,56,28,0,63,192,3,252,0,56,28,0,63,192,3,252,0,56,28,0,63,128,1,252,0,56,24,0,31,0,1,248,0,24,24,0,6,0,0,96,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,1,128,0,0,112,14,0,0,15,240,0,0,112,7,0,0,31,248,0,0,224,7,0,0,60,60,0,0,224,3,128,0,112,14,0,1,192,3,128,0,112,14,0,1,192,1,192,0,112,6,0,3,128,0,224,0,112,30,0,7,0,0,240,0,63,252,0,15,0,0,120,0,31,248,0,30,0,0,60,0,3,192,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,7,255,255,224,0,0,0,0,31,248,31,248,0,0,0,0,63,0,0,252,0,0,0,0,248,0,0,31,0,0,0,3,224,0,0,7,192,0,0,7,128,0,0,1,224,0,0,15,0,0,0,0,240,0,0,30,0,0,0,0,120,0,0,60,0,0,0,0,60,0,0,120,0,0,0,0,30,0,0,240,0,0,0,0,15,0,0,224,0,0,0,0,7,0,1,192,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,14,0,0,0,0,0,0,112,14,0,0,0,0,0,0,112,14,0,14,0,0,112,0,112,12,0,31,128,1,248,0,48,28,0,63,128,1,252,0,56,28,0,63,192,3,252,0,56,28,0,63,192,3,252,0,56,28,0,63,128,1,252,0,56,24,0,31,0,1,248,0,24,24,0,6,0,0,96,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,24,0,0,0,0,0,0,24,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,48,14,0,0,0,0,0,0,112,14,0,0,1,128,0,0,112,14,0,0,15,240,0,0,112,7,0,0,31,248,0,0,224,7,0,0,60,60,0,0,224,3,128,0,112,14,0,1,192,3,128,0,112,14,0,1,192,1,192,0,112,6,0,3,128,0,224,0,112,30,0,7,0,0,240,0,63,252,0,15,0,0,120,0,31,248,0,30,0,0,60,0,3,192,0,60,0,0,30,0,0,0,0,120,0,0,15,0,0,0,0,240,0,0,7,128,0,0,1,224,0,0,3,224,0,0,7,192,0,0,0,248,0,0,31,0,0,0,0,127,0,0,254,0,0,0,0,31,224,7,248,0,0,0,0,7,255,255,224,0,0,0,0,0,127,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
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