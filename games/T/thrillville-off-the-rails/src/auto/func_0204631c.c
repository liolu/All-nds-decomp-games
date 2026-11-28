#include "m2c.h"

M2C_UNK func_02052d9c(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020643b4(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK data_020efe74;

void func_0204631c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020643b4(&data_020efe74, 0x5C, 0x5C);
    if (temp_r0 == 0) {
        return;
    }
    func_02052d9c(temp_r0, arg1, arg2);
}
