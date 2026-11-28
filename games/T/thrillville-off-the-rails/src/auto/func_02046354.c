#include "m2c.h"

s32 func_02052d9c(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_02053908(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
s32 func_020643b4(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK data_020efe74;

s32 func_02046354(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020643b4(&data_020efe74, 0x5C, 0x5C);
    var_r4  = temp_r0;
    if (var_r4 != 0) {
        var_r4 = func_02052d9c(temp_r0, arg1, arg5);
    }
    func_02053908(var_r4, arg2, arg3, arg4);
    return var_r4;
}
