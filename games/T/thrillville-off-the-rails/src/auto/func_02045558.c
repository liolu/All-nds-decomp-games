/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_02045558(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_lr;
    u32 temp_r2;
    void *temp_ip;

    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    var_lr                      = 1;
    do {
        temp_ip = arg0 + (var_lr * 4);
        temp_r2 = M2C_FIELD(temp_ip, u32 *, 8);
        temp_r3 = ((temp_r2 ^ (temp_r2 >> 0x1E)) * 0x6C078965) + var_lr;
        var_lr += 1;
        M2C_FIELD(temp_ip, s32 *, 0xC) = temp_r3;
    } while (var_lr < 0x270);
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
}
