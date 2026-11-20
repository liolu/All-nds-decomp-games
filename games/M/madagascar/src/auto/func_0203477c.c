#include "m2c.h"

void func_0203477c(void *arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) > 0) {
        do {
            M2C_FIELD((arg0 + var_r3), s8 *, 0x80) = 0;
            var_r3 += 1;
        } while (var_r3 < (s32) M2C_FIELD(arg0, s32 *, 0x90));
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
}
