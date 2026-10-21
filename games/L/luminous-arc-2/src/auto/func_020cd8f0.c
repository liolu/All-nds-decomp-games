#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
s32 func_0202962c(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_0215146c;
extern s32 data_021514f8;

s32 func_020cd8f0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02006be0();
    temp_r4 = func_0202962c(data_0215146c, arg0, arg1);
    data_021514f8 += 1;
    func_02006bf4(temp_r5);
    return temp_r4;
}
