#pragma once

// ダブルタップリセットLED
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP0 // Specify a optional status led by GPIO number which blinks when entering the bootloader

// OLED
#define OLED_DISPLAY_128X64
#define OLED_TIMEOUT 0
#define I2C1_SDA_PIN GP14
#define I2C1_SCL_PIN GP15
