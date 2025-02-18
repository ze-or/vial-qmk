/* Copyright 2021 sekigon-gonnoc
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

// Defines names for use in layer keycodes and the keymap

// Defines the keycodes used by our macros in process_record_user

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT(
        _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______, _______, _______,
		KC_ESC,  KC_Q,    KC_W,    KC_E,      KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,     KC_P,    KC_BSPC, _______, _______, _______,
        KC_TAB,  KC_A,    KC_S,    KC_D,      KC_F,       KC_G,    KC_H,    KC_J,    KC_K,      KC_L,     KC_SCLN, KC_ENT, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,   KC_SLSH, KC_RSFT,_______,
        KC_LCTL,                   KC_LALT, KC_NO,     MO(1),            KC_SPC, KC_NO,     MO(2),                    KC_LGUI,_______,_______, _______, _______, _______, _______
    ),
	
	[1] = LAYOUT(
 _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______, _______, _______,
		KC_ESC,  KC_Q,    KC_W,    KC_E,      KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,     KC_P,    KC_BSPC, _______, _______, _______,
        KC_TAB,  KC_A,    KC_S,    KC_D,      KC_F,       KC_G,    KC_H,    KC_J,    KC_K,      KC_L,     KC_SCLN, KC_ENT, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,   KC_SLSH, KC_RSFT,_______,
        KC_LCTL,                   KC_LALT, KC_NO,     MO(1),            KC_SPC, KC_NO,     MO(2),                    KC_LGUI,_______,_______, _______, _______, _______, _______
	),

   [2] = LAYOUT(
	     _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______, _______, _______,
		KC_ESC,  KC_Q,    KC_W,    KC_E,      KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,     KC_P,    KC_BSPC, _______, _______, _______,
        KC_TAB,  KC_A,    KC_S,    KC_D,      KC_F,       KC_G,    KC_H,    KC_J,    KC_K,      KC_L,     KC_SCLN, KC_ENT, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,   KC_SLSH, KC_RSFT,_______,
        KC_LCTL,                   KC_LALT, KC_NO,     MO(1),            KC_SPC, KC_NO,     MO(2),                    KC_LGUI,_______,_______, _______, _______, _______, _______
	),
	
	[3] = LAYOUT(
	     _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______, _______, _______, _______,
		KC_ESC,  KC_Q,    KC_W,    KC_E,      KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,     KC_P,    KC_BSPC, _______, _______, _______,
        KC_TAB,  KC_A,    KC_S,    KC_D,      KC_F,       KC_G,    KC_H,    KC_J,    KC_K,      KC_L,     KC_SCLN, KC_ENT, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,   KC_SLSH, KC_RSFT,_______,
        KC_LCTL,                   KC_LALT, KC_NO,     MO(1),            KC_SPC, KC_NO,     MO(2),                    KC_LGUI,_______,_______, _______, _______, _______, _______
	),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [2] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [3] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
};
#endif


/*
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0)
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}
*/