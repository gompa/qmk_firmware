/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef GTYPING_H
#define GTYPING_H

#include "quantum.h"



/* Gtyping matrix layout
 * ,-----------------------------------------------------------.
 * | 30| 31| 40| 41| 20| 21| 10| 11| 70| 71| 50| 61| 60| 01| 00|
 * |-----------------------------------------------------------|
 * |   53| 52| 33| 32| 43| 42| 23| 22| 13| 12| 73| 62| 63|     |
 * |-----------------------------------------------------------|  `---'
 * |    20| 21| 22| 23| 24| 25| 26| 27| 70| 71| 72| 73| 74|  75|
 * |------------------------------------------------------------.
 * |  30| 31| 32| 33| 34| 35| 36| 37| 80| 81| 82| 83| 84|  85|86|
 * |------------------------------------------------------------------.
 * |  40| 41|  42|  43|   45|       46|   90|  92|  93| 94| 95| 96| 97|
 * `------------------------------------------------------------------'
 * ,-----------------------------------------------------------.  ,---.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Yen| BS|  |Ins|
 * |-----------------------------------------------------------|  |---|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  |Del|
 * |-----------------------------------------------------------|  `---'
 * |Caps  |  A|  S|  D|  F|  G|  H|  J|  k|  L|  ;|  '| # | Ent|
 * |--------------------------------------------------------------.
 * |Shift| \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  \|Shift| Up|
 * |------------------------------------------------------------------.
 * |Ctrl|Alt|Gui |MHen| Space| Space|Henk|Gui |Ctrl|  Fn|Left|Down|Rgt|
 * `------------------------------------------------------------------'
 */


// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
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
#endif
