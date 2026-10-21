#include "m2c.h"

s32 func_0207ab54(M2C_UNK, s32, M2C_UNK, s32);      /* extern */
s32 func_0207ac74(s32);                             /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
s32 func_020cd8a8(s32);                             /* extern */
extern M2C_UNK data_02170244;

s32 func_0207aa40(void) {
    s32 temp_r0;
    s32 var_r4;

    if (M2C_FIELD(&data_02170244, s32 *, 4) != 0) {
        return 0;
    }
    temp_r0                             = func_020cd8a8(0x74C8);
    M2C_FIELD(&data_02170244, s32 *, 4) = temp_r0;
    var_r4                              = func_0207ab54(1, temp_r0, 0, 0x74C8);
    if (var_r4 == 0) {
        if (func_0207ac74(M2C_FIELD(&data_02170244, s32 *, 4)) == 1) {
            func_020cd7d0(M2C_FIELD(&data_02170244, s32 *, 4));
            M2C_FIELD(&data_02170244, s32 *, 4) = 0;
            var_r4                              = 1;
        }
    } else {
        func_020cd7d0(M2C_FIELD(&data_02170244, s32 *, 4));
        M2C_FIELD(&data_02170244, s32 *, 4) = 0;
    }
    return var_r4;
}
