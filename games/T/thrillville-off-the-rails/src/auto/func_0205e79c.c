#include "m2c.h"

void func_0205e79c(void **arg0, void *arg1) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg1, void **, 0x1C);
    *arg0   = temp_r1;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
    }
}
