#include "m2c.h"

s16 func_0209cf78(M2C_UNK, M2C_UNK, u32, u8);       /* extern */
M2C_UNK func_0209cff8(u16, u16, u32, u8);           /* extern */
extern s32 data_027e05e8;

void func_02097394(void *arg0, M2C_UNK arg1, s16 *arg2) {
    u16 temp_r0;
    u8 var_r4;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x66);
    if (data_027e05e8 & 8) {
        var_r4 = 0;
    } else {
        var_r4 = M2C_FIELD(arg0, u8 *, 0x6C);
    }
    if (temp_r0 != 0xFFFF) {
        func_0209cff8(temp_r0, M2C_FIELD(arg0, u16 *, 0x64), (u32) (M2C_FIELD(arg0, s32 *, 0x28) << 0x12) >> 0x1F, var_r4);
    }
    *arg2 = func_0209cf78(0, arg1, (u32) (M2C_FIELD(arg0, s32 *, 0x28) << 0x12) >> 0x1F, var_r4);
}
