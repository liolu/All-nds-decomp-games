#include "m2c.h"

M2C_UNK func_020738f4(s32, s32 *, s32 *, s32 *);    /* extern */

void func_02020c88(void *arg0, s32 arg1, void *arg2) {
    s32 sp8;
    s32 sp4;
    s32 sp0;

    func_020738f4(M2C_FIELD(arg0, s32 *, 0x34E8), &sp8, &sp4, &sp0);
    M2C_FIELD(arg2, s32 *, 0x342B0) = sp8;
    M2C_FIELD(arg2, s32 *, 0x342B4) = sp4;
    M2C_FIELD(arg2, s32 *, 0x342B8) = sp0;
}
