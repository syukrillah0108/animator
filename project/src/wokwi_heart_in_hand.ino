#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: heart in hand
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,255,255,192,0,1,254,0,3,255,255,255,0,3,199,0,7,255,255,255,192,7,135,0,31,0,0,1,192,15,7,0,60,0,0,0,224,30,7,0,120,0,0,0,224,60,14,0,240,0,0,0,224,120,30,1,224,0,0,1,192,240,60,7,128,0,1,255,193,224,120,15,0,0,31,255,3,192,240,30,0,0,31,240,7,129,224,60,0,0,15,128,15,3,192,120,0,0,7,255,254,7,128,240,0,0,3,255,252,15,0,112,0,0,0,3,248,30,0,120,0,0,0,0,0,60,0,60,0,0,0,0,0,120,0,30,0,0,0,0,0,240,0,14,0,0,0,0,1,224,0,7,0,0,0,0,3,192,0,3,128,63,0,0,7,128,0,3,192,127,255,255,255,0,0,1,225,255,255,255,254,0,0,0,227,192,7,255,252,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,24,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,127,224,0,0,0,252,0,1,255,255,252,0,1,254,0,7,255,255,255,128,3,199,0,31,0,0,127,192,7,135,0,60,0,0,0,224,15,7,0,120,0,0,0,96,30,7,1,240,0,0,0,96,60,14,3,192,0,0,0,224,120,30,7,128,0,0,1,224,240,60,15,0,0,31,255,193,224,120,60,0,0,31,255,131,192,240,120,0,0,15,128,7,129,224,240,0,0,7,252,15,3,192,240,0,0,3,255,254,7,128,112,0,0,0,31,252,15,0,56,0,0,0,0,248,14,0,28,0,0,0,0,0,28,0,30,0,0,0,0,0,56,0,14,0,0,0,0,0,112,0,7,0,0,0,0,0,224,0,3,128,60,0,0,1,192,0,3,192,255,252,0,3,128,0,1,225,255,255,254,15,0,0,0,227,192,63,255,254,0,0,0,127,128,0,63,252,0,0,0,63,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,24,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,63,128,0,0,0,0,0,195,240,192,0,0,0,0,1,129,224,96,0,0,0,0,1,0,192,32,0,0,0,0,3,0,0,48,0,0,0,0,3,0,0,48,0,0,0,0,3,0,0,32,0,0,0,0,1,0,0,32,0,0,0,0,1,128,0,96,0,0,0,0,0,192,0,192,0,0,0,0,0,192,1,128,0,0,0,0,0,96,3,128,0,0,0,0,0,48,7,0,0,0,0,0,0,28,14,0,0,0,0,0,0,14,24,0,0,0,0,0,0,3,48,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,127,255,128,0,0,254,0,1,255,255,255,128,1,254,0,7,255,255,255,192,3,135,0,31,0,0,1,224,7,7,0,60,0,0,0,224,14,7,0,120,0,0,0,224,28,7,0,240,0,0,0,224,56,14,3,192,0,0,1,224,112,28,7,128,0,15,255,192,224,56,15,0,0,31,255,129,192,112,30,0,0,31,224,3,128,240,60,0,0,15,128,7,1,224,240,0,0,7,255,14,3,192,240,0,0,3,255,252,7,128,112,0,0,0,15,248,15,0,56,0,0,0,0,0,30,0,60,0,0,0,0,0,60,0,30,0,0,0,0,0,120,0,14,0,0,0,0,0,240,0,7,0,0,0,0,1,224,0,3,128,60,0,0,3,192,0,1,192,255,255,192,7,128,0,1,225,255,255,255,255,0,0,0,227,192,63,255,254,0,0,0,127,128,0,1,248,0,0,0,63,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,24,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,31,192,0,0,0,0,1,255,63,224,0,0,0,0,3,3,224,112,0,0,0,0,6,1,192,24,0,0,0,0,6,0,192,24,0,0,0,0,12,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,6,0,0,24,0,0,0,0,6,0,0,24,0,0,0,0,3,0,0,48,0,0,0,0,1,128,0,96,0,0,0,0,1,192,0,224,0,0,0,0,0,224,1,192,0,0,0,0,0,112,3,128,0,0,0,0,0,56,7,0,0,0,0,0,0,12,12,0,0,0,0,0,0,6,56,0,0,0,0,0,0,3,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,255,0,0,124,0,0,127,255,255,128,1,254,0,3,255,255,255,192,3,207,0,7,248,0,1,192,7,135,0,31,0,0,0,192,15,7,0,60,0,0,1,192,30,7,0,120,0,0,3,192,56,15,0,240,0,0,63,128,240,30,1,224,0,7,255,1,224,60,7,128,0,31,248,3,192,120,15,0,0,31,0,7,128,240,30,0,0,30,0,15,1,224,60,0,0,15,255,254,3,192,120,0,0,7,255,252,7,128,240,0,0,3,255,248,15,0,240,0,0,0,0,0,30,0,120,0,0,0,0,0,60,0,56,0,0,0,0,0,120,0,28,0,0,0,0,0,240,0,14,0,0,0,0,1,224,0,7,0,0,0,0,3,192,0,3,128,63,255,255,255,128,0,1,192,127,255,255,254,0,0,1,224,255,255,255,252,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,112,3,128,0,0,0,0,7,254,31,248,0,0,0,0,15,255,63,252,0,0,0,0,30,7,248,30,0,0,0,0,56,3,240,7,0,0,0,0,112,1,224,3,128,0,0,0,96,0,192,3,128,0,0,0,96,0,0,1,128,0,0,0,224,0,0,1,128,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,96,0,0,1,128,0,0,0,96,0,0,1,128,0,0,0,112,0,0,3,128,0,0,0,56,0,0,7,0,0,0,0,56,0,0,6,0,0,0,0,28,0,0,14,0,0,0,0,14,0,0,28,0,0,0,0,7,0,0,56,0,0,0,0,3,128,0,112,0,0,0,0,1,192,0,224,0,0,0,0,0,224,1,192,0,0,0,0,0,112,3,128,0,0,0,0,0,56,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,31,255,0,0,120,0,0,7,255,255,128,0,252,0,0,127,254,1,128,1,254,0,3,255,128,1,128,7,135,0,7,224,0,1,128,15,7,0,31,0,0,3,128,30,7,0,60,0,0,31,128,60,7,0,120,0,0,255,0,240,14,0,240,0,7,252,1,224,28,1,224,0,31,224,3,192,56,3,192,0,63,0,15,128,240,7,128,0,28,0,30,1,224,14,0,0,14,15,252,3,192,28,0,0,15,255,248,7,128,120,0,0,7,255,0,15,0,240,0,0,3,128,0,30,0,224,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,7,128,0,7,0,0,0,63,255,0,0,7,128,63,255,255,254,0,0,3,192,127,255,255,240,0,0,1,224,255,240,0,0,0,0,0,241,192,0,0,0,0,0,0,123,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,15,248,7,252,0,0,0,0,31,254,31,254,0,0,0,0,62,31,62,31,0,0,0,0,120,7,248,7,128,0,0,0,224,3,240,1,192,0,0,1,192,1,224,1,224,0,0,1,192,0,192,0,224,0,0,1,128,0,128,0,96,0,0,3,128,0,0,0,112,0,0,3,128,0,0,0,112,0,0,3,128,0,0,0,112,0,0,3,128,0,0,0,112,0,0,1,128,0,0,0,96,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,224,0,0,1,192,0,0,0,240,0,0,3,192,0,0,0,120,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,14,0,0,28,0,0,0,0,7,0,0,56,0,0,0,0,3,128,0,112,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,120,7,128,0,0,0,0,0,60,15,0,0,0,0,0,0,30,62,0,0,0,0,0,0,15,252,0,0,0,0,0,0,3,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,24,192,0,0,0,0,0,3,255,0,0,0,0,0,0,63,255,0,0,120,0,0,7,255,131,128,0,254,0,0,127,240,3,128,3,254,0,3,255,0,3,128,7,135,0,7,224,0,3,128,15,7,0,31,0,0,15,0,60,7,0,60,0,0,126,0,120,7,0,120,0,1,252,0,240,14,0,240,0,15,224,3,192,28,1,224,0,63,128,7,128,120,3,192,0,60,0,15,0,240,7,128,0,28,0,252,1,224,15,0,0,14,31,248,3,192,28,0,0,15,255,224,7,128,56,0,0,7,252,0,15,0,112,0,0,3,128,0,30,0,224,0,0,0,0,0,120,0,240,0,0,0,0,0,240,0,120,0,0,0,0,1,224,0,60,0,0,0,0,3,192,0,30,0,0,0,0,127,128,0,15,0,0,15,255,254,0,0,7,128,63,255,255,248,0,0,3,192,127,255,240,0,0,0,1,224,255,128,0,0,0,0,0,241,192,0,0,0,0,0,0,123,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,3,240,3,240,0,0,0,0,15,252,15,252,0,0,0,0,63,254,63,255,0,0,0,0,120,7,120,7,128,0,0,0,112,3,240,3,128,0,0,0,224,1,224,1,192,0,0,1,192,1,192,0,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,128,0,0,0,96,0,0,1,128,0,0,0,96,0,0,1,128,0,0,0,96,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,120,0,0,7,128,0,0,0,60,0,0,15,0,0,0,0,28,0,0,30,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,120,7,128,0,0,0,0,0,60,15,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,252,0,0,3,255,255,0,1,254,0,0,127,255,255,128,3,206,0,3,255,224,1,128,7,135,0,7,224,0,1,192,15,7,0,31,0,0,1,192,30,7,0,60,0,0,3,128,120,14,0,120,0,0,31,128,240,30,0,240,0,0,255,1,224,60,1,224,0,7,252,3,192,120,3,192,0,31,192,7,128,240,7,128,0,30,0,15,1,224,30,0,0,30,3,254,3,192,60,0,0,15,255,248,7,128,120,0,0,7,255,240,15,0,240,0,0,3,192,0,30,0,224,0,0,0,0,0,60,0,112,0,0,0,0,0,112,0,56,0,0,0,0,0,224,0,28,0,0,0,0,1,192,0,30,0,0,0,0,3,128,0,15,0,0,0,7,255,0,0,7,128,63,255,255,254,0,0,3,192,127,255,255,248,0,0,1,224,255,248,0,0,0,0,0,241,192,0,0,0,0,0,0,123,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,240,3,192,0,0,0,0,7,252,15,248,0,0,0,0,31,254,31,254,0,0,0,0,60,7,120,15,0,0,0,0,120,3,240,7,128,0,0,0,224,1,224,3,128,0,0,0,224,1,224,1,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,192,0,0,0,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,112,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,30,0,0,28,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,124,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,3,240,3,240,0,0,0,0,15,252,15,252,0,0,0,0,63,254,63,255,0,0,0,0,120,7,120,7,128,0,0,0,112,3,240,3,128,0,0,0,224,1,224,1,192,0,0,1,192,1,192,0,192,0,0,1,192,0,192,0,224,0,0,1,192,0,0,0,224,0,0,1,128,0,0,0,96,0,0,1,128,0,0,0,96,0,0,1,128,0,0,0,96,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,112,0,0,3,128,0,0,0,120,0,0,7,128,0,0,0,60,0,0,15,0,0,0,0,28,0,0,30,0,0,0,0,15,0,0,60,0,0,0,0,7,128,0,120,0,0,0,0,3,192,0,240,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,120,7,128,0,0,0,0,0,60,15,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,252,0,0,3,255,255,0,1,254,0,0,127,255,255,128,3,206,0,3,255,224,1,128,7,135,0,7,224,0,1,192,15,7,0,31,0,0,1,192,30,7,0,60,0,0,3,128,120,14,0,120,0,0,31,128,240,30,0,240,0,0,255,1,224,60,1,224,0,7,252,3,192,120,3,192,0,31,192,7,128,240,7,128,0,30,0,15,1,224,30,0,0,30,3,254,3,192,60,0,0,15,255,248,7,128,120,0,0,7,255,240,15,0,240,0,0,3,192,0,30,0,224,0,0,0,0,0,60,0,112,0,0,0,0,0,112,0,56,0,0,0,0,0,224,0,28,0,0,0,0,1,192,0,30,0,0,0,0,3,128,0,15,0,0,0,7,255,0,0,7,128,63,255,255,254,0,0,3,192,127,255,255,248,0,0,1,224,255,248,0,0,0,0,0,241,192,0,0,0,0,0,0,123,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,15,248,7,252,0,0,0,0,31,254,31,254,0,0,0,0,62,31,62,31,0,0,0,0,120,7,248,7,128,0,0,0,224,3,240,1,192,0,0,1,192,1,224,1,224,0,0,1,192,0,192,0,224,0,0,1,128,0,128,0,96,0,0,3,128,0,0,0,112,0,0,3,128,0,0,0,112,0,0,3,128,0,0,0,112,0,0,3,128,0,0,0,112,0,0,1,128,0,0,0,96,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,224,0,0,0,224,0,0,1,192,0,0,0,240,0,0,3,192,0,0,0,120,0,0,7,128,0,0,0,56,0,0,7,0,0,0,0,28,0,0,14,0,0,0,0,14,0,0,28,0,0,0,0,7,0,0,56,0,0,0,0,3,128,0,112,0,0,0,0,1,224,1,224,0,0,0,0,0,240,3,192,0,0,0,0,0,120,7,128,0,0,0,0,0,60,15,0,0,0,0,0,0,30,62,0,0,0,0,0,0,15,252,0,0,0,0,0,0,3,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,24,192,0,0,0,0,0,3,255,0,0,0,0,0,0,63,255,0,0,120,0,0,7,255,131,128,0,254,0,0,127,240,3,128,3,254,0,3,255,0,3,128,7,135,0,7,224,0,3,128,15,7,0,31,0,0,15,0,60,7,0,60,0,0,126,0,120,7,0,120,0,1,252,0,240,14,0,240,0,15,224,3,192,28,1,224,0,63,128,7,128,120,3,192,0,60,0,15,0,240,7,128,0,28,0,252,1,224,15,0,0,14,31,248,3,192,28,0,0,15,255,224,7,128,56,0,0,7,252,0,15,0,112,0,0,3,128,0,30,0,224,0,0,0,0,0,120,0,240,0,0,0,0,0,240,0,120,0,0,0,0,1,224,0,60,0,0,0,0,3,192,0,30,0,0,0,0,127,128,0,15,0,0,15,255,254,0,0,7,128,63,255,255,248,0,0,3,192,127,255,240,0,0,0,1,224,255,128,0,0,0,0,0,241,192,0,0,0,0,0,0,123,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,112,3,128,0,0,0,0,7,254,31,248,0,0,0,0,15,255,63,252,0,0,0,0,30,7,248,30,0,0,0,0,56,3,240,7,0,0,0,0,112,1,224,3,128,0,0,0,96,0,192,3,128,0,0,0,96,0,0,1,128,0,0,0,224,0,0,1,128,0,0,0,224,0,0,1,192,0,0,0,224,0,0,1,192,0,0,0,96,0,0,1,128,0,0,0,96,0,0,1,128,0,0,0,112,0,0,3,128,0,0,0,56,0,0,7,0,0,0,0,56,0,0,6,0,0,0,0,28,0,0,14,0,0,0,0,14,0,0,28,0,0,0,0,7,0,0,56,0,0,0,0,3,128,0,112,0,0,0,0,1,192,0,224,0,0,0,0,0,224,1,192,0,0,0,0,0,112,3,128,0,0,0,0,0,56,15,0,0,0,0,0,0,30,30,0,0,0,0,0,0,15,60,0,0,0,0,0,0,7,248,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,31,255,0,0,120,0,0,7,255,255,128,0,252,0,0,127,254,1,128,1,254,0,3,255,128,1,128,7,135,0,7,224,0,1,128,15,7,0,31,0,0,3,128,30,7,0,60,0,0,31,128,60,7,0,120,0,0,255,0,240,14,0,240,0,7,252,1,224,28,1,224,0,31,224,3,192,56,3,192,0,63,0,15,128,240,7,128,0,28,0,30,1,224,14,0,0,14,15,252,3,192,28,0,0,15,255,248,7,128,120,0,0,7,255,0,15,0,240,0,0,3,128,0,30,0,224,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,7,128,0,7,0,0,0,63,255,0,0,7,128,63,255,255,254,0,0,3,192,127,255,255,240,0,0,1,224,255,240,0,0,0,0,0,241,192,0,0,0,0,0,0,123,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,31,192,0,0,0,0,1,255,63,224,0,0,0,0,3,3,224,112,0,0,0,0,6,1,192,24,0,0,0,0,6,0,192,24,0,0,0,0,12,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,12,0,0,12,0,0,0,0,6,0,0,24,0,0,0,0,6,0,0,24,0,0,0,0,3,0,0,48,0,0,0,0,1,128,0,96,0,0,0,0,1,192,0,224,0,0,0,0,0,224,1,192,0,0,0,0,0,112,3,128,0,0,0,0,0,56,7,0,0,0,0,0,0,12,12,0,0,0,0,0,0,6,56,0,0,0,0,0,0,3,240,0,0,0,0,0,0,1,224,0,0,0,0,0,0,0,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,255,0,0,124,0,0,127,255,255,128,1,254,0,3,255,255,255,192,3,207,0,7,248,0,1,192,7,135,0,31,0,0,0,192,15,7,0,60,0,0,1,192,30,7,0,120,0,0,3,192,56,15,0,240,0,0,63,128,240,30,1,224,0,7,255,1,224,60,7,128,0,31,248,3,192,120,15,0,0,31,0,7,128,240,30,0,0,30,0,15,1,224,60,0,0,15,255,254,3,192,120,0,0,7,255,252,7,128,240,0,0,3,255,248,15,0,240,0,0,0,0,0,30,0,120,0,0,0,0,0,60,0,56,0,0,0,0,0,120,0,28,0,0,0,0,0,240,0,14,0,0,0,0,1,224,0,7,0,0,0,0,3,192,0,3,128,63,255,255,255,128,0,1,192,127,255,255,254,0,0,1,224,255,255,255,252,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,127,255,128,0,0,254,0,1,255,255,255,128,1,254,0,7,255,255,255,192,3,135,0,31,0,0,1,224,7,7,0,60,0,0,0,224,14,7,0,120,0,0,0,224,28,7,0,240,0,0,0,224,56,14,3,192,0,0,1,224,112,28,7,128,0,15,255,192,224,56,15,0,0,31,255,129,192,112,30,0,0,31,224,3,128,240,60,0,0,15,128,7,1,224,240,0,0,7,255,14,3,192,240,0,0,3,255,252,7,128,112,0,0,0,15,248,15,0,56,0,0,0,0,0,30,0,60,0,0,0,0,0,60,0,30,0,0,0,0,0,120,0,14,0,0,0,0,0,240,0,7,0,0,0,0,1,224,0,3,128,60,0,0,3,192,0,1,192,255,255,192,7,128,0,1,225,255,255,255,255,0,0,0,227,192,63,255,254,0,0,0,127,128,0,1,248,0,0,0,63,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,24,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,127,224,0,0,0,252,0,1,255,255,252,0,1,254,0,7,255,255,255,128,3,199,0,31,0,0,127,192,7,135,0,60,0,0,0,224,15,7,0,120,0,0,0,96,30,7,1,240,0,0,0,96,60,14,3,192,0,0,0,224,120,30,7,128,0,0,1,224,240,60,15,0,0,31,255,193,224,120,60,0,0,31,255,131,192,240,120,0,0,15,128,7,129,224,240,0,0,7,252,15,3,192,240,0,0,3,255,254,7,128,112,0,0,0,31,252,15,0,56,0,0,0,0,248,14,0,28,0,0,0,0,0,28,0,30,0,0,0,0,0,56,0,14,0,0,0,0,0,112,0,7,0,0,0,0,0,224,0,3,128,60,0,0,1,192,0,3,192,255,252,0,3,128,0,1,225,255,255,254,15,0,0,0,227,192,63,255,254,0,0,0,127,128,0,63,252,0,0,0,63,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,24,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,255,255,192,0,1,254,0,3,255,255,255,0,3,199,0,7,255,255,255,192,7,135,0,31,0,0,1,192,15,7,0,60,0,0,0,224,30,7,0,120,0,0,0,224,60,14,0,240,0,0,0,224,120,30,1,224,0,0,1,192,240,60,7,128,0,1,255,193,224,120,15,0,0,31,255,3,192,240,30,0,0,31,240,7,129,224,60,0,0,15,128,15,3,192,120,0,0,7,255,254,7,128,240,0,0,3,255,252,15,0,112,0,0,0,3,248,30,0,120,0,0,0,0,0,60,0,60,0,0,0,0,0,120,0,30,0,0,0,0,0,240,0,14,0,0,0,0,1,224,0,7,0,0,0,0,3,192,0,3,128,63,0,0,7,128,0,3,192,127,255,255,255,0,0,1,225,255,255,255,254,0,0,0,227,192,7,255,252,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,28,0,0,0,0,0,0,0,24,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,252,0,0,0,0,0,0,1,254,0,0,255,255,255,0,3,135,0,3,255,255,255,128,7,7,0,7,224,0,7,192,14,7,0,31,0,0,1,192,28,7,0,60,0,0,0,192,56,14,0,120,0,0,1,192,112,30,0,240,0,0,3,192,224,60,1,224,0,0,63,129,192,120,3,192,0,7,255,3,128,240,15,0,0,31,248,7,1,224,30,0,0,31,0,15,3,192,60,0,0,15,255,254,7,128,120,0,0,7,255,252,15,0,240,0,0,3,255,248,30,0,240,0,0,0,0,0,60,0,112,0,0,0,0,0,120,0,56,0,0,0,0,0,240,0,28,0,0,0,0,1,224,0,14,0,0,0,0,3,192,0,7,0,0,0,0,7,128,0,3,128,63,255,255,255,0,0,3,192,127,255,255,254,0,0,1,224,255,255,255,248,0,0,0,243,192,0,0,0,0,0,0,127,128,0,0,0,0,0,0,63,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,12,0,0,0,0,0,0}
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