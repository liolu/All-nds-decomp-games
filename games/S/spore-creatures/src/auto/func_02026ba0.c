#include "m2c.h"

s32 func_02003f88();                                /* extern */
M2C_UNK func_02004a14(s32, s32 *);                  /* extern */

void func_02026ba0(void *arg0) {
    s32 sp0;

    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x26) != 0) {
        return;
    }
    sp0 = 0xC;
    func_02004a14(func_02003f88(), &sp0);
}
