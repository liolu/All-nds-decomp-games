#include "m2c.h"

s32 func_020bcdb8(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020bd43c();                            /* extern */
extern M2C_UNK data_020f3a34;
extern M2C_UNK func_020bd42c;

s32 func_020bce34(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_020bcdb8(arg0, arg1, &func_020bd42c, 0);
    M2C_FIELD(&data_020f3a34, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_020bd43c();
    }
    return M2C_FIELD(&data_020f3a34, s32 *, 0x24);
}
