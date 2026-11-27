#include "m2c.h"

void func_020219ec(void *arg0, void **arg1) {
    void *temp_r2;

    temp_r2 = *arg1;
    if (M2C_FIELD(temp_r2, s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(temp_r2, s32 *, 8) = 0;
    }
}
