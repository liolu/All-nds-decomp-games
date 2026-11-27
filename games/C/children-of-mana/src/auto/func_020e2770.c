#include "m2c.h"

void func_020e2770(void *arg0) {
    s32 var_ip;
    void *var_r0;

    var_r0 = arg0;
    var_ip = 0;
    do {
        var_ip += 1;
        if (M2C_FIELD(var_r0, s32 *, 0xC) != -1) {
            M2C_FIELD(var_r0, s32 *, 0x10) = 1;
        }
        var_r0 += 0x30;
    } while (var_ip < 8);
}
