/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207b00c(s32);                             /* extern */

void *func_02046d08(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0)    = arg3;
    M2C_FIELD(arg0, s32 *, 4)    = arg4;
    temp_r4                      = arg4 * 2;
    M2C_FIELD(arg0, s32 *, 8)    = arg5;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (arg2 + (arg3 << 0xE));
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = func_0207b00c(temp_r4);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0207b00c(temp_r4);
    return arg0;
}
