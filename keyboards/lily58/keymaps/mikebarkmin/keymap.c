#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum custom_keycodes {
  ALPHA = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

enum layers {
    _ALPHA = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ALPHA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ^   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ß   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Z  |   U  |   I  |   O  |   P  |  ü   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ö  |  ä   |
 * |------+------+------+------+------+------| MUTE  |    |  DEL  |------+------+------+------+------+------|
 * |LShift|   Y  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LCTRL| LGUI |LOWER | / SPC  /        \ENTER \  |RAISE | RGUI | LALT|
 *                   `----------------------------'           '------''--------------------'
 */

 [_ALPHA] = LAYOUT( \
  DE_CIRC, DE_1,   DE_2,    DE_3,    DE_4,    DE_5,                     DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS, \
  KC_TAB, DE_Q,   DE_W,    DE_E,    DE_R,    DE_T,                     DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA, \
  KC_ESC,  DE_A,   DE_S,    DE_D,    DE_F,    DE_G,                     DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA, \
  KC_LSFT, DE_Y,   DE_X,    DE_C,    DE_V,    DE_B, KC_MUTE,  KC_DEL,  DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT, \
                     KC_LCTL, KC_LGUI, LOWER, KC_SPC,           KC_ENTER, RAISE, KC_RGUI, KC_LALT \
),
/* LOWER / SYMBOLS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  €   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   '  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  $   |   !  |   +  |   (  |   )  |   |  |-------.    ,-------|   -  |   =  |   _  |   *  |   %  |   "  |
 * |------+------+------+------+------+------| MUTE  |    |   @   |------+------+------+------+------+------|
 * |  <   |   >  |   #  |   {  |   }  |   ~  |-------|    |-------|   &  |   [  |   ]  |   /  |   \  |   `  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LCTRL| LGUI |LOWER | / BSPC /        \ TAB \  |RAISE | RGUI | LALT|
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  DE_EURO, KC_1,    KC_2,    KC_3,    KC_4,     KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DE_QUOT, \
  KC_DLR,  KC_EXLM, DE_PLUS, DE_LPRN, DE_RPRN,  DE_PIPE,                      DE_MINS, DE_EQL,  DE_UNDS, DE_ASTR, DE_PERC, DE_DQUO, \
  DE_LABK, DE_RABK, DE_HASH, DE_LCBR, DE_RCBR,  DE_TILD,  _______, DE_AT, DE_AMPR, DE_LBRC, DE_RBRC, DE_SLSH, DE_BSLS, DE_GRV,  \
                       _______, _______, _______, KC_BSPC       , KC_TAB,  _______, _______, _______\
),
/* RAISE / NAV
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | INS  | DEL  | P_UP |P_DOWN| HOME |-------.    ,-------| LEFT | DOWN |  UP  | RIGHT|      |      |
 * |------+------+------+------+------+------| MUTE  |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LCTRL| LGUI |LOWER | / BSPC /        \ TAB \  |RAISE | RGUI | LALT|
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_INS,  KC_DEL,  KC_PGUP, KC_PGDN, KC_HOME,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, \
                       _______, _______, _______, KC_BSPC       , KC_TAB,  _______, _______, _______\
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | TOGG | MOD+ |      |      |      |-------.    ,-------|      | HUE+ | SAT+ | BRI+ |      |      |
 * |------+------+------+------+------+------| MUTE  |    | PRINT |------+------+------+------+------+------|
 * |      |      | MOD- |      |      |      |-------|    |-------|      | HUE- | SAT- | BRI- |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LCTRL| LGUI |LOWER | / BSPC  /       \Space \  |RAISE |BackSP| LALT|
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
  XXXXXXX, UG_TOGG, LM_NEXT,  XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, LM_PREV, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
                             _______, _______, _______, _______, _______,  _______, _______, _______ \
  ),
};

int RGB_current_mode;

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_get_mode();
    #endif
}

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master())
    return OLED_ROTATION_270;  // Rotate 90 degrees to the right for left hand
  return OLED_ROTATION_180;    // Keep right hand display flipped
}

void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    oled_write_P(PSTR("Layer"), false);
    oled_write_P(PSTR("_____"), false);
    oled_set_cursor(0,3);
 
    switch (get_highest_layer(layer_state)) {
        case _ALPHA:
            oled_write_P(PSTR("ALPHA"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJST"), false);
            break;
 
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_set_cursor(0,5);
    oled_write_P(PSTR("_____"), false);
    
    oled_set_cursor(0,8);
    oled_write_P(PSTR("Key"), false);
    oled_set_cursor(0,9);
    oled_write_P(PSTR("_____"), false);
    
    oled_set_cursor(0,12);
    oled_write(read_keylog(), false);
  }
  // Right side: empty (no display content)

  return false;
}
#endif // OLED_DRIVER_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
  }

  uint16_t lower_timer = 0, raise_timer = 0;

  switch (keycode) {
    case ALPHA:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_ALPHA);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        lower_timer = timer_read();
        layer_on(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else if (timer_elapsed(lower_timer) < TAPPING_TERM) {
        layer_off(_LOWER);
        tap_code(KC_ENT);
      } else {
        layer_off(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        raise_timer = timer_read();
        layer_on(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else if (timer_elapsed(raise_timer) < TAPPING_TERM) {
        layer_off(_RAISE);
        tap_code(KC_TAB);
      } else {
        layer_off(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
        if (record->event.pressed) {
          layer_on(_ADJUST);
        } else {
          layer_off(_ADJUST);
        }
        return false;
        break;
  }
  return true;
}

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }

    return true;
}
#endif

