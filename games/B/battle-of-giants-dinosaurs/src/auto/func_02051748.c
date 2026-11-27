/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void *func_02051610(void *, u32, s32);

s32 func_02051748(u8 *arg0, s32 arg1) {
    s32 r5;
    s32 *r4;
    u8 *r0;

    r4 = (s32 *) (arg0 + 0x24);
    r5 = *r4;
    r0 = (u8 *) func_02051610((void *) r4, 0x10, 4);
    if (r0 == NULL) {
        return 0;
    }
    *(s32 *) r0         = arg1;
    *(s32 *) (r0 + 4)   = r5;
    *(s32 *) (r0 + 8)   = r4[1];
    *(s32 *) (r0 + 0xC) = r4[2];
    r4[2]               = (s32) r0;
    return 1;
}
