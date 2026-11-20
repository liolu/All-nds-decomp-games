#include "m2c.h"
s32 func_020a2d48(u8 *a) {
    u8 *p = *(u8 **) (a + 0x64);
    s32 r = 0;
    if (p != 0) {
        s32 t = (s8) a[0x73];
        if (t == 1) {
            u8 *q = *(u8 **) (p + 0x104);
            if (q != 0) {
                r = *(u16 *) (q + 4);
            }
        } else if (t == 0 || t == 4) {
            r = *(s32 *) (a + 0x44) - *(s32 *) (p + 0xf8);
        }
    }
    return r;
}
