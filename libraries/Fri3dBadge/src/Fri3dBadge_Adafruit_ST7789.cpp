#include <Fri3dBadge_Adafruit_ST7789.h>

Fri3dBadge_Adafruit_ST7789::Fri3dBadge_Adafruit_ST7789() : Adafruit_ST7789(X_LCD_CS, X_LCD_DC, X_LCD_MOSI, X_LCD_CLK, X_LCD_RST)
{

}

void Fri3dBadge_Adafruit_ST7789::init()
{
    // Call the parent class's begin method to initialize the display
    Adafruit_ST7789::init(X_LCD_WIDTH, X_LCD_HEIGHT);
      this->setSPISpeed(80000000);

      this->sendCommand(ST77XX_INVOFF); // Fix Black vs white

      Adafruit_ST7789::setColRowStart(0, 0); // Fix offset

      this->setRotation(1); // Set initial rotation

      uint8_t madctl = ST77XX_MADCTL_MV | ST77XX_MADCTL_BGR; // Fix Mirroring & Blue vs White
      this->sendCommand(ST77XX_MADCTL, &madctl, 1);
}