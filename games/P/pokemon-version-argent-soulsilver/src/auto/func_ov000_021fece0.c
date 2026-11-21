#include "m2c.h"
typedef s32 (*CMPF)(u8 *, u32);
s32 func_ov000_021fece0(u32 key, u8 *base, s32 n, s32 stride, CMPF fn, s32 *flag) {
    s32 lo;
    s32 hi;
    s32 mid;
    s32 r;
    *flag = 0;
    lo    = 0;
    hi    = n - 1;
    if (hi >= 0) {
        do {
            mid = (lo + hi) >> 1;
            r   = fn(base + mid * stride, key);
            if (r == 0) {
                *flag = 1;
            }
            if (r < 0) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        } while (lo <= hi);
    }
    return (s32) (base + lo * stride);
}
