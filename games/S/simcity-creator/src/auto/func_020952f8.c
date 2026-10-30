#include "m2c.h"

extern M2C_UNK data_020cee10;

void *func_020952f8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cee10;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x638);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    return arg0;
}
