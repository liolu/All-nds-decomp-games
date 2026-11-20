#include "m2c.h"

void func_020d27a8(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r3 == NULL) {
        M2C_FIELD(arg0, void **, 0x88) = arg1;
    } else {
        M2C_FIELD(temp_r3, void **, 0x10) = arg1;
    }
    M2C_FIELD(arg1, void **, 0x14) = temp_r3;
    M2C_FIELD(arg1, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, void **, 0x8C) = arg1;
}
