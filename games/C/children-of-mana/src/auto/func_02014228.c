/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02014228(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 var_r0;

    var_r0 = arg1 - M2C_FIELD(arg0, s32 *, 0xC);
    if (arg2 != 0) {
        var_r0 = var_r0 / arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    M2C_FIELD(arg0, s8 *, 0x25)  = arg3;
    M2C_FIELD(arg0, s8 *, 0x24)  = 1;
}
