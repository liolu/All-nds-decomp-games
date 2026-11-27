#include "m2c.h"

void func_02097ca4(void *arg0) {
    s32 var_ip;

    var_ip = 0;
    do {
        var_ip += 1;
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xE0) * 4)), s8 *, 0x9E)  = 0;
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xE0) * 4)), s16 *, 0xA0) = -1;
    } while (var_ip < 0x10);
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
}
