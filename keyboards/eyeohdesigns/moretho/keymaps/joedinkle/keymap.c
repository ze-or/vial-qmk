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
                KC_TAB,  KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C,    KC_R,    KC_L,      KC_BSPC,\
        LCTL_T(KC_CAPS),   KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T,    KC_N,    KC_S, RCTL_T(KC_ENTER),\
        KC_LSFT,   KC_SCLN, KC_Q, KC_J, KC_K, LALT_T(KC_X), KC_B, KC_M, KC_W, KC_V,  KC_Z, KC_RSFT,\
        KC_LGUI,                   KC_NO,     MO(2), KC_NO,           KC_NO,     LT(MO(1),KC_SPACE),            KC_NO, KC_ESC
    ),
	
	[1] = LAYOUT(
	    KC_VOLU,  MO(3),    KC_PGUP, KC_DOT, KC_R,    KC_SLSH,    KC_BSLS, KC_U,    KC_UP,   KC_O,    KC_PSCR,    KC_DEL,\
        KC_VOLD,   KC_HOME, KC_PGDN, KC_END, KC_F,    KC_MINS, KC_EQL,  KC_LEFT, KC_DOWN, KC_RIGHT,  KC_S,   RCTL_T(KC_ENTER),\
        KC_LSFT,    KC_SCLN, KC_X,    KC_C,   KC_X, LALT_T(KC_LBRC),    KC_RBRC, KC_M,    KC_COMM,  KC_DOT,  KC_BSLS, KC_RSFT,\
		KC_LGUI,                   KC_NO,     MO(2), KC_NO,           KC_NO,     LT(MO(1),KC_SPACE),            KC_NO, KC_ESC
	),

   [2] = LAYOUT(
	    KC_F1,  KC_F2,   KC_F3, KC_F4,   KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,       KC_F12,\
        KC_MUTE, KC_1,    KC_2,  KC_3,    KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,        RCTL_T(KC_ENTER),\
        KC_TRNS,  KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,    KC_RSFT,\
		KC_LGUI,                   KC_NO,     MO(2), KC_NO,           KC_NO,     LT(MO(1),KC_SPACE),            KC_NO, KC_ESC
	),
	[3] = LAYOUT(
	    _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,QK_BOOT,   _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______,                  _______,_______, _______,_______, _______,_______,                  _______
	),
};
