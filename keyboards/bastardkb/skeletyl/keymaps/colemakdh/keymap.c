/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_3x5_3(
  //.--------------------------------------------.            .--------------------------------------------.
     KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                 KC_K,   KC_L,     KC_U,    KC_Y,    KC_QUOT,
  //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
     LCTL_T(KC_A),LALT_T(KC_R),LGUI_T(KC_S),LSFT_T(KC_T),KC_G, KC_M,RSFT_T(KC_N),RGUI_T(KC_E),RALT_T(KC_I),RCTL_T(KC_O),
  //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
     KC_Z,    KC_X,    KC_C,    HYPR_T(KC_H),KC_V,             KC_K,HYPR_T(KC_H),KC_COMM, KC_DOT,  KC_SLSH,
  //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                KC_ESC,LT(2, KC_SPC),LT(3,KC_TAB),             KC_ENT,LT(1,KC_BSPC),KC_DEL
                    //`--------------------------'            `--------------------------'

  ),

  [1] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_PERC, KC_MINS, KC_CIRC, KC_DLR,  XXXXXXX,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_GRV,  KC_AMPR, KC_EQL,  KC_COLN, XXXXXXX/*=>*/,                         XXXXXXX, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_EXLM, KC_PIPE, KC_AT,   KC_HASH, KC_BSLS,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        _______, _______,  _______,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP,                               XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                               XXXXXXX,RSFT_T(KC_LPRN),RGUI_T(KC_RPRN),KC_RALT, RCTL_T(KC_SCLN),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,S(G(KC_LBRC)),XXXXXXX,S(G(KC_RBRC)),XXXXXXX,                       XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, C(S(G(KC_4))), XXXXXXX,                        XXXXXXX, KC_P7, KC_P8, KC_P9, KC_PLUS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_MPRV, KC_MNXT, KC_MPLY, KC_VOLD, KC_VOLU,                              XXXXXXX, KC_P4, KC_P5, KC_P6, KC_PDOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, KC_P1, KC_P2, KC_P3, KC_ASTR,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         XXXXXXX, XXXXXXX, XXXXXXX,    KC_MINS, KC_P0,   XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};
