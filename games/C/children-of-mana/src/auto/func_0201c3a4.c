#include "m2c.h"

void func_0201c3a4(void *arg0) {
    void *temp_r2;
    void *var_r3;

    M2C_FIELD(arg0, u8 *, 0x25) = (u8) (M2C_FIELD(arg0, u8 *, 0x25) & ~1);
    temp_r2                     = M2C_FIELD(arg0, void **, 0x134);
    if (temp_r2 != NULL) {
        var_r3 = arg0;
        if (arg0 != NULL) {
            var_r3 = arg0 + 4;
        }
        M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) - 1);
        M2C_FIELD(var_r3, s32 *, 4)  = (s32) (M2C_FIELD(var_r3, s32 *, 4) - 1);
    }
    M2C_FIELD(arg0, void **, 0x134) = NULL;
}
