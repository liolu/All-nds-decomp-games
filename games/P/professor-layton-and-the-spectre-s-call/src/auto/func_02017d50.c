#include "m2c.h"

s32 func_02017cd4(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02018240();                            /* extern */
extern M2C_UNK data_02034de0;
extern M2C_UNK func_02018230;

s32 func_02017d50(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_02017cd4(arg0, arg1, &func_02018230, 0);
    M2C_FIELD(&data_02034de0, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_02018240();
    }
    return M2C_FIELD(&data_02034de0, s32 *, 0x24);
}
