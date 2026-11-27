/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020dae84(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_r2;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    if (M2C_FIELD(arg0, s32 *, 0x38) == 4) {
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = arg4;
    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x40);
    if ((temp_r2 < 0) || (temp_r2 > (s32) M2C_FIELD(arg0, s32 *, 0x44))) {
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x1C)  = arg5;
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)  = 0;
}
