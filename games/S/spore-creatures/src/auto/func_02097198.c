#include "m2c.h"

s32 func_02097198(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xC);
    return M2C_FIELD(arg0, s32 *, 0x10) +
           M2C_FIELD((temp_r3 + M2C_FIELD((temp_r3 + (M2C_FIELD(arg0, u8 *, 3) * 2)), u16 *, 0xC)), u16 *, 0x10);
}
