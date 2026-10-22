#include "m2c.h"

void func_0203b60c(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 4);
    if ((arg1 >= temp_r2) && (temp_r2 != 0)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
