#include "m2c.h"

void func_02052178(void *arg0) {
    void *temp_r2;

    temp_r2                         = M2C_FIELD(arg0, void **, 0x1C4);
    M2C_FIELD(temp_r2, s32 *, 0x24) = 0;
    M2C_FIELD(temp_r2, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
}
