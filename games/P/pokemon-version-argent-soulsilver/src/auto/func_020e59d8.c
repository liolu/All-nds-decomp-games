#include "m2c.h"
s32 func_020e9580(s8 *s);
s32 func_020e5954(u16 *d, s8 *s, s32 n);
u32 func_020e59d8(u16 *dst, s8 *src, u32 max) {
    u32 i;
    s32 len;
    s32 r;
    len = func_020e9580(src);
    i   = 0;
    if (dst != 0) {
        for (; i < max; i++) {
            if (*src != 0) {
                r = func_020e5954(dst, src, len);
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
