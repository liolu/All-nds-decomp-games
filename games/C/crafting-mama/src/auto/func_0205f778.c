#include "m2c.h"

M2C_UNK func_02057808(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0205f7cc();                                /* extern */
extern M2C_UNK data_020c7f3c;

s32 func_0205f778(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = func_0205f7cc();
    func_02057808(&data_020c7f3c, 0xFFFF, arg2);
    return temp_r4;
}
