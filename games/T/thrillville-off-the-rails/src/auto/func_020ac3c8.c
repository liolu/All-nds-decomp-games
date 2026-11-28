#include "m2c.h"

void func_020ac3c8(void *arg0, s32 arg1) {
    void *temp_r2;

    M2C_FIELD(arg0, u8 *, 0x370) = (u8) ((M2C_FIELD(arg0, u8 *, 0x370) & ~8) | ((u32) (arg1 << 0x1F) >> 0x1C));
    temp_r2                      = M2C_FIELD(arg0, void **, 0x358);
    if (temp_r2 == NULL) {
        return;
    }
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x370) << 0x1C) >> 0x1F) != 0) {
        M2C_FIELD(temp_r2, s32 *, 0x2C)                         = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x358), s32 *, 0x28) = 1;
        return;
    }
    M2C_FIELD(temp_r2, s32 *, 0x2C)                         = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x358), s32 *, 0x28) = 0;
}
