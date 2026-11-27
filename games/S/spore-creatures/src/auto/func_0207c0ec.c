#include "m2c.h"

extern M2C_UNK data_020dfb14;

void *func_0207c0ec(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfb14;
    temp_r0                        = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 8) = NULL;
    return arg0;
}
