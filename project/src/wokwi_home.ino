#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: home
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][512] = {
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,60,124,0,0,0,0,0,0,120,62,0,0,0,0,0,1,240,15,128,0,0,0,0,3,224,7,199,248,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,62,56,0,0,0,240,0,0,31,56,0,0,3,224,0,0,7,184,0,0,7,192,0,0,3,248,0,0,15,0,0,0,1,248,0,0,30,0,0,0,0,120,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,15,128,3,192,0,0,0,0,3,224,15,0,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,236,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,1,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,60,124,0,0,0,0,0,0,120,62,0,0,0,0,0,1,224,31,128,0,0,0,0,3,192,7,199,248,0,0,0,7,128,3,231,248,0,0,0,15,0,1,255,120,0,0,0,60,0,0,254,56,0,0,0,120,0,0,62,56,0,0,0,240,0,0,30,56,0,0,3,224,0,0,15,56,0,0,7,128,0,0,3,248,0,0,15,0,0,0,1,248,0,0,30,0,0,0,0,248,0,0,120,0,0,0,0,126,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,15,128,3,192,0,0,0,0,7,224,15,0,0,0,0,0,3,240,31,0,0,0,0,0,1,248,63,0,0,0,0,0,1,252,127,0,0,0,0,0,1,254,39,0,0,0,0,0,1,252,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,1,255,254,0,1,224,7,0,3,255,255,0,1,224,7,0,3,255,255,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,0,3,128,3,0,1,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,252,0,0,0,0,0,0,120,254,0,0,0,0,0,0,240,127,0,0,0,0,0,1,224,31,128,0,0,0,0,3,192,15,231,248,0,0,0,15,0,7,247,248,0,0,0,30,0,3,254,120,0,0,0,60,0,0,254,120,0,0,0,120,0,0,126,120,0,0,1,224,0,0,62,120,0,0,3,192,0,0,30,120,0,0,7,128,0,0,7,248,0,0,15,0,0,0,3,248,0,0,62,0,0,0,1,252,0,0,120,0,0,0,0,254,0,0,240,0,0,0,0,63,0,1,224,0,0,0,0,31,128,7,192,0,0,0,0,15,224,15,0,0,0,0,0,7,240,31,0,0,0,0,0,3,248,63,0,0,0,0,0,3,252,127,0,0,0,0,0,3,254,39,0,0,0,0,0,3,252,7,0,0,0,0,0,3,224,7,0,0,0,0,0,3,224,7,0,0,0,0,0,3,224,7,0,0,0,0,0,3,224,7,0,0,0,0,0,3,224,7,0,0,0,0,0,3,224,7,0,3,255,252,0,3,224,7,0,3,255,254,0,3,224,7,0,3,255,254,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,0,3,0,6,0,3,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,63,220,0,0,0,0,0,0,113,239,0,0,0,0,0,1,224,127,128,0,0,0,0,3,192,63,192,0,0,0,0,7,128,31,231,248,0,0,0,15,0,15,127,252,0,0,0,28,0,3,190,124,0,0,0,120,0,1,254,124,0,0,0,240,0,0,254,124,0,0,1,224,0,0,126,124,0,0,3,192,0,0,62,124,0,0,7,0,0,0,14,124,0,0,30,0,0,0,7,124,0,0,60,0,0,0,3,252,0,0,120,0,0,0,1,254,0,0,240,0,0,0,0,255,128,1,224,0,0,0,0,59,192,7,128,0,0,0,0,31,224,15,0,0,0,0,0,15,240,31,0,0,0,0,0,15,248,63,0,0,0,0,0,15,254,127,0,0,0,0,0,14,254,39,0,0,0,0,0,14,254,7,0,0,0,0,0,14,224,7,0,0,0,0,0,14,224,7,0,0,0,0,0,14,224,7,0,0,0,0,0,14,224,7,0,0,0,0,0,14,224,7,0,0,0,0,0,14,224,7,0,7,255,248,0,14,224,7,0,7,255,252,0,14,224,7,0,7,255,252,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,0,6,0,28,0,14,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,63,252,0,0,0,0,0,0,127,142,0,0,0,0,0,0,243,199,0,0,0,0,0,1,192,227,192,0,0,0,0,3,128,121,224,0,0,0,0,15,0,60,255,252,0,0,0,30,0,30,127,252,0,0,0,60,0,15,30,124,0,0,0,120,0,3,142,124,0,0,0,224,0,1,206,124,0,0,1,192,0,0,254,124,0,0,7,128,0,0,126,124,0,0,15,0,0,0,60,124,0,0,30,0,0,0,30,124,0,0,60,0,0,0,7,124,0,0,120,0,0,0,3,142,0,0,224,0,0,0,1,231,128,1,192,0,0,0,0,243,192,7,128,0,0,0,0,121,224,15,0,0,0,0,0,60,240,31,0,0,0,0,0,62,56,63,0,0,0,0,0,63,252,127,0,0,0,0,0,59,254,39,0,0,0,0,0,57,254,7,0,0,0,0,0,56,224,7,0,0,0,0,0,56,224,7,0,0,0,0,0,56,224,7,0,0,0,0,0,56,224,7,0,0,0,0,0,56,224,7,0,0,0,0,0,56,224,7,0,15,255,240,0,56,224,7,0,15,255,240,0,56,224,7,0,15,255,248,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,0,12,0,56,0,56,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,31,240,0,0,0,0,0,0,63,252,0,0,0,0,0,0,127,254,0,0,0,0,0,0,255,7,0,0,0,0,0,1,231,131,128,0,0,0,0,3,193,193,192,0,0,0,0,7,0,224,240,0,0,0,0,14,0,120,127,252,0,0,0,28,0,60,63,254,0,0,0,120,0,30,30,126,0,0,0,240,0,15,14,126,0,0,1,224,0,7,142,126,0,0,3,192,0,1,206,126,0,0,7,128,0,0,236,126,0,0,15,0,0,0,112,126,0,0,28,0,0,0,60,126,0,0,56,0,0,0,30,126,0,0,112,0,0,0,15,15,0,0,224,0,0,0,7,135,128,3,192,0,0,0,1,195,192,7,128,0,0,0,0,224,224,15,0,0,0,0,0,240,112,31,0,0,0,0,0,252,60,63,0,0,0,0,0,255,254,127,0,0,0,0,0,239,254,39,0,0,0,0,0,231,254,7,0,0,0,0,0,224,224,7,0,0,0,0,0,224,224,7,0,0,0,0,0,224,224,7,0,0,0,0,0,224,224,7,0,0,0,0,0,224,224,7,0,0,0,0,0,224,224,7,0,31,255,224,0,224,224,7,0,31,255,224,0,224,224,7,0,31,255,224,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,0,24,0,96,0,224,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,63,248,0,0,0,0,0,0,127,254,0,0,0,0,0,0,255,255,0,0,0,0,0,1,254,7,128,0,0,0,0,3,207,1,192,0,0,0,0,7,131,128,224,0,0,0,0,15,1,192,112,0,0,0,0,30,0,224,63,254,0,0,0,60,0,120,31,254,0,0,0,112,0,60,14,126,0,0,0,224,0,30,14,126,0,0,1,192,0,15,14,126,0,0,3,128,0,7,140,126,0,0,7,0,0,3,204,126,0,0,14,0,0,1,224,126,0,0,60,0,0,0,112,126,0,0,120,0,0,0,56,110,0,0,240,0,0,0,28,7,0,1,224,0,0,0,15,3,128,3,192,0,0,0,7,129,192,7,128,0,0,0,3,192,240,15,0,0,0,0,3,224,120,31,0,0,0,0,3,240,60,63,0,0,0,0,3,255,254,127,0,0,0,0,3,159,254,39,0,0,0,0,3,159,254,7,0,0,0,0,3,128,224,7,0,0,0,0,3,128,224,7,0,0,0,0,3,128,224,7,0,0,0,0,3,128,224,7,0,0,0,0,3,128,224,7,0,0,0,0,3,128,224,7,0,63,255,128,3,128,224,7,0,63,255,192,3,128,224,7,0,63,255,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,0,48,1,192,3,128,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,63,252,0,0,0,0,0,0,127,255,0,0,0,0,0,0,255,255,128,0,0,0,0,1,252,3,192,0,0,0,0,3,142,1,224,0,0,0,0,15,7,0,240,0,0,0,0,30,3,128,120,0,0,0,0,60,1,192,31,254,0,0,0,120,0,224,31,254,0,0,0,240,0,120,14,118,0,0,1,224,0,60,12,118,0,0,3,192,0,30,12,118,0,0,7,128,0,15,12,118,0,0,15,0,0,7,140,118,0,0,30,0,0,3,192,118,0,0,60,0,0,1,224,118,0,0,120,0,0,0,240,103,0,0,240,0,0,0,56,7,128,1,224,0,0,0,28,3,192,3,192,0,0,0,14,1,224,7,128,0,0,0,7,0,240,15,0,0,0,0,7,128,120,31,0,0,0,0,7,192,60,63,0,0,0,0,7,255,254,119,0,0,0,0,7,127,255,39,0,0,0,0,7,63,254,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,127,255,0,7,0,224,7,0,127,255,128,7,0,224,7,0,127,255,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,0,96,3,128,7,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,0,255,255,0,0,0,0,0,1,255,255,192,0,0,0,0,3,248,1,224,0,0,0,0,7,28,0,240,0,0,0,0,14,14,0,120,0,0,0,0,28,7,128,60,0,0,0,0,56,3,192,31,255,0,0,0,112,1,224,15,255,0,0,0,224,0,240,12,247,0,0,1,192,0,120,12,231,0,0,3,128,0,60,12,231,0,0,7,0,0,30,12,231,0,0,14,0,0,15,12,231,0,0,28,0,0,7,128,231,0,0,56,0,0,3,192,231,0,0,112,0,0,1,224,103,0,0,224,0,0,0,240,7,128,1,192,0,0,0,56,3,192,3,128,0,0,0,28,1,224,7,0,0,0,0,30,0,240,15,0,0,0,0,31,0,120,31,0,0,0,0,31,128,60,63,0,0,0,0,29,255,254,119,0,0,0,0,28,255,255,39,0,0,0,0,28,127,254,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,127,254,0,28,0,224,7,0,255,255,0,28,0,224,7,0,255,255,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,0,255,255,128,0,0,0,0,1,255,255,192,0,0,0,0,3,248,1,224,0,0,0,0,7,60,0,240,0,0,0,0,14,30,0,120,0,0,0,0,28,15,0,60,0,0,0,0,56,7,128,31,255,0,0,0,112,3,192,15,255,0,0,0,224,1,224,12,231,0,0,1,192,0,112,12,227,0,0,3,128,0,56,12,227,0,0,7,0,0,28,12,227,0,0,14,0,0,14,12,227,0,0,28,0,0,7,0,227,0,0,56,0,0,3,128,227,0,0,112,0,0,1,192,103,0,0,224,0,0,0,224,3,128,1,192,0,0,0,112,3,192,3,128,0,0,0,56,0,224,7,0,0,0,0,60,0,112,15,0,0,0,0,62,0,56,31,0,0,0,0,63,128,28,63,0,0,0,0,59,255,254,119,0,0,0,0,57,255,255,39,0,0,0,0,56,255,254,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,255,252,0,56,0,224,7,0,255,254,0,56,0,224,7,0,255,254,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,255,254,0,0,0,0,0,1,255,255,128,0,0,0,0,3,255,255,192,0,0,0,0,7,248,0,224,0,0,0,0,15,60,0,112,0,0,0,0,30,30,0,56,0,0,0,0,60,15,0,28,0,0,0,0,120,7,128,31,255,0,0,0,112,3,192,15,255,0,0,0,224,1,224,12,227,0,0,1,192,0,240,12,227,0,0,3,128,0,120,12,227,0,0,7,0,0,60,12,227,0,0,14,0,0,30,12,227,0,0,28,0,0,15,0,227,0,0,56,0,0,7,128,227,0,0,112,0,0,3,192,99,0,0,224,0,0,0,224,3,128,1,192,0,0,0,112,3,192,3,128,0,0,0,56,0,224,7,0,0,0,0,60,0,112,15,0,0,0,0,62,0,56,31,0,0,0,0,63,0,28,63,0,0,0,0,59,255,254,119,0,0,0,0,57,255,255,39,0,0,0,0,56,255,254,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,255,252,0,56,0,224,7,1,255,254,0,56,0,224,7,1,255,254,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,1,192,14,0,56,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,127,254,0,0,0,0,0,0,255,255,128,0,0,0,0,1,255,255,192,0,0,0,0,3,248,1,224,0,0,0,0,7,60,0,240,0,0,0,0,14,30,0,120,0,0,0,0,28,15,0,60,0,0,0,0,56,7,128,31,255,0,0,0,112,3,192,15,255,0,0,0,224,0,224,12,231,0,0,1,192,0,112,12,227,0,0,3,128,0,56,12,227,0,0,7,0,0,28,12,227,0,0,14,0,0,14,12,227,0,0,28,0,0,7,0,227,0,0,56,0,0,3,128,227,0,0,112,0,0,1,192,103,0,0,224,0,0,0,224,3,128,1,192,0,0,0,112,3,192,3,128,0,0,0,56,0,224,7,0,0,0,0,62,0,112,15,0,0,0,0,63,0,56,31,0,0,0,0,63,128,28,63,0,0,0,0,59,255,254,119,0,0,0,0,57,255,255,39,0,0,0,0,56,255,254,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,0,0,0,56,0,224,7,0,255,252,0,56,0,224,7,0,255,254,0,56,0,224,7,0,255,254,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,0,192,14,0,56,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,127,252,0,0,0,0,0,0,255,255,0,0,0,0,0,1,255,255,128,0,0,0,0,3,248,1,192,0,0,0,0,7,158,0,224,0,0,0,0,15,15,0,112,0,0,0,0,30,7,128,60,0,0,0,0,60,3,192,31,255,0,0,0,120,1,224,15,255,0,0,0,240,0,240,12,247,0,0,1,224,0,120,12,231,0,0,3,192,0,60,12,231,0,0,7,128,0,30,12,231,0,0,15,0,0,15,12,231,0,0,30,0,0,7,128,231,0,0,60,0,0,1,192,103,0,0,120,0,0,0,224,103,0,0,240,0,0,0,112,7,128,1,224,0,0,0,56,3,192,3,128,0,0,0,28,1,224,7,0,0,0,0,30,0,240,15,0,0,0,0,31,0,120,31,0,0,0,0,31,192,60,63,0,0,0,0,31,255,254,119,0,0,0,0,28,255,255,39,0,0,0,0,28,127,254,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,0,0,0,28,0,224,7,0,127,254,0,28,0,224,7,0,255,255,0,28,0,224,7,0,255,255,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,0,224,7,0,28,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,63,252,0,0,0,0,0,0,127,255,0,0,0,0,0,0,255,255,128,0,0,0,0,1,252,3,192,0,0,0,0,3,142,1,224,0,0,0,0,7,7,128,240,0,0,0,0,14,3,192,120,0,0,0,0,28,1,224,63,254,0,0,0,56,0,240,31,254,0,0,0,112,0,120,14,118,0,0,1,224,0,60,12,118,0,0,3,192,0,30,12,118,0,0,7,128,0,15,12,118,0,0,15,0,0,3,140,118,0,0,30,0,0,1,192,118,0,0,60,0,0,0,224,118,0,0,120,0,0,0,112,103,0,0,240,0,0,0,60,7,128,1,224,0,0,0,30,3,192,3,192,0,0,0,15,1,224,7,128,0,0,0,7,128,240,15,0,0,0,0,7,192,120,31,0,0,0,0,7,224,60,63,0,0,0,0,7,255,254,119,0,0,0,0,7,127,254,39,0,0,0,0,7,63,254,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,0,0,0,7,0,224,7,0,63,255,0,7,0,224,7,0,127,255,128,7,0,224,7,0,127,255,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,0,112,3,128,7,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,31,248,0,0,0,0,0,0,63,254,0,0,0,0,0,0,127,255,0,0,0,0,0,0,254,7,128,0,0,0,0,1,199,3,192,0,0,0,0,7,131,193,224,0,0,0,0,15,1,224,240,0,0,0,0,30,0,240,127,254,0,0,0,60,0,120,31,254,0,0,0,120,0,60,14,126,0,0,0,240,0,14,14,126,0,0,1,224,0,7,14,126,0,0,3,128,0,3,142,126,0,0,7,0,0,1,236,126,0,0,14,0,0,0,240,126,0,0,28,0,0,0,120,126,0,0,56,0,0,0,60,126,0,0,240,0,0,0,30,15,0,1,224,0,0,0,15,7,128,3,192,0,0,0,3,129,192,7,128,0,0,0,1,192,224,15,0,0,0,0,1,224,120,31,0,0,0,0,1,248,60,63,0,0,0,0,1,255,254,127,0,0,0,0,1,223,254,39,0,0,0,0,1,207,254,7,0,0,0,0,1,192,224,7,0,0,0,0,1,192,224,7,0,0,0,0,1,192,224,7,0,0,0,0,1,192,224,7,0,0,0,0,1,192,224,7,0,0,0,0,1,192,224,7,0,31,255,192,1,192,224,7,0,63,255,192,1,192,224,7,0,63,255,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,0,56,0,192,1,192,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,63,254,0,0,0,0,0,0,119,15,0,0,0,0,0,1,227,199,128,0,0,0,0,3,193,227,192,0,0,0,0,7,128,241,224,0,0,0,0,15,0,120,127,252,0,0,0,30,0,28,63,252,0,0,0,56,0,14,30,124,0,0,0,112,0,7,142,124,0,0,0,224,0,3,206,124,0,0,3,192,0,1,238,124,0,0,7,128,0,0,252,124,0,0,15,0,0,0,56,124,0,0,30,0,0,0,28,124,0,0,60,0,0,0,15,126,0,0,112,0,0,0,7,143,0,0,224,0,0,0,3,199,128,3,192,0,0,0,1,227,192,7,128,0,0,0,0,241,224,15,0,0,0,0,0,120,112,31,0,0,0,0,0,124,56,63,0,0,0,0,0,127,254,127,0,0,0,0,0,119,254,39,0,0,0,0,0,115,254,7,0,0,0,0,0,112,224,7,0,0,0,0,0,112,224,7,0,0,0,0,0,112,224,7,0,0,0,0,0,112,224,7,0,0,0,0,0,112,224,7,0,0,0,0,0,112,224,7,0,15,255,224,0,112,224,7,0,31,255,240,0,112,224,7,0,31,255,240,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,0,28,0,112,0,112,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,252,0,0,0,0,0,0,123,222,0,0,0,0,0,0,241,239,0,0,0,0,0,1,224,247,128,0,0,0,0,3,192,121,192,0,0,0,0,7,0,28,247,252,0,0,0,14,0,15,127,252,0,0,0,60,0,7,190,124,0,0,0,120,0,3,222,124,0,0,0,240,0,1,238,124,0,0,1,224,0,0,126,124,0,0,3,128,0,0,62,124,0,0,7,0,0,0,30,124,0,0,30,0,0,0,15,124,0,0,60,0,0,0,7,252,0,0,120,0,0,0,1,222,0,0,240,0,0,0,0,231,128,1,192,0,0,0,0,123,192,7,128,0,0,0,0,61,224,15,0,0,0,0,0,30,240,31,0,0,0,0,0,31,120,63,0,0,0,0,0,31,254,127,0,0,0,0,0,29,254,39,0,0,0,0,0,28,254,7,0,0,0,0,0,28,224,7,0,0,0,0,0,28,224,7,0,0,0,0,0,28,224,7,0,0,0,0,0,28,224,7,0,0,0,0,0,28,224,7,0,0,0,0,0,28,224,7,0,7,255,248,0,28,224,7,0,15,255,248,0,28,224,7,0,15,255,248,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,0,14,0,24,0,28,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,224,0,0,0,0,0,0,15,248,0,0,0,0,0,0,63,252,0,0,0,0,0,0,120,254,0,0,0,0,0,0,240,127,0,0,0,0,0,1,192,63,192,0,0,0,0,7,128,15,231,248,0,0,0,15,0,7,247,248,0,0,0,30,0,3,254,120,0,0,0,60,0,1,254,120,0,0,0,240,0,0,126,120,0,0,1,224,0,0,62,120,0,0,3,192,0,0,30,120,0,0,7,128,0,0,15,120,0,0,15,0,0,0,7,248,0,0,60,0,0,0,1,252,0,0,120,0,0,0,0,254,0,0,240,0,0,0,0,127,0,1,224,0,0,0,0,63,192,7,128,0,0,0,0,15,224,15,0,0,0,0,0,7,240,31,0,0,0,0,0,7,248,63,0,0,0,0,0,7,252,127,0,0,0,0,0,7,254,39,0,0,0,0,0,7,252,7,0,0,0,0,0,7,224,7,0,0,0,0,0,7,224,7,0,0,0,0,0,7,224,7,0,0,0,0,0,7,224,7,0,0,0,0,0,7,224,7,0,0,0,0,0,7,224,7,0,3,255,252,0,7,224,7,0,7,255,254,0,7,224,7,0,7,255,254,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,0,7,0,14,0,7,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,3,128,0,0,0,0,0,0,3,224,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,60,124,0,0,0,0,0,0,248,63,0,0,0,0,0,1,224,31,128,0,0,0,0,3,192,15,199,248,0,0,0,7,128,3,231,248,0,0,0,31,0,1,254,120,0,0,0,60,0,0,254,56,0,0,0,120,0,0,62,56,0,0,0,240,0,0,30,56,0,0,3,192,0,0,15,56,0,0,7,128,0,0,7,248,0,0,15,0,0,0,1,248,0,0,30,0,0,0,0,248,0,0,120,0,0,0,0,126,0,0,240,0,0,0,0,63,0,1,224,0,0,0,0,15,128,3,192,0,0,0,0,7,224,15,0,0,0,0,0,3,240,31,0,0,0,0,0,1,248,63,0,0,0,0,0,1,252,127,0,0,0,0,0,1,254,39,0,0,0,0,0,1,252,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,0,0,0,0,1,224,7,0,1,255,254,0,1,224,7,0,3,255,255,0,1,224,7,0,3,255,255,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,0,3,128,7,0,1,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,15,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,60,124,0,0,0,0,0,0,120,62,0,0,0,0,0,1,240,15,128,0,0,0,0,3,192,7,199,248,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,62,56,0,0,0,240,0,0,31,56,0,0,3,224,0,0,7,184,0,0,7,128,0,0,3,248,0,0,15,0,0,0,1,248,0,0,30,0,0,0,0,120,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,15,128,3,192,0,0,0,0,3,224,15,0,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,236,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,1,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,0,1,128,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,1,128,0,0,0,0,0,0,3,192,0,0,0,0,0,0,7,240,0,0,0,0,0,0,31,248,0,0,0,0,0,0,62,124,0,0,0,0,0,0,120,30,0,0,0,0,0,0,240,15,128,0,0,0,0,3,224,7,199,240,0,0,0,7,128,3,231,248,0,0,0,15,0,0,255,56,0,0,0,62,0,0,126,56,0,0,0,120,0,0,63,56,0,0,0,240,0,0,15,56,0,0,1,224,0,0,7,248,0,0,7,192,0,0,3,248,0,0,15,0,0,0,0,248,0,0,30,0,0,0,0,124,0,0,124,0,0,0,0,62,0,0,240,0,0,0,0,31,0,1,224,0,0,0,0,7,128,3,192,0,0,0,0,3,224,15,128,0,0,0,0,1,240,31,0,0,0,0,0,0,248,63,0,0,0,0,0,0,252,127,0,0,0,0,0,0,254,39,0,0,0,0,0,0,238,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,0,0,0,0,224,7,0,0,255,255,0,0,224,7,0,1,255,255,128,0,224,7,0,1,255,255,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,0,1,192,3,128,0,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,7,255,255,255,255,255,255,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
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