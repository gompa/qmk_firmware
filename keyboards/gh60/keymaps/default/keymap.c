#include "gh60.h"
// #include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
	    KC_A,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_GRV,KC_BSPC,\
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,\
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,\
        KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLASH , KC_UP,\
        KC_LCTL,KC_LGUI,KC_LALT,       KC_SPC,             KC_RALT,KC_RGUI,KC_APP,KC_RCTL),
    /* 1: fn */
	KEYMAP(
        KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_GRV,KC_BSPC,\
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,\
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,\
        KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,     KC_SLASH ,     KC_UP,\
        KC_LCTL,KC_LGUI,KC_LALT,       KC_SPC,             KC_RALT,KC_RGUI,KC_APP,KC_RCTL),
    /* 2: arrows */
	KEYMAP(
        KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_GRV,KC_BSPC,\
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,\
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,\
        KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,     KC_SLASH ,     KC_UP,\
        KC_LCTL,KC_LGUI,KC_LALT,       KC_SPC,             KC_RALT,KC_RGUI,KC_APP,KC_RCTL),
};

// const uint16_t PROGMEM fn_actions[] = {
//     [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
//     [1] = ACTION_LAYER_TOGGLE(2),     // toggle arrow overlay
// };

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//   // MACRODOWN only works in this function
//       switch(id) {
//         case 0:
//           if (record->event.pressed) {
//             register_code(KC_RSFT);
//           } else {
//             unregister_code(KC_RSFT);
//           }
//         break;
//       }
//     return MACRO_NONE;
// };

void matrix_scan_user(void) {

//Layer LED indicators
    // uint32_t layer = layer_state;

    // if (layer & (1<<1)) {
    //     gh60_wasd_leds_on();
    //     gh60_fn_led_on();
    // } else {
    //     gh60_wasd_leds_off();
    //     gh60_fn_led_off();
    // }

    // if (layer & (1<<2)) {
    //     gh60_poker_leds_on();
    //     gh60_esc_led_on();
    // } else {
    //     gh60_poker_leds_off();
    //     gh60_esc_led_off();
    // }

};
