#include "m2c.h"

s32 func_0200dd58(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0200e530();                            /* extern */
extern M2C_UNK data_02149958;
extern M2C_UNK func_0200e520;

s32 func_0200ddc8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_0200dd58(arg0, &func_0200e520, 0);
    M2C_FIELD(&data_02149958, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_0200e530();
    }
    return M2C_FIELD(&data_02149958, s32 *, 0x2C);
}
