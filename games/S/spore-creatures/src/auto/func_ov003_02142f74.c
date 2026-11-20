#include "m2c.h"

void func_ov003_02142f74(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2                   = M2C_FIELD(arg1, void **, 0x14);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r2, s32 *, 0x90);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r2, s32 *, 0x94);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r2, s32 *, 0x98);
}
