#ifndef GH60_H
#define GH60_H

#include "quantum.h"
// #include "led.h"

/* GH60 LEDs
 *   GPIO pads
 *   0 F7 WASD LEDs
 *   1 F6 ESC LED
 *   2 F5 FN LED
 *   3 F4 POKER Arrow LEDs
 *   B2 Capslock LED
 *   B0 not connected
 */
// inline void gh60_caps_led_on(void)      { DDRB |=  (1<<2); PORTB &= ~(1<<2); }
// inline void gh60_poker_leds_on(void)    { DDRF |=  (1<<4); PORTF &= ~(1<<4); }
// inline void gh60_fn_led_on(void)    	{ DDRF |=  (1<<5); PORTF &= ~(1<<5); }
// inline void gh60_esc_led_on(void)    	{ DDRF |=  (1<<6); PORTF &= ~(1<<6); }
// inline void gh60_wasd_leds_on(void)    	{ DDRF |=  (1<<7); PORTF &= ~(1<<7); }

// inline void gh60_caps_led_off(void)     { DDRB &= ~(1<<2); PORTB &= ~(1<<2); }
// inline void gh60_poker_leds_off(void)   { DDRF &= ~(1<<4); PORTF &= ~(1<<4); }
// inline void gh60_fn_led_off(void)   	{ DDRF &= ~(1<<5); PORTF &= ~(1<<5); }
// inline void gh60_esc_led_off(void)   	{ DDRF &= ~(1<<6); PORTF &= ~(1<<6); }
// inline void gh60_wasd_leds_off(void)   	{ DDRF &= ~(1<<7); PORTF &= ~(1<<7); }

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */


#define KEYMAP( \
 K30, K31, K40, K41, K20, K21, K10, K11, K70, K71, K50, K61, K60, K01, K00, \
 K53, K52, K33, K32, K43, K42, K23, K22, K13, K12, K73, K62, K63, \
 K64, K74, K54, K55, K34, K35, K44, K45, K24, K25, K14, K15, K72, \
 K75, K66, K67, K56, K57, K36, K37, K26, K27, K16, K17, K03, \
 K65, K77, K76, K51, K46, K47, K05, K04 \
 ) { \
 { K00, K01, KC_NO, K03, K04, K05, KC_NO, KC_NO }, \
 { K10, K11, K12, K13, K14, K15, K16, K17 }, \
 { K20, K21, K22, K23, K24, K25, K26, K27 }, \
 { K30, K31, K32, K33, K34, K35, K36, K37 }, \
 { K40, K41, K42, K43, K44, K45, K46, K47 }, \
 { K50, K51, K52, K53, K54, K55, K56, K57 }, \
 { K60, K61, K62, K63, K64, K65, K66, K67 }, \
 { K70, K71, K72, K73, K74, K75, K76, K77 }  \
}


/* ANSI variant. No extra keys for ISO */
#define KEYMAP_ANSI( \
    K30, K31, K40, K41, K20, K21, K10, K11, K70, K71, K50, K61, K60, K01, K00, \
 K53, K52, K33, K32, K43, K42, K23, K22, K13, K12, K73, K62, K63, \
 K64, K74, K54, K55, K34, K35, K44, K45, K24, K25, K14, K15, K72, \
 K75, K66, K67, K56, K57, K36, K37, K26, K27, K16, K17, K03, \
 K65, K77, K76, K51, K46, K47, K05, K04 \
 ) { \
 { K00, K01, KC_NO, K03, K04, K05, KC_NO, KC_NO }, \
 { K10, K11, K12, K13, K14, K15, K16, K17 }, \
 { K20, K21, K22, K23, K24, K25, K26, K27 }, \
 { K30, K31, K32, K33, K34, K35, K36, K37 }, \
 { K40, K41, K42, K43, K44, K45, K46, K47 }, \
 { K50, K51, K52, K53, K54, K55, K56, K57 }, \
 { K60, K61, K62, K63, K64, K65, K66, K67 }, \
 { K70, K71, K72, K73, K74, K75, K76, K77 }  \
}

/* ISO variant. Remove useless ANSI keys */
#define KEYMAP_ISO( \
 K30, K31, K40, K41, K20, K21, K10, K11, K70, K71, K50, K61, K60, K01, K00, \
 K53, K52, K33, K32, K43, K42, K23, K22, K13, K12, K73, K62, K63, \
 K64, K74, K54, K55, K34, K35, K44, K45, K24, K25, K14, K15, K72, \
 K75, K66, K67, K56, K57, K36, K37, K26, K27, K16, K17, K03, \
 K65, K77, K76, K51, K46, K47, K05, K04 \
 ) { \
 { K00, K01, KC_NO, K03, K04, K05, KC_NO, KC_NO }, \
 { K10, K11, K12, K13, K14, K15, K16, K17 }, \
 { K20, K21, K22, K23, K24, K25, K26, K27 }, \
 { K30, K31, K32, K33, K34, K35, K36, K37 }, \
 { K40, K41, K42, K43, K44, K45, K46, K47 }, \
 { K50, K51, K52, K53, K54, K55, K56, K57 }, \
 { K60, K61, K62, K63, K64, K65, K66, K67 }, \
 { K70, K71, K72, K73, K74, K75, K76, K77 }  \
}


/* HHKB Variant */
#define KEYMAP_HHKB( \
 K30, K31, K40, K41, K20, K21, K10, K11, K70, K71, K50, K61, K60, K01, K00, \
 K53, K52, K33, K32, K43, K42, K23, K22, K13, K12, K73, K62, K63, \
 K64, K74, K54, K55, K34, K35, K44, K45, K24, K25, K14, K15, K72, \
 K75, K66, K67, K56, K57, K36, K37, K26, K27, K16, K17, K03, \
 K65, K77, K76, K51, K46, K47, K05, K04 \
 ) { \
 { K00, K01, KC_NO, K03, K04, K05, KC_NO, KC_NO }, \
 { K10, K11, K12, K13, K14, K15, K16, K17 }, \
 { K20, K21, K22, K23, K24, K25, K26, K27 }, \
 { K30, K31, K32, K33, K34, K35, K36, K37 }, \
 { K40, K41, K42, K43, K44, K45, K46, K47 }, \
 { K50, K51, K52, K53, K54, K55, K56, K57 }, \
 { K60, K61, K62, K63, K64, K65, K66, K67 }, \
 { K70, K71, K72, K73, K74, K75, K76, K77 }  \
}

#define  LAYOUT KEYMAP
#define LAYOUT_60_ansi KEYMAP_ANSI
#define LAYOUT_60_iso KEYMAP_ISO
#define LAYOUT_60_ansi_split_bs_rshift KEYMAP_HHKB

#endif
