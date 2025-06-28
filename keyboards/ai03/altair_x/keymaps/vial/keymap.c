/* Copyright 2024 ai03 Design Studio */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   KC_LALT, MO(7),   KC_BSPC, KC_SPC,  QK_REP,  KC_RSFT, MO(6),   KC_LGUI
    ),

    [1] = LAYOUT(
        KC_TAB,         KC_F,    KC_L,    KC_H,    KC_V,    KC_Z,    XXXXXXX, XXXXXXX, KC_Q,    KC_W,    KC_U,    KC_O,    KC_Y,    KC_SLCN,
        LM(4,MOD_LCTL), KC_S,    KC_R,    KC_N,    KC_T,    KC_K,    XXXXXXX, XXXXXXX, KC_C,    KC_D,    KC_E,    KC_A,    KC_I,    KC_MINS,
        KC_LSFT,        KC_X,    KC_QUOT, KC_B,    KC_M,    KC_J,    XXXXXXX, XXXXXXX, KC_P,    KC_G,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   LM(4,MOD_LALT), MO(7),   KC_BSPC, KC_SPC,  QK_REP,  KC_RSFT, MO(6),   LM(4,MOD_LGUI)
    ),

    [2] = LAYOUT(
        KC_TAB,         KC_J,    KC_G,    KC_H,    KC_P,    KC_F,    XXXXXXX, XXXXXXX, KC_Q,    KC_V,    KC_O,    KC_U,    KC_SCLN, KC_SLSH,
        LM(4,MOD_LCTL), KC_R,    KC_S,    KC_N,    KC_T,    KC_K,    XXXXXXX, XXXXXXX, KC_Y,    KC_I,    KC_A,    KC_E,    KC_L,    KC_MINS,
        KC_LSFT,        KC_Z,    KC_W,    KC_M,    KC_D,    KC_B,    XXXXXXX, XXXXXXX, KC_C,    KC_COMM, KC_QUOT, KC_DOT,  KC_X,    KC_ENT,
                                   LM(4,MOD_LALT), MO(7),   KC_BSPC, KC_SPC,  QK_REP,  KC_RSFT, MO(6),   LM(4,MOD_LGUI)
    ),

    [3] = LAYOUT(
        KC_TAB,         KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    XXXXXXX, XXXXXXX, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MINS,
        LM(4,MOD_LCTL), KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    XXXXXXX, XXXXXXX, KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   LM(4,MOD_LALT), MO(7),   KC_BSPC, KC_SPC,  QK_REP,  KC_RSFT, MO(6),   LM(4,MOD_LGUI)
    ),

    [4] = LAYOUT(
        _______,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T,    _______,_______, KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_MINS,
        _______,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G,    _______,_______, KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,
        _______,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B,    _______,_______, KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                                _______,_______,_______,_______,  _______,_______,_______,_______
    ),

    [5] = LAYOUT(
        _______,       _______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
        LM(4,MOD_LALT),_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
        _______,       _______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
                                LM(4,MOD_LGUI),_______,_______,_______,  _______,_______,_______,LM(4,MOD_LCTL)
    ),

    [6] = LAYOUT(
        KC_TILD,KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC, _______,_______, KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PIPE,
        KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   , _______,_______, KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_BSLS,
        _______,KC_LCBR,KC_RCBR,KC_LBRC,KC_RBRC,KC_COMM, _______,_______, KC_DOT ,KC_EQL ,KC_PPLS,KC_MINS,KC_SLSH,_______,
                                _______,MO(8)  ,_______,_______,  _______,_______,_______,_______
    ),

    [7] = LAYOUT(
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F13 , _______,_______, _______,KC_HOME,KC_UP  ,KC_END ,KC_PGUP,_______,
        _______,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F14 , _______,_______, _______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,_______,
        _______,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_F15 , _______,_______, _______,PC_PSCR,KC_SCRL,KC_PAUS,KC_INS ,_______,
                                _______,_______,KC_DEL ,_______,  _______,_______,MO(8)  ,_______
    ),

    [8] = LAYOUT(
        _______,_______,_______,_______,_______,_______, _______,_______, KC_WH_U,KC_BTN1,KC_MS_U,KC_BTN2,_______,_______,
        _______,DF(0)  ,DF(1)  ,DF(2)  ,DF(3)  ,_______, _______,_______, KC_WH_D,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,
        _______,TG(5)  ,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
                                _______,_______,_______,_______,  _______,_______,_______,_______
    ),

    [9] = LAYOUT(
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, KC_BSPC,_______, KC_BSPC,KC_P7  ,KC_P8  ,KC_P9  ,KC_PMNS,KC_PSLS,
        _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   , KC_6   ,_______, KC_TAB ,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,KC_PAST,
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,_______, KC_NUM ,KC_P1  ,KC_P2  ,KC_P3  ,KC_PENT,KC_PEQL,
                                _______,_______,_______,_______,  KC_PCMM,KC_P0  ,KC_PDOT,TG(9)
    ),

    [10] = LAYOUT(
        _______,_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
                                _______,_______,_______,_______,  _______,_______,_______,_______
    ),

    [11] = LAYOUT(
        _______,_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______, _______,_______, _______,_______,_______,_______,_______,_______,
                                _______,_______,_______,_______,  _______,_______,_______,_______
    )

};

// const uint16_t PROGMEM esc[] = {KC_TAB, KC_Q, COMBO_END};
// combo_t key_combos[] = {
//     COMBO(esc, KC_ESC),
//     COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
// };