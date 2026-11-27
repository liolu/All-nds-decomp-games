#include "m2c.h"

void func_02029c70(void *arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                          = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r0, u8 *, 0x2E60) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x2E60) | (1 << arg1));
}
