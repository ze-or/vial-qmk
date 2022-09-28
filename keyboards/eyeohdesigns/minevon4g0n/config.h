// Copyright 2022 eyeohdesigns (@joedinkle)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001

/* key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 6


#define MATRIX_ROW_PINS { D3, D4, C2, D0, C7, C6, C4, C5, B4 }
#define MATRIX_COL_PINS { D6, D5, B6, B7, D2, D1 }


/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define TAPPING_TERM 130

#define RGB_DI_PIN B3
#define RGBLED_NUM 3
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
#define RGBLIGHT_ANIMATIONS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5