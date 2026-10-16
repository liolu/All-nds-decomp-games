#include "m2c.h"

M2C_UNK func_02005194(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_020055a8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02006f7c(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020084fc(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_0200ebd0();                                /* extern */
extern M2C_UNK data_020d3668;

s32 func_0200ecd4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_0200ebd0();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02006f7c(arg0, temp_r0, arg1);
    func_020055a8(temp_r0, arg1);
    temp_r4 = func_020084fc(0xA, temp_r0, 0);
    func_02005194(&data_020d3668, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
