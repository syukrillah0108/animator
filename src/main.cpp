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

  if (pesan == "/jantungan"){
    display.drawBitmap(32, 0, activity[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/kapal"){
    display.drawBitmap(32, 0, aircraft[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/alarmclock"){
    display.drawBitmap(32, 0, alarm_clock[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/angel"){
    display.drawBitmap(32, 0, angel[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/beatinghearts"){
    display.drawBitmap(32, 0, beating_hearts[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  
  }else if (pesan == "/bolu"){
    display.drawBitmap(32, 0, birthday_cake[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/senyum_palsu"){
    display.drawBitmap(32, 0, blushing[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/bow"){
    display.drawBitmap(32, 0, bow[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/paeh_hate"){
    display.drawBitmap(32, 0, broken_heart[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/car"){
    display.drawBitmap(32, 0, car[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/cassette"){
    display.drawBitmap(32, 0, cassette[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/meng"){
    display.drawBitmap(32, 0, cat_meow[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/baed"){
    display.drawBitmap(32, 0, confused[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/so-keren"){
    display.drawBitmap(32, 0, cool[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/ceurik"){
    display.drawBitmap(32, 0, crying[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  // }else if (pesan == "/ide"){
    // display.drawBitmap(32, 0, customer_insight[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/cuaca-bandung"){
    display.drawBitmap(32, 0, day_night_weather[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/beban_hidup"){
    display.drawBitmap(32, 0, deadlift[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/ngalukis"){
    display.drawBitmap(32, 0, design[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/diselingkuhin_ayank"){
     display.drawBitmap(32, 0, disappointed[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/terkejot"){
    display.drawBitmap(32, 0, embarrassed[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/diputusin_ayank(malemnya)"){
    display.drawBitmap(32, 0, energy_drink[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/dajjal"){
    display.drawBitmap(32, 0, eye[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/scan_benget "){
    display.drawBitmap(32, 0, face_id[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/KB(keluarga_bencana)"){
    display.drawBitmap(32, 0, family[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/beulem_hate"){
    display.drawBitmap(32, 0, fire_in_my_heart[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/alur"){
    display.drawBitmap(32, 0, flow[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/gajah_terbang"){
    display.drawBitmap(32, 0, fly_elephant[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/jurig"){
    display.drawBitmap(32, 0, ghost[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/buat_dia"){
    display.drawBitmap(32, 0, gift_heart[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/pinjam_dulu_seratus"){
    display.drawBitmap(32, 0, handshake[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/cinta"){
    display.drawBitmap(32, 0, heart[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/salaman_cinta"){
    display.drawBitmap(32, 0, heart_in_hand[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/panah_asmara"){
    display.drawBitmap(32, 0, heart_with_arrow[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/imah"){
    display.drawBitmap(32, 0, home[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/wahhhh"){
    display.drawBitmap(32, 0, in_love[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/kawaii"){
    display.drawBitmap(32, 0, kawaii[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/kiss_panda"){
    display.drawBitmap(32, 0, kiss_panda[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/ngakakkkk"){
    display.drawBitmap(32, 0, laughing[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/surat_cinta"){
    display.drawBitmap(32, 0, letter_with_hearts[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/biwirrr"){
    display.drawBitmap(32, 0, lips[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/ucing_cindo"){
    display.drawBitmap(32, 0, maneki[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/ngopii"){
    display.drawBitmap(32, 0, mug[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);  

  }else if (pesan == "/anies"){
    display.drawBitmap(32, 0, nerd[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/okehhh"){
    display.drawBitmap(32, 0, ok_hand[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/dahbukaaa"){
    display.drawBitmap(32, 0, open_sign[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/Tetrisss"){
    display.drawBitmap(32, 0, page_under_construction[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/celengan_celeng"){
    display.drawBitmap(32, 0, piggy_bank[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/tokai"){
    display.drawBitmap(32, 0, poo[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/bingungg"){
    display.drawBitmap(32, 0, puzzled[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/qr_code"){
    display.drawBitmap(32, 0, qr_code[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/robot"){
    display.drawBitmap(32, 0, reddit[frame], FRAME_WIDTH, FRAME_HEIGHT, 1); 

  }else if (pesan == "/roket"){
    display.drawBitmap(32, 0, rocket[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/reuwass"){
    display.drawBitmap(32, 0, shocker[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/jempe_siah"){
    display.drawBitmap(32, 0, silent[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/sarekeun"){
    display.drawBitmap(32, 0, sleeping[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/ntehh"){
    display.drawBitmap(32, 0, tea[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/belelan_ahhk"){
    display.drawBitmap(32, 0, tongue_out[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/hujan_ngabred"){
    display.drawBitmap(32, 0, torrential_rain_weather[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/rujit_ihk"){
    display.drawBitmap(32, 0, vomited[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/lelempangan"){
    display.drawBitmap(32, 0, walk[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/cuci_tangan"){
    display.drawBitmap(32, 0, wash_your_hands[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/wifi"){
    display.drawBitmap(32, 0, wifi_search[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/kekedipan"){
    display.drawBitmap(32, 0, wink[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }else if (pesan == "/enaknyooo!!"){
    display.drawBitmap(32, 0, yummy[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);

  }

  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);
}