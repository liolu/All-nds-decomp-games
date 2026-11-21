#include "m2c.h"

void func_ov000_0220a8b0(s32 *, s32);
s32 func_ov000_02205698(s32, s32, s32);
extern u8 data_ov000_02217f04[];

s32 func_ov000_0220011c(s32 *p, s32 a1, s32 a2) {
    s32 obj;

    if (p == NULL || *p == 0) {
        return 2;
    }
    obj = *p;
    if (*(s32 *) (obj + 0x108) != 0) {
        return 0;
    }
    if (*(s32 *) (obj + 0x1d8) == 4) {
        func_ov000_0220a8b0(p, (s32) data_ov000_02217f04);
        return 2;
    }
    return func_ov000_02205698((s32) p, a1, a2);
}
