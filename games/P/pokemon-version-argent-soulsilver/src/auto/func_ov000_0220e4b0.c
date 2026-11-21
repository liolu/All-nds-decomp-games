#include "m2c.h"

u32 func_ov000_021ff388(void);
s32 func_ov000_0220c880(void *, void *, s32, s32, s32, s32, s32, s32);
s32 func_ov000_0220d37c(void *, s32, s32);
u8 *func_ov000_0220ef0c(void);

s32 func_ov000_0220e4b0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *t;

    t = func_ov000_0220ef0c();
    if (*(s32 *) (arg0 + 0x2C) != 0 && func_ov000_0220c880(arg0, t, arg1, arg2, 1, 0, 0, 0) == 0) {
        return 0;
    }
    if (t == NULL) {
        return 1;
    }
    if (*(s32 *) (t + 0xC) == 0) {
        if (*(u32 *) (t + 0x20) == 0 || (func_ov000_021ff388() - *(u32 *) (t + 0x1C)) < *(u32 *) (t + 0x20)) {
            return 1;
        }
        if (func_ov000_0220d37c(t, 6, 1) == 0) {
            return 0;
        }
    } else if (func_ov000_0220d37c(t, 2, 1) == 0) {
        return 0;
    }
    return 1;
}
