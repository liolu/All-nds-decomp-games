#include "m2c.h"

void func_0205d69c(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2                   = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    if (temp_r2 == NULL) {
        return;
    }
    if (arg1 & 0x10) {
        M2C_FIELD(temp_r2, s32 *, 0x2C) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 4) & 0x20) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x30) = 1;
    }
}
