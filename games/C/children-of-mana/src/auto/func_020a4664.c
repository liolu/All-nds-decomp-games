/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a4ab0(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_021061f0;

void *func_020a4664(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u32 temp_r0;

    func_020a4ab0(arg0, arg4, -1, 3, 0xA, arg6);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021061f0;
    M2C_FIELD(arg0, u32 *, 0x50)   = arg3;
    M2C_FIELD(arg0, s32 *, 0x54)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x58)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x5C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x60)   = arg5;
    M2C_FIELD(arg0, s8 *, 0x64)    = 0;
    M2C_FIELD(arg0, s32 *, 4)      = 6;
    temp_r0                        = M2C_FIELD(arg0, u32 *, 0x50);
    switch (temp_r0) {
        default:
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x48) = 2;
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x48) = 5;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            M2C_FIELD(arg0, s32 *, 0x48) = 3;
            break;
    }
    return arg0;
}
