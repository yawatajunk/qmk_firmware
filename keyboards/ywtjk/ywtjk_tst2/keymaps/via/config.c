#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 3

// ダブルタップリセットLED
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP0 // Specify a optional status led by GPIO number which blinks when entering the bootloader