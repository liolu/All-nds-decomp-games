#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern void *data_020d1d24;

s32 func_02035bf4(M2C_UNK arg0) {
    s32 temp_r4;
    s8 var_r3;

    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    temp_r4 = func_02012a90(arg0, 1);
    if (func_02012a90(arg0, 2) == 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    M2C_FIELD(((temp_r4 * 0xEC) + (s32) data_020d1d24), s8 *, 0x6A4) = var_r3;
    return 1;
}
