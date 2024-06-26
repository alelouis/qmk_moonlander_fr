#include QMK_KEYBOARD_H
#include "keymap_belgian.h"
#include "keymap_bepo.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_contributions.h"
#include "keymap_croatian.h"
#include "keymap_czech.h"
#include "keymap_danish.h"
#include "keymap_estonian.h"
#include "keymap_french.h"
#include "keymap_german.h"
#include "keymap_german_ch.h"
#include "keymap_hungarian.h"
#include "keymap_italian.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_nordic.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_slovak.h"
#include "keymap_slovenian.h"
#include "keymap_spanish.h"
#include "keymap_swedish.h"
#include "keymap_turkish_q.h"
#include "keymap_uk.h"
#include "keymap_us_international.h"
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  FR_LSPO,
  FR_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_ESCAPE, FR_AMP, FR_EACU, FR_DQUO, FR_APOS, FR_LPRN, MU_TOG,
        KC_TRANSPARENT, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_CIRC,
        KC_TAB, FR_A, FR_Z, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DELETE, KC_TRANSPARENT, FR_Q, KC_S,
        KC_D, KC_F, KC_G, KC_MEH, KC_HYPR, KC_H, KC_J, KC_K, KC_L, FR_M,
        KC_BSPACE, FR_LSPO, FR_W, KC_X, KC_C, KC_V, KC_B, KC_N, FR_COMM,
        FR_SCLN, FR_COLN, KC_TRANSPARENT, FR_RSPC, KC_LCTRL, KC_LGUI, KC_LALT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3, FR_QUES,
        FR_EXLM, KC_TRANSPARENT, KC_TRANSPARENT, WEBUSB_PAIR, KC_SPACE,
        KC_ENTER, TT(1), KC_RGUI, KC_ENTER, KC_SPACE),
    [1] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_LCBR, FR_RCBR,
        KC_TRANSPARENT, FR_PERC, KC_PGUP, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,
        FR_APOS, FR_DQUO, FR_GRV, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, FR_LPRN, FR_RPRN, FR_HASH, FR_AT, KC_PGDOWN, KC_HOME,
        KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, FR_EURO, FR_LBRC, FR_RBRC, FR_UNDS, FR_MINS, KC_PLUS,
        KC_EQUAL, FR_ASTR, FR_SLSH, FR_BSLS, KC_TRANSPARENT, KC_TRANSPARENT,
        FR_DLR, KC_NUBS, S(KC_NUBS), KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, FR_AMP, FR_PIPE, FR_TILD, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{0, 245, 245},   {74, 255, 255},  {0, 0, 0},       {152, 255, 255},
           {152, 255, 255}, {41, 255, 255},  {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {152, 255, 255}, {41, 255, 255},  {0, 0, 0},
           {0, 0, 0},       {0, 0, 0},       {152, 255, 255}, {41, 255, 255},
           {0, 0, 0},       {0, 0, 0},       {0, 0, 0},       {0, 0, 0},
           {41, 255, 255},  {0, 0, 0},       {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {41, 255, 255},  {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {219, 255, 255}, {0, 0, 0},       {0, 245, 245},
           {152, 255, 255}, {74, 255, 255},  {0, 245, 245},   {0, 0, 0},
           {41, 255, 255},  {74, 255, 255},  {74, 255, 255},  {0, 245, 245},
           {0, 0, 0},       {41, 255, 255},  {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {0, 0, 0},       {41, 255, 255},  {0, 0, 0},
           {0, 0, 0},       {41, 255, 255},  {0, 0, 0},       {41, 255, 255},
           {0, 0, 0},       {0, 0, 0},       {41, 255, 255},  {41, 255, 255},
           {41, 255, 255},  {0, 0, 0},       {0, 0, 0},       {41, 255, 255},
           {41, 255, 255},  {41, 255, 255},  {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {0, 0, 0},       {0, 0, 0},       {0, 245, 245},
           {152, 255, 255}, {74, 255, 255},  {141, 255, 233}, {0, 245, 245}},

    [1] = {{0, 0, 0},       {0, 0, 0},       {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {0, 255, 255},   {0, 0, 0},       {0, 0, 0},
           {0, 0, 0},       {0, 0, 0},       {0, 255, 255},   {0, 0, 0},
           {0, 0, 0},       {105, 255, 255}, {105, 255, 255}, {0, 255, 255},
           {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
           {0, 255, 255},   {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
           {154, 255, 255}, {0, 255, 255},   {0, 0, 0},       {105, 255, 255},
           {105, 255, 255}, {0, 0, 0},       {105, 255, 255}, {105, 255, 255},
           {0, 0, 0},       {0, 0, 0},       {0, 0, 0},       {0, 0, 0},
           {0, 255, 255},   {105, 255, 255}, {0, 0, 0},       {154, 255, 255},
           {0, 0, 0},       {0, 255, 255},   {105, 255, 255}, {14, 255, 255},
           {154, 255, 255}, {105, 255, 255}, {0, 255, 255},   {105, 255, 255},
           {154, 255, 255}, {0, 255, 255},   {105, 255, 255}, {0, 255, 255},
           {154, 255, 255}, {154, 255, 255}, {0, 255, 255},   {105, 255, 255},
           {0, 255, 255},   {0, 0, 0},       {154, 255, 255}, {0, 255, 255},
           {0, 0, 0},       {0, 255, 255},   {0, 0, 0},       {14, 255, 255},
           {0, 255, 255},   {0, 0, 0},       {14, 255, 255},  {14, 255, 255},
           {0, 0, 0},       {0, 0, 0},       {0, 0, 0},       {0, 0, 0}},

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb_matrix_set_color(i, 0, 0, 0);
    } else {
      RGB rgb = hsv_to_rgb(hsv);
      float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
      rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) {
    return;
  }
  switch (biton32(layer_state)) {
  case 0:
    set_layer_color(0);
    break;
  case 1:
    set_layer_color(1);
    break;
  default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case FR_LSPO:
    perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, FR_LPRN);
    return false;
  case FR_RSPC:
    perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, FR_RPRN);
    return false;
  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}
