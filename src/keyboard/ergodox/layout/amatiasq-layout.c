#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
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
#define  lpush0   &kbfun_layer_pop_all
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
#define  lpop0    &kbfun_layer_pop_all
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

      // LAYER $index
      KB_MATRIX_LAYER(0, 41, 30, 31, 32, 33, 34, 2, 43, 20, 26, 8, 21, 23, 1, 0, 4, 22, 7, 9, 10, 225, 29, 27, 6, 25, 5, 0, 224, 226, 0, 0, 1, 0, 0, 0, 0, 0, 42, 227, 41, 2, 35, 36, 37, 38, 39, 102, 1, 28, 24, 12, 18, 19, 0, 11, 13, 14, 15, 51, 40, 0, 17, 16, 54, 55, 56, 225, 81, 82, 80, 79, 226, 0, 0, 0, 0, 0, 43, 40, 44),

      // LAYER $index
      KB_MATRIX_LAYER(0, 0, 58, 59, 60, 61, 62, 63, 43, 30, 31, 37, 38, 32, 1, 0, 47, 45, 52, 0, 48, 225, 100, 100, 47, 48, 0, 0, 224, 226, 53, 53, 0, 0, 0, 0, 0, 0, 42, 227, 41, 64, 65, 66, 67, 68, 69, 102, 1, 74, 75, 82, 78, 0, 0, 80, 80, 81, 79, 79, 40, 0, 0, 80, 77, 79, 0, 225, 128, 129, 127, 0, 226, 0, 0, 0, 0, 0, 43, 40, 44),

      // LAYER $index
      KB_MATRIX_LAYER(0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 224, 226, 0, 0, 1, 0, 0, 0, 0, 0, 42, 227, 41, 0, 0, 83, 84, 85, 86, 102, 1, 0, 95, 96, 97, 87, 0, 0, 92, 93, 94, 87, 40, 0, 0, 89, 90, 91, 88, 225, 98, 98, 99, 88, 226, 0, 0, 0, 0, 0, 43, 40, 44),

    };
    // ----------------------------------------------------------------------------

    // PRESS ----------------------------------------------------------------------
    const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

      // LAYER $index
      KB_MATRIX_LAYER(NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush2, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush0, kprrel, kprrel, NULL, NULL, lpush1, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel, lpush2, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush0, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel),

      // LAYER $index
      KB_MATRIX_LAYER(NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, altprre, altprre, sshprre, sshprre, altprre, lpush1, NULL, kprrel, kprrel, altprre, NULL, kprrel, kprrel, kprrel, sshprre, altprre, altprre, NULL, lpush0, kprrel, kprrel, kprrel, altprre, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1, kprrel, kprrel, kprrel, kprrel, NULL, NULL, guiprre, kprrel, kprrel, kprrel, guiprre, kprrel, lpush0, NULL, altprre, kprrel, altprre, NULL, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel),

      // LAYER $index
      KB_MATRIX_LAYER(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, NULL, NULL, NULL, NULL, NULL, lpush1, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, NULL, NULL, NULL, NULL, NULL, lpush0, kprrel, kprrel, NULL, NULL, lpush1, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1, NULL, kprrel, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, lpush0, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel),

    };
    // ----------------------------------------------------------------------------

    // RELEASE --------------------------------------------------------------------
    const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

      // LAYER $index
      KB_MATRIX_LAYER(NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, NULL, NULL, lpop1, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel),

      // LAYER $index
      KB_MATRIX_LAYER(NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, altprre, altprre, sshprre, sshprre, altprre, NULL, NULL, kprrel, kprrel, altprre, NULL, kprrel, kprrel, kprrel, sshprre, altprre, altprre, NULL, NULL, kprrel, kprrel, kprrel, altprre, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, kprrel, kprrel, kprrel, NULL, NULL, guiprre, kprrel, kprrel, kprrel, guiprre, kprrel, NULL, NULL, altprre, kprrel, altprre, NULL, kprrel, kprrel, kprrel, kprrel, NULL, kprrel, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel),

      // LAYER $index
      KB_MATRIX_LAYER(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, NULL, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, NULL, NULL, lpop1, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL, NULL, NULL, NULL, NULL, kprrel, kprrel, kprrel),

    };
    // ----------------------------------------------------------------------------
