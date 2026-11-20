#include "m2c.h"

s32 func_020d1234(s32 arg0) {
    u16 saved;
    s32 old;

    saved                        = *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = 0;
    old                          = *(volatile s32 *) 0x04000214;
    *(volatile s32 *) 0x04000214 = arg0;
    *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = saved;
    return old;
}
