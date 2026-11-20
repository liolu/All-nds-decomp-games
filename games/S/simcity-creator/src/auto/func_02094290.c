#include "m2c.h"

M2C_UNK func_02072894(s32, M2C_UNK);                /* extern */

void func_02094290(void *arg0) {
    s16 temp_r2;

    func_02072894(M2C_FIELD(arg0, s32 *, 0x6C), 0);
    M2C_FIELD(arg0, s16 *, 0x126) = (s16) (M2C_FIELD(arg0, s16 *, 0x126) - 8);
    temp_r2                       = M2C_FIELD(arg0, s16 *, 0x12A);
    if ((s32) M2C_FIELD(arg0, s16 *, 0x126) <= (s32) temp_r2) {
        M2C_FIELD(arg0, s16 *, 0x126) = temp_r2;
        M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    }
}
