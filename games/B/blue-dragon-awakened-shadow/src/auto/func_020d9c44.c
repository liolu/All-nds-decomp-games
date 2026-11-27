#include "m2c.h"

s32 func_020d9c44(void ***arg0) {
    void **temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x60)(temp_r0);
    return 1;
}
