#include "m2c.h"

s32 func_0200c184(s32 arg0, void *arg1, s32 *arg2) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg1, void **, 4);
    *arg2   = M2C_FIELD(temp_r1, s32 *, 0xC) - M2C_FIELD(temp_r1, s32 *, 4);
    return 0;
}
