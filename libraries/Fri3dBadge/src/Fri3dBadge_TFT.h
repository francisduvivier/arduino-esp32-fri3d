#ifndef Fri3dBadge_TFT_h
#define Fri3dBadge_TFT_h

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#define BADGE2020_TFT_CS          5
#define BADGE2020_TFT_RST        -1
#define BADGE2020_TFT_DC         33

#define BADGE2020_ACC_ADDRESS    0x18
#define BADGE2020_ACC_CTRL_REG5  0x25

class Fri3dBadge_TFT : public Adafruit_ST7789 {
public:
	Fri3dBadge_TFT();
private:

};

#endif