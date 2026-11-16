/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

extern s32 func_0207de08(void *, s32);

s32 func_0207e660(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *p = (u8 *) arg0;

    *(s32 *) (p + 8)    = arg1;
    *(s32 *) (p + 0x38) = arg4;
    *(s32 *) (p + 0x30) = arg2;
    *(s32 *) (p + 0x34) = arg3;
    if (func_0207de08(arg0, 7) == 0) {
        return 0;
    }
    *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) | 0x10;
    *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) & ~0x20;
    return 1;
}
