#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern s32 data_020d1d24;

s32 func_02035d64(M2C_UNK arg0) {
    s8 temp_r4;

    temp_r4                                                    = func_02012a90(arg0, 1);
    M2C_FIELD(((temp_r4 * 0xEC) + data_020d1d24), s8 *, 0x6A3) = func_02012a90(arg0, 2);
    return 1;
}
