// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,        KC_2,
        LT(1, KC_3), LT(2, KC_4)
    ),
    [1] = LAYOUT(
        KC_5,        KC_6,
        KC_TRNS,      KC_7
    ),
    [2] = LAYOUT(
        KC_8,        KC_9,
        KC_0,        KC_TRNS
    )
};
// clang-format on
