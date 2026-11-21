#include "m2c.h"

s32 func_ov000_021ff9fc(M2C_UNK, s32, s32, s32 *, s32 *); /* extern */

s32 func_ov000_021ff578(M2C_UNK arg0) {
    s32 sp4;
    s32 sp8;

    sp8 = 4;
    if (func_ov000_021ff9fc(arg0, 0xFFFF, 0x1001, &sp4, &sp8) != -1) {
        return sp4;
    }
    return -1;
}
