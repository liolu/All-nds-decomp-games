/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

s32 func_0207de08(u8 *, s32);

s32 func_0207e760(u8 *arg0) {
    u32 v;

    if (func_0207de08(arg0, 8) == 0) {
        return 0;
    }
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0x10) = 0xE;
    v                      = *(u32 *) (arg0 + 0xC);
    v                      = v & ~0x30;
    *(u32 *) (arg0 + 0xC)  = v;
    return 1;
}
