#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: heart with arrow
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,0,0,0,240,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,224,0,0,0,0,0,0,31,224,0,0,0,0,0,0,31,224,0,0,0,0,0,0,31,224,0,0,0,0,0,0,7,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,29,192,0,0,0,0,0,0,57,192,0,0,0,0,0,0,112,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,62,0,1,224,0,0,0,1,255,0,3,128,0,0,0,15,255,128,15,0,0,0,0,15,243,192,30,0,0,0,0,1,241,240,60,0,0,0,0,3,240,120,248,0,0,0,0,7,112,61,224,0,0,0,0,14,96,31,192,0,0,0,0,28,96,7,128,0,0,0,0,56,0,2,0,0,0,0,0,112,0,0,0,0,0,0,0,224,0,0,0,0,0,0,1,192,0,0,0,0,0,0,3,128,0,0,0,0,0,0,7,0,0,0,0,0,0,0,14,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,112,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,224,0,0,0,0,0,1,255,248,3,254,0,0,0,3,240,126,15,255,128,0,0,15,128,15,63,207,224,0,0,30,0,7,252,1,240,0,0,28,0,3,240,0,120,0,0,56,0,1,224,0,60,0,0,112,0,0,192,0,30,0,0,112,0,0,0,0,14,0,0,96,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,224,0,0,0,0,3,0,0,224,0,0,0,0,3,0,0,224,0,0,0,0,3,128,0,224,0,0,0,0,3,128,0,224,0,0,0,0,3,128,0,112,0,0,0,0,3,0,0,112,0,0,0,0,7,0,0,56,0,0,0,0,7,0,0,56,0,0,0,0,14,0,0,28,0,0,0,0,14,0,0,30,0,7,0,0,28,0,0,14,0,15,0,0,56,0,0,7,0,30,0,0,120,0,0,3,128,60,0,0,240,0,0,3,192,120,0,1,224,0,0,1,224,240,0,3,192,0,0,0,241,224,0,7,128,0,0,0,123,192,0,15,0,0,0,0,63,128,0,28,0,0,0,0,31,0,0,120,0,0,0,0,31,0,0,240,0,0,0,0,63,128,1,224,0,0,0,0,123,192,7,192,0,0,0,0,241,224,15,0,0,0,0,1,224,240,62,0,0,0,0,3,192,120,124,0,0,0,0,7,128,61,240,0,0,0,0,15,0,15,224,0,0,0,0,30,0,7,128,0,0,0,0,60,0,2,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,248,0,0,0,0,0,0,31,255,0,0,0,0,0,0,127,31,192,0,0,0,0,0,240,3,224,30,0,0,0,3,192,0,240,255,224,0,0,3,128,0,115,255,248,0,0,7,0,0,63,192,124,0,0,14,0,0,31,0,30,0,0,14,0,0,28,0,7,0,0,12,0,0,0,0,3,128,0,28,0,0,0,0,3,128,0,28,0,0,0,0,1,192,0,28,0,0,0,0,0,192,0,28,0,0,0,0,0,224,0,28,0,0,0,0,0,224,0,12,0,0,0,0,0,224,0,14,0,0,0,0,0,96,0,14,0,0,0,0,0,96,0,6,0,0,224,0,0,96,0,7,0,1,224,0,0,224,0,3,128,1,224,0,0,224,0,3,128,3,224,0,0,192,0,1,192,7,128,0,1,192,0,1,192,15,0,0,3,128,0,0,224,30,0,0,7,128,0,0,112,60,0,0,15,0,0,0,120,120,0,0,30,0,0,0,56,240,0,0,60,0,0,0,29,224,0,0,120,0,0,0,15,192,0,1,224,0,0,0,15,128,0,3,192,0,0,0,15,0,0,15,128,0,0,0,31,128,0,30,0,0,0,0,61,192,0,124,0,0,0,0,120,224,1,240,0,0,0,0,240,240,3,224,0,0,0,1,224,120,15,128,0,0,0,3,192,60,62,0,0,0,0,7,128,30,248,0,0,0,0,15,0,15,240,0,0,0,0,30,0,7,192,0,0,0,0,60,0,3,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,128,0,0,0,0,0,0,127,248,0,0,48,0,0,0,255,254,0,127,240,0,0,3,224,31,3,255,240,0,0,7,128,7,143,255,240,0,0,15,0,3,222,1,240,0,0,30,0,1,252,0,120,0,0,28,0,0,240,0,28,0,0,56,0,0,96,0,14,0,0,56,0,0,0,0,7,0,0,112,0,0,0,0,7,0,0,112,0,0,0,0,3,128,0,112,0,0,0,0,3,128,0,112,0,0,0,0,1,128,0,112,0,0,0,0,1,128,0,112,0,0,0,0,1,192,0,48,0,0,0,0,1,192,0,56,0,0,0,0,1,192,0,56,0,0,224,0,1,128,0,28,0,1,224,0,3,128,0,28,0,1,224,0,3,128,0,14,0,3,224,0,7,0,0,7,0,7,128,0,14,0,0,7,0,15,0,0,30,0,0,3,128,30,0,0,60,0,0,1,192,60,0,0,120,0,0,1,224,120,0,0,240,0,0,0,240,240,0,1,224,0,0,0,121,224,0,3,192,0,0,0,59,192,0,7,128,0,0,0,31,128,0,31,0,0,0,0,15,0,0,60,0,0,0,0,31,0,0,120,0,0,0,0,63,128,1,240,0,0,0,0,121,192,3,192,0,0,0,0,240,224,15,128,0,0,0,1,224,112,30,0,0,0,0,3,192,56,124,0,0,0,0,7,128,30,240,0,0,0,0,15,0,15,224,0,0,0,0,30,0,7,128,0,0,0,0,60,0,3,0,0,0,0,0,120,0,0,0,0,0,0,1,240,0,0,0,0,0,0,63,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,241,192,0,0,0,0,0,0,225,192,0,0,0,0,0,0,193,192,0,0,0,0,0,0,129,192,0,0,0,0,0,0,227,192,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,224,0,0,0,0,0,0,31,224,0,0,0,0,0,0,31,224,0,0,0,0,0,0,7,192,0,0,0,0,0,0,15,192,0,0,0,0,0,0,31,192,0,0,127,192,0,0,61,192,0,1,255,240,15,254,120,128,0,7,251,252,31,255,240,0,0,15,128,62,124,7,224,0,0,30,0,15,240,1,240,0,0,56,0,7,224,0,120,0,0,120,0,3,192,0,56,0,0,112,0,1,128,0,28,0,0,224,0,0,0,0,14,0,0,224,0,0,0,0,14,0,0,192,0,0,0,0,6,0,1,192,0,0,0,0,7,0,1,192,0,0,0,0,7,0,1,192,0,0,0,0,7,0,1,192,0,0,0,0,7,0,0,192,0,0,0,0,7,0,0,224,0,0,0,0,6,0,0,224,0,0,224,0,6,0,0,112,0,1,224,0,14,0,0,112,0,1,224,0,28,0,0,56,0,3,224,0,28,0,0,60,0,7,128,0,56,0,0,30,0,15,0,0,112,0,0,14,0,30,0,0,224,0,0,7,0,60,0,1,224,0,0,3,128,120,0,3,192,0,0,1,192,240,0,7,128,0,0,0,225,224,0,15,0,0,0,0,243,192,0,30,0,0,0,0,127,128,0,60,0,0,0,0,63,0,0,112,0,0,0,0,30,0,1,224,0,0,0,0,63,0,3,192,0,0,0,0,123,128,7,128,0,0,0,0,241,224,15,0,0,0,0,1,224,240,60,0,0,0,0,127,192,120,120,0,0,0,0,255,128,61,240,0,0,0,1,255,128,15,192,0,0,0,3,195,128,7,128,0,0,0,7,131,128,2,0,0,0,0,15,3,128,0,0,0,0,0,31,199,128,0,0,0,0,0,31,207,0,0,0,0,0,0,31,222,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,248,0,0,0,0,0,0,14,240,0,0,0,0,0,0,12,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,1,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,7,176,0,0,0,0,0,0,15,48,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,224,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,63,0,3,128,0,0,0,15,255,128,15,0,0,0,0,31,243,192,30,0,0,0,0,63,225,240,60,0,0,0,0,120,96,120,248,0,0,0,0,240,96,61,224,0,0,0,1,224,96,31,192,0,0,0,3,192,224,7,128,0,0,0,7,249,224,2,0,0,0,0,7,251,192,0,0,0,0,0,0,255,128,0,0,0,0,0,1,255,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,188,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,1,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,7,176,0,0,0,0,0,0,15,48,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,224,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,63,0,3,128,0,0,0,15,255,128,15,0,0,0,0,31,243,192,30,0,0,0,0,63,225,240,60,0,0,0,0,120,96,120,248,0,0,0,0,240,96,61,224,0,0,0,1,224,96,31,192,0,0,0,3,192,224,7,128,0,0,0,7,249,224,2,0,0,0,0,7,251,192,0,0,0,0,0,0,255,128,0,0,0,0,0,1,255,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,188,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,1,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,7,176,0,0,0,0,0,0,15,48,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,224,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,63,0,3,128,0,0,0,15,255,128,15,0,0,0,0,31,243,192,30,0,0,0,0,63,225,240,60,0,0,0,0,120,96,120,248,0,0,0,0,240,96,61,224,0,0,0,1,224,96,31,192,0,0,0,3,192,224,7,128,0,0,0,7,249,224,2,0,0,0,0,7,251,192,0,0,0,0,0,0,255,128,0,0,0,0,0,1,255,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,188,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,1,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,7,176,0,0,0,0,0,0,15,48,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,63,0,3,128,0,0,0,15,255,128,15,0,0,0,0,31,243,192,30,0,0,0,0,63,225,240,60,0,0,0,0,120,96,120,248,0,0,0,0,240,96,61,224,0,0,0,1,224,96,31,192,0,0,0,3,192,224,7,128,0,0,0,7,249,224,2,0,0,0,0,7,251,192,0,0,0,0,0,0,255,128,0,0,0,0,0,1,255,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,188,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,1,248,0,0,0,0,0,0,3,248,0,0,0,0,0,0,7,176,0,0,0,0,0,0,15,48,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,63,0,3,128,0,0,0,15,255,128,15,0,0,0,0,31,243,192,30,0,0,0,0,63,225,240,60,0,0,0,0,120,96,120,248,0,0,0,0,240,96,61,224,0,0,0,1,224,96,31,192,0,0,0,3,192,224,7,128,0,0,0,7,249,224,2,0,0,0,0,7,251,192,0,0,0,0,0,0,255,128,0,0,0,0,0,1,255,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,188,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,126,0,0,0,0,0,0,1,254,0,0,0,0,0,0,1,254,0,0,0,0,0,0,0,126,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,236,0,0,0,0,0,0,3,220,0,0,0,0,0,0,7,136,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,7,255,0,3,128,0,0,0,15,255,128,15,0,0,0,0,30,59,192,30,0,0,0,0,60,57,240,60,0,0,0,0,120,56,120,248,0,0,0,0,240,56,61,224,0,0,0,1,252,120,31,192,0,0,0,1,254,240,7,128,0,0,0,0,255,224,2,0,0,0,0,0,127,192,0,0,0,0,0,0,255,128,0,0,0,0,0,0,239,0,0,0,0,0,0,0,78,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,224,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,255,224,0,30,0,0,0,0,255,192,0,60,0,0,0,0,255,192,0,120,0,0,0,1,225,192,0,240,0,0,0,3,193,192,1,224,0,0,0,7,129,192,3,128,0,0,0,15,67,192,15,0,0,0,0,31,231,192,30,0,0,0,0,15,239,240,60,0,0,0,0,3,254,120,248,0,0,0,0,7,252,61,224,0,0,0,0,7,248,31,192,0,0,0,0,6,112,7,128,0,0,0,0,0,96,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,192,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,30,0,1,192,0,0,14,0,60,0,3,192,0,0,7,0,120,0,7,128,0,0,3,128,240,0,15,0,0,0,1,193,224,0,30,0,0,0,0,227,192,0,60,0,0,0,0,119,128,0,120,0,0,0,0,63,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,1,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,3,192,0,56,0,0,120,0,7,128,0,112,0,0,56,0,15,0,0,224,0,0,28,0,14,0,1,192,0,0,14,0,4,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,127,0,3,240,60,0,0,3,255,224,31,254,120,0,0,7,255,240,127,255,240,0,0,31,0,124,248,7,224,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,192,0,28,0,0,224,0,0,224,0,28,0,0,224,0,1,224,0,56,0,0,112,0,0,192,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,120,0,0,0,0,0,0,31,240,0,0,0,0,0,0,63,224,0,0,0,0,0,0,120,224,0,0,0,0,0,0,240,224,0,0,0,0,0,1,224,224,0,0,0,0,0,3,192,224,0,0,127,0,3,247,241,224,0,3,255,224,31,255,251,192,0,7,255,240,127,255,255,128,0,31,0,124,248,7,255,0,0,60,0,31,224,1,254,0,0,120,0,15,128,0,252,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,120,0,0,0,0,0,0,0,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,249,0,0,0,0,0,0,7,251,0,0,0,0,0,0,0,255,0,0,0,0,0,0,1,255,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,188,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,16,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,3,240,0,0,0,3,255,224,31,254,0,0,0,7,255,240,127,255,128,0,0,31,0,124,248,7,192,0,0,60,0,31,224,1,224,0,0,120,0,15,128,0,240,0,0,112,0,7,0,0,120,0,0,224,0,2,0,0,56,0,0,224,0,0,0,0,28,0,1,192,0,0,0,0,28,0,1,192,0,0,0,0,14,0,1,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,3,128,0,0,0,0,14,0,1,128,0,0,0,0,14,0,1,192,0,0,0,0,14,0,1,192,0,0,0,0,28,0,0,224,0,0,0,0,28,0,0,224,0,0,0,0,56,0,0,112,0,0,0,0,56,0,0,120,0,0,0,0,112,0,0,56,0,0,0,0,224,0,0,28,0,0,0,1,192,0,0,14,0,0,0,3,192,0,0,7,0,0,0,7,128,0,0,3,128,0,0,15,0,0,0,1,192,0,0,30,0,0,0,0,224,0,0,60,0,0,0,0,112,0,0,120,0,0,0,0,56,0,0,240,0,0,0,0,30,0,1,224,0,0,0,0,15,0,3,128,0,0,0,0,7,128,15,0,0,0,0,0,3,192,30,0,0,0,0,0,1,240,60,0,0,0,0,0,0,120,248,0,0,0,0,0,0,61,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,7,128,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
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