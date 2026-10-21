#include "m2c.h"

void func_020656c8(void *arg0, void **arg1) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
        return;
    }
    if (*arg1 == arg0) {
        *arg1 = M2C_FIELD(arg0, void **, 0x3C);
    }
}
