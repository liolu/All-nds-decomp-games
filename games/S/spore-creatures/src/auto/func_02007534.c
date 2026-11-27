#include "m2c.h"

M2C_UNK func_0208f6a8(void *);                      /* extern */

void func_02007534(s32 arg0, void *arg1) {
    s32 var_r0;

    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 2;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x80) = 0x7FFFFFFF;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x84) = 0x7FFF;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x64) = 0x3F0C00C0;
    func_0208f6a8(arg1);
    if (M2C_FIELD(arg1, s32 *, 0xC) == 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    *(u32 *) 0x040004AC = (u32) ((u32) (M2C_FIELD(arg1, s32 *, 0x38) << 0x10) >> 0xD) >> (4 - var_r0);
}
