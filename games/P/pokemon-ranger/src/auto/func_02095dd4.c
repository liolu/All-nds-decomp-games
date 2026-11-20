#include "m2c.h"

void func_02095dd4(void *arg0, void *arg1) {
    void *temp_r2;

    M2C_FIELD(arg1, void **, 0x1C) = (void *) M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg1, s32 *, 0x18)   = 0;
    temp_r2                        = M2C_FIELD(arg1, void **, 0x1C);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x18) = arg1;
    }
    M2C_FIELD(arg0, void **, 4) = arg1;
}
