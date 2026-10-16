#include "m2c.h"

s32 func_0200cbdc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0200d260();                            /* extern */
extern M2C_UNK data_020d2d18;
extern M2C_UNK func_0200d250;

s32 func_0200cc58(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_0200cbdc(arg0, arg1, &func_0200d250, 0);
    M2C_FIELD(&data_020d2d18, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_0200d260();
    }
    return M2C_FIELD(&data_020d2d18, s32 *, 0x2C);
}
