#include "m2c.h"

M2C_UNK func_020d2058(s32, u32);                    /* extern */
s32 func_020d2100(s32);                             /* extern */
extern M2C_UNK data_021106d0;
extern M2C_UNK data_021e16c0;

s32 func_020a8878(void) {
    s32 temp_r4;
    s32 temp_r5;

    if ((u32) M2C_FIELD(&data_021106d0, u32 *, 4) >= 0x20U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(&data_021e16c0, s32 *, 4);
    temp_r4 = func_020d2100(temp_r5);
    func_020d2058(temp_r5, M2C_FIELD(&data_021106d0, u32 *, 4));
    return temp_r4;
}
