/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207b068(M2C_UNK);                       /* extern */

void *func_02034728(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 0)      = arg1;
    M2C_FIELD(arg0, s32 *, 4)      = arg2;
    M2C_FIELD(arg0, s32 *, 8)      = arg3;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg4;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg5;
    temp_r0                        = func_0207b068(0x14);
    M2C_FIELD(temp_r0, s32 *, 0)   = arg6;
    M2C_FIELD(temp_r0, s32 *, 4)   = arg7;
    M2C_FIELD(temp_r0, s32 *, 8)   = (s32) arg8;
    M2C_FIELD(arg0, void **, 0x14) = temp_r0;
    return arg0;
}
