#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <animator.h>

#define SCREEN_I2C_ADDR 0x3C // or 0x3D
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

#define FRAME_DELAY (42)
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)

#define FRAME_COUNT (28)
String pesan;

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);
}

int frame = 0;
void loop() {
  if (Serial.available()) {
    pesan = Serial.readString();
  }
  display.clearDisplay();

  if (pesan == "activity"){
    display.drawBitmap(32, 0, activity[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "aircraft"){
    display.drawBitmap(32, 0, aircraft[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "alarm_clock"){
    display.drawBitmap(32, 0, alarm_clock[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "angel"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "beating_hearts"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  
  }else if (pesan == "birthday_cake"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "blushing"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "bow"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "broken_heart"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "car"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "cassette"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "cat_meow"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "confused"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "cool"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "crying"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "customer_insight"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "day_night_weather"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "deadlift"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "design"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "disappointed"){
     display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "embarrassed"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "energy_drink"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "eye"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "face_id"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "family"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "fire_in_my_heart"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "flow"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "fly_elephant"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "ghost"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "gift_heart"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "handshake"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "heart"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "heart_in_hand"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "heart_with_arrow"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "home"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "in_love"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "kawaii"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "kiss_panda"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "laughing"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "letter_with_hearts"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "lips"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "maneki"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "mug"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);  

  }else if (pesan == "nerd"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "ok_hand"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "open_sign"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "page_under_construction"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "palm_scan"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "piggy_bank"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "poo"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "puzzled"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "qr_code"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "reddit"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "rocket"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "shocker"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "silent"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "sleeping"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "tea"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "tongue_out"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "torrential_rain_weather"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "vomited"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "walk"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "wash_your_hands"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "wifi_search"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "wink"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "yummy"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }

  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);
}