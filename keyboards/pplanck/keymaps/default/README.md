# The Default PPlanck Layout

    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
```
QWERTY
,------------------------------------------------------------------------------------------------------.
|  [   |   Q  |   W  |   E  |   R  |   T   |   Esc  |   Bspc |   Y  |   U  |   I  |   O  |   P  |  ]    |
|------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
|  '   |   A  |   S  |   D  |   F  |   G   |   Tab  |  Enter |   H  |   J  |   K  |   L  |   ;  |  \    |
|------+------+------+------+------+------|------+------+------+------+------+-----+------+------+------|
|  -   |   Z  |   X  |   C  |   V  |   B   |  Shift |  GUI   |   N  |   M  |   ,  |   .  |   /  |  =    |
|------+------+------+------+------+------+------+------+------+-----+------+------+------+------+------|
| Data | NONE | Ctrl | Alt  | GUI  | LOWER |      Space     | RAISE | Alt  | Left | Down |  Up  | Right |
`-------------------------------------------------------------------------------------------------------'
```

      [_QW] = /* QWERTY */{
        {KC_LBRC, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, /* */  KC_ESC,  KC_BSPC,  /* */  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_RBRC},
        {KC_QUOT, KC_A,  KC_S,  KC_D,  KC_F,  KC_G, /* */  KC_TAB,  KC_ENTER, /* */  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSLS },
        {KC_MINS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, /* */  KC_LSFT, KC_RGUI,  /* */  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL},
        {MO(1),   KC_NO, KC_LCTL, KC_LALT, KC_LGUI, MO(3),    KC_SPC,    MO(2),   KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
      },

```
Data Entry
,-------------------------------------------------------------------------------------------------------.
|  [   |   Q  |   W  |   E  |   R  |   T   |   ESC   |  Bspc |   <   |   *  |   +  |   7  |   8  |  9   |
|------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
|  '   |   A  |   S  |   D  |   F  |   G   |   TAB   | KPEnt |   >   |   \  |   -  |   4  |   5  |  6   |
|------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
|  -   |   Z  |   X  |   C  |   V  |   B   |  Shift  |  GUI  |   .   |   =  |   0  |   1  |   2  |  3   |
|------+------+------+------+------+-------------+------+------+------+------+-----+------+------+------|
|ACTIVE| NONE | Ctrl | Alt  | GUI  |LOWER  |        Space    |QWERTY | Alt  | Left | Down |  Up  | Right|
`-------------------------------------------------------------------------------------------------------'
```
      [_DT] = /* Data Entry */{
        {KC_LBRC, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, /* */  KC_ESC,  KC_BSPC,  /* */   KC_LABK,  KC_PAST,  KC_PPLS, KC_7,  KC_8, KC_9},
        {KC_QUOT, KC_A,  KC_S,  KC_D,  KC_F,  KC_G, /* */  KC_TAB,  KC_ENTER, /* */   KC_RABK,  KC_PSLS,  KC_PMNS, KC_4,  KC_5, KC_6},
        {KC_MINS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, /* */  KC_LSFT, KC_RGUI,  /* */   KC_DOT,  KC_PEQL,  KC_0,    KC_1,  KC_2, KC_3},
        {KC_TRNS, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, OSM(mod_MO(3)),  /* */  KC_SPC,  /* */ OSM(mod_MO(0)),  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
      },
      [_RS] = /* Raise */ {
        {KC_F1,   KC_F2,   KC_F3,   KC_F4,   S(KC_9), S(KC_0),    /* */ KC_ESC,  KC_DELETE,   /* */ S(KC_6),  S(KC_7), S(KC_8,) KC_7,  KC_8, KC_9},
        {KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_QUOT, S(KC_QUOT), /* */ KC_TAB, KC_GRV,      /* */  S(KC_3),  S(KC_4,  S(KC_5), KC_4,  KC_5, KC_6},
        {KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, S(KC_MINS), /* */  KC_LSFT,  KC_ENTER, /* */  S(KC_1),  S(KC_2), KC_0,    KC_1,  KC_2, KC_3},
        {KC_TRNS, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS,    /* */  KC_SPC,  /* */ KC_TRNS,  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
      },
      [_LW] = /* LOWER */ {
        {KC_LBRC, KC_RBRC,  KC_LCBR, KC_RCBR,  KC_BSLS,  /* */  KC_PIPE,  KC_PLUS, /* */  KC_UNDS,  KC_NO, KC_NO,    KC_NO,    RESET},
        {KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN,  KC_RPRN,  /* */ KC_TILD, KC_EQL, /* */ KC_NO, KC_NO,  KC_NO, KC_NO, BL_TOGG},
        {KC_EXLM, KC_AT,    KC_HASH, KC_DLR,   KC_PERC,  /* */ KC_GRV, KC_MINS, /* */ KC_NO, KC_NO,  KC_NO, KC_NO, BL_STEP},
        {KC_TRNS, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS, /* */  KC_SPC,  /* */ KC_TRNS,  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
      }
    };
