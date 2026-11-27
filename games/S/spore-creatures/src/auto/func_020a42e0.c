#include "m2c.h"

void func_020a42e0(void *arg0, void *arg1) {
    void *temp_r2;

    M2C_FIELD(arg0, void **, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    M2C_FIELD(arg0, void **, 8)   = (void *) M2C_FIELD(arg1, void **, 8);
    temp_r2                       = M2C_FIELD(arg1, void **, 8);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 4) = arg0;
    }
    M2C_FIELD(arg1, void **, 8) = arg0;
    if (M2C_FIELD(arg1, void **, 4) == NULL) {
        M2C_FIELD(arg1, void **, 4) = arg0;
    }
}
