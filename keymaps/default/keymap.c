#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_main(
    KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN, KC_KB_MUTE, KC_4, KC_5,
    KC_Q, KC_W, KC_E, KC_R, KC_T
  ),

  [1] = LAYOUT_main(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
    _______, _______, _______, _______, _______
  )
};
