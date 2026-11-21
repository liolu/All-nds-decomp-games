#include "m2c.h"

void func_ov000_0220a8b0(s32 *, s32);
s32 func_ov000_02201dbc(void **, s32);
extern u8 data_ov000_02217f04[];

s32 func_ov000_0220061c(s32 *p, s32 a1) {
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
    obj = func_ov000_02201dbc((void **) p, a1);
    if (obj == 0) {
        return 0;
    }
    return obj;
}
