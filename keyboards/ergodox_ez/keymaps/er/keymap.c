#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    KC_ESCAPE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,
    MO(2),KC_Q,KC_W,KC_E,KC_R,KC_T,KC_TRANSPARENT,
    MO(1),KC_A,KC_S,KC_D,KC_F,KC_G,
    KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_TRANSPARENT,
    KC_CAPSLOCK,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT,KC_RIGHT,
    KC_HOME,KC_PGUP,KC_APPLICATION,KC_SPACE,KC_BSPACE,KC_LALT,
    
    KC_7,KC_8,KC_9,KC_0,KC_MINUS,KC_EQUAL,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_Y,KC_U,KC_I,KC_O,KC_P,MO(2),
    KC_H,KC_J,KC_K,KC_L,KC_SCOLON,MO(1),
    KC_DELETE,KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSHIFT,
    KC_UP,KC_DOWN,KC_TRANSPARENT,KC_QUOTE,KC_RCTRL,KC_PGDOWN,KC_END,KC_LGUI,KC_RALT,KC_TAB,KC_ENTER),

  [1] = LAYOUT_ergodox(
    TO(0),KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,
    KC_TRANSPARENT,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_GRAVE,KC_TRANSPARENT,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    
    KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_DOT,KC_7,KC_8,KC_9,KC_ASTR,KC_TRANSPARENT,
    KC_COMMA,KC_4,KC_5,KC_6,KC_QUOTE,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_AMPR,KC_1,KC_2,KC_3,KC_BSLASH,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_0,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [2] = LAYOUT_ergodox(
    TO(0),KC_ASTG,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_UP,KC_MS_UP,KC_MS_WH_DOWN,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_UP,KC_MS_WH_DOWN,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN1,KC_MS_BTN2,KC_MS_BTN3,
    
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_PSCREEN,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_ACCEL0,KC_MS_ACCEL1,KC_MS_ACCEL2,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN3,KC_MS_BTN1,KC_MS_BTN2),
};

const uint16_t PROGMEM fn_actions[] = {
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
    return state;
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) 
{
};