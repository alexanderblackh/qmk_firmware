// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

// TODO: Can you delete this portion?
#include "planck.h"
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif
//

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _DT 1
#define _RS 2
#define _LW 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------------------------------------------------------------------------------------------------.
 * |  [   |   Q  |   W  |   E  |   R  |   T   |   Esc  |   Bspc |   Y  |   U  |   I  |   O  |   P  |  ]    |
 * |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
 * |  '   |   A  |   S  |   D  |   F  |   G   |   Tab  |  Enter |   H  |   J  |   K  |   L  |   ;  |  \    |
 * |------+------+------+------+------+------|------+------+------+------+------+-----+------+------+------|
 * |  -   |   Z  |   X  |   C  |   V  |   B   |  Shift |  GUI   |   N  |   M  |   ,  |   .  |   /  |  =    |
 * |------+------+------+------+------+------+------+------+------+-----+------+------+------+------+------|
 * | Data | NONE | Ctrl | Alt  | GUI  | LOWER |      Space     | RAISE | Alt  | Left | Down |  Up  | Right |
 * `-------------------------------------------------------------------------------------------------------'
 */
[_QW] = {
  {KC_LBRC, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, /* */  KC_ESC,  KC_BSPC,  /* */  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_RBRC},
  {KC_QUOT, KC_A,  KC_S,  KC_D,  KC_F,  KC_G, /* */  KC_TAB,  KC_ENTER, /* */  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSLS },
  {KC_MINS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, /* */  KC_LSFT, KC_RGUI,  /* */  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL},
  {MO(1),   KC_NO, KC_LCTL, KC_LALT, KC_LGUI, MO(3),    KC_SPC,    MO(2),   KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
},

/* Data ENTRY
* ,-------------------------------------------------------------------------------------------------------.
* |  [   |   Q  |   W  |   E  |   R  |   T   |   ESC   |  Bspc |   <   |   *  |   +  |   7  |   8  |  9   |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* |  '   |   A  |   S  |   D  |   F  |   G   |   TAB   | KPEnt |   >   |   \  |   -  |   4  |   5  |  6   |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* |  -   |   Z  |   X  |   C  |   V  |   B   |  Shift  |  GUI  |   .   |   =  |   0  |   1  |   2  |  3   |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* |ACTIVE| NONE | Ctrl | Alt  | GUI  |LOWER  |        Space    |QWERTY | Alt  | Left | Down |  Up  | Right|
* `-------------------------------------------------------------------------------------------------------'
 */
[_DT] = {
  {KC_LBRC, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, /* */  KC_ESC,  KC_BSPC,  /* */   KC_LABK,  KC_PAST,  KC_PPLS, KC_7,  KC_8, KC_9},
  {KC_QUOT, KC_A,  KC_S,  KC_D,  KC_F,  KC_G, /* */  KC_TAB,  KC_ENTER, /* */   KC_RABK,  KC_PSLS,  KC_PMNS, KC_4,  KC_5, KC_6},
  {KC_MINS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, /* */  KC_LSFT, KC_RGUI,  /* */   KC_DOT,  KC_PEQL,  KC_0,    KC_1,  KC_2, KC_3},
  {KC_TRNS, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, OSM(mod_MO(3)),  /* */  KC_SPC,  /* */ OSM(mod_MO(0)),  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
},

// TODO: Map raised keys to code
/* RAISE
* ,-------------------------------------------------------------------------------------------------------.
* |  F1  |  F2  |  F3  |  F4  |  (   |    )  |   Tab   | Delete |   ^  |   &  |   *  |   7  |   8  |  9   |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* |  F5  |  F6  |  F7  |  F8  |  `   |   #   |   Esc   |  Enter |   #  |   $  |   %  |   4  |   5  |  6   |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* |  F9  |  F10 |  F11 |  F12 |  `   |   ~   |  Shift  |  GUI   |   !  |   @  |   0  |   1  |   2  |  3   |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* | Data | NONE | Ctrl | Alt  | GUI  | NONE  |        Space     |ACTIVE| Alt  | Home | PgDn | PgUp | End  |
* `-------------------------------------------------------------------------------------------------------'
 */
[_RS] = {
  {KC_F1,   KC_F2,   KC_F3,   KC_F4,   S(KC_9), S(KC_0),    /* */ KC_ESC,  KC_DELETE,   /* */ S(KC_6),  S(KC_7), S(KC_8,) KC_7,  KC_8, KC_9},
  {KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_QUOT, S(KC_QUOT), /* */ KC_TAB, KC_GRV,      /* */  S(KC_3),  S(KC_4,  S(KC_5), KC_4,  KC_5, KC_6},
  {KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, S(KC_MINS), /* */  KC_LSFT,  KC_ENTER, /* */  S(KC_1),  S(KC_2), KC_0,    KC_1,  KC_2, KC_3},
  {KC_TRNS, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,    /* */  KC_SPC,  /* */ KC_TRNS,  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
},


// TODO: Map lowered keys to code
// TODO: On lower, try and find keys/functions/macros to map to keys labeled Trns
/* Lower
* ,-------------------------------------------------------------------------------------------------------.
* | Sleep| Trns | Trns | TrkNx| VolUp|   F15 |   Tab   | Delete | Trns |MsBt2 | MsUp |MsBt3 |MsAcl2| Trns |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* | Trns | Trns | Trns |TrkPly| Mute |   F14 |   Esc   |  Enter | Trns |MsLft |MsBt1 |MsRgt |MsAcl1| Trns |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* | Trns | Trns | Trns |TrkPrv| VolDn|   F13 |  CapsLk |  GUI   | Trns |MsBt3 |MsDwn |MsBt4 |MsAcl0| Trns |
* |------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
* | Data | NONE | Ctrl | Alt  | GUI  |ACTIVE |        Space     | NONE | Alt  |TrkPrv|VolDn |VolUp |TrkNx |
* `-------------------------------------------------------------------------------------------------------'
 */
[_LW] = {
  {KC_LBRC, KC_RBRC,  KC_LCBR, KC_RCBR,  KC_BSLS,  /* */  KC_PIPE,  KC_PLUS, /* */  KC_UNDS,  KC_NO, KC_NO,    KC_NO,    RESET},
  {KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN,  KC_RPRN,  /* */ KC_TILD, KC_EQL, /* */ KC_NO, KC_NO,  KC_NO, KC_NO, BL_TOGG},
  {KC_EXLM, KC_AT,    KC_HASH, KC_DLR,   KC_PERC,  /* */ KC_GRV, KC_MINS, /* */ KC_NO, KC_NO,  KC_NO, KC_NO, BL_STEP},
  {KC_TRNS, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS, /* */  KC_SPC,  /* */ KC_TRNS,  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
}
};

const uint16_t PROGMEM fn_actions[] = {

};

// TODO: Do I need macros? If so, keep.. I
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
