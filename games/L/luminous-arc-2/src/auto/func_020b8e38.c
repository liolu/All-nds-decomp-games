#include "m2c.h"

M2C_UNK func_02004978(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_020b008c(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_020b5b84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020b5be0(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0212eb14;
extern M2C_UNK data_0212eb18;

s32 func_020b8e38(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK *arg4) {
    u8 sp0[32];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    if (arg4 == NULL) {
        arg4 = &data_0212eb14;
    }
    temp_r0_2 = func_020b5b84(arg0, arg2, 0xC9, arg1);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_02004978(sp0, &data_0212eb18, 1, arg3);
    temp_r0 = func_020b008c(arg0, arg2, sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r0 = func_020b5be0(arg0, arg2, arg4, -1);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
