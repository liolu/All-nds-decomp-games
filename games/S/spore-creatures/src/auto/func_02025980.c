#include "m2c.h"

s32 func_02003f88();                                /* extern */
M2C_UNK func_02004a14(s32, s32 *);                  /* extern */

void func_02025980(void) {
    s32 sp0;

    sp0 = 0xE;
    func_02004a14(func_02003f88(), &sp0);
}
