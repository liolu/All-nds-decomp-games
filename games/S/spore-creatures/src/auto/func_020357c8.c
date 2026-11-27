#include "m2c.h"

void func_020357c8(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2                   = M2C_FIELD(arg1, void **, 0x10);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r2, s32 *, 0xDC);
    M2C_FIELD(arg0, u8 *, 4)  = (u8) M2C_FIELD(temp_r2, u8 *, 0xE0);
}
