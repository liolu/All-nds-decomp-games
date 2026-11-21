#include "m2c.h"

s32 func_ov000_02213ff4(s8 *, s32);

s32 func_ov000_02214a90(s8 *p, s32 n) {
    s32 k;
    while (n > 0 && *p != 0) {
        k = func_ov000_02213ff4(p, n);
        if (k < 0) {
            return 0;
        }
        n -= k;
        p += k;
        k = func_ov000_02213ff4(p, n);
        if (k < 0) {
            return 0;
        }
        p += k;
        n -= k;
    }
    if (n == 0) {
        return 0;
    }
    return *p == 0;
}
