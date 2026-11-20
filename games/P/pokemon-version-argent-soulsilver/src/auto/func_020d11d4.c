#include "m2c.h"

s32 func_020d11d4(s32 arg0) {
    u16 saved;
    s32 old;

    saved                        = *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = 0;
    old                          = *(volatile s32 *) 0x04000210;
    *(volatile s32 *) 0x04000210 = old | arg0;
    (void) *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = saved;
    return old;
}
