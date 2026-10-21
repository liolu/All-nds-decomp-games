#include "m2c.h"

void func_02095d48(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg1, void **, 0x1C);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 0x18);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0x1C) = (void *) M2C_FIELD(arg1, void **, 0x1C);
    }
    if (M2C_FIELD(arg0, void **, 8) == arg1) {
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg1, void **, 0x1C);
    }
}
