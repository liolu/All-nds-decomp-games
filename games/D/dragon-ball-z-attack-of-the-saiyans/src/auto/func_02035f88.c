#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
void *func_02035510(M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
extern void *data_020d1d24;
extern M2C_UNK func_02035f28;

s32 func_02035f88(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    void *temp_r0;

    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    temp_r6                         = func_02012a90(arg0, 1);
    temp_r5                         = func_02012a90(arg0, 2);
    temp_r4                         = func_02012a90(arg0, 3);
    temp_r7                         = (temp_r6 * 0xEC) + (s32) (data_020d1d24 + 0x634);
    temp_r0                         = func_02035510(2, temp_r7, &func_02035f28, 0);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r7, u8 *, 0x71) << 8);
    M2C_FIELD(temp_r0, s32 *, 0x20) = (s32) (temp_r5 << 8);
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r4;
    return 1;
}
