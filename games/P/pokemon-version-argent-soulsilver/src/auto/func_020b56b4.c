#include "m2c.h"

void func_020b56b4(void *arg0) {
    s32 *p;

    p    = (s32 *) ((u8 *) arg0 + 0x24);
    *p   = M2C_FIELD(arg0, s32 *, 0x18);
    p[2] = 0;
}
