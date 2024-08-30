/* 
Copyright 2024 NEO

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


enum planck_layers {
    _00, _01, _02, _03, _04, _05, _06, _07, _08, _09, _10, _11, _12, _13, _14, _15
};


#define KC_01_ENT LT(_01,KC_ENT)
#define KC_02_BSP LT(_02,KC_BSPC)


void keyboard_post_init_user_td0(void) {
    vial_tap_dance_entry_t td = { LCTL(KC_SPC),
                                  KC_ESC,
                                  _______,
                                  _______,
                                  200 };
    dynamic_keymap_set_tap_dance(0, &td); // the first value corresponds to the TD(i) slot
}

void keyboard_post_init_user_td1(void) {
    vial_tap_dance_entry_t td = { _______,
                                  MO(_05),
                                  _______,
                                  KC_LCTL,
                                  200 };
    dynamic_keymap_set_tap_dance(1, &td); // the first value corresponds to the TD(i) slot
}

void keyboard_post_init_user_td2(void) {
    vial_tap_dance_entry_t td = { LALT(KC_A),
                                  MO(_03),
                                  _______,
                                  _______,
                                  200 };
    dynamic_keymap_set_tap_dance(2, &td); // the first value corresponds to the TD(i) slot
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_00] = LAYOUT(
        KC_ESC,     KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_GRV, KC_BSPC,
        DF(0),      KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,
        DF(1),      KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        DF(2),      KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_UP,  MO(6),
                    MO(6),  KC_LGUI,                KC_LALT,KC_SPC,QK_REP,KC_RSFT,                          KC_LEFT,KC_DOWN,KC_RGHT
    ),

    [_01] = LAYOUT(
        KC_ESC,     KC_GRV,         KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC,KC_RBRC,KC_GRV,KC_BSPC,
        DF(0),      KC_TAB,         KC_F,   KC_L,   KC_H,   KC_V,   KC_Z,           KC_Q,   KC_W,   KC_U,   KC_O,   KC_Y,   KC_SCLN,KC_EQL,KC_BSLS,
        DF(1),      LM(4,MOD_LCTL), KC_S,   KC_R,   KC_N,   KC_T,   KC_K,           KC_C,   KC_D,   KC_E,   KC_A,   KC_I,   KC_MINS,KC_ENT,
        DF(2),      KC_LSFT,        KC_X,   KC_QUOT,KC_B,   KC_M,   KC_J,   KC_BSPC,KC_P,   KC_G,   KC_COMM,KC_DOT, KC_SLSH,KC_UP,  MO(6),
                    MO(6),  LM(4,MOD_LGUI),          LM(4,MOD_LALT),KC_SPC, QK_REP,KC_RSFT,                         KC_LEFT,KC_DOWN,KC_RGHT
    ),

    [_02] = LAYOUT(
        KC_ESC,     KC_GRV,         KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC,KC_RBRC,KC_GRV,KC_BSPC,
        DF(0),      KC_TAB,         KC_J,   KC_G,   KC_H,   KC_P,   KC_F,           KC_Q,   KC_V,   KC_O,   KC_U,   KC_SCLN,KC_SLSH,KC_EQL,KC_BSLS,
        DF(1),      LM(4,MOD_LCTL), KC_R,   KC_S,   KC_N,   KC_T,   KC_K,           KC_Y,   KC_I,   KC_A,   KC_E,   KC_L,   KC_MINS,KC_ENT,
        DF(2),      KC_LSFT,        KC_Z,   KC_W,   KC_M,   KC_D,   KC_B,   KC_BSPC,KC_C,   KC_COMM,KC_QUOT,KC_DOT, KC_X,   KC_UP,  MO(6),
                    MO(6),  LM(4,MOD_LGUI),          LM(4,MOD_LALT),KC_SPC, QK_REP,KC_RSFT,                         KC_LEFT,KC_DOWN,KC_RGHT
    ),

    [_03] = LAYOUT(
        KC_ESC,     KC_GRV,         KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL,KC_GRV,KC_BSPC,
        DF(0),      KC_TAB,         KC_Q,   KC_W,   KC_F,   KC_P,   KC_G,           KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,KC_LBRC,KC_RBRC,KC_BSLS,
        DF(1),      LM(4,MOD_LCTL), KC_A,   KC_R,   KC_S,   KC_T,   KC_D,           KC_H,   KC_N,   KC_E,   KC_I,   KC_O,   KC_QUOT,KC_ENT,
        DF(2),      KC_LSFT,        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_BSPC,KC_K,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_UP,  MO(6),
                    MO(6),  LM(4,MOD_LGUI),          LM(4,MOD_LALT),KC_SPC, QK_REP,KC_RSFT,                         KC_LEFT,KC_DOWN,KC_RGHT
    ),

    [_04] = LAYOUT(
        _______,    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_GRV, _______,
        _______,    _______,KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,
        _______,    _______,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,_______,
        _______,    _______,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   _______,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,_______,_______,
                    _______,  _______,              _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_05] = LAYOUT(
        _______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,LM(4,MOD_LALT), _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,        LM(4,MOD_LCTL),  LM(4,MOD_LGUI), _______,_______,_______,                        _______,_______,_______
    ),

    [_06] = LAYOUT(
        _______,_______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12 ,_______,KC_DEL,
        _______,KC_CAPS,_______,KC_UP  ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        TG(5),  _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,_______,_______,_______,_______,_______,KC_INS ,_______,
        DF(3),  _______,_______,_______,_______,_______,_______,_______,_______,_______,KC_PSCR,KC_SCRL,KC_PAUS,KC_PGUP,_______,
                _______,_______,                _______,_______,_______,_______,                        KC_HOME,KC_PGDN,KC_END
    ),

    [_07] = LAYOUT(
        _______,_______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12 ,_______,KC_DEL,
        _______,KC_TILD,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PIPE,_______,_______,
        TG(5),  KC_GRV, KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_BSLS,_______,
        DF(3),  _______,KC_LCBR,KC_RCBR,KC_LBRC,KC_RBRC,KC_COMM,_______,KC_DOT, KC_EQL, KC_PPLS,KC_MINS,KC_SLSH,KC_PGUP,_______,
                _______,_______,                _______,_______,_______,_______,                        KC_HOME,KC_PGDN,KC_END
    ),

    [_08] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_09] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_10] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_11] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_12] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_13] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_14] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

    [_15] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,                _______,_______,_______,_______,                        _______,_______,_______
    ),

};

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    // Forget Shift on letter keys when Shift or AltGr are the only mods.
    switch (keycode) {
        case KC_A ... KC_Z:
            if ((*remembered_mods & ~(MOD_MASK_SHIFT | MOD_BIT(KC_RALT))) == 0) {
                *remembered_mods &= ~MOD_MASK_SHIFT;
            }
            break;
    }

    return true;
}

/* RGBの設定 */
#ifdef RGBLIGHT_ENABLE

//const rgblight_segment_t PROGMEM rgb_layer_00[] = RGBLIGHT_LAYER_SEGMENTS(
//    {5, 11, HSV_RED}  // 開始LEDインデックス, 連続する個数, 光らせる色(ここではプリセットを使用)
//);

// const rgblight_segment_t PROGMEM rgb_layer_01[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_BLUE}
// );

// const rgblight_segment_t PROGMEM rgb_layer_02[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_GREEN}
// );

// const rgblight_segment_t PROGMEM rgb_layer_03[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_ORANGE}
// );

//const rgblight_segment_t PROGMEM rgb_layer_04[] = RGBLIGHT_LAYER_SEGMENTS(
//    {5, 11, HSV_MAGENTA}
//);

// const rgblight_segment_t PROGMEM rgb_layer_05[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_AZURE}
// );

// const rgblight_segment_t PROGMEM rgb_layer_06[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_SPRINGGREEN}
// );

// const rgblight_segment_t PROGMEM rgb_layer_07[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_GOLD}
// );

// const rgblight_segment_t PROGMEM rgb_layer_08[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_CHARTREUSE}
// );

// const rgblight_segment_t PROGMEM rgb_layer_09[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_CYAN}
// );

// const rgblight_segment_t PROGMEM rgb_layer_10[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_CORAL}
// );

// const rgblight_segment_t PROGMEM rgb_layer_11[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_GOLDENROD}
// );

// const rgblight_segment_t PROGMEM rgb_layer_12[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_PINK}
// );

// const rgblight_segment_t PROGMEM rgb_layer_13[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_PURPLE}
// );

// const rgblight_segment_t PROGMEM rgb_layer_14[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_SPRINGGREEN}
// );

// const rgblight_segment_t PROGMEM rgb_layer_15[] = RGBLIGHT_LAYER_SEGMENTS(
//     {5, 11, HSV_TEAL}
// );


const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//     rgb_layer_00,
//     rgb_layer_01,
//     rgb_layer_02,
//     rgb_layer_03,
//     rgb_layer_04,
//     rgb_layer_05,
//     rgb_layer_06,
//     rgb_layer_07,
//     rgb_layer_08,
//     rgb_layer_09,
//     rgb_layer_10,
//     rgb_layer_11,
//     rgb_layer_12,
//     rgb_layer_13,
//     rgb_layer_14,
//     rgb_layer_15     // ,不要
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // rgblight_set_layer_state(0, layer_state_cmp(state, _00));
    // rgblight_set_layer_state(0, layer_state_cmp(state, _01));
    // rgblight_set_layer_state(1, layer_state_cmp(state, _02));
    // rgblight_set_layer_state(2, layer_state_cmp(state, _03));
    // rgblight_set_layer_state(2, layer_state_cmp(state, _04));
    // rgblight_set_layer_state(3, layer_state_cmp(state, _05));
    // rgblight_set_layer_state(4, layer_state_cmp(state, _06));
    // rgblight_set_layer_state(5, layer_state_cmp(state, _07));
    // rgblight_set_layer_state(6, layer_state_cmp(state, _08));
    // rgblight_set_layer_state(7, layer_state_cmp(state, _09));
    // rgblight_set_layer_state(8, layer_state_cmp(state, _10));
    // rgblight_set_layer_state(9, layer_state_cmp(state, _11));
    // rgblight_set_layer_state(10, layer_state_cmp(state, _12));
    // rgblight_set_layer_state(11, layer_state_cmp(state, _13));
    // rgblight_set_layer_state(12, layer_state_cmp(state, _14));
    // rgblight_set_layer_state(13, layer_state_cmp(state, _15));
    return state;
}

#endif


#ifdef RGB_MATRIX_ENABLE
layer_state_t layer_state_set_user(layer_state_t state){
  uint8_t layer = biton32(state);
  switch (layer){
    //    case _00:
    //        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    //        rgb_matrix_sethsv_noeeprom(HSV_RED);
    //        break;
    //     case _01:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_BLUE);
    //         break;
    //     case _02:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_GREEN);
    //         break;
    //     case _03:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_ORANGE);
    //         break;
    //    case _04:
    //        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //        rgb_matrix_sethsv_noeeprom(HSV_MAGENTA);
    //        break;
    //     case _05:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_AZURE);
    //         break;
    //     case _06:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_SPRINGGREEN);
    //         break;
    //     case _07:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_GOLD);
    //         break;
    //     case _08:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_CHARTREUSE);
    //         break;
    //     case _09:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_CYAN);
    //         break;
    //     case _10:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_CORAL);
    //         break;
    //     case _11:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_GOLDENROD);
    //         break;
    //     case _12:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_PINK);
    //         break;
    //     case _13:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
    //         break;
    //     case _14:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_SPRINGGREEN);
    //         break;
    //     case _15:
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(HSV_TEAL);
    //         break;
       default:
            rgb_matrix_reload_from_eeprom();
    }
  return state;
}
#endif 
