#include "m2c.h"

extern s32 func_ov000_0220d9c4();
extern s32 func_ov000_0220d958(void *, s32, s32);
extern s32 func_ov000_0220d90c();
extern s32 func_ov000_0220d7fc(void *, s32, s32);
extern s32 func_ov000_0220d720(void *, s32, s32);
extern s32 func_ov000_0220d688(void *, s32, s32);
extern s32 func_ov000_0220d5dc(void *, s32, s32);

s32 func_ov000_0220da08(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(u16 *) (arg0 + 0x66) = *(u16 *) (arg0 + 0x66) + 1;
    if (arg1 == 0) {
        if (func_ov000_0220d5dc(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 1) {
        if (func_ov000_0220d688(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 2) {
        if (func_ov000_0220d720(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 3) {
        if (func_ov000_0220d7fc(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 4) {
        if (func_ov000_0220d90c() == 0) {
            return 0;
        }
    } else if (arg1 == 5) {
        if (func_ov000_0220d958(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 6) {
        if (func_ov000_0220d9c4() == 0) {
            return 0;
        }
    }
    return 1;
}
