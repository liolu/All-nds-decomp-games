#include "m2c.h"

s32 func_02069ee4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0206a55c();                            /* extern */
extern M2C_UNK data_020906b8;
extern M2C_UNK func_0206a54c;

s32 func_02069f54(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02069ee4(arg0, &func_0206a54c, 0);
    M2C_FIELD(&data_020906b8, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_0206a55c();
    }
    return M2C_FIELD(&data_020906b8, s32 *, 0x2C);
}
