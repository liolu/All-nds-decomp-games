#include "m2c.h"
s8 func_ov000_0221220c(s32, u8);
void func_ov000_022122d8(s32 a, u8 *b, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        b[i] = func_ov000_0221220c(a, b[i]);
    }
}