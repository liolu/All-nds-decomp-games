#include "m2c.h"

s32 func_02006f0c(s32, s32);                        /* extern */
extern void *data_020a7340;

s32 func_0202c814(void) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = data_020a7340;
    if (temp_r4 == NULL) {
        return 1;
    }
    if ((M2C_FIELD(temp_r4, s32 *, 0x34) == 4) &&
        (M2C_FIELD(temp_r4, s32 *, 0x50) !=
         func_02006f0c(*M2C_FIELD(temp_r4, s32 **, 0x4C) * 0xF0, M2C_FIELD(temp_r4, s32 *, 0x30)))) {
        return 0;
    }
    temp_r4_2 = data_020a7340;
    if (M2C_FIELD(temp_r4_2, s32 *, 0x2C) ==
        func_02006f0c(*M2C_FIELD(temp_r4_2, s32 **, 0x28) * 0xF0, M2C_FIELD(temp_r4_2, s32 *, 0x30))) {
        return 1;
    }
    return 0;
}
