#include "m2c.h"

s16 func_0209cf78(M2C_UNK, u16, u32, u8);           /* extern */
extern s32 data_027e05e8;

void func_02097288(void *arg0, M2C_UNK arg1) {
    u8 var_r3;

    if (data_027e05e8 & 8) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(arg0, u8 *, 0x6C);
    }
    M2C_FIELD(arg0, s16 *, 0x66) =
        func_0209cf78(arg1, M2C_FIELD(arg0, u16 *, 0x64), (u32) (M2C_FIELD(arg0, s32 *, 0x28) << 0x12) >> 0x1F, var_r3);
}
