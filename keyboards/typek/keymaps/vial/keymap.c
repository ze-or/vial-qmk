/* Copyright 2023 Gondolindrim
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

enum custom_keycode {
    LM_LCTL = QK_KB_0,
    LM_LGUI,
    LM_LALT,
    US_REP,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case LM_LCTL:
            if (record->event.pressed) {
                layer_on(4);
                register_code(KC_LCTL);
            }else{
                layer_off(4);
                unregister_code(KC_LCTL);
            }
            return false;
        case LM_LGUI:
            if (record->event.pressed) {
                layer_on(4);
                register_code(KC_LGUI);
            }else{
                layer_off(4);
                unregister_code(KC_LGUI);
            }
            return false;
        case LM_LALT:
            if (record->event.pressed) {
                layer_on(4);
                register_code(KC_LALT);
            }else{
                layer_off(4);
                unregister_code(KC_LALT);
            }
	}
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_all( /* Base */
    KC_ESC , KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,          KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS,
    DF(0)  , KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
    DF(1)  , KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,          KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_DEL,
    DF(2)  , KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,          KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
             KC_LGUI, KC_LALT,          KC_SPC , KC_BSPC, KC_6   ,          MO(6)  , QK_REP , KC_RSFT, KC_BSPC, KC_ENT , MO(7)  , A(KC_GRV)
),
[1] = LAYOUT_all(
    KC_ESC , KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,          KC_7   , KC_8   , KC_9   , KC_0   , KC_LBRC, KC_RBRC, KC_BSLS,
    DF(0)  , KC_TAB , KC_F   , KC_L   , KC_H   , KC_V   , KC_Z   ,          KC_Q   , KC_W   , KC_U   , KC_O   , KC_Y   , KC_SCLN, KC_EQL,
    DF(1)  , LM_LCTL, KC_S   , KC_R   , KC_N   , KC_T   , KC_K   ,          KC_C   , KC_D   , KC_E   , KC_A   , KC_I   , KC_MINS, KC_DEL,
    DF(2)  , KC_LSFT, KC_X   , KC_QUOT, KC_B   , KC_M   , KC_J   ,          XXXXXXX, KC_P   , KC_G   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
             LM_LGUI, LM_LALT,          KC_SPC , KC_BSPC, KC_6   ,          MO(6)  , QK_REP , KC_RSFT, KC_BSPC, KC_ENT , MO(7)  , A(KC_GRV)
),
[2] = LAYOUT_all(
    KC_ESC , KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,          KC_7   , KC_8   , KC_9   , KC_0   , KC_LBRC, KC_RBRC, KC_BSLS,
    DF(0)  , KC_TAB , KC_J   , KC_G   , KC_H   , KC_P   , KC_F   ,          KC_Q   , KC_V   , KC_O   , KC_U   , KC_SCLN, KC_SLSH, KC_EQL,
    DF(1)  , LM_LCTL, KC_R   , KC_S   , KC_N   , KC_T   , KC_K   ,          KC_Y   , KC_I   , KC_A   , KC_E   , KC_L   , KC_MINS, KC_DEL,
    DF(2)  , KC_LSFT, KC_Z   , KC_W   , KC_M   , KC_D   , KC_B   ,          XXXXXXX, KC_C   , KC_COMM, KC_QUOT, KC_DOT , KC_X   , KC_RSFT,
             LM_LGUI, LM_LALT,          KC_SPC , KC_BSPC, KC_6   ,          MO(6)  , QK_REP , KC_RSFT, KC_BSPC, KC_ENT , MO(7)  , A(KC_GRV)
),
[3] = LAYOUT_all(
    KC_ESC , KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,          KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS,
    DF(0)  , KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   ,          KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_LBRC, KC_RBRC,
    DF(1)  , LM_LCTL, KC_A   , KC_R   , KC_S   , KC_T   , KC_D   ,          KC_H   , KC_N   , KC_E   , KC_I   , KC_O   , KC_QUOT, KC_DEL,
    DF(2)  , KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,          XXXXXXX, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
             LM_LGUI, LM_LALT,          KC_SPC , KC_BSPC, KC_6   ,          MO(6)  , QK_REP , KC_RSFT, KC_BSPC, KC_ENT , MO(7)  , A(KC_GRV)
),
[4] = LAYOUT_all(
    _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,          KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS,
    TG(5)  , _______, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
    _______, _______, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,          KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, _______,
    _______, _______, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,          KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______,
             _______, _______,          _______, _______, KC_6   ,          _______, _______, _______, _______, _______, _______, _______
),
[5] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, LM_LALT, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
             LM_LCTL, LM_LGUI,          _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______
),
[6] = LAYOUT_all(
    _______, _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,          KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______,
    _______, KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,          KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, _______,
    _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,          KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSLS, _______,
    _______, _______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_COMM,          _______, KC_DOT , KC_EQL , KC_PPLS, KC_MINS, KC_SLSH, _______,
             _______, _______,          _______, _______, KC_F6  ,          _______, _______, _______, _______, _______, MO(8)  , _______
),
[7] = LAYOUT_all(
    _______, _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,          KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______,
    DF(3)  , _______, KC_PGUP, KC_HOME, KC_UP  , KC_END , _______,          _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______,
    _______, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______,          _______, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______,
    _______, _______, KC_INS , KC_PSCR, KC_SCRL, KC_PAUS, _______,          _______, _______, _______, _______, _______, _______, _______,
             _______, _______,          _______, _______, _______,          MO(8)  , _______, _______, _______, _______, _______, _______
),
[8] = LAYOUT_all(
    QK_BOOT, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
             _______, _______,          _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______
),
};
