#include "m2c.h"

void func_0202d358(void *arg0, void **arg1) {
    u32 var_r3;
    u16 temp_r1;
    u16 temp_r2_2;
    void *temp_r2;
    void *var_ip;
    void *var_lr;

    temp_r2                   = *arg1;
    var_ip                    = arg0 + 8;
    var_lr                    = temp_r2 + 8;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r2, s32 *, 4);
    var_r3                    = 0xA;
    do {
        temp_r2_2 = M2C_FIELD(var_lr, u16 *, 0);
        temp_r1   = M2C_FIELD(var_lr, u16 *, 2);
        var_lr += 4;
        var_r3 -= 1;
        M2C_FIELD(var_ip, u16 *, 0) = temp_r2_2;
        M2C_FIELD(var_ip, u16 *, 2) = temp_r1;
        var_ip += 4;
    } while (var_r3 != 0);
    M2C_FIELD(arg0, s32 *, 0xE4) = 1;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s16 *, 0xC8) = 0;
    M2C_FIELD(arg0, s8 *, 0xEA)  = 1;
}
