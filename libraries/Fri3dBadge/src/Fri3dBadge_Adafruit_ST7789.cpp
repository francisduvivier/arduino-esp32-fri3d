#include <Fri3dBadge_Adafruit_ST7789.h>

Fri3dBadge_TFT::Fri3dBadge_TFT() : Adafruit_ST7789(X_LCD_CS, X_LCD_DC, X_LCD_MOSI, X_LCD_CLK, X_LCD_RST);
{

}

void Fri3dBadge_TFT::begin(uint32_t freq)
{
    // Call the parent class's begin method to initialize the display
    Adafruit_ST7789::begin(freq);


    setRotation(1);
}