#include "m2c.h"

void func_0206f1d0(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2                         = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r2, s32 *, 4)    = arg1;
    M2C_FIELD(temp_r2, s32 *, 0x10) = 1;
}
