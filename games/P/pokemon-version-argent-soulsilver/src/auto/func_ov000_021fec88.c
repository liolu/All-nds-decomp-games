#include "m2c.h"
u8 *func_ov000_021fec88(void *a, u8 *base, s32 n, s32 stride, s32 (*cb)(void *, u8 *)) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (cb(a, base + i * stride) == 0) {
            return base + stride * i;
        }
    }
    return NULL;
}
