#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern s32 data_020d1d24;

s32 func_0203639c(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5                                                    = func_02012a90(arg0, 1);
    temp_r4                                                    = func_02012a90(arg0, 2);
    M2C_FIELD(((temp_r5 * 0xEC) + data_020d1d24), s8 *, 0x6DE) = (s8) (temp_r4 * func_02012a90(arg0, 3));
    return 1;
}
