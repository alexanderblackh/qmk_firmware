#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Qwerty */
{KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_ESC,  KC_BSPC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P},
{KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TAB,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT},
{KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LSFT, KC_ENTER,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH},
{MO(3), KC_LCTL, KC_LALT, KC_LGUI, MO(2),    KC_SPC,   KC_SPC,    MO(1),   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
// Space is repeated to accommadate for both spacebar wiring positions
},
[1] = { /* RAISE */
{KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F5, /* */ KC_ESC,  KC_DELETE,   /* */ KC_MINS,  KC_EQL,  KC_7,  KC_8, KC_9},
{KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, /* */ KC_TAB, KC_GRV, /* */ KC_LBRC,  KC_RBRC, KC_4, KC_5, KC_6},
{KC_F11, KC_F12,  M(0),  KC_NO,  KC_NO, /* */  KC_LSFT,  KC_ENTER, /* */ KC_BSLS,  KC_0,  KC_1,  KC_2, KC_3},
{KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,  /* */  KC_SPC,   KC_SPC, /* */ KC_TRNS,   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
},
[2] = { /* LOWER */
{KC_LBRC, KC_RBRC,  KC_LCBR, KC_RCBR,  KC_BSLS,  /* */  KC_PIPE,  KC_PLUS, /* */  KC_UNDS,  KC_NO, KC_NO,    KC_NO,    RESET},
{KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN,  KC_RPRN,  /* */ KC_TILD, KC_EQL, /* */ KC_NO, KC_NO,  KC_NO, KC_NO, BL_TOGG},
{KC_EXLM, KC_AT,    KC_HASH, KC_DLR,   KC_PERC,  /* */ KC_GRV, KC_MINS, /* */ KC_NO, KC_NO,  KC_NO, KC_NO, BL_STEP},
{KC_NO,   KC_LCTL,  KC_LALT, KC_LGUI,  KC_TRNS,  /* */  KC_UNDS,   KC_UNDS, /* */  KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
},
[3] = { /* DATA ENTRY MODE */
{KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F5, /* */ KC_ESC,  KC_BSPC,   /* */ KC_MINS,  KC_EQL,  KC_7,  KC_8, KC_9},
{KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, /* */ KC_TAB, KC_GRV, /* */ KC_LBRC,  KC_RBRC, KC_4, KC_5, KC_6},
{KC_F11, KC_F12,  KC_NO,  KC_NO,  KC_NO, /* */  KC_LSFT,  KC_ENTER, /* */ KC_BSLS,  KC_0,  KC_1,  KC_2, KC_3},
{KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,  /* */  KC_SPC,   KC_SPC, /* */ KC_TRNS,   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
// Space is repeated to accommadate for both spacebar wiring positions
}
};


const uint16_t PROGMEM fn_actions[] = {
[1] = ACTION_LAYER_MOMENTARY(1),  // to RAISE
[2] = ACTION_LAYER_MOMENTARY(2),   // to LOWER
[3] = ACTION_LAYER_MOMENTARY(3)   // to DATA ENTRY MODE
};