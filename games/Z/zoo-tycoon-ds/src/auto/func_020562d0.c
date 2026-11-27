/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02182e94;

s32 func_020562d0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    if (arg4 == 0) {
        M2C_FIELD(&data_02182e94, s32 *, 8) = 1;
    } else if (arg4 == 1) {
        M2C_FIELD(&data_02182e94, s32 *, 8) = 3;
    }
    M2C_FIELD(&data_02182e94, s32 *, 0x10) = arg0;
    M2C_FIELD(&data_02182e94, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02182e94, s32 *, 0x14) = arg1;
    M2C_FIELD(&data_02182e94, s32 *, 0x18) = arg2;
    M2C_FIELD(&data_02182e94, s32 *, 0x1C) = arg3;
    return 1;
}
