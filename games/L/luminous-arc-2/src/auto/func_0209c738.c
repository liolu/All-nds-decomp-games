#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
s32 func_0209a500(M2C_UNK);                         /* extern */
extern M2C_UNK data_02170d64;

s32 func_0209c738(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5                             = func_02006be0();
    temp_r6                             = M2C_FIELD(&data_02170d64, s32 *, 0);
    temp_r7                             = M2C_FIELD(&data_02170d64, s32 *, 4);
    M2C_FIELD(&data_02170d64, s32 *, 0) = 0;
    M2C_FIELD(&data_02170d64, s32 *, 4) = 0;
    temp_r4                             = func_0209a500(arg0);
    M2C_FIELD(&data_02170d64, s32 *, 0) = temp_r6;
    M2C_FIELD(&data_02170d64, s32 *, 4) = temp_r7;
    func_02006bf4(temp_r5);
    return temp_r4;
}
