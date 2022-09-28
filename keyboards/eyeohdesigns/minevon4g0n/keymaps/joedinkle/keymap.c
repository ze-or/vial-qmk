#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
        RESET, KC_F2, KC_F3, RGB_RMOD, RGB_MOD, RGB_TOG,\
		KC_TAB,  KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C,    KC_R,    KC_L,      KC_BSPC,\
        KC_CAPS,   KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T,    KC_N,    KC_S, KC_ENTER,\
        KC_LSFT,   KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V,  KC_Z, KC_RSFT,\
        KC_ESC,    KC_LGUI, KC_LALT, KC_NO, KC_NO,  KC_SPC, KC_NO,  KC_8,        KC_NO, KC_RGUI, KC_NO, KC_RCTL\
)
};
