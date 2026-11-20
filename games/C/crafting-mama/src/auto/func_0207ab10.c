#include "m2c.h"

s32 func_0207ab10(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x38) == 0xB) {
        return 1;
    }
    return 0;
}
