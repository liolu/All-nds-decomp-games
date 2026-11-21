#include "m2c.h"
s32 func_ov000_021ff9fc(s32, s32, s32, s32 *, s32 *);
s32 func_ov000_021ff530(s32 arg0) {
    s32 sp4;
    s32 sp8 = 4;
    s32 r;
    if (func_ov000_021ff9fc(arg0, 0xFFFF, 0x1002, &sp4, &sp8) != -1) {
        r = sp4;
    } else {
        r = -1;
    }
    return r;
}
