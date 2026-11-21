#include "m2c.h"

void func_020a03d0(s32 arg0, void *arg1, void **arg2) {
    void *temp_r0;
    void *temp_r2;
    void *temp_r3;

    temp_r3                     = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg1, void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 0);
    temp_r0                     = M2C_FIELD(temp_r3, void **, 0);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, void **, 8) = arg1;
    }
    M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    if (arg1 == *arg2) {
        *arg2 = temp_r3;
    } else {
        temp_r2 = M2C_FIELD(arg1, void **, 8);
        if (arg1 == M2C_FIELD(temp_r2, void **, 0)) {
            M2C_FIELD(temp_r2, void **, 0) = temp_r3;
        } else {
            M2C_FIELD(temp_r2, void **, 4) = temp_r3;
        }
    }
    M2C_FIELD(temp_r3, void **, 0) = arg1;
    M2C_FIELD(arg1, void **, 8)    = temp_r3;
}
