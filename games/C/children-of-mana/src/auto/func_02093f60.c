/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02093f60(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    M2C_FIELD(arg0, u8 *, 0x24)  = arg6;
    if (arg7 == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = arg7;
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (arg7 >> 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (arg1 * 2) / arg7);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((s32) (arg2 * 2) / arg7);
}
