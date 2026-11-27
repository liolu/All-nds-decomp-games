#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s8 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
s32 func_02012c10(M2C_UNK, s32);                    /* extern */
M2C_UNK func_02043bc4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02073144(s8);                          /* extern */
extern void *data_020d1d24;

s32 func_02048bb8(M2C_UNK arg0) {
    s32 temp_r6;
    s8 temp_r4;
    s8 temp_r5;

    temp_r6 = func_02012c10(arg0, func_02012a90(arg0, 1));
    temp_r5 = func_02012b7c(arg0, 2, 0);
    temp_r4 = func_02012b7c(arg0, 3, 0);
    func_02043bc4(temp_r6, 0, 0, 0, 0);
    func_02073144(temp_r4);
    M2C_FIELD(data_020d1d24, s8 *, 1)      = 0x6E;
    M2C_FIELD(data_020d1d24, s8 *, 0x4348) = temp_r5;
    return 1;
}
