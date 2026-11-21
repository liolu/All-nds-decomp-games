/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov013_022226e8(void *p);

void func_ov013_022226bc(void *arg0, u8 *out, u8 *in, u32 n) {
    u32 i;
    u8 r;

    for (i = 0; i < n; i++) {
        r      = (u8) func_ov013_022226e8(arg0);
        out[i] = r ^ in[i];
    }
}
