#include "m2c.h"

void func_0202e5c8(void *arg0, s32 arg1) {
    s32 temp_r3;
    u8 temp_r2;

    temp_r3 = arg0 + 0x2904;
    temp_r2 = *(s8 *) (temp_r3 + arg1);
    if ((u32) temp_r2 >= 0xFFU) {
        return;
    }
    *(s8 *) (temp_r3 + arg1)      = temp_r2 + 1;
    M2C_FIELD(arg0, s8 *, 0x2910) = 1;
}