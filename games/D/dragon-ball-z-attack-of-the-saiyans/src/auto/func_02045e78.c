#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202bd94(s32, s32);                    /* extern */
extern void *data_020d1d24;

s32 func_02045e78(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;

    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    temp_r4 = func_02012a90(arg0, 1);
    temp_r6 = func_02012a90(arg0, 2);
    temp_r5 = func_02012b7c(arg0, 3, 1);
    func_02012b7c(arg0, 4, 0x64);
    func_02012b7c(arg0, 5, 0);
    temp_r6_2 = (temp_r4 * 0xEC) + (s32) (data_020d1d24 + 0x634);
    func_0202bd94(temp_r6_2 + 4, temp_r6);
    if (temp_r5 == 0) {
        M2C_FIELD(temp_r6_2, u8 *, 0x17) = (u8) (M2C_FIELD(temp_r6_2, u8 *, 0x17) | 0x40);
    }
    return 1;
}
