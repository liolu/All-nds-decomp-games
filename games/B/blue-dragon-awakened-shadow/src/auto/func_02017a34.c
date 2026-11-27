#include "m2c.h"
s32 strlen(s8 *s);
s32 func_020179b0(u16 *d, s8 *s, s32 n);
u32 func_02017a34(u16 *dst, s8 *src, u32 max) {
    u32 i;
    s32 len;
    s32 r;
    len = strlen(src);
    i   = 0;
    if (dst != 0) {
        for (; i < max; i++) {
            if (*src != 0) {
                r = func_020179b0(dst, src, len);
                dst++;
                if (r > 0) {
                    src += r;
                    len -= r;
                } else {
                    return -1;
                }
            } else {
                *dst = 0;
                break;
            }
        }
    }
    return i;
}
