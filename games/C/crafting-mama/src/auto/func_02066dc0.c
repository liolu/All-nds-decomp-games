#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
extern u8 data_020909fc;
extern M2C_UNK func_02066eb8;
extern M2C_UNK func_02066f10;

void *func_02066dc0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    u32 temp_r4;
    u32 var_ip;
    u8 *var_lr;
    u8 *var_r1;
    u8 temp_r2;
    u8 temp_r3;
    void *temp_r0;

    temp_r4 = func_0203663c(0xB);
    if (func_02031700() == 0) {
        return NULL;
    }
    temp_r0 = func_020291d0(&func_02066f10, arg4);
    var_lr  = &data_020909fc;
    var_r1  = temp_r0 + 0x1C;
    var_ip  = 3;
    do {
        temp_r3 = M2C_FIELD(var_lr, u8 *, 0);
        temp_r2 = M2C_FIELD(var_lr, u8 *, 1);
        var_lr += 2;
        var_ip -= 1;
        M2C_FIELD(var_r1, u8 *, 1) = temp_r2;
        M2C_FIELD(var_r1, u8 *, 0) = temp_r3;
        var_r1 += 2;
    } while (var_ip != 0);
    *var_r1                              = *var_lr;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x14) = &func_02066eb8;
    M2C_FIELD(temp_r0, s32 *, 0x30)      = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x34)      = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x38)      = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x3C)      = arg3;
    M2C_FIELD(temp_r0, u16 *, 0x40)      = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x48)      = temp_r4;
    return temp_r0;
}
