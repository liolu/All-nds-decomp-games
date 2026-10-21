#include "m2c.h"

s32 func_02018ef8(void *, M2C_UNK *, M2C_UNK);      /* extern */
M2C_UNK func_02091b60(u8, M2C_UNK *);               /* extern */
s32 func_02091b90(void *);                          /* extern */
s32 func_02091bb8(void *, M2C_UNK *);               /* extern */
s32 func_02091c1c(void *);                          /* extern */
extern M2C_UNK data_020ddec8;

s32 func_0209267c(void *arg0) {
    M2C_UNK sp0;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xE7);
    if (temp_r0 == 0xFF) {
        return 1;
    }
    if ((u32) temp_r0 > 2U) {
        return 0;
    }
    if (func_02091b90(arg0 + 0x40) == 0) {
        return 0;
    }
    if (func_02018ef8(arg0 + 0xC0, &data_020ddec8, 4) != 0) {
        if (func_02091c1c(arg0 + 0xC4) == 0) {
            return 0;
        }
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xD0);
        if ((u32) temp_r0_2 > 0x20U) {
            return 0;
        }
        func_02091b60(temp_r0_2, &sp0);
        if (func_02091bb8(arg0 + 0xC0, &sp0) == 0) {
            return 0;
        }
        goto block_13;
    }
block_13:
    if ((func_02018ef8(arg0 + 0xC8, &data_020ddec8, 4) != 0) && (func_02091c1c(arg0 + 0xC8) == 0) &&
        (func_02091c1c(arg0 + 0xCC) == 0)) {
        return 0;
    }
    return 1;
}
