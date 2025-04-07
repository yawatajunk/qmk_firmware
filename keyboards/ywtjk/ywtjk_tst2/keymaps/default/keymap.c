// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P1,        KC_P2,
        LT(1, KC_P3), LT(2, KC_P4)
    ),
    [1] = LAYOUT(
        KC_P5,        KC_P6,
        KC_TRNS,      KC_P7
    ),
    [2] = LAYOUT(
        KC_P8,        KC_P9,
        KC_P0,        KC_TRNS
    )
};
// clang-format on
