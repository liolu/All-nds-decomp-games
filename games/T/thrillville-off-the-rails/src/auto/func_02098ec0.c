#include "m2c.h"

M2C_UNK func_0207432c();                            /* extern */

u32 func_02098ec0(void *arg0, M2C_UNK arg1) {
    u32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0) {
        func_0207432c();
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, u8 *, 0x90)  = (u8) (M2C_FIELD(arg0, u8 *, 0x90) & ~4);
    temp_r0                      = (u32) (M2C_FIELD(arg0, u8 *, 0x54) << 0x1F) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return M2C_FIELD(arg0, u32(**)(void *, M2C_UNK), 0x24)(arg0 + 0xC, arg1);
}
