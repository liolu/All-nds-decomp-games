#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern void *data_020d1d24;

s32 func_02035da4(M2C_UNK arg0) {
    s8 temp_r4;

    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    temp_r4                                                          = func_02012a90(arg0, 1);
    M2C_FIELD(((temp_r4 * 0xEC) + (s32) data_020d1d24), s8 *, 0x6A5) = func_02012a90(arg0, 2);
    return 1;
}
