#include "m2c.h"

M2C_UNK func_0200bb9c(s32, M2C_UNK);                /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0209f7a8;
extern void *data_020d1d24;

s32 func_02046d78(M2C_UNK arg0) {
    if (func_02012a90(arg0, 1) == 0) {
        if ((u32) (u8) (M2C_FIELD(data_020d1d24, u8 *, 4) + 0xFF) <= 1U) {
            func_0200bb9c((M2C_FIELD(&data_0209f7a8, u8 *, 0x1B) * 4) + 0x8C, 0);
            func_0200bb9c((M2C_FIELD(&data_0209f7a8, u8 *, 0x1B) * 4) + 0x8D, 0);
            func_0200bb9c((M2C_FIELD(&data_0209f7a8, u8 *, 0x1B) * 4) + 0x8E, 0);
        }
        M2C_FIELD(data_020d1d24, u8 *, 4)   = 0U;
        M2C_FIELD(data_020d1d24, s8 *, 0xF) = 0;
    } else {
        M2C_FIELD(data_020d1d24, u8 *, 4)   = 3U;
        M2C_FIELD(data_020d1d24, s8 *, 0xF) = 1;
    }
    return 1;
}
