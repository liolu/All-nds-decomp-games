#include "m2c.h"

M2C_UNK func_020cb6d4(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020cc1e8(s32, M2C_UNK *, M2C_UNK *);   /* extern */
s32 func_020bf0f8();                                /* extern */
s32 func_020bf344();                                /* extern */
extern M2C_UNK data_021da4bc;
extern M2C_UNK data_021da6bc;

M2C_UNK *func_020bf450(void) {
    u8 sp0[64];
    s32 temp_r4;
    s32 temp_r5;

    if (!(M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 0x40)) {
        temp_r5 = func_020bf0f8();
        temp_r4 = func_020bf344();
        func_020cb6d4(temp_r5, sp0);
        func_020cc1e8(temp_r4, sp0, &data_021da6bc);
        M2C_FIELD(&data_021da4bc, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) | 0x40);
    }
    return &data_021da6bc;
}
