#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names {
  _QWERTY = 0,
  _COLEMAK,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  LOWER,
  RAISE,
  ADJUST,
  SH_GOUP,
};

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_default(
    KC_ESC,     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,       KC_6,            KC_NO,   KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,       KC_NO,           KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,      KC_G,       KC_NO,           KC_NO,   KC_H,    KC_J,      KC_K,    KC_L,    KC_SCLN,    KC_QUOT,    KC_ENT,
    KC_PSCREEN, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,       KC_NO,           KC_NO,   KC_N,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      KC_LCTL, KC_LALT, KC_LGUI, RAISE,   KC_SPACE,  KC_SPACE,   KC_NO,           KC_NO,   KC_NO,   KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE, KC_PGDOWN
  ),
  [_COLEMAK] = LAYOUT_default(
    KC_ESC,     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,       KC_6,            KC_NO,   KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,      KC_G,       KC_NO,           KC_J,    KC_L,    KC_U,      KC_Y,    KC_SCLN, KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,      KC_D,       KC_NO,           KC_NO,   KC_H,    KC_N,      KC_E,    KC_I,    KC_O,       KC_QUOT,    KC_ENT,
    KC_PSCREEN, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,       KC_NO,           KC_NO,   KC_K,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      KC_LCTL, KC_LALT, KC_LGUI, RAISE,   KC_SPACE,  KC_SPACE,   KC_NO,           KC_NO,   KC_NO,   KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE, KC_PGDOWN
  ),

  [_LOWER] = LAYOUT_default(
    _______, _______, TO(0),   TO(1),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_RAISE] = LAYOUT_default(
    _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  _______,
    _______, _______, _______, KC_UP,   _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
  ),

  [_ADJUST] = LAYOUT_default(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )
};

void keyboard_post_init_user(void) {
  // TODO set LED indicator
}
void set_qwerty(void){
  // TODO set LED indicator
}
void set_lower(void){
  // TODO set LED indicator
}
void set_raise(void){
  // TODO set LED indicator
}
void set_adjust(void){
  // TODO set LED indicator
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case COLEMAK:
      if (record->event.pressed) {
        writePinHigh(B0);
        writePinHigh(D5);
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
  }
  return true;
}
