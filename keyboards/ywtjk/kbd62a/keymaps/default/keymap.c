// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT (
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     MO(1),    UG_NEXT,  KC_6   ,  KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_ESC,   MO(1),    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_EQL,
        KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_LBRC,  KC_RBRC,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                         KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
        MO(1),    KC_LOPT,  MOD_LCTL, MOD_LGUI, KC_SPC,                       KC_ENT,   MOD_LGUI, KC_BSPC,  MO(1)
    ),
    [1] = LAYOUT (
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_HOME,  KC_UP,    KC_END,   XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RGHT,  XXXXXXX,  XXXXXXX,
                  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,  KC_PGUP,  XXXXXXX,  KC_PGDN,  XXXXXXX,  XXXXXXX,
                  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
    )
};
// clang-format on

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write(PSTR("QWERTY\n"), false);
            break;
        case 1:
            oled_write(PSTR("FN\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif