#include "m2c.h"

void func_02016084(void *arg0) {
    void *temp_r2;

    temp_r2                         = M2C_FIELD(arg0, void **, 0x2C);
    M2C_FIELD(temp_r2, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_r2, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}
