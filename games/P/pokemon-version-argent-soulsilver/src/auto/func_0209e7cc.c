#include "m2c.h"
void func_0209e7cc(u32 n, u8 *o) {
    u32 m = ~0u ^ (~0u >> n);
    s32 i;
    for (i = 0; i < 4; i++) {
        o[i] = m >> (24 - i * 8);
    }
}