#include "m2c.h"

s32 func_0207ab54(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
s32 func_020cd8a8(s32);                             /* extern */
extern M2C_UNK data_02170244;

s32 func_0207a98c(s32 arg0, u8 *arg1) {
    s32 temp_r0;
    s32 temp_r4;

    if (M2C_FIELD(&data_02170244, s32 *, 4) != 0) {
        return 0;
    }
    temp_r0                             = func_020cd8a8(0x74C8);
    M2C_FIELD(&data_02170244, s32 *, 4) = temp_r0;
    temp_r4                             = func_0207ab54(1, temp_r0 + 0x10 + arg0, arg0 + 0x10, 1);
    *arg1                               = M2C_FIELD((M2C_FIELD(&data_02170244, s32 *, 4) + arg0), u8 *, 0x10);
    func_020cd7d0(M2C_FIELD(&data_02170244, s32 *, 4));
    M2C_FIELD(&data_02170244, s32 *, 4) = 0;
    return temp_r4;
}
