#include "m2c.h"

M2C_UNK func_020a591c(void *);                      /* extern */
extern M2C_UNK data_020e0018;

void *func_020a36c8(void *arg0, s32 arg1) {
    u32 var_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0018;
    M2C_FIELD(arg0, void **, 4)    = arg0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    func_020a591c(arg0 + 0x14);
    if (arg1 != 0) {
        var_r0 = -1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    return arg0;
}
