#include "m2c.h"

M2C_UNK func_020324f8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02034aa0(M2C_UNK *);                   /* extern */

void func_020350c0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, M2C_UNK *arg4) {
    u8 sp0[48];
    M2C_UNK *var_r4;

    var_r4 = arg4;
    if (var_r4 == NULL) {
        var_r4 = sp0;
    }
    func_020324f8(arg0, arg1, arg2, var_r4);
    if (arg3 == 0) {
        return;
    }
    *(s32 *) 0x04000440 = 2;
    func_02034aa0(var_r4);
}
