/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020dd904(void *);                      /* extern */
extern M2C_UNK data_0210d3b8;

void *func_020ddc44(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    void *var_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210d3b8;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg3;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg4;
    M2C_FIELD(arg0, s16 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    var_r3                         = arg0 + 0x24;
    M2C_FIELD(arg0, u8 *, 0x20)    = arg5;
    do {
        M2C_FIELD(var_r3, s32 *, 0)    = -1;
        M2C_FIELD(var_r3, s32 *, 4)    = 0;
        M2C_FIELD(var_r3, s32 *, 8)    = 0;
        M2C_FIELD(var_r3, s32 *, 0xC)  = 0;
        M2C_FIELD(var_r3, s32 *, 0x10) = 0;
        M2C_FIELD(var_r3, s16 *, 0x14) = -1;
        M2C_FIELD(var_r3, s16 *, 0x16) = -1;
        M2C_FIELD(var_r3, s16 *, 0x18) = -1;
        M2C_FIELD(var_r3, s16 *, 0x1A) = -1;
        M2C_FIELD(var_r3, s16 *, 0x1C) = -1;
        M2C_FIELD(var_r3, s32 *, 0x20) = -1;
        M2C_FIELD(var_r3, s32 *, 0x24) = -1;
        M2C_FIELD(var_r3, s16 *, 0x28) = -1;
        M2C_FIELD(var_r3, s16 *, 0x2A) = -1;
        M2C_FIELD(var_r3, s8 *, 0x2C)  = 0;
        M2C_FIELD(var_r3, s8 *, 0x2D)  = 0;
        M2C_FIELD(var_r3, s32 *, 0x30) = 0;
        M2C_FIELD(var_r3, s32 *, 0x34) = 0;
        M2C_FIELD(var_r3, s8 *, 0x38)  = 0;
        M2C_FIELD(var_r3, s8 *, 0x39)  = 0;
        M2C_FIELD(var_r3, s8 *, 0x3A)  = 0;
        M2C_FIELD(var_r3, s8 *, 0x3B)  = 0;
        M2C_FIELD(var_r3, s32 *, 0x3C) = 0;
        var_r3 += 0x40;
    } while (var_r3 != (arg0 + 0x224));
    func_020dd904(arg0);
    return arg0;
}
