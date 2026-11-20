#include "m2c.h"

void func_020363fc(s32 arg0, void *arg1) {
    u32 var_r3;
    u8 temp_r0;
    u8 temp_r2;
    void *var_ip;
    void *var_r1;

    var_r1 = arg1;
    var_ip = arg0 + 0x28;
    var_r3 = 4;
    do {
        temp_r2 = M2C_FIELD(var_r1, u8 *, 0);
        temp_r0 = M2C_FIELD(var_r1, u8 *, 1);
        var_r1 += 2;
        var_r3 -= 1;
        M2C_FIELD(var_ip, u8 *, 1) = temp_r0;
        M2C_FIELD(var_ip, u8 *, 0) = temp_r2;
        var_ip += 2;
    } while (var_r3 != 0);
}
