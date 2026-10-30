#include "m2c.h"

void func_0203f2b4(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r1 > 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r1 - 1);
    }
}
