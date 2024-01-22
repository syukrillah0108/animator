#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: broken heart
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,7,255,192,3,255,224,0,0,31,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,12,0,15,0,1,224,0,24,28,0,7,128,3,192,0,56,28,0,3,192,7,128,0,56,24,0,1,224,7,0,0,56,56,0,0,224,14,0,0,56,63,128,0,112,14,0,0,56,63,128,0,112,12,0,0,63,159,128,0,48,28,0,0,63,195,128,0,56,28,0,0,63,135,0,0,56,28,0,0,3,135,0,0,56,28,0,0,3,134,0,0,56,28,0,0,7,14,0,0,56,28,0,0,7,14,0,0,56,28,0,0,6,28,0,0,56,28,0,0,14,28,0,0,56,28,0,0,14,28,0,0,56,28,0,0,12,63,0,0,56,12,0,0,28,63,0,0,48,14,0,0,31,142,0,0,112,14,0,0,31,206,0,0,112,6,0,0,15,156,0,0,96,7,0,0,3,156,0,0,224,7,128,0,3,184,0,1,224,3,128,0,3,240,0,1,192,1,192,0,3,240,0,3,128,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,112,0,7,192,0,14,0,0,120,0,7,128,0,28,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,12,0,3,192,0,0,0,240,12,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,127,0,0,0,7,255,192,3,255,224,0,0,31,255,240,15,255,248,0,0,62,0,248,15,0,124,0,0,120,0,60,28,0,30,0,0,224,0,28,28,0,7,0,1,192,0,28,56,0,3,128,3,128,0,28,56,0,1,192,7,128,0,28,112,0,1,192,7,0,0,28,126,0,0,224,6,0,0,28,127,0,0,96,14,0,0,31,255,0,0,112,14,0,0,31,231,0,0,112,12,0,0,15,206,0,0,48,12,0,0,1,206,0,0,48,28,0,0,1,140,0,0,56,28,0,0,3,156,0,0,56,28,0,0,3,156,0,0,56,12,0,0,3,56,0,0,48,12,0,0,7,56,0,0,48,12,0,0,7,48,0,0,112,14,0,0,14,126,0,0,112,14,0,0,14,126,0,0,112,6,0,0,15,254,0,0,96,7,0,0,15,220,0,0,224,7,0,0,1,248,0,0,224,3,128,0,1,248,0,1,192,3,128,0,1,240,0,1,192,1,192,0,3,240,0,3,128,1,192,0,3,224,0,3,128,0,224,0,3,224,0,7,0,0,240,0,3,192,0,15,0,0,112,0,7,192,0,14,0,0,56,0,7,128,0,28,0,0,28,0,7,128,0,56,0,0,14,0,15,0,0,112,0,0,7,0,15,0,0,224,0,0,3,192,14,0,3,192,0,0,1,224,12,0,7,128,0,0,0,240,12,0,15,0,0,0,0,120,0,0,30,0,0,0,0,62,0,0,124,0,0,0,0,15,0,0,240,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,255,0,0,0,7,255,192,3,255,224,0,0,15,255,240,15,255,240,0,0,62,0,120,30,0,124,0,0,120,0,60,60,0,30,0,0,240,0,28,56,0,15,0,0,224,0,14,112,0,7,0,1,192,0,14,224,0,3,128,3,128,0,7,224,0,1,192,3,128,0,6,224,0,1,192,7,0,0,15,254,0,0,224,7,0,0,15,254,0,0,224,6,0,0,15,252,0,0,96,14,0,0,0,252,0,0,112,14,0,0,0,252,0,0,112,14,0,0,0,248,0,0,112,14,0,0,1,248,0,0,112,14,0,0,1,240,0,0,112,14,0,0,3,240,0,0,112,14,0,0,3,240,0,0,112,6,0,0,3,224,0,0,96,6,0,0,7,248,0,0,96,7,0,0,7,252,0,0,224,7,0,0,7,248,0,0,224,3,0,0,7,248,0,0,192,3,128,0,0,248,0,1,192,3,128,0,0,240,0,1,192,1,192,0,1,240,0,3,128,1,192,0,1,224,0,3,128,0,224,0,1,224,0,7,0,0,240,0,3,192,0,15,0,0,112,0,3,192,0,14,0,0,56,0,3,128,0,28,0,0,28,0,7,128,0,56,0,0,30,0,7,0,0,120,0,0,15,0,7,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,14,0,3,192,0,0,1,224,12,0,7,128,0,0,0,240,12,0,15,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,0,0,240,0,0,0,0,7,192,3,224,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,255,0,0,0,3,255,192,3,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,30,0,248,0,0,60,0,60,56,0,60,0,0,112,0,14,112,0,14,0,0,224,0,7,224,0,7,0,1,224,0,3,192,0,7,128,1,192,0,3,192,0,3,128,3,128,0,3,128,0,1,192,3,128,0,3,248,0,1,192,3,0,0,7,252,0,0,192,7,0,0,3,248,0,0,224,7,0,0,0,120,0,0,224,7,0,0,0,120,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,240,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,3,192,0,0,224,7,0,0,3,192,0,0,224,3,0,0,3,248,0,0,192,3,128,0,3,240,0,1,192,3,128,0,1,240,0,1,192,3,128,0,0,240,0,1,192,1,192,0,0,224,0,3,128,1,192,0,0,224,0,3,128,0,224,0,1,224,0,7,0,0,224,0,1,192,0,7,0,0,112,0,1,192,0,14,0,0,56,0,3,128,0,28,0,0,60,0,3,128,0,60,0,0,28,0,3,128,0,56,0,0,14,0,7,0,0,112,0,0,7,0,7,0,0,224,0,0,3,128,14,0,1,192,0,0,1,192,14,0,3,128,0,0,0,224,14,0,7,0,0,0,0,120,12,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,0,0,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,248,0,1,192,3,128,0,3,252,0,1,192,3,0,0,3,248,0,0,192,7,0,0,0,56,0,0,224,7,0,0,0,56,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,1,192,0,0,224,3,0,0,3,128,0,0,192,3,128,0,3,240,0,1,192,3,128,0,3,240,0,1,192,3,128,0,0,112,0,1,192,1,192,0,0,112,0,3,128,1,192,0,0,224,0,3,128,0,224,0,0,224,0,7,0,0,224,0,0,192,0,7,0,0,112,0,1,192,0,14,0,0,112,0,1,192,0,14,0,0,56,0,3,128,0,28,0,0,28,0,3,128,0,56,0,0,30,0,7,0,0,120,0,0,14,0,7,0,0,112,0,0,7,0,6,0,0,224,0,0,3,128,14,0,1,192,0,0,1,192,14,0,7,128,0,0,0,240,28,0,15,0,0,0,0,120,12,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,248,0,1,192,3,128,0,3,252,0,1,192,3,0,0,3,248,0,0,192,7,0,0,0,56,0,0,224,7,0,0,0,56,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,1,192,0,0,224,3,0,0,3,128,0,0,192,3,128,0,3,240,0,1,192,3,128,0,3,240,0,1,192,3,128,0,0,112,0,1,192,1,192,0,0,112,0,3,128,1,192,0,0,224,0,3,128,0,224,0,0,224,0,7,0,0,224,0,0,192,0,7,0,0,112,0,1,192,0,14,0,0,112,0,1,192,0,14,0,0,56,0,3,128,0,28,0,0,28,0,3,128,0,56,0,0,30,0,1,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,248,0,1,192,3,128,0,3,252,0,1,192,3,0,0,3,248,0,0,192,7,0,0,0,56,0,0,224,7,0,0,0,56,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,1,192,0,0,224,3,0,0,3,128,0,0,192,3,128,0,3,128,0,1,192,3,128,0,3,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,224,0,1,192,3,128,0,3,224,0,1,192,3,0,0,3,224,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,1,128,0,3,128,1,128,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,1,128,0,3,128,1,128,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,1,128,0,3,128,1,128,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,1,128,0,3,128,1,128,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,1,128,0,3,128,1,128,0,0,0,0,3,128,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,0,0,0,0,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,224,0,1,192,3,128,0,3,224,0,1,192,3,0,0,3,224,0,0,192,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,3,0,0,0,0,0,0,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,248,0,1,192,3,128,0,3,252,0,1,192,3,0,0,3,248,0,0,192,7,0,0,0,56,0,0,224,7,0,0,0,56,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,1,192,0,0,224,3,0,0,3,128,0,0,192,3,128,0,3,128,0,1,192,3,128,0,3,0,0,1,192,3,128,0,0,0,0,1,192,1,192,0,0,0,0,3,128,1,192,0,0,0,0,3,128,0,224,0,0,0,0,7,0,0,224,0,0,0,0,7,0,0,112,0,0,0,0,14,0,0,112,0,0,0,0,14,0,0,56,0,0,0,0,28,0,0,28,0,0,0,0,56,0,0,30,0,0,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,0,0,254,0,0,0,3,255,224,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,128,0,3,128,0,3,128,3,128,0,3,248,0,1,192,3,128,0,3,252,0,1,192,3,0,0,3,248,0,0,192,7,0,0,0,56,0,0,224,7,0,0,0,56,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,1,192,0,0,224,3,0,0,3,128,0,0,192,3,128,0,3,240,0,1,192,3,128,0,3,240,0,1,192,3,128,0,0,112,0,1,192,1,192,0,0,112,0,3,128,1,192,0,0,224,0,3,128,0,224,0,0,224,0,7,0,0,224,0,0,192,0,7,0,0,112,0,1,192,0,14,0,0,112,0,1,192,0,14,0,0,56,0,3,128,0,28,0,0,28,0,3,128,0,56,0,0,30,0,1,0,0,120,0,0,14,0,0,0,0,112,0,0,7,0,0,0,0,224,0,0,3,128,0,0,1,192,0,0,1,192,0,0,7,128,0,0,0,240,0,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,254,0,0,0,3,255,192,7,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,62,0,248,0,0,60,0,30,120,0,60,0,0,120,0,15,240,0,30,0,0,240,0,7,224,0,15,0,0,224,0,3,192,0,7,0,1,192,0,3,128,0,3,128,1,192,0,3,128,0,3,128,3,128,0,3,248,0,1,192,3,128,0,3,248,0,1,192,3,0,0,3,248,0,0,192,7,0,0,0,56,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,224,0,0,224,7,0,0,0,192,0,0,224,7,0,0,1,192,0,0,224,7,0,0,1,192,0,0,224,3,0,0,3,128,0,0,192,3,128,0,3,240,0,1,192,3,128,0,3,240,0,1,192,3,128,0,0,112,0,1,192,1,192,0,0,96,0,3,128,1,192,0,0,224,0,3,128,0,224,0,0,224,0,7,0,0,224,0,1,192,0,7,0,0,112,0,1,192,0,14,0,0,112,0,1,128,0,14,0,0,56,0,3,128,0,28,0,0,28,0,3,128,0,56,0,0,30,0,3,0,0,120,0,0,14,0,7,0,0,112,0,0,7,0,7,0,0,224,0,0,3,128,14,0,1,192,0,0,1,192,14,0,7,128,0,0,0,240,14,0,15,0,0,0,0,120,12,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,128,1,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,192,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,255,0,0,0,3,255,192,3,255,192,0,0,15,255,240,15,255,240,0,0,31,0,124,30,0,248,0,0,60,0,60,56,0,60,0,0,112,0,14,112,0,14,0,0,224,0,7,224,0,7,0,1,224,0,3,192,0,7,128,1,192,0,3,192,0,3,128,3,128,0,3,128,0,1,192,3,128,0,3,248,0,1,192,3,0,0,7,252,0,0,192,7,0,0,3,248,0,0,224,7,0,0,0,120,0,0,224,7,0,0,0,120,0,0,224,7,0,0,0,112,0,0,224,7,0,0,0,240,0,0,224,7,0,0,0,224,0,0,224,7,0,0,1,224,0,0,224,7,0,0,1,192,0,0,224,7,0,0,3,192,0,0,224,7,0,0,3,192,0,0,224,3,0,0,3,248,0,0,192,3,128,0,3,240,0,1,192,3,128,0,1,240,0,1,192,3,128,0,0,240,0,1,192,1,192,0,0,224,0,3,128,1,192,0,0,224,0,3,128,0,224,0,1,224,0,7,0,0,224,0,1,192,0,7,0,0,112,0,1,192,0,14,0,0,56,0,3,128,0,28,0,0,60,0,3,128,0,60,0,0,28,0,3,128,0,56,0,0,14,0,7,0,0,112,0,0,7,0,7,0,0,224,0,0,3,128,14,0,1,192,0,0,1,192,14,0,3,128,0,0,0,224,14,0,7,0,0,0,0,120,12,0,30,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,0,0,240,0,0,0,0,3,192,3,192,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,60,60,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,255,0,0,0,7,255,192,3,255,224,0,0,15,255,240,15,255,240,0,0,62,0,120,30,0,124,0,0,120,0,60,60,0,30,0,0,240,0,28,56,0,15,0,0,224,0,14,112,0,7,0,1,192,0,14,224,0,3,128,3,128,0,7,224,0,1,192,3,128,0,6,224,0,1,192,7,0,0,15,254,0,0,224,7,0,0,15,254,0,0,224,6,0,0,15,252,0,0,96,14,0,0,0,252,0,0,112,14,0,0,0,252,0,0,112,14,0,0,0,248,0,0,112,14,0,0,1,248,0,0,112,14,0,0,1,240,0,0,112,14,0,0,3,240,0,0,112,14,0,0,3,240,0,0,112,6,0,0,3,224,0,0,96,6,0,0,7,248,0,0,96,7,0,0,7,252,0,0,224,7,0,0,7,248,0,0,224,3,0,0,7,248,0,0,192,3,128,0,0,248,0,1,192,3,128,0,0,240,0,1,192,1,192,0,1,240,0,3,128,1,192,0,1,224,0,3,128,0,224,0,1,224,0,7,0,0,240,0,3,192,0,15,0,0,112,0,3,192,0,14,0,0,56,0,3,128,0,28,0,0,28,0,7,128,0,56,0,0,30,0,7,0,0,120,0,0,15,0,7,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,14,0,3,192,0,0,1,224,12,0,7,128,0,0,0,240,12,0,15,0,0,0,0,60,0,0,60,0,0,0,0,30,0,0,120,0,0,0,0,15,0,0,240,0,0,0,0,7,192,3,224,0,0,0,0,1,224,7,128,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,127,0,0,0,7,255,192,3,255,224,0,0,31,255,240,15,255,248,0,0,62,0,248,15,0,124,0,0,120,0,60,28,0,30,0,0,224,0,28,28,0,7,0,1,192,0,28,56,0,3,128,3,128,0,28,56,0,1,192,7,128,0,28,112,0,1,192,7,0,0,28,126,0,0,224,6,0,0,28,127,0,0,96,14,0,0,31,255,0,0,112,14,0,0,31,231,0,0,112,12,0,0,15,206,0,0,48,12,0,0,1,206,0,0,48,28,0,0,1,140,0,0,56,28,0,0,3,156,0,0,56,28,0,0,3,156,0,0,56,12,0,0,3,56,0,0,48,12,0,0,7,56,0,0,48,12,0,0,7,48,0,0,112,14,0,0,14,126,0,0,112,14,0,0,14,126,0,0,112,6,0,0,15,254,0,0,96,7,0,0,15,220,0,0,224,7,0,0,1,248,0,0,224,3,128,0,1,248,0,1,192,3,128,0,1,240,0,1,192,1,192,0,3,240,0,3,128,1,192,0,3,224,0,3,128,0,224,0,3,224,0,7,0,0,240,0,3,192,0,15,0,0,112,0,7,192,0,14,0,0,56,0,7,128,0,28,0,0,28,0,7,128,0,56,0,0,14,0,15,0,0,112,0,0,7,0,15,0,0,224,0,0,3,192,14,0,3,192,0,0,1,224,12,0,7,128,0,0,0,240,12,0,15,0,0,0,0,120,0,0,30,0,0,0,0,62,0,0,124,0,0,0,0,15,0,0,240,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,7,255,192,3,255,224,0,0,31,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,12,0,15,0,1,224,0,24,28,0,7,128,3,192,0,56,28,0,3,192,7,128,0,56,24,0,1,224,7,0,0,56,56,0,0,224,14,0,0,56,63,128,0,112,14,0,0,56,63,128,0,112,12,0,0,63,159,128,0,48,28,0,0,63,195,128,0,56,28,0,0,63,135,0,0,56,28,0,0,3,135,0,0,56,28,0,0,3,134,0,0,56,28,0,0,7,14,0,0,56,28,0,0,7,14,0,0,56,28,0,0,6,28,0,0,56,28,0,0,14,28,0,0,56,28,0,0,14,28,0,0,56,28,0,0,12,63,0,0,56,12,0,0,28,63,0,0,48,14,0,0,31,142,0,0,112,14,0,0,31,206,0,0,112,6,0,0,15,156,0,0,96,7,0,0,3,156,0,0,224,7,128,0,3,184,0,1,224,3,128,0,3,240,0,1,192,1,192,0,3,240,0,3,128,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,112,0,7,192,0,14,0,0,120,0,7,128,0,28,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,12,0,3,192,0,0,0,240,12,0,15,0,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,30,120,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,252,0,0,127,128,0,0,15,255,192,3,255,240,0,0,63,255,240,15,255,248,0,0,124,0,248,15,0,62,0,0,240,0,56,14,0,15,0,1,224,0,56,12,0,7,128,3,128,0,56,28,0,1,192,7,128,0,56,28,0,1,224,7,0,0,56,28,0,0,224,14,0,0,48,31,192,0,112,14,0,0,112,31,192,0,112,28,0,0,112,15,128,0,56,28,0,0,127,131,128,0,56,24,0,0,127,131,128,0,56,24,0,0,3,7,0,0,24,24,0,0,7,7,0,0,24,56,0,0,7,6,0,0,28,24,0,0,6,14,0,0,24,24,0,0,14,14,0,0,24,28,0,0,14,28,0,0,56,28,0,0,12,28,0,0,56,28,0,0,28,31,0,0,56,28,0,0,28,31,0,0,56,12,0,0,31,135,0,0,48,14,0,0,31,142,0,0,112,14,0,0,15,156,0,0,112,7,0,0,3,156,0,0,224,7,0,0,3,184,0,0,224,3,128,0,3,56,0,1,192,3,128,0,7,112,0,1,192,1,192,0,7,224,0,3,128,0,224,0,7,224,0,7,0,0,240,0,7,192,0,15,0,0,120,0,7,192,0,30,0,0,60,0,15,128,0,60,0,0,30,0,15,0,0,120,0,0,15,0,15,0,0,240,0,0,7,128,14,0,1,224,0,0,3,192,28,0,3,192,0,0,1,240,12,0,15,128,0,0,0,120,0,0,30,0,0,0,0,60,0,0,60,0,0,0,0,31,0,0,248,0,0,0,0,7,128,1,224,0,0,0,0,3,224,7,192,0,0,0,0,0,240,15,0,0,0,0,0,0,124,62,0,0,0,0,0,0,62,124,0,0,0,0,0,0,15,240,0,0,0,0,0,0,7,224,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
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