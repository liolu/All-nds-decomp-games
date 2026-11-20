#include "m2c.h"

s32 func_0200bc68(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0200beb8();                            /* extern */
extern M2C_UNK data_020d2c8c;
extern M2C_UNK func_0200bea8;

s32 func_0200bd20(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_0200bc68(arg0, arg1, &func_0200bea8, 0);
    M2C_FIELD(&data_020d2c8c, s32 *, 0x10) = temp_r0;
    if (temp_r0 == 0) {
        func_0200beb8();
    }
    return M2C_FIELD(&data_020d2c8c, s32 *, 0x10);
}
