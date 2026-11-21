#include "m2c.h"

void func_ov045_022375d8(u8 *arg0, u32 *arg1) {
    u32 *n = (u32 *) arg0;
    u32 *r2;
    u32 r1;
    u32 r3;
    u32 *t;

    r2 = (u32 *) n[0];
    if (*arg1 == (u32) arg0) {
        *arg1 = (u32) r2;
    }
    n[0] = r2[1];
    r1   = r2[1];
    if (r1 != 0) {
        t  = (u32 *) (r1 + 8);
        *t = (u32) arg0 | (*t & 1);
    }
    r3    = n[2] & ~1u;
    r2[2] = r3 | (r2[2] & 1);
    t     = (u32 *) (n[2] & ~1u);
    if ((u32) arg0 == t[0]) {
        t[0] = (u32) r2;
    } else {
        t[1] = (u32) r2;
    }
    r2[1] = (u32) arg0;
    n[2]  = (u32) r2 | (n[2] & 1);
}
