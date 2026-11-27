#include "m2c.h"

void func_0203a7b0(void *arg0, void **arg1) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x80);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x14)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x80) = arg1;
}
