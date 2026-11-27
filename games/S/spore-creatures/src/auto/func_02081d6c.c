#include "m2c.h"

s32 func_01ff9608();                                /* extern */
s32 func_02081d28();                                /* extern */
M2C_UNK func_020aff54(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020b073c(s32, M2C_UNK *, M2C_UNK *);   /* extern */
extern M2C_UNK data_027e033c;
extern M2C_UNK data_027e053c;

M2C_UNK *func_02081d6c(void) {
    u8 sp0[64];
    s32 temp_r4;
    s32 temp_r5;

    if (!(M2C_FIELD(&data_027e033c, s32 *, 0xFC) & 0x40)) {
        temp_r5 = func_01ff9608();
        temp_r4 = func_02081d28();
        func_020aff54(temp_r5, sp0);
        func_020b073c(temp_r4, sp0, &data_027e053c);
        M2C_FIELD(&data_027e033c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e033c, s32 *, 0xFC) | 0x40);
    }
    return &data_027e053c;
}
