#include "m2c.h"

s32 func_020b6724(M2C_UNK *, M2C_UNK *, u32, s32);  /* extern */
extern M2C_UNK data_021d8520;
extern M2C_UNK data_021d8524;

s32 func_020b6c3c(s32 arg0) {
    if (func_020b6724(&data_021d8520, &data_021d8524, (u32) (arg0 << 0x10) >> 0xD, ((u32) (arg0 & ~0xFFFF) >> 0x10) * 8) ==
        0) {
        return 1;
    }
    return 0;
}
