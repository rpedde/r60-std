/* Copyright 2017 Ron Pedde <ron@pedde.com>
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
#include "r60std.h"
#include "config.h"

#ifdef AUDIO_ENABLE
#include "audio.h"
#endif

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base Layer
     * ,-------------------------------------------------------------------------.
     * |Esc~|   1|   2|   3|   4|   5|   6|   7|   8|   9|   0|   -|   =|Backspac|
     * |-------------------------------------------------------------------------|
     * | Tab  |   Q|   W|   E|   R|   T|   Y|   U|   I|   O|   P|   [|   ]|      |
     * |--------------------------------------------------------------------     |
     * | Caps  |   A|   S|   D|   F|   G|   H|   J|   K|   L|   ;|   '|   #|     |
     * |-------------------------------------------------------------------------|
     * |Shft |   \|   Z|   X|   C|   V|   B|   N|   M|   ,|   .|   /|   Shift    |
     * |-------------------------------------------------------------------------|
     * |Ctrl |Win  |Alt  |            Space            | FN1  | Alt  |Win  |Ctrl |
     * `-------------------------------------------------------------------------'
     */

    KEYMAP_ISO( /* Base */
        KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,  KC_6,  KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,  KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, \
        KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,  KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, \
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,   KC_C,   KC_V,  KC_B,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
        KC_LCTL, KC_LGUI, KC_LALT,                 KC_SPC,                KC_RALT, KC_RGUI, MO(1),   KC_RCTL \
        ),
    /* Function
     * ,-------------------------------------------------------------------------.
     * |   `|  F1|  F2|  F3|  F4|  F5|  F6|  F7|  F8|  F9| F10| F11| F12| Del    |
     * |-------------------------------------------------------------------------|
     * |      |    | up |    |    |    |    |    |    |    |    |    |    |      |
     * |--------------------------------------------------------------------     |
     * |       |left|down|rght|    |    |    |    |    |    |    |    |    |     |
     * |-------------------------------------------------------------------------|
     * |     |    |    |    |    |    |    |    |    |    |    |    |            |
     * |-------------------------------------------------------------------------|
     * |     |     |     |                             |      |      |     |RESET|
     * `-------------------------------------------------------------------------'
     */

    KEYMAP_ISO(
        KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL, \
        ______, ______,KC_UP  , ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
        ______,KC_LEFT,KC_DOWN,KC_RGHT, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
        ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
        ______, ______, ______,                 ______,                 ______, ______, ______, RESET \
        ),

};

void matrix_scan_user(void) {
};

void matrix_init_user(void) {
}
