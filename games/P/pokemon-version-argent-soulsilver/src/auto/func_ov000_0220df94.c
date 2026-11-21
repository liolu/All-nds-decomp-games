#include "m2c.h"
void *func_ov000_021fe70c(s32, s32);
s32 func_ov000_021fe704(s32);
s32 func_ov000_0220ee20(void *, void *);
s32 func_ov000_0220d410(void *);
s32 func_ov000_0220d36c(u16, s32);
s32 func_ov000_0220d338(void *, s32);
s32 func_ov000_0220df94(u8 *arg0, void *arg1, s32 arg2) {
    s32 r9;
    s32 r8;
    u8 *p;
    s32 n;
    s32 i;
    r9 = func_ov000_0220d338(arg1, 0);
    if (arg2 == 2) {
        r8 = r9;
    } else if (arg2 == 4) {
        r8 = func_ov000_0220d338(arg1, 2);
    } else {
        if (func_ov000_0220d410(arg0) != 0) {
            return 1;
        }
        return 0;
    }
    n = func_ov000_021fe704(*(s32 *) (arg0 + 0x60));
    for (i = 0; i < n; i++) {
        p = func_ov000_021fe70c(*(s32 *) (arg0 + 0x60), i);
        if (func_ov000_0220d36c(*(u16 *) (p + 8), r9) >= 0 && func_ov000_0220d36c(*(u16 *) (p + 8), r8) <= 0 &&
            func_ov000_0220ee20(arg0, p) == 0) {
            return 0;
        }
    }
    return 1;
}
