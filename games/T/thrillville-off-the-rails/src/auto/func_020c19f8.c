/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_020c19f8(void *arg0, void *arg1) {
    u32 var_lr;
    void *temp_ip;
    void *temp_r3;

    var_lr                    = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    do {
        temp_ip                        = arg1 + (var_lr * 8);
        temp_r3                        = arg0 + (var_lr * 8);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) M2C_FIELD(temp_ip, s32 *, 0xC);
        var_lr += 1;
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) M2C_FIELD(temp_ip, s32 *, 0x10);
    } while (var_lr < 6U);
}
