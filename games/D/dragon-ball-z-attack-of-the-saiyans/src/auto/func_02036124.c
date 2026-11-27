#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern s32 data_020d1d24;

s32 func_02036124(M2C_UNK arg0) {
    s32 temp_r2;
    s8 temp_r0;
    s8 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    func_02012a90(arg0, 2);
    temp_r0                        = func_02012a90(arg0, 3);
    temp_r2                        = (temp_r4 * 0xEC) + (data_020d1d24 + 0x634);
    M2C_FIELD(temp_r2, s8 *, 0x90) = 3;
    M2C_FIELD(temp_r2, s8 *, 0x91) = 0;
    M2C_FIELD(temp_r2, s8 *, 0x94) = temp_r0;
    return 1;
}
