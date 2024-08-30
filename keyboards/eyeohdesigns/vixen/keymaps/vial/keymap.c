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
        KC_TAB,		KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,		KC_O,	KC_P,		KC_MINS,
        KC_LCTL,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,		KC_L,	KC_SCLN,	KC_QUOT, 
        KC_LSFT,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_COMM,	KC_DOT,	KC_SLSH,	LT(7,KC_ENT),
        KC_LGUI,					KC_LALT,KC_BSPC,KC_SPC,	QK_REP,KC_RSFT,MO(6),							A(KC_GRV)
    ),
	
	[1] = LAYOUT(
        KC_TAB,			KC_F,	KC_L,		KC_H,	KC_V,	KC_Z,	KC_Q,	KC_W,	KC_U,		KC_O,	KC_Y,		KC_SCLN,
        LM(4,MOD_LCTL),	KC_S,	KC_R,		KC_N,	KC_T,	KC_K,	KC_C,	KC_D,	KC_E,		KC_A,	KC_I,		KC_MINS, 
        KC_LSFT,		KC_X,	KC_QUOT,	KC_B,	KC_M,	KC_J,	KC_P,	KC_G,	KC_COMM,	KC_DOT,	KC_SLSH,	LT(7,KC_ENT),
        LM(4,MOD_LGUI),			LM(4,MOD_LALT),KC_BSPC,KC_SPC,		QK_REP,KC_RSFT,MO(6),							A(KC_GRV)
	),

	[2] = LAYOUT(
        KC_TAB,			KC_J,	KC_G,	KC_H,	KC_P,	KC_F,	KC_Q,	KC_V,		KC_O,		KC_U,	KC_SCLN,	KC_SLSH,
        LM(4,MOD_LCTL),	KC_R,	KC_S,	KC_N,	KC_T,	KC_K,	KC_Y,	KC_I,		KC_A,		KC_E,	KC_L,		KC_MINS, 
        KC_LSFT,		KC_Z,	KC_W,	KC_M,	KC_D,	KC_B,	KC_C,	KC_COMM,	KC_QUOT,	KC_DOT,	KC_X,		LT(7,KC_ENT),
        LM(4,MOD_LGUI),			LM(4,MOD_LALT),KC_BSPC,KC_SPC,	QK_REP,KC_RSFT,MO(6),								A(KC_GRV)
	),
	
	[3] = LAYOUT(
        KC_TAB,			KC_Q,	KC_W,	KC_F,	KC_P,	KC_G,	KC_J,	KC_L,	KC_U,		KC_Y,	KC_SCLN,	KC_MINS,
        LM(4,MOD_LCTL),	KC_A,	KC_R,	KC_S,	KC_T,	KC_D,	KC_H,	KC_N,	KC_E,		KC_I,	KC_O,		KC_QUOT, 
        KC_LSFT,		KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_K,	KC_M,	KC_COMM,	KC_DOT,	KC_SLSH,	LT(7,KC_ENT),
        LM(4,MOD_LGUI),			LM(4,MOD_LALT),KC_BSPC,KC_SPC,	QK_REP,KC_RSFT,MO(6),							A(KC_GRV)
	),

	[4] = LAYOUT(
    	_______,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,		KC_O,	KC_P,		KC_MINS,
        _______,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,		KC_L,	KC_SCLN,	KC_QUOT, 
        _______,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_COMM,	KC_DOT,	KC_SLSH,	_______,
        _______,				_______,_______,_______,	_______,_______,_______,						_______
	),

	[5] = LAYOUT(
	    _______,		_______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		LM(4,MOD_LALT),	_______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______,		_______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		LM(4,MOD_LCTL),           LM(4,MOD_LGUI),_______, _______,_______, _______,_______,                  _______
	),

	[6] = LAYOUT(
	    KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
		KC_GRV,		KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_BSLS,
		_______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_COMM, KC_DOT , KC_EQL, KC_PPLS, KC_MINS, KC_SLSH, MO(8),
		_______,                  _______,_______, _______,_______, _______,_______,                  _______
	),
	
	[7] = LAYOUT(
	    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F13 , _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS,
		_______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F14 , _______, KC_PGUP, KC_HOME, KC_UP  , KC_END , KC_INS ,
		_______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_F15 , _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______,
		_______,                   _______, KC_DEL , _______, _______, _______, MO(8)  ,                   _______
	),

	[8] = LAYOUT(
	    _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______, DF(0)  ,DF(1)  , DF(2)  ,DF(3)  , _______,_______, KC_WH_U,KC_BTN1, KC_MS_U,KC_BTN2, _______,
		_______, TG(5)  ,_______, _______,_______, _______,_______, KC_WH_D,KC_MS_L, KC_MS_D,KC_MS_R, _______,
		_______,                  _______,_______, _______,_______, _______,_______,                  _______
	),

	[9] = LAYOUT(
	    _______, XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX, KC_BSPC,KC_BSPC, KC_P7  ,KC_P8  , KC_P9  ,KC_PMNS, KC_PSLS,
		KC_1   , KC_2   ,KC_3   , KC_4   ,KC_5   , KC_6   ,KC_TAB , KC_P4  ,KC_P5  , KC_P6  ,KC_PPLS, KC_PAST,
		_______, XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,KC_NUM , KC_P1  ,KC_P2  , KC_P3  ,KC_PENT, KC_PEQL,
		_______,                  _______,_______, _______,KC_PCMM, KC_P0  ,KC_PDOT,                  TG(9)
	),

	[10] = LAYOUT(
	    _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______,                  _______,_______, _______,_______, _______,_______,                  _______
	),

	[11] = LAYOUT(
	    _______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,_______, _______,
		_______,                  _______,_______, _______,_______, _______,_______,                  _______
	),
};
