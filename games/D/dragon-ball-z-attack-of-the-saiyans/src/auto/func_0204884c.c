#include "m2c.h"

s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02014528(s32, s32);                    /* extern */
M2C_UNK func_020149c0();                            /* extern */
extern void *data_020d1d24;

s32 func_0204884c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012b7c(arg0, 1, -1);
    func_020149c0();
    if (temp_r4 < 0) {
        func_02014528(M2C_FIELD(data_020d1d24, s32 *, 0x48), M2C_FIELD(data_020d1d24, s32 *, 0x4C));
    }
    return 1;
}
