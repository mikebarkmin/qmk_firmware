#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum
{
  DEFAULT = 0,
  SECOND,
  SETTINGS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* ISO 60 layout by mikebarkmin (ISO German keyboard layout shown)
   *
   * This layout starts from a standard ISO 60% layout, and adds a function layer.
   *
   * ,-----------------------------------------------------------------------------------------.
   * | ^ ° | 1 ! | 2 " | 3 § | 4 $ | 5 % | 6 & | 7 / | 8 ( | 9 ) | 0 = | ß ? | ´ ` | Backspace |
   * |-----------------------------------------------------------------------------------------|
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Z  |  U  |  I  |  O  |  P  |  Ä  | + * | Enter  |
   * |----------------------------------------------------------------------------------       |
   * | ESC (SECOND) |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ü  | # ' |  |
   * |-----------------------------------------------------------------------------------------|
   * | Shift | < > |  Y  |  X  |  C  |  V  |  B  |  N  |  M  | , ; | . : | - _ | Shift         |
   * |-----------------------------------------------------------------------------------------|
   * | LCtl  | LGUI  | LAlt  |            Space           | RAlt  | RGUI  | SETTINGS | RCtl    |
   * `-----------------------------------------------------------------------------------------'
   */
    [DEFAULT] = LAYOUT_60_iso(
        KC_GRV, DE_1, DE_2, DE_3, DE_4, DE_5, DE_6, DE_7, DE_8, DE_9, DE_0, DE_SS, DE_ACUT, KC_BSPC,
        KC_TAB, DE_Q, DE_W, DE_E, DE_R, DE_T, DE_Z, DE_U, DE_I, DE_O, DE_P, DE_UDIA, DE_PLUS,
        LT(SECOND, KC_ESC), DE_A, DE_S, DE_D, DE_F, DE_G, DE_H, DE_J, DE_K, DE_L, DE_ODIA, DE_ADIA, DE_HASH, KC_ENT,
        KC_LSFT, DE_LABK, DE_Y, DE_X, DE_C, DE_V, DE_B, DE_N, DE_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, TT(SETTINGS), KC_RCTL),

    [SECOND] = LAYOUT_60_iso(
        KC_NO, KC_NO, DE_SUP2, DE_SUP3, KC_NO, KC_NO, KC_NO, DE_LCBR, DE_LBRC, DE_RBRC, DE_RCBR, DE_BSLS, KC_INS, KC_DEL,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DE_TILD,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, DE_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [SETTINGS] = LAYOUT_60_iso(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_INS, KC_DEL,
        KC_TRNS, RGB_TOG, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_HUI, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_SAI, RGB_VAD, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
