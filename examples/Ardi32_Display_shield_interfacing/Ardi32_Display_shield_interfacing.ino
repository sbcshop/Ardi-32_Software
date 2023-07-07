/**************************************************************************
 * Ardi 2.0 Display Shield interfacing with Ardi-32 board                 *
 * This code test Display, Buttons and JoyStick functionality combine     *
***************************************************************************/

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

// define Display SPI pins 
#define TFT_CS        10
#define TFT_RST       21 
#define TFT_DC        47
#define TFT_MOSI      11
#define TFT_CLK       12

// configure SPI and create instance for display 
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST);

const int BT1 = 9;
const int BT2 = 2;
const int JY_U = 41;
const int JY_R = 42;
const int JY_L = 1; 
const int JY_D = 17;
const int JY_SEL = 18;


float p = 3.1415926;
void setup(void) {
  // Define switch/button pins as INPUT_PULLUP
  pinMode(BT1, INPUT_PULLUP);
  pinMode(BT2, INPUT_PULLUP);
  
  pinMode(JY_U, INPUT_PULLUP);
  pinMode(JY_L, INPUT_PULLUP);
  pinMode(JY_R, INPUT_PULLUP);
  pinMode(JY_D, INPUT_PULLUP);
  pinMode(JY_SEL, INPUT_PULLUP);
  
  Serial.begin(115200); // Initialize serial communication with baudrate = 115200
  tft.init(240, 320);  // Init display controlled by ST7789 and pass resolution of display 320x240 to init function
  // SPI speed defaults to SPI_DEFAULT_FREQ defined in the library, you can override it here
  // Note that speed allowable depends on chip and quality of wiring, if you go too fast, you
  // may end up with a black screen some times, or all the time.
  //tft.setSPISpeed(40000000);
  Serial.println(F("Initialized"));
  
  tft.setTextSize(1);
  tft.setTextWrap(false);
  tft.fillScreen(ST77XX_BLACK);
  tft.setCursor(0, 30);
  tft.setTextSize(3);
  tft.setTextColor(ST77XX_YELLOW);
  tft.println("Hello...");
  delay(500);

  tft.fillScreen(ST77XX_BLACK);
  tft.setCursor(0, 30);
  tft.setTextSize(3);
  tft.setRotation(3);
  tft.setTextColor(ST77XX_CYAN);
  tft.println("2.0 Display Shield");
  delay(1000);
  
  tft.fillScreen(ST77XX_BLACK);
  tft.setCursor(0, 30);
  tft.println("Press Buttons!");
  delay(1000);
}

void loop() {
  
  if( digitalRead(BT1) == 0) {
    tft.fillScreen(ST77XX_BLACK);
    tft.setCursor(0, 30);
    tft.setTextColor(ST77XX_WHITE);
    tft.println("BT1 Pressed!");
    Serial.println("Button 1 Pressed!");
    delay(500);
  }
  else if ( digitalRead(BT2) == 0) {
    tft.fillScreen(ST77XX_BLACK);
    tft.setCursor(0, 30);
    tft.setTextColor(ST77XX_WHITE);
    tft.println("BT2 Pressed!");
    Serial.println("Button 2 Pressed!");
    delay(500);
  }
  else if ( digitalRead(JY_U) == 0) {
    testfastlines(ST77XX_RED, ST77XX_BLUE);
  }
  else if ( digitalRead(JY_L) == 0) {
    testdrawrects(ST77XX_GREEN);
  }
  else if ( digitalRead(JY_R) == 0) {
    testtriangles();
  }
  else if ( digitalRead(JY_D) == 0) {
    testroundrects();
  }
  else if ( digitalRead(JY_SEL) == 0) {
    testdrawcircles(10, ST77XX_WHITE);
  }

  delay(50);
}

void testdrawrects(uint16_t color) {
  tft.fillScreen(ST77XX_BLACK);
  for (int16_t x=0; x < tft.width(); x+=6) {
    tft.drawRect(tft.width()/2 -x/2, tft.height()/2 -x/2 , x, x, color);
  }
}

void testfastlines(uint16_t color1, uint16_t color2) {
  tft.fillScreen(ST77XX_BLACK);
  for (int16_t y=0; y < tft.height(); y+=5) {
    tft.drawFastHLine(0, y, tft.width(), color1);
  }
  for (int16_t x=0; x < tft.width(); x+=5) {
    tft.drawFastVLine(x, 0, tft.height(), color2);
  }
}



void testdrawcircles(uint8_t radius, uint16_t color) {
  tft.fillScreen(ST77XX_BLACK);
  for (int16_t x=0; x < tft.width()+radius; x+=radius*2) {
    for (int16_t y=0; y < tft.height()+radius; y+=radius*2) {
      tft.drawCircle(x, y, radius, color);
    }
  }
}

void testtriangles() {
  tft.fillScreen(ST77XX_BLACK);
  uint16_t color = 0xF800;
  int t;
  int w = tft.width()/2;
  int x = tft.height()-1;
  int y = 0;
  int z = tft.width();
  for(t = 0 ; t <= 15; t++) {
    tft.drawTriangle(w, y, y, x, z, x, color);
    x-=4;
    y+=4;
    z-=4;
    color+=100;
  }
}

void testroundrects() {
  tft.fillScreen(ST77XX_BLACK);
  uint16_t color = 100;
  int i;
  int t;
  for(t = 0 ; t <= 4; t+=1) {
    int x = 0;
    int y = 0;
    int w = tft.width()-2;
    int h = tft.height()-2;
    for(i = 0 ; i <= 16; i+=1) {
      tft.drawRoundRect(x, y, w, h, 5, color);
      x+=2;
      y+=3;
      w-=4;
      h-=6;
      color+=1100;
    }
    color+=100;
  }
}
