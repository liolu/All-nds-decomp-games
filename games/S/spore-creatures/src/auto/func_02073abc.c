#include "m2c.h"

void func_02073abc(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x23C);
    if (temp_r2 == NULL) {
        return;
    }
    M2C_FIELD(temp_r2, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r2, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r2, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
