#include "m2c.h"

s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
M2C_UNK func_02028d7c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020da0fc;

void func_0203366c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020066e0();
    func_02028d7c(&data_020da0fc, arg0);
    func_020066f4(temp_r4);
}
