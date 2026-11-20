#include "m2c.h"

s16 func_02021c68(s32, s16);                        /* extern */
M2C_UNK func_0206e7f8(void *, void *);              /* extern */
extern M2C_UNK data_0216e3dc;

s32 func_0206e700(void *arg0, s16 arg1, s8 arg2, void *arg3) {
    s16 var_r0;
    s32 temp_r1;

    func_0206e7f8(arg0, arg3);
    M2C_FIELD(arg0, s8 *, 2)     = 0;
    M2C_FIELD(arg0, s8 *, 3)     = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = arg1;
    M2C_FIELD(arg0, s8 *, 0x10)  = arg2;
    temp_r1                      = M2C_FIELD(arg3, s32 *, 4);
    if (temp_r1 < 0) {
        var_r0 = -1;
    } else {
        var_r0 = func_02021c68(temp_r1 * 0x3E8, M2C_FIELD(&data_0216e3dc, s16 *, 6));
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r0;
    M2C_FIELD(arg0, s8 *, 1)     = 1;
    return 0;
}
