#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

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
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ES_LSPO,
  ES_RSPC,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      ES_OVRR,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           ES_APOS,        KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_HOME,                                        ES_MINS,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           ES_GRV,         
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_END,                                                                         ES_PLUS,        KC_H,           KC_J,           KC_K,           KC_L,           ES_NTIL,        ES_ACUT,        
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_RSHIFT,      
    KC_LCTRL,       KC_LALT,        KC_LALT,        ES_LESS,        ES_IEXL,        KC_BSPACE,                                                                                                      KC_ENTER,       ES_CCED,        KC_RALT,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       MO(1),          KC_LGUI,                        KC_LGUI,        MO(2),          KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_PSCREEN,     KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_DELETE,      
    KC_PGUP,        ES_BSLS,        ES_SLSH,        ES_ASTR,        ES_IEXL,        KC_EXLM,        ST_MACRO_0,                                     WEBUSB_PAIR,    KC_7,           KC_8,           KC_9,           ES_LPRN,        ES_RPRN,        KC_F12,         
    KC_PGUP,        ES_AT,          ES_MINS,        ES_PLUS,        ES_IQUE,        ES_QUES,        ST_MACRO_1,                                                                     ST_MACRO_4,     KC_4,           KC_5,           KC_6,           ES_LCBR,        ES_RCBR,        KC_TRANSPARENT, 
    KC_LSHIFT,      ES_HASH,        ST_MACRO_2,     ES_EQL,         ES_AMPR,        ES_PIPE,                                        KC_1,           KC_2,           KC_3,           ES_LBRC,        ES_RBRC,        KC_HOME,        
    KC_LCTRL,       KC_LALT,        ST_MACRO_3,     KC_SPACE,       KC_SPACE,       KC_DELETE,                                                                                                      KC_ENTER,       KC_0,           KC_RALT,        ES_LESS,        ES_GRTR,        KC_END,         
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, MO(3),          KC_SPACE
  ),
  [2] = LAYOUT_moonlander(
    KC_SYSTEM_POWER,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_WAKE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_SLEEP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_WWW_HOME,    KC_MY_COMPUTER, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,  KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_NEXT_TRACK,
    MO(4),          MO(3),          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    ST_MACRO_5,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_7,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_MS_BTN2),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, ST_MACRO_11,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_9,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_12,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_10,                                                                                                    ST_MACRO_16,    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_21,    ST_MACRO_22,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_24,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_25,    ST_MACRO_26,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_23,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {105,255,255}, {88,255,255}, {105,255,255}, {88,255,255}, {105,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {88,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {88,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {154,255,255}, {0,0,255}, {0,0,255}, {105,255,255}, {175,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,255,255}, {0,255,255}, {105,255,255}, {35,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {35,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {105,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {154,255,255}, {0,255,255}, {0,255,255}, {105,255,255}, {175,255,255}, {105,255,255}, {105,255,255} },

    [1] = { {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {166,255,255}, {86,145,255}, {86,145,255}, {86,145,255}, {166,255,255}, {14,255,255}, {86,145,255}, {86,145,255}, {86,145,255}, {0,0,255}, {14,255,255}, {86,145,255}, {86,145,255}, {86,145,255}, {14,255,255}, {14,255,255}, {86,145,255}, {86,145,255}, {86,145,255}, {14,255,255}, {14,255,255}, {86,145,255}, {86,145,255}, {86,145,255}, {14,255,255}, {0,0,255}, {0,0,255}, {14,255,255}, {175,255,255}, {0,0,0}, {166,255,255}, {166,255,255}, {14,255,255}, {0,0,0}, {166,255,255}, {166,255,255}, {14,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {14,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {14,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {166,255,255}, {14,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {14,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {14,255,255}, {175,255,255}, {0,0,255}, {14,255,255}, {175,255,255}, {0,0,0}, {166,255,255} },

    [2] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {94,255,227}, {175,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {82,255,188}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {88,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

void AddBackSlashAndBrackets(char* str)
{
      SEND_STRING(SS_TAP(X_NLCK));
      SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_2)));
      SEND_STRING(str);
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_3)) SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_5)) SS_TAP(X_LEFT));
      SEND_STRING(SS_TAP(X_NLCK));
}

void AddBackSlash(char* str)
{
    SEND_STRING(SS_TAP(X_NLCK));
    SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_2)));
    SEND_STRING(str);
    SEND_STRING(SS_TAP(X_NLCK));
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_SLASH) SS_DELAY(100) SS_TAP(X_KP_ASTERISK));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_ASTERISK) SS_DELAY(100) SS_TAP(X_KP_SLASH));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_6) ));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_C)) SS_DELAY(100) SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_T)))));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_SLASH) SS_DELAY(100) SS_TAP(X_KP_SLASH));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_X));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_T));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_Z));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_X)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_2)));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_UP));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_LEFT));

    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_DOWN));

    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_RIGHT));

    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_X)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("chapter");
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("section");
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("subsection");
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("subsubsection");
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("end");
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("ref");
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("begin");
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      AddBackSlash("item");
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      AddBackSlashAndBrackets("emph");
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
        AddBackSlashAndBrackets("label"); 
    }
    break;
    case ES_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
      return false;
    case ES_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}