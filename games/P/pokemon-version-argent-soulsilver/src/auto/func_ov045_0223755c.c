#include "m2c.h"

void func_ov045_0223755c(u8 *arg0, u32 *arg1) {
    u32 *n = (u32 *) arg0;
    u32 *r2;
    u32 r1;
    u32 *t;

    r2 = (u32 *) n[1];
    if (*arg1 == (u32) arg0) {
        *arg1 = (u32) r2;
    }
    n[1] = r2[0];
    r1   = r2[0];
    if (r1 != 0) {
        t  = (u32 *) (r1 + 8);
        *t = (u32) arg0 | (*t & 1);
    }
    r2[2] = (n[2] & ~1u) | (r2[2] & 1);
    t     = (u32 *) (n[2] & ~1u);
    if ((u32) arg0 == t[0]) {
        t[0] = (u32) r2;
    } else {
        t[1] = (u32) r2;
    }
    r2[0] = (u32) arg0;
    n[2]  = (u32) r2 | (n[2] & 1);
}
