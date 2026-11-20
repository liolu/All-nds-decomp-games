#include "m2c.h"

void func_02050318(void *arg0, s32 arg1, s8 arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1A34);
    if (temp_r0 != 0) {
        *(s8 *) (temp_r0 + arg1) = arg2;
    }
}