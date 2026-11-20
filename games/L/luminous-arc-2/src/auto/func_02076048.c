#include "m2c.h"

void func_02076048(void *arg0, s16 arg1) {
    s32 temp_r1;
    void *var_r2;

    M2C_FIELD(arg0, s16 *, 0x56) = arg1;
    M2C_FIELD(arg0, u16 *, 8)    = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x10);
    var_r2                       = M2C_FIELD(arg0, void **, 0xB8);
    if (var_r2 == NULL) {
        return;
    }
    do {
        temp_r1                        = M2C_FIELD(var_r2, u8 *, 0xF) * (arg1 << 8);
        M2C_FIELD(var_r2, s16 *, 0x10) = (s16) ((s32) (temp_r1 + ((u32) (temp_r1 >> 0xC) >> 0x13)) >> 0xD);
        M2C_FIELD(var_r2, u16 *, 6)    = (u16) (M2C_FIELD(var_r2, u16 *, 6) | 0x10);
        var_r2                         = M2C_FIELD(var_r2, void **, 0x158);
    } while (var_r2 != NULL);
}
