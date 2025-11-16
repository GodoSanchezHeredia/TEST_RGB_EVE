#ifndef MYCFG_H
#define MYCFG_H

#include "driver/gpio.h"

//-------------------- GPIO CONFIG --------//


#define EVE_CS GPIO_NUM_10
#define EVE_PDN GPIO_NUM_14
#define EVE_SCK GPIO_NUM_12
#define EVE_MISO GPIO_NUM_13
#define EVE_MOSI GPIO_NUM_11



// --------- DISPLAY SETINGS -------------//

// Resolución del panel GYMZHD458002C40 (ST7701S)
#define EVE_HSIZE   (960L)   // Horizontal pixels
#define EVE_VSIZE   (320L)   // Vertical pixels

// Timings aproximados (datasheet ST7701S)
#define EVE_VSYNC0  (0L)
#define EVE_VSYNC1  (5L)
#define EVE_VOFFSET (10L)
#define EVE_VCYCLE  (380L)

#define EVE_HSYNC0  (0L)
#define EVE_HSYNC1  (20L)
#define EVE_HOFFSET (120L)
#define EVE_HCYCLE  (1050L)

// Pixel clock
#define EVE_PCLK     (2L)   // PCLK divisor
#define EVE_PCLKPOL  (1L)   // Polarity

// Configuración adicional
#define EVE_SWIZZLE  (0L)
#define EVE_CSPREAD  (0L)
#define EVE_HAS_CRYSTAL
#define EVE_GEN      4      // BT817/EVE4

#endif /* MYCFG_H */
