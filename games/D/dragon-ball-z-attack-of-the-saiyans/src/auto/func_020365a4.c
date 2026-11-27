#include "m2c.h"

M2C_UNK func_0200c3f0();                            /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02085398();                            /* extern */
extern s32 data_020d1d24;

s32 func_020365a4(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = (func_02012a90(arg0, 1) * 0xEC) + (data_020d1d24 + 0x634);
    if (M2C_FIELD(temp_r4, s32 *, 0x7C) == 0) {
        func_02085398();
    } else {
        func_0200c3f0();
        M2C_FIELD(temp_r4, s32 *, 0x7C) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x78) = 0;
    }
    return 1;
}
