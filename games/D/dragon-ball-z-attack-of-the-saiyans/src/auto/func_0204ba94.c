#include "m2c.h"

s16 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern void *data_020d1d24;

s32 func_0204ba94(M2C_UNK arg0) {
    s16 temp_r0;
    s16 temp_r4;

    temp_r4                                 = func_02012a90(arg0, 1);
    temp_r0                                 = func_02012a90(arg0, 2);
    M2C_FIELD(data_020d1d24, s16 *, 0x3C7C) = temp_r4;
    M2C_FIELD(data_020d1d24, s16 *, 0x3C7E) = temp_r0;
    return 1;
}
