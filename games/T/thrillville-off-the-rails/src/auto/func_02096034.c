#include "m2c.h"

M2C_UNK func_0202f274(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0202f424(M2C_UNK *);                   /* extern */
s32 func_02096094(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */

s32 func_02096034(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4) {
    M2C_UNK sp4;
    s32 temp_r4;

    func_0202f274(&sp4, arg2);
    temp_r4 = func_02096094(arg0, arg1, arg3, &sp4, (s32) arg4);
    func_0202f424(&sp4);
    return temp_r4;
}
