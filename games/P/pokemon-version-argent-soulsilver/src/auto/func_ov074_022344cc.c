/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov074_02233fb0(s32 *a, s32 b, s32 c);

u16 func_ov074_022344cc(s32 *arg0) {
    u16 sum;
    u16 *a;
    u16 *b;
    u16 *c;
    u16 *d;
    s32 i;

    sum = 0;
    a   = (u16 *) func_ov074_02233fb0(arg0, arg0[0], sum);
    b   = (u16 *) func_ov074_02233fb0(arg0, arg0[0], 1);
    c   = (u16 *) func_ov074_02233fb0(arg0, arg0[0], 2);
    d   = (u16 *) func_ov074_02233fb0(arg0, arg0[0], 3);
    for (i = 0; i < 6; i++) {
        sum = (u16) (sum + a[i]);
    }
    for (i = 0; i < 6; i++) {
        sum = (u16) (sum + b[i]);
    }
    for (i = 0; i < 6; i++) {
        sum = (u16) (sum + c[i]);
    }
    for (i = 0; i < 6; i++) {
        sum = (u16) (sum + d[i]);
    }
    return sum;
}
