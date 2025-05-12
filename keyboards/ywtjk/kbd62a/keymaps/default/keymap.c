// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [0] = LAYOUT (
      KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     MO(1),    MO(1),    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
      KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_ESC,   KC_BSLS,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_EQL,
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