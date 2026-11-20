#include "m2c.h"

void func_0206e3f8(void *arg0, void **arg1) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x360);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x35C) = (void *) M2C_FIELD(arg0, void **, 0x35C);
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x35C);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x360) = (void *) M2C_FIELD(arg0, void **, 0x360);
        return;
    }
    if (*arg1 == arg0) {
        *arg1 = M2C_FIELD(arg0, void **, 0x360);
    }
}
