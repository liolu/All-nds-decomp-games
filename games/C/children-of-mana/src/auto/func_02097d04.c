#include "m2c.h"

void func_02097d04(s32 arg0, s32 arg1, void *arg2) {
    void *temp_r1;

    temp_r1                   = arg0 + (arg1 * 4);
    M2C_FIELD(arg2, u8 *, 0)  = (u8) M2C_FIELD(temp_r1, u8 *, 0x9E);
    M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(temp_r1, s16 *, 0xA0);
}
