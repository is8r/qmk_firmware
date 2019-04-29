/* Copyright 2019 zk-phi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layers {
    DEFAULT,
    RAISE,
    LOWER,
    ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(
        LT(RAISE, KC_KP_5), KC_KP_7, LT(LOWER, KC_KP_0),
        KC_KP_9, KC_KP_1, KC_KP_3
    ),
    [RAISE] = LAYOUT(
        _______, KC_KP_8, MO(ADJUST),
        KC_KP_4, KC_KP_2, KC_KP_6
    ),
    [LOWER] = LAYOUT(
        MO(ADJUST), KC_UP, _______,
        KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [ADJUST] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______
    )
};
