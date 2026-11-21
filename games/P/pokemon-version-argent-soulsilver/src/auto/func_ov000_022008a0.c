#include "m2c.h"

extern s32 func_ov000_02201be4(void *, s32, s32, s32);
extern void func_ov000_0220a8b0(void *, void *);
extern u8 data_ov000_02217f04;
extern u8 data_ov000_0221800c;

s32 func_ov000_022008a0(void **arg0, s32 arg1, s32 arg2) {
    u8 *ip;

    if (arg0 == 0 || (ip = *arg0) == 0) {
        return 2;
    }
    if (*(s32 *) (ip + 0x108) != 0) {
        return 0;
    }
    if (*(s32 *) (ip + 0x1D8) == 4) {
        func_ov000_0220a8b0(arg0, &data_ov000_02217f04);
        return 2;
    }
    if (arg2 == 0) {
        func_ov000_0220a8b0(arg0, &data_ov000_0221800c);
        return 2;
    }
    return func_ov000_02201be4(arg0, arg1, 1, arg2);
}
