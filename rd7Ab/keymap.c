#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

# ─────────────────────────── Custom mods ───────────────────────────






enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(4, KC_6)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TT(5),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,       
    CW_TOGG,        KC_Q,           MT(MOD_LCTL, KC_W),MT(MOD_LALT, KC_E),MT(MOD_LGUI, KC_R),KC_T,                                           KC_Y,           MT(MOD_RGUI, KC_U),MT(MOD_RALT, KC_I),MT(MOD_RCTL, KC_O),KC_P,           KC_MINUS,       
    MT(MOD_LCTL, KC_TAB),TD(DANCE_0),    LT(3, KC_S),    LT(2, KC_D),    LT(1, KC_F),    KC_G,                                           KC_H,           LT(1, KC_J),    LT(2, KC_K),    LT(3, KC_L),    KC_SCLN,        MT(MOD_RCTL, KC_QUOTE),
    MEH_T(KC_ESCAPE),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       ALL_T(KC_ENTER),
                                                    DUAL_FUNC_0,    MT(MOD_LSFT, KC_TAB),                                MT(MOD_RSFT, KC_BSPC),MEH_T(KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    QK_LLCK,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_CAPS,        KC_1,           MT(MOD_LCTL, KC_2),MT(MOD_LALT, KC_3),MT(MOD_LGUI, KC_4),KC_5,                                           KC_6,           MT(MOD_RGUI, KC_7),MT(MOD_RALT, KC_8),MT(MOD_RCTL, KC_9),KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, KC_HYPR,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, LM(5,MOD_LSFT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_LEFT_ALT,    KC_LEFT_SHIFT,                                  LGUI(KC_BSPC),  MT(MOD_RGUI, KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_AT,          KC_HASH,        KC_DLR,         KC_TRANSPARENT,                                 KC_CIRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_TILD,        KC_MINUS,       KC_UNDS,        KC_PLUS,                                        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(KC_BSPC),  KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ASTR,        KC_PERC,        KC_EXLM,        KC_DQUO,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_AMPR,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_MAC_PASTE,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MAC_COPY,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MAC_PASTE
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_KP_MINUS,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_SLASH,    KC_KP_ASTERISK, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_BSPC,        
                                                    KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_KP_0
  ),
};


const uint16_t PROGMEM combo0[] = { LT(1, KC_F), KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_W):
            return TAPPING_TERM + 30;
        case MT(MOD_LALT, KC_E):
            return TAPPING_TERM + 30;
        case MT(MOD_LGUI, KC_R):
            return TAPPING_TERM + 30;
        case MT(MOD_LCTL, KC_TAB):
            return TAPPING_TERM + 45;
        case TD(DANCE_0):
            return TAPPING_TERM + 30;
        case LT(3, KC_S):
            return TAPPING_TERM + 30;
        case LT(2, KC_D):
            return TAPPING_TERM + 30;
        case LT(1, KC_F):
            return TAPPING_TERM + 45;
        case KC_V:
            return TAPPING_TERM + 70;
        case DUAL_FUNC_0:
            return TAPPING_TERM + 45;
        case MT(MOD_RGUI, KC_U):
            return TAPPING_TERM + 30;
        case MT(MOD_RALT, KC_I):
            return TAPPING_TERM + 30;
        case MT(MOD_RCTL, KC_O):
            return TAPPING_TERM + 30;
        case LT(1, KC_J):
            return TAPPING_TERM + 45;
        case LT(2, KC_K):
            return TAPPING_TERM + 30;
        case LT(3, KC_L):
            return TAPPING_TERM + 30;
        case KC_SCLN:
            return TAPPING_TERM + 20;
        case MT(MOD_RCTL, KC_QUOTE):
            return TAPPING_TERM + 45;
        case KC_M:
            return TAPPING_TERM + 70;
        default:
            return TAPPING_TERM;
    }
}

bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {41,255,255}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215}, {151,243,215} },

    [1] = { {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233}, {245,237,233} },

    [2] = { {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204}, {107,218,204} },

    [3] = { {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204}, {41,218,204} },

    [4] = { {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139}, {18,221,139} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,250,255}, {217,250,255}, {217,250,255}, {0,0,0}, {0,0,0}, {0,0,0}, {217,250,255}, {217,250,255}, {217,250,255}, {0,0,0}, {0,0,0}, {0,0,0}, {217,250,255}, {217,250,255}, {217,250,255}, {0,0,0}, {0,0,0}, {0,0,0}, {217,250,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 1) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 152, 255, 255 });
    rgb_matrix_set_color( 6, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case DOUBLE_HOLD: layer_move(5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(5)) {
            layer_off(5);
          }
        break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_A))SS_DELAY(100)  SS_LGUI(SS_TAP(X_C)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }
      } else {
        if (record->event.pressed) {
          register_mods(MOD_HYPR);
        } else {
          unregister_mods(MOD_HYPR);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
