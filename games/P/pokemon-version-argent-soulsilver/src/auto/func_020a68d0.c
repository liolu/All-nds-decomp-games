#include "m2c.h"

s16 func_020a678c();                                /* extern */
extern M2C_UNK data_021e16c0;
extern M2C_UNK data_021d4640;

void func_020a68d0(s16 arg0, u16 arg1, s32 arg2) {
    s32 var_r2;
    void *temp_r4;

    var_r2  = arg2;
    temp_r4 = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (var_r2 == 0x7F000001) {
        var_r2 = M2C_FIELD(&data_021d4640, s32 *, 0x50);
    }
    M2C_FIELD(temp_r4, u16 *, 0x1A) = arg1;
    M2C_FIELD(temp_r4, u16 *, 0x18) = (u16) M2C_FIELD(temp_r4, u16 *, 0x1A);
    M2C_FIELD(temp_r4, s32 *, 0x20) = var_r2;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = var_r2;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s16 *, 0xA) = arg0;
        return;
    }
    M2C_FIELD(temp_r4, s16 *, 0xA) = func_020a678c();
}
