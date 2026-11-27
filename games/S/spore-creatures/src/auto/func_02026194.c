#include "m2c.h"

s32 func_02003f88();                                /* extern */
M2C_UNK func_02004a14(s32, s32 *);                  /* extern */

void func_02026194(void *arg0) {
    s32 sp0;

    if ((M2C_FIELD(arg0, u8 *, 0xBE) != 0) && (M2C_FIELD(arg0, u8 *, 0xBF) != 0)) {
        sp0 = 0xF;
        func_02004a14(func_02003f88(), &sp0);
    }
}
