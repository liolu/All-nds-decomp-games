#include "m2c.h"

M2C_UNK func_020250f4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020259e0(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_02096c80;
extern M2C_UNK func_020254b0;

void func_02025a30(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    M2C_UNK var_r0;

    var_r0 = 1;
    if (arg8 != 0) {
        var_r0 = 2;
    }
    func_020259e0(var_r0, arg3, arg4);
    M2C_FIELD(&data_02096c80, s32 *, 0x4FC) = arg0;
    M2C_FIELD(&data_02096c80, s32 *, 0x500) = arg1;
    M2C_FIELD(&data_02096c80, s32 *, 0x504) = arg2;
    M2C_FIELD(&data_02096c80, s32 *, 0x510) = arg6;
    M2C_FIELD(&data_02096c80, s32 *, 0x514) = arg7;
    M2C_FIELD(&data_02096c80, s32 *, 0x518) = arg8;
    func_020250f4(&func_020254b0, arg5);
}
