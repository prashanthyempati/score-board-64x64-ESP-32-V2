#ifndef CONFIG_H
#define CONFIG_H

// ******************************
// MAX7219 Configuration
// ******************************

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW

#define MAX_DEVICES 64        // 8x8 = 64 modules

// SPI Pins (ESP32 VSPI)
#define PIN_DATA 23
#define PIN_CLK 18
#define PIN_CS 5

#endif