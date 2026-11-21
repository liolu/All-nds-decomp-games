/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_ov013_02226c9c(s8 *dst, s32 val, u32 n) {
    u32 i;

    for (i = 0; i < n; i++) {
        *dst = (s8) val;
        dst++;
    }
}
