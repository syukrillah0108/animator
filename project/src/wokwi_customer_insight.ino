#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: customer insight
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,224,0,0,0,0,0,0,31,240,0,0,0,0,0,0,60,120,0,0,8,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,112,28,0,1,227,192,0,0,112,28,0,1,192,224,0,0,112,24,0,3,128,224,0,0,120,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,1,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,247,192,0,0,0,127,254,3,255,128,0,0,0,127,255,135,190,0,0,0,0,252,7,239,0,0,0,0,1,224,1,254,0,0,0,0,3,192,0,124,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,3,240,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,248,7,24,7,0,0,28,31,252,7,24,7,0,0,28,15,220,15,28,14,0,0,24,6,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,14,3,224,1,254,0,0,28,14,3,192,0,255,0,0,30,28,1,240,3,231,131,0,15,252,0,127,255,195,255,192,7,248,0,31,255,0,255,240,0,192,0,7,248,0,120,112,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,56,0,0,0,7,0,0,224,24,0,0,0,63,0,0,96,56,0,0,0,127,192,0,96,56,0,0,0,241,192,0,112,120,0,0,1,192,224,0,61,240,0,0,1,192,96,0,31,224,0,0,1,128,112,0,15,192,0,0,1,128,112,0,0,0,0,0,1,192,96,0,0,0,0,0,1,192,224,0,0,0,0,0,0,241,192,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,28,56,0,0,0,0,0,0,56,28,0,0,30,0,0,0,48,12,0,0,127,128,0,0,48,12,0,0,255,192,0,0,48,12,0,1,225,224,0,0,56,28,0,1,192,224,0,0,56,28,0,1,128,96,0,0,31,248,0,1,128,96,0,0,15,240,0,1,128,96,0,0,7,240,0,1,192,224,0,0,0,112,224,1,225,224,0,0,0,63,254,1,255,192,0,0,0,63,255,131,255,128,0,0,0,252,7,231,30,0,0,0,1,224,1,254,0,0,0,0,3,192,0,124,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,3,224,56,14,14,3,0,0,7,248,56,14,28,3,0,0,15,252,120,7,28,7,0,0,28,31,248,7,24,7,0,0,28,15,252,7,24,7,0,0,24,15,12,15,28,14,0,0,56,6,14,62,15,156,0,0,24,14,7,252,7,252,0,0,28,14,3,224,1,252,0,0,30,28,3,192,0,254,0,0,15,252,1,240,3,231,128,0,7,248,0,127,255,195,223,128,1,224,0,31,255,1,255,224,0,0,0,7,248,0,249,224,0,0,0,6,0,0,224,112,0,0,0,6,0,0,224,48,0,0,0,14,0,0,224,56,0,0,0,127,0,0,224,56,0,0,0,255,128,0,224,48,0,0,1,227,192,0,224,112,0,0,1,192,224,0,120,240,0,0,3,128,224,0,63,224,0,0,3,128,224,0,31,128,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,1,193,192,0,0,0,0,0,1,247,192,0,0,0,0,0,0,255,128,0,0,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,224,0,0,0,0,0,0,7,248,0,0,0,0,0,0,15,252,0,0,0,0,0,0,30,30,0,0,0,0,0,0,28,14,0,0,0,0,0,0,24,6,0,0,14,0,0,0,24,6,0,0,63,128,0,0,24,6,0,0,127,192,0,0,28,14,0,0,224,224,0,0,30,28,0,1,192,96,0,0,15,252,0,1,192,112,0,0,7,248,0,1,192,112,0,0,1,248,0,1,192,112,0,0,0,56,224,1,192,96,0,0,0,31,254,0,224,224,0,0,0,63,255,129,255,192,0,0,0,252,7,227,255,128,0,0,1,224,1,255,31,0,0,0,3,192,0,126,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,3,240,56,30,14,3,128,0,15,248,56,14,14,3,0,0,15,60,56,14,28,3,0,0,28,31,248,7,28,7,0,0,24,15,248,7,24,7,0,0,56,15,28,7,24,7,0,0,56,14,12,15,28,14,0,0,24,14,14,62,15,156,0,0,28,14,7,252,7,252,0,0,30,60,3,224,1,252,0,0,15,248,3,192,0,254,0,0,7,240,1,240,3,239,0,0,0,128,0,127,255,199,158,0,0,0,0,31,255,3,255,128,0,0,0,15,248,1,255,192,0,0,0,14,0,0,224,224,0,0,0,14,0,1,192,96,0,0,0,62,0,1,192,112,0,0,0,255,0,1,192,112,0,0,1,255,128,1,192,112,0,0,3,131,128,1,192,96,0,0,3,129,192,0,224,224,0,0,7,1,192,0,255,192,0,0,7,1,192,0,63,128,0,0,7,1,192,0,31,0,0,0,3,1,192,0,0,0,0,0,3,131,128,0,0,0,0,0,1,255,128,0,0,0,0,0,0,255,0,0,0,0,0,0,0,124,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,248,0,0,0,0,0,0,3,254,0,0,0,0,0,0,7,158,0,0,0,0,0,0,14,7,0,0,0,0,0,0,14,3,0,0,0,0,0,0,12,3,0,0,0,0,0,0,12,3,128,0,0,0,0,0,14,3,0,0,31,128,0,0,14,7,0,0,127,224,0,0,7,142,0,0,112,224,0,0,3,254,0,0,224,112,0,0,1,252,0,0,192,112,0,0,0,56,0,0,192,48,0,0,0,28,224,0,192,48,0,0,0,31,254,0,224,112,0,0,0,63,255,128,224,112,0,0,0,252,7,225,249,224,0,0,1,224,1,243,255,192,0,0,3,192,0,127,159,128,0,0,7,3,240,62,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,1,224,56,28,7,3,128,0,7,240,56,28,7,3,128,0,15,248,56,30,14,3,128,0,28,28,56,14,14,3,0,0,24,15,248,14,28,3,0,0,56,15,248,7,28,7,0,0,56,15,24,7,24,7,0,0,56,14,28,7,24,7,0,0,24,14,12,15,28,14,0,0,28,28,14,62,15,156,0,0,15,252,7,252,7,252,0,0,7,240,3,224,1,248,0,0,3,224,3,192,0,252,0,0,0,0,1,240,3,254,0,0,0,0,0,127,255,207,0,0,0,0,0,31,255,7,254,0,0,0,0,15,248,3,255,128,0,0,0,28,0,1,227,192,0,0,0,28,0,1,193,192,0,0,0,252,0,3,128,192,0,0,3,254,0,3,128,224,0,0,7,223,0,3,128,224,0,0,7,7,0,3,128,192,0,0,14,3,128,3,129,192,0,0,14,3,128,1,227,192,0,0,14,3,128,0,255,128,0,0,14,3,128,0,127,0,0,0,7,3,128,0,0,0,0,0,7,143,0,0,0,0,0,0,3,254,0,0,0,0,0,0,1,252,0,0,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,254,0,0,0,0,0,0,1,255,0,0,0,0,0,0,3,199,128,0,0,0,0,0,3,129,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,7,1,192,0,0,0,0,0,3,131,128,0,15,128,0,0,3,239,128,0,63,224,0,0,1,255,0,0,63,240,0,0,0,126,0,0,112,112,0,0,0,14,0,0,96,56,0,0,0,14,224,0,224,56,0,0,0,31,254,0,224,56,0,0,0,63,255,128,224,56,0,0,0,252,7,224,224,56,0,0,1,224,1,241,248,112,0,0,3,192,0,123,255,224,0,0,7,3,240,63,159,192,0,0,15,15,252,31,7,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,1,192,56,24,7,3,0,0,7,240,56,28,7,3,0,0,15,248,56,28,7,3,128,0,28,60,56,28,7,3,128,0,56,14,120,30,14,3,128,0,56,15,248,14,14,3,0,0,56,15,248,14,28,3,0,0,56,14,56,7,28,7,0,0,56,14,24,7,24,7,0,0,28,28,28,7,24,7,0,0,31,248,12,15,28,14,0,0,15,248,14,62,15,156,0,0,3,224,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,248,0,0,0,0,1,240,3,248,0,0,0,0,0,127,255,220,0,0,0,0,0,31,255,14,48,0,0,0,0,31,248,7,254,0,0,0,0,56,0,3,255,0,0,0,0,120,0,3,135,128,0,0,3,248,0,7,3,128,0,0,7,252,0,7,1,128,0,0,14,30,0,6,1,192,0,0,28,14,0,7,1,128,0,0,28,6,0,7,3,128,0,0,28,7,0,7,131,128,0,0,28,7,0,3,255,0,0,0,28,6,0,1,254,0,0,0,14,14,0,0,124,0,0,0,15,188,0,0,0,0,0,0,7,252,0,0,0,0,0,0,1,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,127,128,0,0,0,0,0,0,255,192,0,0,0,0,0,1,225,224,0,0,0,0,0,1,192,224,0,0,0,0,0,1,128,96,0,0,0,0,0,1,128,96,0,0,0,0,0,1,192,96,0,0,0,0,0,1,192,224,0,0,0,0,0,0,225,224,0,0,0,0,0,0,255,192,0,0,0,0,0,0,127,128,0,15,192,0,0,0,31,0,0,31,240,0,0,0,7,0,0,60,112,0,0,0,7,224,0,112,56,0,0,0,31,254,0,112,24,0,0,0,63,255,128,96,28,0,0,0,252,7,224,96,28,0,0,1,224,1,240,112,24,0,0,3,192,0,120,240,56,0,0,7,3,240,61,252,112,0,0,15,15,252,31,255,240,0,0,14,14,30,15,15,192,0,0,28,28,14,14,0,0,1,192,28,28,7,7,0,0,7,240,24,24,7,7,0,0,15,248,56,24,7,3,0,0,28,60,56,28,7,3,0,0,56,28,56,28,7,3,128,0,56,15,248,28,7,3,128,0,56,15,248,30,14,3,128,0,56,15,248,14,14,3,0,0,56,12,56,14,28,3,0,0,28,28,56,7,28,7,0,0,31,248,24,7,24,7,0,0,15,240,28,7,24,7,0,0,3,224,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,240,0,0,0,0,1,240,3,240,0,0,0,0,0,127,255,248,0,0,0,0,0,63,255,28,0,0,0,0,0,63,248,31,240,0,0,0,0,112,0,15,252,0,0,0,7,240,0,7,254,0,0,0,15,240,0,14,15,0,0,0,31,248,0,14,7,0,0,0,56,60,0,12,7,0,0,0,56,28,0,28,3,0,0,0,48,12,0,12,7,0,0,0,48,12,0,14,7,0,0,0,48,12,0,15,14,0,0,0,56,28,0,7,254,0,0,0,60,56,0,3,248,0,0,0,31,248,0,0,96,0,0,0,15,240,0,0,0,0,0,0,1,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,224,0,0,0,0,0,0,56,240,0,0,0,0,0,0,112,56,0,0,0,0,0,0,96,56,0,0,0,0,0,0,224,56,0,0,0,0,0,0,224,56,0,0,0,0,0,0,96,56,0,0,0,0,0,0,112,56,0,0,0,0,0,0,120,240,0,0,0,0,0,0,63,224,0,0,0,0,0,0,15,192,0,0,0,0,0,0,3,128,0,1,0,0,0,0,3,128,0,15,224,0,0,0,3,224,0,31,248,0,0,0,31,254,0,60,56,0,0,0,63,255,128,56,28,0,0,0,252,7,224,48,28,0,0,1,224,1,240,112,12,0,0,3,192,0,120,48,28,0,0,7,3,240,60,112,28,0,0,15,15,252,29,248,28,3,224,14,14,30,15,254,248,15,240,28,28,14,15,159,240,31,248,28,28,7,7,7,224,28,28,24,24,7,7,0,0,56,12,56,24,7,3,0,0,56,14,56,28,7,3,0,0,56,15,248,28,7,3,128,0,56,15,248,28,7,3,128,0,56,28,56,30,14,3,128,0,28,28,56,14,14,3,0,0,31,248,56,14,28,3,0,0,7,240,56,7,28,7,0,0,1,192,24,7,24,7,0,0,0,0,28,7,24,7,0,0,0,0,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,240,0,0,0,0,1,240,3,224,0,0,0,0,0,127,255,240,0,0,0,0,0,127,255,120,0,0,0,0,0,103,248,56,0,0,0,0,2,224,0,31,240,0,0,0,31,224,0,31,248,0,0,0,63,224,0,30,60,0,0,0,120,240,0,28,28,0,0,0,96,112,0,56,14,0,0,0,224,56,0,56,14,0,0,0,224,56,0,56,14,0,0,0,224,56,0,56,14,0,0,0,224,56,0,28,28,0,0,0,112,112,0,30,60,0,0,0,125,240,0,15,248,0,0,0,63,224,0,7,240,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,128,0,0,0,0,0,0,7,240,0,0,0,0,0,0,15,248,0,0,0,0,0,0,30,60,0,0,0,0,0,0,28,12,0,0,0,0,0,0,56,14,0,0,0,0,0,0,56,14,0,0,0,0,0,0,56,14,0,0,0,0,0,0,56,14,0,0,0,0,0,0,28,28,0,0,0,0,0,0,31,124,0,0,0,0,0,0,15,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,192,0,0,0,0,0,0,0,192,0,0,0,0,0,0,1,224,0,1,128,0,0,0,31,254,0,7,240,0,0,0,63,255,128,15,248,0,0,0,252,7,224,30,60,0,0,1,224,1,240,56,28,0,0,3,192,0,120,56,14,7,224,7,3,240,60,56,14,15,248,15,15,252,28,56,14,31,124,14,14,30,14,248,12,28,28,28,28,14,15,252,28,56,14,28,28,7,7,223,120,56,14,24,24,7,7,15,248,56,15,248,24,7,3,3,224,56,15,248,28,7,3,0,0,56,30,248,28,7,3,128,0,30,60,56,28,7,3,128,0,15,248,56,30,14,3,128,0,7,240,56,14,14,3,0,0,0,128,56,14,28,3,0,0,0,0,56,7,28,7,0,0,0,0,24,7,24,7,0,0,0,0,28,7,24,7,0,0,0,0,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,240,0,0,0,0,1,240,3,224,0,0,0,0,0,255,255,224,0,0,0,0,0,255,255,224,0,0,0,0,1,199,248,112,0,0,0,0,63,192,0,123,0,0,0,0,127,128,0,63,192,0,0,0,243,192,0,63,240,0,0,1,192,224,0,120,112,0,0,1,192,224,0,112,56,0,0,1,128,96,0,96,56,0,0,1,128,96,0,224,24,0,0,1,128,224,0,96,24,0,0,1,192,224,0,112,56,0,0,0,225,192,0,112,120,0,0,0,255,192,0,63,240,0,0,0,63,0,0,31,224,0,0,0,8,0,0,15,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,240,0,0,0,0,0,0,3,252,0,0,0,0,0,0,7,254,0,0,0,0,0,0,7,7,0,0,0,0,0,0,14,7,0,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,7,0,0,0,0,0,0,7,7,0,0,0,0,0,0,7,254,0,0,0,0,0,0,3,252,0,0,0,0,0,0,0,240,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,240,0,0,0,0,0,0,31,254,0,0,0,0,0,0,63,255,128,0,192,0,128,0,252,7,224,7,248,7,240,1,224,1,240,15,252,15,248,3,192,0,120,14,28,30,60,7,3,240,60,28,14,28,14,15,15,252,28,24,6,56,14,14,14,30,14,24,6,56,14,28,28,14,14,56,6,56,15,156,28,7,7,252,14,24,15,248,24,7,7,252,14,28,31,248,24,7,3,143,252,31,124,56,28,7,3,7,248,15,248,56,28,7,3,131,240,3,224,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,0,0,56,7,28,7,0,0,0,0,24,7,24,7,0,0,0,0,28,7,24,7,0,0,0,0,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,240,0,0,0,0,1,240,3,224,0,0,0,0,1,255,255,192,0,0,0,0,3,223,255,192,0,0,0,0,127,135,249,192,0,0,0,0,255,0,0,224,0,0,0,3,255,0,0,127,0,0,0,3,131,128,0,127,128,0,0,7,1,128,0,255,192,0,0,7,1,192,0,224,224,0,0,7,1,192,1,192,96,0,0,7,1,192,1,192,112,0,0,7,1,128,1,192,112,0,0,3,131,128,1,192,96,0,0,3,255,0,1,192,224,0,0,0,254,0,0,225,224,0,0,0,120,0,0,255,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,62,0,0,0,0,0,0,0,255,0,0,0,0,0,0,1,255,128,0,0,0,0,0,3,193,192,0,0,0,0,0,3,129,192,0,0,0,0,0,3,0,192,0,0,0,0,0,3,0,224,0,0,0,0,0,3,128,192,0,0,0,0,0,3,129,192,0,0,0,0,0,1,195,192,0,0,0,0,0,1,255,128,0,0,0,0,0,0,255,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,56,0,0,0,0,0,0,0,248,0,0,0,1,224,0,31,254,0,0,0,7,248,0,63,255,128,0,0,15,252,0,252,7,224,0,0,30,30,1,224,1,240,0,192,28,14,3,192,0,120,3,248,24,6,7,3,240,60,7,252,24,6,15,15,252,28,14,30,24,7,14,14,30,14,28,14,28,15,252,28,14,14,28,7,30,31,252,28,7,7,28,7,15,252,120,24,7,7,252,7,7,248,56,24,7,3,252,6,1,224,56,28,7,3,254,14,0,0,56,28,7,3,143,252,0,0,56,28,7,3,135,252,0,0,56,30,14,3,129,240,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,0,0,56,7,28,7,0,0,0,0,24,7,24,7,0,0,0,0,28,7,24,7,0,0,0,0,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,240,0,0,0,0,1,240,3,224,0,0,0,0,3,255,255,192,0,0,0,0,103,31,255,128,0,0,0,3,254,7,251,128,0,0,0,7,254,0,1,192,0,0,0,15,14,0,1,192,0,0,0,14,7,0,0,254,0,0,0,12,7,0,1,255,0,0,0,12,3,0,3,199,128,0,0,12,3,0,3,129,192,0,0,14,7,0,3,1,192,0,0,14,15,0,7,1,192,0,0,7,254,0,7,1,192,0,0,3,252,0,3,1,192,0,0,1,248,0,3,129,192,0,0,0,0,0,3,199,128,0,0,0,0,0,1,255,0,0,0,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,31,0,0,0,0,0,0,0,63,192,0,0,0,0,0,0,127,224,0,0,0,0,0,0,224,224,0,0,0,0,0,0,224,112,0,0,0,0,0,0,192,112,0,0,0,0,0,1,192,48,0,0,0,0,0,0,192,112,0,0,0,0,0,0,224,112,0,0,0,0,0,0,240,224,0,0,0,0,0,0,127,224,0,0,0,0,0,0,63,128,0,0,0,0,0,0,30,0,0,0,0,0,0,0,28,0,0,0,1,240,0,0,28,0,0,0,3,248,0,0,248,0,0,0,7,254,0,31,254,0,0,0,14,14,0,63,255,128,0,0,12,7,0,252,7,224,0,0,28,7,1,224,1,240,0,0,28,7,3,192,0,120,0,0,28,7,7,3,240,60,0,240,12,7,143,15,252,28,3,248,14,15,254,14,30,14,7,252,7,254,252,28,14,14,14,14,3,248,60,28,7,7,12,7,0,240,24,24,7,7,28,7,0,0,56,24,7,3,188,7,0,0,56,28,7,3,252,7,0,0,56,28,7,3,252,7,0,0,56,28,7,3,142,14,0,0,56,30,14,3,135,254,0,0,56,14,14,3,3,248,0,0,56,14,28,3,1,240,0,0,56,7,28,7,0,0,0,0,24,7,24,7,0,0,0,0,28,7,24,7,0,0,0,0,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,3,224,1,248,0,0,0,0,3,192,0,240,0,0,0,0,7,240,3,224,0,0,0,0,15,127,255,192,0,0,0,7,254,31,255,0,0,0,0,15,252,7,255,0,0,0,0,30,60,0,3,0,0,0,0,28,14,0,3,128,0,0,0,56,14,0,3,248,0,0,0,56,14,0,3,252,0,0,0,56,14,0,7,254,0,0,0,24,14,0,7,7,0,0,0,28,28,0,14,7,0,0,0,30,60,0,14,3,0,0,0,15,248,0,12,3,128,0,0,3,240,0,14,3,0,0,0,0,0,0,14,7,0,0,0,0,0,0,7,15,0,0,0,0,0,0,7,254,0,0,0,0,0,0,1,252,0,0,0,0,0,0,0,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,3,128,0,0,0,0,0,0,15,224,0,0,0,0,0,0,31,240,0,0,0,0,0,0,56,120,0,0,0,0,0,0,112,56,0,0,0,0,0,0,112,28,0,0,0,0,0,0,112,28,0,0,0,0,0,0,112,28,0,0,0,0,0,0,112,24,0,0,0,0,0,0,56,56,0,0,0,0,0,0,63,240,0,0,0,0,0,0,31,240,0,0,0,32,0,0,7,192,0,0,1,252,0,0,14,0,0,0,3,254,0,0,14,0,0,0,7,143,0,0,238,0,0,0,7,3,128,31,254,0,0,0,14,3,128,63,255,128,0,0,14,3,128,252,7,224,0,0,14,3,129,224,1,240,0,0,6,3,131,192,0,120,0,0,7,7,199,3,240,60,0,0,7,223,255,15,252,28,0,0,3,254,254,14,30,14,0,64,0,248,60,28,14,14,3,248,0,0,28,28,7,7,7,252,0,0,24,24,7,7,15,30,0,0,56,24,7,3,14,7,0,0,56,28,7,3,28,7,0,0,56,28,7,3,252,7,0,0,56,28,7,3,252,7,0,0,56,30,14,3,252,7,0,0,56,14,14,3,14,14,0,0,56,14,28,3,15,190,0,0,56,7,28,7,7,252,0,0,24,7,24,7,1,240,0,0,28,7,24,7,0,0,0,0,12,15,28,14,0,0,0,0,14,62,15,156,0,0,0,0,7,252,7,252,0,0,0,0,7,224,1,248,0,0,0,0,7,192,0,240,0,0,0,0,15,240,3,224,0,0,0,15,254,127,255,192,0,0,0,31,252,31,255,0,0,0,0,60,120,7,254,0,0,0,0,56,56,0,6,0,0,0,0,112,28,0,7,0,0,0,0,112,28,0,7,192,0,0,0,112,28,0,7,240,0,0,0,112,28,0,15,252,0,0,0,56,56,0,30,28,0,0,0,60,120,0,28,14,0,0,0,31,240,0,24,14,0,0,0,15,224,0,56,6,0,0,0,0,0,0,24,6,0,0,0,0,0,0,28,14,0,0,0,0,0,0,28,30,0,0,0,0,0,0,15,252,0,0,0,0,0,0,7,248,0,0,0,0,0,0,3,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,3,240,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,60,0,0,0,0,0,0,30,14,0,0,0,0,0,0,28,6,0,0,0,0,0,0,28,7,0,0,0,0,0,0,28,7,0,0,0,0,0,0,28,6,0,0,0,0,0,0,28,14,0,0,0,0,0,0,15,30,0,0,0,126,0,0,7,252,0,0,0,255,0,0,3,248,0,0,1,231,128,0,3,192,0,0,3,129,192,0,3,0,0,0,3,129,192,0,231,0,0,0,3,0,192,31,255,0,0,0,3,0,192,63,255,128,0,0,3,0,192,252,7,224,0,0,3,129,193,224,1,240,0,0,1,195,227,192,0,120,0,0,1,255,255,3,240,60,0,0,0,126,63,15,252,28,0,0,0,24,30,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,1,240,0,0,56,24,7,3,7,248,0,0,56,28,7,3,15,252,0,0,56,28,7,3,142,14,0,0,56,28,7,3,156,7,0,0,56,30,14,3,252,7,0,0,56,14,14,3,252,7,0,0,56,14,28,3,156,7,0,0,56,7,28,7,28,6,0,0,24,7,24,7,14,14,0,0,28,7,24,7,7,252,0,0,12,15,28,14,3,248,0,0,14,62,15,156,0,224,0,0,7,252,7,252,0,0,0,0,7,224,1,248,0,0,0,2,15,192,0,240,0,0,0,31,253,240,3,224,0,0,0,63,248,127,255,192,0,0,0,120,240,31,255,0,0,0,0,112,112,7,252,0,0,0,0,224,56,0,12,0,0,0,0,224,56,0,14,0,0,0,0,224,56,0,15,0,0,0,0,224,56,0,15,224,0,0,0,112,112,0,31,240,0,0,0,125,240,0,60,120,0,0,0,63,224,0,112,56,0,0,0,15,128,0,112,24,0,0,0,0,0,0,112,28,0,0,0,0,0,0,112,28,0,0,0,0,0,0,112,24,0,0,0,0,0,0,56,56,0,0,0,0,0,0,60,240,0,0,0,0,0,0,31,240,0,0,0,0,0,0,15,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,254,0,0,0,0,0,0,3,255,0,0,0,0,0,0,3,135,128,0,0,0,0,0,7,3,128,0,0,0,0,0,7,1,128,0,0,0,0,0,6,1,128,0,0,0,0,0,6,1,128,0,0,14,0,0,7,3,128,0,0,63,128,0,7,131,128,0,0,127,192,0,3,255,0,0,0,240,224,0,1,254,0,0,0,224,112,0,1,252,0,0,1,192,112,0,1,192,0,0,1,192,112,0,225,128,0,0,1,192,112,31,255,128,0,0,0,192,112,63,255,128,0,0,0,224,240,252,7,224,0,0,0,127,241,224,1,240,0,0,0,127,255,192,0,120,0,0,0,31,31,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,131,240,0,0,56,28,7,3,135,252,0,0,56,30,14,3,143,28,0,0,56,14,14,3,156,14,0,0,56,14,28,3,252,6,0,0,56,7,28,7,248,7,0,0,24,7,24,7,28,7,0,0,28,7,24,7,28,6,0,0,12,15,28,14,28,14,0,0,14,62,15,156,15,28,0,0,15,252,7,252,7,252,0,14,31,224,1,248,3,240,0,63,255,192,0,240,0,0,0,127,249,240,3,224,0,0,0,240,224,127,255,192,0,0,0,192,112,31,255,0,0,0,1,192,112,7,248,0,0,0,1,192,112,0,24,0,0,0,1,192,112,0,28,0,0,0,1,192,112,0,28,0,0,0,0,224,224,0,31,128,0,0,0,127,224,0,127,192,0,0,0,127,192,0,113,224,0,0,0,31,0,0,224,112,0,0,0,0,0,0,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,192,112,0,0,0,0,0,0,224,112,0,0,0,0,0,0,113,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,31,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,127,128,0,0,0,0,0,0,255,192,0,0,0,0,0,1,193,224,0,0,0,0,0,1,192,224,0,0,0,0,0,1,128,224,0,0,7,192,0,3,128,96,0,0,31,224,0,1,128,224,0,0,63,240,0,1,192,224,0,0,56,56,0,1,225,192,0,0,112,24,0,0,255,192,0,0,112,24,0,0,127,0,0,0,96,28,0,0,252,0,0,0,112,24,0,224,224,0,0,0,112,56,31,255,192,0,0,0,56,120,63,255,192,0,0,0,63,252,252,7,224,0,0,0,15,255,224,1,240,0,0,0,3,15,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,129,224,0,0,56,14,14,3,7,248,0,0,56,14,28,3,15,252,0,0,56,7,28,7,222,28,0,0,24,7,24,7,252,14,0,0,28,7,24,7,248,6,0,0,12,15,28,14,56,6,0,0,14,62,15,156,24,6,0,62,31,252,7,252,28,14,0,127,255,224,1,248,30,28,0,255,243,192,0,240,15,252,1,193,225,240,3,224,7,248,1,128,224,127,255,192,1,224,3,128,224,31,255,0,0,0,3,128,224,7,248,0,0,0,3,128,224,0,48,0,0,0,1,128,224,0,48,0,0,0,1,193,192,0,56,0,0,0,0,255,128,0,126,0,0,0,0,127,0,0,255,128,0,0,0,28,0,1,231,128,0,0,0,0,0,3,129,192,0,0,0,0,0,3,128,192,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,224,0,0,0,0,0,3,128,192,0,0,0,0,0,3,129,192,0,0,0,0,0,1,227,192,0,0,0,0,0,0,255,128,0,0,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,192,0,0,0,0,0,0,63,224,0,0,0,0,0,0,120,240,0,0,0,0,0,0,112,112,0,0,3,240,0,0,224,56,0,0,15,248,0,0,224,56,0,0,15,60,0,0,224,56,0,0,28,14,0,0,224,56,0,0,24,14,0,0,112,112,0,0,24,6,0,0,120,240,0,0,56,6,0,0,63,224,0,0,24,14,0,0,63,192,0,0,28,14,0,224,112,0,0,0,14,60,31,254,112,0,0,0,15,254,63,255,224,0,0,0,3,255,252,7,224,0,0,0,0,7,224,1,240,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,128,0,0,56,7,28,7,7,240,0,0,24,7,24,7,15,248,0,0,28,7,24,7,254,60,0,0,28,15,28,15,252,28,0,126,30,62,15,156,120,14,0,255,255,252,7,252,56,14,1,239,243,224,1,248,56,14,3,131,195,192,0,240,56,14,3,1,193,240,3,224,28,28,3,1,192,127,255,192,31,60,7,0,192,31,255,0,15,248,3,1,192,7,248,0,3,240,3,129,192,0,96,0,0,0,3,195,128,0,96,0,0,0,1,255,128,0,112,0,0,0,0,254,0,0,252,0,0,0,0,24,0,3,254,0,0,0,0,0,0,3,207,0,0,0,0,0,0,7,3,128,0,0,0,0,0,6,3,128,0,0,0,0,0,14,3,128,0,0,0,0,0,14,1,128,0,0,0,0,0,6,3,128,0,0,0,0,0,7,3,128,0,0,0,0,0,7,143,0,0,0,0,0,0,3,254,0,0,0,0,0,0,0,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,192,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,1,252,0,0,60,60,0,0,3,254,0,0,56,28,0,0,7,143,0,0,48,12,0,0,15,7,0,0,48,12,0,0,14,3,0,0,48,12,0,0,14,3,128,0,56,28,0,0,14,3,128,0,60,60,0,0,14,3,0,0,31,248,0,0,15,7,0,0,31,240,0,0,7,143,0,224,31,192,0,0,3,255,31,254,56,0,0,0,1,255,63,255,240,0,0,0,0,3,252,7,240,0,0,0,0,3,224,1,240,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,0,0,56,7,28,7,0,0,0,0,24,7,24,7,0,0,0,0,28,7,24,7,7,224,0,252,28,15,28,15,143,248,1,254,126,62,15,159,254,120,3,207,255,252,7,252,248,28,7,3,195,224,1,248,56,12,7,3,131,192,0,240,56,14,6,1,129,240,3,224,48,14,6,1,128,127,255,192,56,12,7,1,128,31,255,0,56,28,7,3,128,7,248,0,30,60,3,135,0,0,224,0,15,248,3,255,0,0,224,0,7,224,0,252,0,0,224,0,0,0,0,0,0,1,240,0,0,0,0,0,0,7,252,0,0,0,0,0,0,15,190,0,0,0,0,0,0,14,14,0,0,0,0,0,0,28,7,0,0,0,0,0,0,28,7,0,0,0,0,0,0,28,7,0,0,0,0,0,0,28,7,0,0,0,0,0,0,14,14,0,0,0,0,0,0,15,30,0,0,0,0,0,0,7,252,0,0,0,0,0,0,3,248,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,240,0,0,0,126,0,0,7,252,0,0,1,255,0,0,15,190,0,0,1,199,128,0,14,14,0,0,3,129,192,0,28,7,0,0,3,1,192,0,28,7,0,0,7,1,192,0,28,7,0,0,7,1,192,0,28,7,0,0,3,1,192,0,28,14,0,0,3,129,192,0,15,30,0,0,1,199,128,0,15,252,0,0,1,255,128,224,15,248,0,0,0,127,159,254,28,64,0,0,0,1,255,255,184,0,0,0,0,1,252,7,248,0,0,0,0,1,224,1,240,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,0,0,56,7,28,7,0,0,0,0,24,7,24,7,0,0,1,248,28,7,24,7,0,0,3,254,124,15,28,14,0,0,7,143,254,62,15,159,135,224,7,7,199,252,7,255,223,240,14,3,131,224,1,249,254,120,14,3,131,192,0,240,120,28,14,3,129,240,3,224,48,28,14,3,128,127,255,192,48,12,15,7,0,31,255,0,48,12,7,143,0,7,248,0,48,28,3,254,0,1,192,0,56,28,1,252,0,1,192,0,28,56,0,0,0,1,192,0,31,248,0,0,0,7,224,0,7,224,0,0,0,15,248,0,0,0,0,0,0,30,120,0,0,0,0,0,0,56,28,0,0,0,0,0,0,56,12,0,0,0,0,0,0,56,14,0,0,0,0,0,0,48,14,0,0,0,0,0,0,56,12,0,0,0,0,0,0,56,28,0,0,0,0,0,0,30,60,0,0,0,0,0,0,15,248,0,0,0,0,0,0,7,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,112,0,0,0,127,128,0,1,252,0,0,0,243,192,0,3,254,0,0,1,192,224,0,7,135,0,0,1,192,224,0,7,3,128,0,1,128,96,0,14,3,128,0,1,128,96,0,14,3,128,0,1,128,96,0,14,3,128,0,1,192,224,0,6,3,128,0,0,225,192,0,7,7,0,0,0,255,192,0,7,255,0,0,0,63,192,224,7,254,0,0,0,13,223,254,15,248,0,0,0,0,255,255,158,0,0,0,0,0,252,7,252,0,0,0,0,1,224,1,248,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,0,0,56,7,28,7,0,0,1,248,24,7,24,7,0,0,7,252,124,7,24,7,0,0,7,159,252,15,28,14,0,0,14,7,238,62,15,158,0,0,12,7,7,252,7,255,1,0,12,7,3,224,1,255,207,224,28,3,3,192,0,241,255,240,12,7,1,240,3,224,252,120,14,7,0,127,255,192,120,56,15,14,0,31,255,0,112,28,7,252,0,7,248,0,112,28,3,248,0,3,128,0,112,28,0,64,0,3,128,0,112,28,0,0,0,3,128,0,56,56,0,0,0,15,192,0,62,248,0,0,0,31,240,0,31,240,0,0,0,60,240,0,7,192,0,0,0,112,56,0,0,0,0,0,0,112,24,0,0,0,0,0,0,96,24,0,0,0,0,0,0,96,24,0,0,0,0,0,0,112,24,0,0,0,0,0,0,112,56,0,0,0,0,0,0,56,112,0,0,0,0,0,0,31,240,0,0,0,0,0,0,15,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,63,192,0,0,0,0,0,0,127,224,0,0,126,0,0,0,112,240,0,1,255,0,0,0,224,112,0,3,199,128,0,0,192,48,0,3,131,128,0,0,192,48,0,7,1,192,0,0,192,48,0,7,1,192,0,0,224,112,0,7,1,192,0,0,240,240,0,7,1,192,0,0,127,224,0,3,131,128,0,0,63,192,0,3,199,128,0,0,15,224,224,3,255,0,0,0,0,255,254,7,254,0,0,0,0,127,255,142,0,0,0,0,0,252,7,252,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,1,240,56,7,28,7,0,0,7,248,56,7,24,7,0,0,15,253,252,7,24,7,0,0,14,15,252,15,28,14,0,0,28,7,206,62,15,156,0,0,28,7,7,252,7,254,0,0,28,7,3,224,1,255,0,0,28,7,3,192,0,247,199,192,28,14,1,240,3,225,255,224,14,30,0,127,255,192,255,240,7,252,0,31,255,0,120,56,3,248,0,7,248,0,112,24,0,224,0,3,128,0,112,28,0,0,0,3,0,0,112,28,0,0,0,3,0,0,112,24,0,0,0,31,128,0,112,56,0,0,0,63,224,0,56,120,0,0,0,121,224,0,31,240,0,0,0,224,112,0,15,224,0,0,0,224,48,0,3,0,0,0,0,224,56,0,0,0,0,0,0,224,56,0,0,0,0,0,0,224,48,0,0,0,0,0,0,224,112,0,0,0,0,0,0,120,240,0,0,0,0,0,0,63,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,224,0,0,0,0,0,0,60,240,0,0,62,0,0,0,112,56,0,0,255,0,0,0,96,56,0,1,255,128,0,0,224,56,0,1,193,192,0,0,224,24,0,3,129,192,0,0,96,56,0,3,128,192,0,0,112,56,0,3,0,224,0,0,120,240,0,3,128,192,0,0,63,224,0,3,129,192,0,0,31,224,0,1,195,192,0,0,0,224,224,3,255,128,0,0,0,127,254,7,255,0,0,0,0,127,255,143,28,0,0,0,0,252,7,254,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,0,56,14,28,3,0,0,3,240,56,7,28,7,0,0,15,252,120,7,24,7,0,0,14,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,28,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,6,3,192,0,255,128,0,28,14,1,240,3,227,207,192,15,60,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,56,0,0,0,3,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,31,128,0,112,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,56,120,0,0,0,224,240,0,63,240,0,0,0,192,112,0,15,224,0,0,1,192,112,0,3,0,0,0,1,192,112,0,0,0,0,0,0,192,112,0,0,0,0,0,0,224,112,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,0,0,63,240,0,0,0,0,0,0,56,112,0,0,60,0,0,0,112,56,0,0,127,0,0,0,112,24,0,0,255,128,0,0,96,24,0,1,193,192,0,0,96,24,0,3,128,192,0,0,112,24,0,3,128,224,0,0,112,56,0,3,128,224,0,0,60,240,0,3,128,224,0,0,31,240,0,3,128,224,0,0,15,224,0,1,193,192,0,0,0,112,224,1,255,128,0,0,0,127,254,3,255,0,0,0,0,127,255,135,62,0,0,0,0,252,7,238,0,0,0,0,1,224,1,252,0,0,0,0,3,192,0,120,0,0,0,0,7,3,240,60,0,0,0,0,15,15,252,28,0,0,0,0,14,14,30,14,0,0,0,0,28,28,14,14,0,0,0,0,28,28,7,7,0,0,0,0,24,24,7,7,0,0,0,0,56,24,7,3,0,0,0,0,56,28,7,3,0,0,0,0,56,28,7,3,128,0,0,0,56,28,7,3,128,0,0,0,56,30,14,3,128,0,0,0,56,14,14,3,0,0,0,192,56,14,28,3,0,0,7,248,56,7,28,7,0,0,15,252,120,7,24,7,0,0,30,31,252,7,24,7,0,0,28,15,252,15,28,14,0,0,24,7,14,62,15,156,0,0,24,6,7,252,7,252,0,0,24,6,3,224,1,254,0,0,28,14,3,192,0,255,0,0,28,30,1,240,3,227,195,0,15,252,0,127,255,193,255,224,7,248,0,31,255,0,255,240,3,240,0,7,248,0,120,120,0,0,0,7,0,0,112,56,0,0,0,7,0,0,96,24,0,0,0,7,0,0,96,24,0,0,0,63,128,0,96,24,0,0,0,127,192,0,112,56,0,0,0,241,224,0,120,120,0,0,0,224,224,0,63,240,0,0,1,192,112,0,31,224,0,0,1,192,112,0,7,192,0,0,1,192,112,0,0,0,0,0,1,192,112,0,0,0,0,0,0,224,224,0,0,0,0,0,0,241,224,0,0,0,0,0,0,127,192,0,0,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
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