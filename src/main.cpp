#include <Adafruit_GFX.h>
#include <XTronical_ST7735.h> // Hardware-specific library
#include <SPI.h>

/*
LED -   3-5V
SCK -   TFT-SCLK  // SPI clock PA5
SDA -   TFT_MOSI  // SPI Data PA7
A0  -   TFT_DC    // register select PB7 PB9 PB11
Reset - TFT_RST   // reset PB6 PB8 PB10
CS  -   TFT_CS    // SPI Display enable (Chip select) NSS PA4
GND -   GND
VCC -   3V3
*/

// set up pins we are going to use to talk to the screen
#define TFT_SCLK PA5        // SPI clock (SCK)
#define TFT_MOSI PA7        // SPI Data
#define TFT_CS PA4          // Display enable (Chip select), if not enabled will not talk on SPI bus
#define TFT_RST PB6         // Display reset pin
#define TFT_DC PB7          // register select (stands for Data Control perhaps!)

#define ST7735_Black           0x0000      /*   0,   0,   0 */
#define ST7735_Navy            0x000F      /*   0,   0, 128 */
#define ST7735_DarkGreen       0x03E0      /*   0, 128,   0 */
#define ST7735_DarkCyan        0x03EF      /*   0, 128, 128 */
#define ST7735_Maroon          0x7800      /* 128,   0,   0 */
#define ST7735_Purple          0x780F      /* 128,   0, 128 */
#define ST7735_Olive           0x7BE0      /* 128, 128,   0 */
#define ST7735_LightGrey       0xC618      /* 192, 192, 192 */
#define ST7735_DarkGrey        0x7BEF      /* 128, 128, 128 */
#define ST7735_Blue            0x001F      /*   0,   0, 255 */
#define ST7735_Green           0x07E0      /*   0, 255,   0 */
#define ST7735_Cyan            0x07FF      /*   0, 255, 255 */
#define ST7735_Red             0xF800      /* 255,   0,   0 */
#define ST7735_Magenta         0xF81F      /* 255,   0, 255 */
#define ST7735_Yellow          0xFFE0      /* 255, 255,   0 */
#define ST7735_White           0xFFFF      /* 255, 255, 255 */
#define ST7735_Orange          0xFD20      /* 255, 165,   0 */
#define ST7735_GreenYellow     0xAFE5      /* 173, 255,  47 */
#define ST7735_Pink            0xF81F

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);

void setup() {
  tft.init();   // initialize a ST7735S chip,
  tft.fillScreen(ST7735_Black);
}

void loop() {
  tft.fillScreen(ST7735_Red);
  delay(1000);
  tft.fillTriangle(120, 30, 120, 50, 110, 40, ST7735_Black);
  delay(1000);
  tft.fillScreen(ST7735_Green);
  delay(1000);
  tft.fillScreen(ST7735_Yellow);
  delay(1000);
  tft.fillScreen(ST7735_Cyan);
  delay(1000);
  tft.fillScreen(ST7735_Orange);
  delay(1000);
  tft.fillScreen(ST7735_GreenYellow);
  delay(1000);
  tft.fillScreen(ST7735_Blue);
  delay(1000);
  tft.fillScreen(ST7735_Pink);
  delay(1000);
}
