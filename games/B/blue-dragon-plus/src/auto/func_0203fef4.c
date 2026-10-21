#include "m2c.h"

s32 func_0203fe84(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020404fc();                            /* extern */
extern M2C_UNK data_0215fb98;
extern M2C_UNK func_020404ec;

s32 func_0203fef4(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_0203fe84(arg0, &func_020404ec, 0);
    M2C_FIELD(&data_0215fb98, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_020404fc();
    }
    return M2C_FIELD(&data_0215fb98, s32 *, 0x2C);
}
