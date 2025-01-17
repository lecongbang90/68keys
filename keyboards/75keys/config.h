#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0A0C
#define DEVICE_VER 0x0075
#define MANUFACTURER 75Keys
#define PRODUCT BangLE 75Keys Keyboard
#define DESCRIPTION A 75 keys mechanical keyboard

/* key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS                \
    {                                  \
        D3, B6, B2, B3, B1, F4, F6, F7, F5 \
    }
#define MATRIX_COL_PINS                    \
    {                                      \
        B4, E6, D7, C6, D4, D0, D1, D2, B5 \
    }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN B5
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 3

#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for magic key command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))
