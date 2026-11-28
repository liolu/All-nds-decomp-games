#include "m2c.h"

void func_02091e18(void *arg0) {
    s32 temp_r1;

    temp_r1                   = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 4)(arg0);
}
