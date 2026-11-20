#include "m2c.h"

void func_020462a0(s32 arg0, s32 arg1) {
    s32 var_ip;
    s8 temp_r3;
    void *temp_r2;

    var_ip = 0;
    do {
        temp_r3 = *(s8 *) (arg1 + var_ip);
        temp_r2 = arg0 + var_ip + 0xB000;
        var_ip += 1;
        M2C_FIELD(temp_r2, s8 *, 0xA0C) = temp_r3;
    } while (var_ip < 3);
}