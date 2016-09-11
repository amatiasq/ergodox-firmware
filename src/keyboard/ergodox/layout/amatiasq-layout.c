/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/usb/usage-page/keyboard-spanish.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  altprre  &kbfun_alt_press_release
#define  guiprre  &kbfun_gui_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------



// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	ES_KEY_1_Exclamation_Pipe,	ES_KEY_2_DoubleQuotes_At,	ES_KEY_3_Dot_Numeral,	ES_KEY_4_Dollar,	ES_KEY_5_Percent,	2,
	ES_KEY_Tab,	ES_KEY_q_Q,	ES_KEY_w_W,	ES_KEY_e_E_Euro,	ES_KEY_r_R,	ES_KEY_t_T,	0,
	0,	ES_KEY_a_A,	ES_KEY_s_S,	ES_KEY_d_D,	ES_KEY_f_F,	ES_KEY_g_G,
	ES_KEY_LeftShift,	ES_KEY_z_Z,	ES_KEY_x_X,	ES_KEY_c_C,	ES_KEY_v_V,	ES_KEY_b_B,	1,
	ES_KEY_LeftControl,	ES_KEY_LeftAlt,	0,	0,	1,
	ES_KEY_LeftControl,	ES_KEY_LeftAlt,
	0,	0,	ES_KEY_DeleteForward,
	ES_KEY_DeleteBackspace,	ES_KEY_LeftGUI,	ES_KEY_Escape,
	// right hand
	2,	ES_KEY_6_Ampersand_NotSign,	ES_KEY_7_Slash,	ES_KEY_8_LeftParenthesis,	ES_KEY_9_RightParenthesis,	ES_KEY_0_Equal,	0,
	0,	ES_KEY_y_Y,	ES_KEY_u_U,	ES_KEY_i_I,	ES_KEY_o_O,	ES_KEY_p_P,	0,
	ES_KEY_h_H,	ES_KEY_j_J,	ES_KEY_k_K,	ES_KEY_l_L,	ES_KEY_Enye,	0,
	1,	ES_KEY_n_N,	ES_KEY_m_M,	ES_KEY_Comma_Semicolon,	ES_KEY_Period_Colon,	ES_KEY_Slash_Underscore,	ES_KEY_RightShift,
	ES_KEY_UpArrow,	ES_KEY_DownArrow,	ES_KEY_LeftArrow,	ES_KEY_RightArrow,	0,
	ES_KEY_LeftAlt,	ES_KEY_LeftControl,
	ES_KEY_LeftGUI,	0,	0,
	ES_KEY_Tab,	ES_KEY_ReturnEnter,	ES_KEY_Spacebar
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	ES_KEY_F1,	ES_KEY_F2,	ES_KEY_F3,	ES_KEY_F4,	ES_KEY_F5,	ES_KEY_F6,
	ES_KEY_Tab,	ES_KEY_AcuteAccent_Diaeresis_LeftBrace,	ES_KEY_CloseExclamation_CloseQuestion,	ES_KEY_8_LeftParenthesis,	ES_KEY_9_RightParenthesis,	ES_KEY_1_Exclamation_Pipe,	0,
	0,	ES_KEY_GraveAccent_Circumflex_LeftBracket,	ES_KEY_SingleQuote_Question,	ES_KEY_AcuteAccent_Diaeresis_LeftBrace,	ES_KEY_Cedilla__RightBrace,	ES_KEY_Plus_Asterisk_RightBracket,
	ES_KEY_LeftShift,	ES_KEY_LowerThan_GreaterThan,	ES_KEY_LowerThan_GreaterThan,	ES_KEY_GraveAccent_Circumflex_LeftBracket,	ES_KEY_Plus_Asterisk_RightBracket,	ES_KEY_Cedilla__RightBrace,	0,
	ES_KEY_LeftControl,	ES_KEY_LeftAlt,	0,	0,	0,
	ES_KEY_LeftControl,	ES_KEY_LeftAlt,
	0,	0,	ES_KEY_DeleteForward,
	ES_KEY_DeleteBackspace,	ES_KEY_LeftGUI,	ES_KEY_Escape,
	// right hand
	ES_KEY_F7,	ES_KEY_F8,	ES_KEY_F9,	ES_KEY_F10,	ES_KEY_F11,	ES_KEY_F12,	ES_KEY_Mute,
	0,	ES_KEY_Home,	ES_KEY_PageUp,	ES_KEY_UpArrow,	ES_KEY_PageDown,	ES_KEY_End,	ES_KEY_VolumeUp,
	ES_KEY_LeftArrow,	ES_KEY_LeftArrow,	ES_KEY_DownArrow,	ES_KEY_RightArrow,	ES_KEY_RightArrow,	ES_KEY_VolumeDown,
	0,	0,	ES_KEY_LeftArrow,	0,	ES_KEY_RightArrow,	0,	ES_KEY_RightShift,
	0,	ES_KEY_Pause,	0,	0,	0,
	ES_KEY_LeftAlt,	ES_KEY_LeftControl,
	ES_KEY_LeftGUI,	0,	0,
	ES_KEY_Tab,	ES_KEY_ReturnEnter,	ES_KEY_Spacebar
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	1,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	1,
	0,	ES_KEY_LeftAlt,	0,	0,	1,
	ES_KEY_LeftControl,	ES_KEY_LeftAlt,
	0,	0,	ES_KEY_DeleteForward,
	ES_KEY_DeleteBackspace,	ES_KEY_LeftGUI,	ES_KEY_Escape,
	// right hand
	0,	0,	0,	KEYPAD_Slash,	KEYPAD_Asterisk,	KEYPAD_Minus,	0,
	0,	0,	KEYPAD_7_Home,	KEYPAD_8_UpArrow,	KEYPAD_9_PageUp,	KEYPAD_Plus,	0,
	0,	KEYPAD_4_LeftArrow,	KEYPAD_5,	KEYPAD_6_RightArrow,	KEYPAD_Plus,	0,
	1,	0,	KEYPAD_1_End,	KEYPAD_2_DownArrow,	KEYPAD_3_PageDown,	KEYPAD_ENTER,	0,
	KEYPAD_0_Insert,	KEYPAD_0_Insert,	KEYPAD_Period_Delete,	KEYPAD_ENTER,	0,
	ES_KEY_LeftAlt,	ES_KEY_LeftControl,
	ES_KEY_LeftGUI,	0,	0,
	ES_KEY_Tab,	ES_KEY_ReturnEnter,	ES_KEY_Spacebar
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush2,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,
	kprrel,	kprrel,	NULL,	NULL,	lpush1,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	lpush1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	sshprre,	sshprre,	altprre,	lpop,
	NULL,	kprrel,	kprrel,	altprre,	altprre,	kprrel,
	kprrel,	kprrel,	sshprre,	altprre,	altprre,	kprrel,	lpop,
	kprrel,	kprrel,	NULL,	NULL,	NULL,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	guiprre,	kprrel,	kprrel,	kprrel,	guiprre,	kprrel,
	lpop,	NULL,	altprre,	NULL,	altprre,	NULL,	kprrel,
	NULL,	kprrel,	NULL,	NULL,	NULL,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	lpop1,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	lpop,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpush1,
	kprrel,	kprrel,	NULL,	NULL,	lpush1,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	NULL,	NULL,	kprrel,	kprrel,	kprrel,	NULL,
	lpop,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	lpush1,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	NULL,	NULL,	lpop1,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	sshprre,	sshprre,	altprre,	lpop,
	NULL,	kprrel,	kprrel,	altprre,	altprre,	kprrel,
	kprrel,	kprrel,	sshprre,	altprre,	altprre,	kprrel,	lpop,
	kprrel,	kprrel,	NULL,	NULL,	NULL,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	guiprre,	kprrel,	kprrel,	kprrel,	guiprre,	kprrel,
	lpop,	NULL,	altprre,	NULL,	altprre,	NULL,	kprrel,
	NULL,	kprrel,	NULL,	NULL,	NULL,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	kprrel,	kprrel,	NULL,	NULL,	lpop1,
	kprrel,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	NULL,	NULL,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
};
// ----------------------------------------------------------------------------
